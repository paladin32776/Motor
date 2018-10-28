# Control motor via Hbridge relay

# Methods:

Motor(unsigned int _motor_pinA, unsigned int _motor_pinB);  // setup object with desired motor control pins

void fwd();		// Run motor forward

void rev();		// Run motor reverse

void stop();	// Stop motor

void set(unsigned int _motor_state);	// Set motor state directly (MOTOR_STOP | MOTOR_FWD | MOTOR_REV)

int get();	// Query motor state (MOTOR_STOP | MOTOR_FWD | MOTOR_REV)
