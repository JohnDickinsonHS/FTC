#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S2, HTMotor,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     leftMotor,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     rightMotor,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_1,     leftArmMotor,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,     rightArmMotor,        tmotorTetrix, openLoop)
#include "5599lib.h" //include team library
#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.

void initializeRobot(){
	//any and all initialization tasks go here
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                         Main Task
//
// The following is the main code for the tele-op robot operation. Customize as appropriate for
// your specific robot.
//
// Game controller / joystick information is sent periodically (about every 50 milliseconds) from
// the FMS (Field Management System) to the robot. Most tele-op programs will follow the following
// logic:
//   1. Loop forever repeating the following actions:
//   2. Get the latest game controller / joystick settings that have been received from the PC.
//   3. Perform appropriate actions based on the joystick + buttons settings. This is usually a
//      simple action:
//      *  Joystick values are usually directly translated into power levels for a motor or
//         position of a servo.
//      *  Buttons are usually used to start/stop a motor or cause a servo to move to a specific
//         position.
//   4. Repeat the loop.
//
// Your program needs to continuously loop because you need to continuously respond to changes in
// the game controller settings.
//
// At the end of the tele-op period, the FMS will autonmatically abort (stop) execution of the program.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

task main()
{
  //FTC initial code
  initializeRobot();
  waitForStart();   // wait for start of tele-op phase
  //main teleop loop
  while(true){
  	getJoystickSettings(joystick); // Get current joystick settings
    if (joystick.joy1_x1 < 0){ // Turn left
    	motor[leftMotor] = joystick.joy1_y1; // use power settings from Y-axis
    	motor[rightMotor] = joystick.joy1_y1 * (64 + joystick.joy1_x1) / 64;
    }else{ // Turn right
    	motor[leftMotor] = joystick.joy1_y1; // use power settings from Y-axis
    	motor[rightMotor] = joystick.joy1_y1 * (64 - joystick.joy1_x1) / 64;
    }
  		if(joy1Btn(1) == 1){ // If Joy1-Button1 is pressed:
      	motor[motorA] = 100;              // Turn Motor A On at full power
    	}else{                         // If Joy1-Button1 is NOT pressed:
     		motor[motorA] = 0;                 // Turn Motor A Off
			}
}
if(joy1Btn(1) == 1)
{
	motor[motorB] = 50;
}
else{
	motor[motorB] = 0;
}
}
