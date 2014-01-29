#ifndef TEAM_LIBRARY
#define TEAM_LIBRARY
//standard variables

//standard functions
void runDriveMotors(int power, int msecs){
	motor[leftMotor] = power;
	motor[rightMotor] = power;
	wait1Msec(msecs);
}
void runArmMotors(int power, int msecs){
	motor[leftArmMotor] = power;
	motor[rightArmMotor] = power;
	wait1Msec(msecs);
}
//end library
#endif
