#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor RightDrive = motor(PORT1, ratio36_1, true);
motor LeftDrive1 = motor(PORT10, ratio36_1, false);
motor intake = motor(PORT4, ratio36_1, false);
motor mogoL = motor(PORT9, ratio36_1, true);
motor mogoR = motor(PORT2, ratio36_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}