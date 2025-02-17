#pragma once
#include "main.h"

namespace glb{

    #define P_FR 15
    #define P_FL 11
    #define P_MR 17
    #define P_ML 4
    #define P_BR 10
    #define P_BL 8

    #define P_INTAKE 9
    #define P_LDB 5

    #define P_MOGO 'A'
    #define P_INTAKE_LIFT 'B'
    #define P_DOINKER 'C'

    #define P_IMU 21
    #define P_LDB_ROTATION 20
    #define P_AUTOCLAMP 19
    #define P_COLORSORT 18
    #define P_X_POD 16
    #define P_Y_POD 14

    extern pros::Motor FR;
    extern pros::Motor FL;
    extern pros::Motor MR;
    extern pros::Motor ML;
    extern pros::Motor BR;
    extern pros::Motor BL;
    extern pros::MotorGroup rchassis;
    extern pros::MotorGroup lchassis;
    extern pros::MotorGroup chassis;

    extern pros::Motor intake;
    extern pros::Motor ldb;
    extern pros::adi::DigitalOut mogo;
    extern pros::adi::DigitalOut intake_lift;
    extern pros::adi::DigitalOut doinker;

    extern pros::Imu imu;
    extern pros::Rotation ldbrotation;
    extern pros::Optical colorsort;
    extern pros::Distance autoclamp;

    // extern pros::Rotation x_pod;
    // extern pros::Rotation y_pod;

    extern pros::Controller con;

}