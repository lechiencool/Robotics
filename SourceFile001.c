
task main()
{
	int x = 0;
	if(SensorValue[dgtl12]=true)
	{
		x+1;
	}

	if(x>=1)
	{
		motor[port2] = 50;
		motor[port3] = 50;
		wait1Msec(13000);
	}
}
