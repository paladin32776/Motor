#include "Motor.h"

Motor::Motor(unsigned int _motor_pinA, unsigned int _motor_pinB)
{
  motor_pinA = _motor_pinA;
  motor_pinB = _motor_pinB;
  pinMode(motor_pinA, OUTPUT);
  pinMode(motor_pinB, OUTPUT);
  digitalWrite(motor_pinA,0);
  digitalWrite(motor_pinB,0);
  motor_state = MOTOR_STOP;
}

void Motor::fwd()
{
  set(MOTOR_FWD);
}

void Motor::rev()
{
  set(MOTOR_REV);
}

void Motor::stop()
{
  set(MOTOR_STOP);
}

void Motor::set(unsigned int _motor_state)
{
  if (_motor_state<=MOTOR_STATE_MAX)
  {
    digitalWrite(motor_pinA, MOTOR_FWD & _motor_state);
    digitalWrite(motor_pinB, MOTOR_REV & _motor_state);
    motor_state = _motor_state;
  }
}

int Motor::get()
{
  return motor_state;
}
