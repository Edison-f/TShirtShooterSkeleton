#pragma once

#include <ctre/Phoenix.h>
#include <frc/Solenoid.h>

class Shooter {
    public:

    enum States {
        INIT, GO, STOP, 
        SHOOT, EMERGENCY
    };

    States current_state;

    Shooter();
    void StateMachine();

    private:

    frc::Solenoid *firing_valve;
    frc::Solenoid *emergency_valve;

    WPI_TalonSRX *compressor1;
    WPI_TalonSRX *compressor2;

    void Init();
    void Go();
    void Stop();
    void Shoot();
    void Emergency();

};