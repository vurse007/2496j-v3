#pragma once
#include "api.h"
#include <cmath>
#include <algorithm>
#include <array>
#include <string_view>
#include <optional>

// Macros for easy function passing
#define M_INCHES "passed as inches"
#define M_TILES "passed as tiles"
#define M_TICKS "passed as ticks"
#define M_MOGO &default_drive_mogo_pid


// PID Class
class PID {
public:
    double kP;
    double kI;
    double kD;

    double error = 0;
    double prevError = 0;
    double totalError = 0;
    double derivative = 0;

    double prevSpeed = 0;
    double slew;

    double speed = 0;

    int count;

    double integralThreshold;
    double maxIntegral;

    PID(double kP, double kI, double kD, double integralThreshold, double maxIntegral, double slew = 127);

    double calculate(double error, double speed_limit = 127);
    bool settled(double threshold, double time);
    void update_constants(std::optional<double> kP = std::nullopt, std::optional<double> kI = std::nullopt, std::optional<double> kD = std::nullopt, std::optional<double> integralThreshold = std::nullopt, std::optional<double> maxIntegral = std::nullopt, std::optional<double> slew = std::nullopt);
    void reset_PID();
};

extern PID default_drive_pid;
extern PID default_drive_mogo_pid;
extern PID default_turn_pid;
extern PID default_turn_mogo_pid;
extern PID heading_correction_pid;

// Function declaration for drive
void drive(double target, std::string_view units = M_INCHES, std::optional<double> timeout = std::nullopt, double chainPos = 0, std::optional<double> speed_limit = std::nullopt, PID* pid = &default_drive_pid);

//function declaration for absolute turns
void turn(double target, std::optional<double> timeout = std::nullopt, double chainPos = 0, std::optional<double> speed_limit = std::nullopt, PID* pid = &default_turn_pid);