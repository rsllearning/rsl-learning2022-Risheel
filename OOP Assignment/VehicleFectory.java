package rsl.oops;

public class VehicleFectory
{
	public static void main(String[] args) {
		Vehicle car1= new CarFectory("XU-2424");// car is vehicle so as runtime polymorephism
		car1.getVehicle();
		car1.vehicleStart();
		car1.vehicleStop();
		Vehicle bus1= new BusFectory("PD-3534");// same for the bus too
		bus1.getVehicle();
		bus1.vehicleStart();
		bus1.vehicleStop();

	}
}