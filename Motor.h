#define MOTOR_STOP 0
#define MOTOR_FWD 1
#define MOTOR_REV 2
#define MOTOR_STATE_MAX 2

#include "Arduino.h"

class Motor
{
  private:
    unsigned int motor_pinA;
    unsigned int motor_pinB;
    unsigned int motor_state;
  public:
    Motor(unsigned int _motor_pinA, unsigned int _motor_pinB);
    void fwd();
    void rev();
    void stop();
    void set(unsigned int _motor_state);
    int get();
};
