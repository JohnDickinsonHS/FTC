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
	motor[armMotors] = power;
	wait1Msec(msecs);
}
void runSweepMotors(int power, int msecs){
	motor[leftSweepMotor] = power;
	motor[rightSweepMotor] = power;
	wait1Msec(msecs);
}
void singleJoystickControl(int x, int y){
	if(x < -15){motor[leftMotor] = -y + x;}
  if(x > 15){motor[rightMotor] = -y + x;}
}
void tankControl(int y1, int y2){
	motor[leftMotor] = y1;
	motor[rightMotor] = y2;
}
//end library
#endif
