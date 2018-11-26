#pragma once

#include "BrushlessMotor.h"

#define H_FRONT_LEFT 0 
#define H_FRONT_RIGHT 1
#define H_BACK_LEFT 2
#define H_BACK_RIGHT 3

#define V_LEFT 4
#define V_RIGHT 5

#define THRUSTER_SIZE 6

class ThrustersSubSystem
{
public:
	ThrustersSubSystem();
	void init();
	void set_power(int8_t x, int8_t y, int8_t w, int8_t z);
private:
	void manual_regulator(int8_t power[], int8_t x, int8_t y, int8_t w, int8_t z);
	BrushlessMotor m_motors[THRUSTER_SIZE];
};