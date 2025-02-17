#include "global.hpp"

namespace glb{
    // motor inits
    pros::Motor FR(P_FR, pros::v5::MotorGears::blue);
    pros::Motor BR(P_BR, pros::v5::MotorGears::blue);
    pros::Motor MR(-P_MR, pros::v5::MotorGears::blue);
    pros::Motor FL(-P_FL, pros::v5::MotorGears::blue);
    pros::Motor BL(-P_BL, pros::v5::MotorGears::blue);
    pros::Motor ML(P_ML, pros::v5::MotorGears::blue);
    pros::MotorGroup rchassis({P_FR, P_BR, -P_MR});
    pros::MotorGroup lchassis({-P_FL, -P_BL, P_ML});
    pros::MotorGroup chassis({P_FR, P_BR, -P_MR, -P_FL, -P_BL, P_ML});

    pros::Motor intake(-P_INTAKE, pros::v5::MotorGears::blue);
    pros::Motor ldb(-P_LDB, pros::v5::MotorGears::green);

    pros::adi::DigitalOut mogo(P_MOGO);
    pros::adi::DigitalOut intake_lift(P_INTAKE_LIFT);
    pros::adi::DigitalOut doinker(P_DOINKER);

    pros::Imu imu(P_IMU);
    pros::Rotation ldbrotation(P_LDB_ROTATION);
    pros::Optical colorsort(P_COLORSORT);
    pros::Distance autoclamp(P_AUTOCLAMP);

    // pros::Rotation x_pod(P_X_POD);
    // pros::Rotation y_pod(P_Y_POD);

    pros::Controller con(pros::E_CONTROLLER_MASTER);

}