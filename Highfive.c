#pragma config(StandardModel, "SQUAREBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

while(1 == 1)
{
if(SensorValue(sonarCM) != -1)
{
	if(SensorValue(sonarCM) > 10)
	{
		motor[armMotor] = 0;
		wait1Msec(1000);
	}
	if(SensorValue(sonarCM) < 10)
	{
		motor[armMotor] = 32;
		wait1Msec(1000);
		motor[armMotor] = -32;
		wait1Msec(1000);
	}
}
}
}
