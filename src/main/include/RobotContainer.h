#pragma once

#include <string>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/commands/Command.h>
#include <frc2/command/SequentialCommandGroup.h>
#include <frc2/command/InstantCommand.h>
#include <frc2/command/WaitUntilCommand.h>
#include <frc2/command/WaitCommand.h>
#include <frc/Joystick.h>
#include <frc2/command/button/JoystickButton.h>
#include <frc/GenericHID.h>

#include <frc2/command/PIDCommand.h>
#include <frc/trajectory/constraint/DifferentialDriveVoltageConstraint.h>
#include <frc/trajectory/TrajectoryConfig.h>
#include <frc/trajectory/Trajectory.h>
#include <frc2/command/RamseteCommand.h>
#include <frc2/command/SwerveControllerCommand.h>
#include <frc/PIDController.h>
#include <frc2/command/Command.h>

#include <frc/Filesystem.h>
#include <frc/trajectory/TrajectoryUtil.h>
#include <wpi/Path.h>
#include <wpi/SmallString.h>

#include "Shooter.h"
#include "Barrel.h"

class RobotContainer {
    public:
    RobotContainer(Shooter *shooter_, Barrel *barrel_);

    Shooter *shooter;
    Barrel *barrel;

    private:    
    void ConfigureButtonBindings();

};