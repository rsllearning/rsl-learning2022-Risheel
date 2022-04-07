package rsl.oops;
abstract class Vehicle
{
	protected String vehicleNumber;// vehicle number
	public  Vehicle(String vehicleNumber)
	{
		this.vehicleNumber=vehicleNumber;
	}
	abstract void getVehicle();// give vehicle number with vehicle name 
	abstract void vehicleStart();// start vehicle 
	abstract void vehicleStop();// stop vehicle
}
