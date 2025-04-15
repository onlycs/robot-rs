// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <optional>

#include <frc/TimedRobot.h>
#include <frc2/command/CommandPtr.h>
#include <rev/SparkMax.h>
#include <studica/AHRS.h>
#include <SparkMaxContainer.h>

using namespace rev;

class Robot : public frc::TimedRobot
{
public:
	Robot();
	void RobotPeriodic() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
	void SimulationInit() override;
	void SimulationPeriodic() override;

private:
	SparkMaxContainer m_sparkMaxContainer = SparkMaxContainer();
};
