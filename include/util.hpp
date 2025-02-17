#pragma once
#include "api.h"

class timer {
    private:
        double startTime;
        double targetTime;

    public:
        timer(double target);
        void set_target(double target);
        void start();
        double getTime();
        bool targetReached();
        void reset(double target);
};

class tPoly {
    private:
        std::vector<long double> coefficients;

    public:
        tPoly(const std::vector<long double>& coeffs);

        void update_coefficients(const std::vector<long double>& coeffs);

        double evaluate(double x) const;

        static long double scientificNotation(double number, double exponent);
};

extern tPoly driveTimeoutTPOLY;
extern tPoly turnTimeoutTPOLY;
extern tPoly turnKDTPOLY;
extern tPoly driveKDTPOLY;

//pid util
double inches_to_chassis_ticks(double inches, double wheel_diameter = 3.25, double ticks_per_rev = 300);


//stall protection and color sort util
extern bool intakeInterrupt;
void stallProtection();