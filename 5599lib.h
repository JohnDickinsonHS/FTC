#ifndef TEAM_LIBRARY
#define TEAM_LIBRARY

#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S2, HTMotor,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_1,     motorF,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,     motorG,        tmotorTetrix, openLoop)

#endif
