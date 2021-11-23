#include "Shooter.h"

Shooter::Shooter()
{
    firing_valve = new frc::Solenoid(0, 2);
    emergency_valve = new frc::Solenoid(0, 3);

    compressor1 = new WPI_TalonSRX(1);
    compressor2 = new WPI_TalonSRX(11);

    current_state = States::INIT;
}

void Shooter::StateMachine()
{
    switch (current_state)
    {
    case States::INIT:
        Init();
        break;

    case States::GO:
        Go();
        break;

    case States::STOP:
        Stop();
        break;
    
    case States::SHOOT:
        Shoot();
        break;
    
    case States::EMERGENCY:
        Emergency();
    }
}

void Shooter::Init() {

}

void Shooter::Go() {
    compressor1->Set(1.0);
    compressor2->Set(1.0);

    emergency_valve->Set(false);
    firing_valve->Set(false);
}

void Shooter::Stop() {
    compressor1->Set(0.0);
    compressor2->Set(0.0);

    emergency_valve->Set(false);
    firing_valve->Set(false);
}

void Shooter::Shoot() {
    compressor1->Set(0.0);
    compressor2->Set(0.0);

    emergency_valve->Set(false);
    firing_valve->Set(true);
}

void Shooter::Emergency() {
    compressor1->Set(0.0);
    compressor2->Set(0.0);

    emergency_valve->Set(true);
    firing_valve->Set(true);
}