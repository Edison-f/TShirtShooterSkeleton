#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/Joystick.h>
#include "../Shooter.h"

class ShooterSubsystem : public frc2::SubsystemBase {
    public: 
    
    ShooterSubsystem(Shooter *shooter, frc::Joystick *joyOp);

    void Periodic() override;

    void Shoot();

    Shooter *m_shooter;
    frc::Joystick *m_joystick;

    private:
    

};