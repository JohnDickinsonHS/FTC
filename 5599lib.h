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
void runSweepMotors(int power, int msecs){
	motor[leftSweepMotor] = power;
	motor[rightSweepMotor] = power;
	wait1Msec(msecs);
}
void singleJoystickControl(int x, int y){
	if(x < 0){motor[leftMotor] = -y + x;}
  if(x > 0){motor[rightMotor] = -y + x;}
}
void tankControl(int y1, y2){
	if(y1 < 0){motor[leftMotor] = -y + x;}
	if(y2 > 0){motor[rightMotor] = -y + x;}
}
//end library
#endif
