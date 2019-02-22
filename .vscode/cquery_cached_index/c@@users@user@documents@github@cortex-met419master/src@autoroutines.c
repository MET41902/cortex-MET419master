// This source file should contain various autonomous routine functions and grouped
// together to run one of multiple autonomous routine sequences based on some selection
//

#include "main.h"
#include "portdef.h"			// Cortex port defintions
#include "intake.h"
#include "shooter.h"
#include "chassis.h"
#include "manipulator.h"
#include "lift.h"
#include "auto.h"
#include "chassis.h"
#include "lift.h"
#include "shooter.h"

void compAutoRedRight(){
  // All the veraious autonomous commands for the Competition, Red Sqaure
  // Right position go here.  THen this function is called in auto.c the autonomous()
  // function based on some selector input.
  pivotTurn(0, 100, 82); // pivot turn
  liftMove(42); // lift arm
  driveForDistancePID(39, 100);     // for 10 meter = 394" at speed 60
  //pivotTurn(0, 50, 90);            // Turn 90 degrees at speed 60
  //driveForDistancePID(20, 60);
  liftMove(0); // stop arm
  driveForDistancePID(5, 60); // drive foward 6 inches
  liftMove(-70); // bring arm down
  delay(1750);
  liftMove(0);  // stop arm movment
  driveForDistancePID(-12, 100); // back bot up
  pivotTurn(1, 100, 103); // rotate right head for second flag
  liftMove(38);
  driveForDistancePID(40, 100);
  liftMove(0);
  pivotTurn(0, 100, 75); // drive foward
  driveForDistancePID(10, 100); // drive foward 6 inches
  driveForDistancePID(4,60 );
  liftMove(-80);
  delay(1250);
  liftMove(0);
  driveForDistancePID(-12, 60); // back bot up
  pivotTurn(1, 100, 90); // rotate right head for second flag
  liftMove(38);
  driveForDistancePID(42, 100);
  liftMove(0);
  pivotTurn(0, 100, 75); // drive foward
  driveForDistancePID(10, 100); // drive foward 6 inches
  driveForDistancePID(4,60 );
  liftMove(-80);
  delay(1250);
  liftMove(0);
  driveForDistancePID(-12, 60); // back bot up


//  liftMove(0);  // drive for 30 inches
  //pivotTurn(0, 60, 85);
  //liftMoveAngle(60, 0);
  //pivotTurn(1, 60, 85);
//  pivotTurn(1, 60, 80);            // Turn 90 degrees at speed 60
//  driveForDistancePID(30, 60);     // drive for 30 inches
//  liftMoveAngle(50, 600);           //Lift arm up at 50 speed and 600/4000
//  pivotTurn(1, 60, 80);            // Turn 90 degrees at speed 60
//  driveForDistancePID(30, 60);     // drive for 30 inches
//  liftMoveAngle(50, 0);
}

void testAutoDrive(){
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
  driveRobot(80);       // dirve robot forward at speed '80'
  delay(2000);         // drive for 200mSec (2Sec)
}
