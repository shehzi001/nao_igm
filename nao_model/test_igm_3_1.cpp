// test_igm_3.cpp
//
// Testing the Jacobian of the CoM. To include an igm function based on it.
//
// [2011/11/26]

#include <iostream>
#include <stdio.h>
#include <math.h>

#include <sys/time.h>
#include <time.h>

#include "nao_igm.h"
#include "util.cpp"
#include "maple_functions.h"

using namespace std;


int main(int argc, char** argv)
{
    nao_igm nao;

    struct timeval start, end;
    double cTime;
    int test_N = 1000;


    // set initial configuration
    double *q0 = new double[STATE_VAR_NUM];

    nao.init (IGM_SUPPORT_RIGHT, 
              0.0, 0.05, 0.0, 
              0.0, 0.0, 0.0);
    for (int i=0; i<STATE_VAR_NUM; i++)
    {
        q0[i] = nao.state_model.q[i];
    }



    postureOffset(nao.swing_foot_posture, -0.02,0.01,0.02,0.1,0.1,0.1, nao.swing_foot_posture); // some offset
    rotationOffset(nao.torso_orientation, 0.1,-0.1,0.1, nao.torso_orientation); // some offset
    nao.CoM_position[0] += 0.03;
    nao.CoM_position[1] += 0.02;
    nao.CoM_position[2] -= 0.01;


    int iter;
    gettimeofday(&start,0);
    for (int i=0 ; i<test_N ; i++)
    {
        for (int j=0; j<STATE_VAR_NUM; j++) // every time start from q0
        {
            nao.state_model.q[j] = q0[j];
        }

        iter = nao.igm();
    }
    gettimeofday(&end,0);
    cTime = end.tv_sec - start.tv_sec + 0.000001 * (end.tv_usec - start.tv_usec);
    printf(" time (igm) = % f\n", cTime/test_N);

    cout << "iter = " << iter << endl;

    MatrixPrint(1,12,nao.state_model.q,"q");

    int check_bounds = nao.checkJointBounds();
    if (check_bounds >= 0)
    {
        cout << "Bounds are violated! ID:" << check_bounds << endl;
    }
    else
    {
        cout << "Bounds are ok." << endl;
    }

    delete q0;

    return 0;
}

