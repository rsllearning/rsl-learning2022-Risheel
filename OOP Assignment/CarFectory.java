package rsl.oops;
class CarFectory extends Vehicle // car is a vehicle so inheritaed 
{
	private SteeringWheel sw; // car has a steeringweel
	private Brake b;// has a brake
	private Tyre t;
	private Engine eg; 
	CarFectory(String vehicleNumber)
	{
		super(vehicleNumber);
		System.out.println("car is creating");
		sw=new SteeringWheel("Power Steering");
		b=new Brake("Diske break");
		t=new Tyre("Tubeless Tyre",4);
		eg=new Engine();
	}
	@Override // the vehicle class abstract methods 
	public void vehicleStart() 
	{
		if(eg!=null)
		{
			eg.startIgnite();
			eg.startEngine();
		}
	}
	public void vehicleStop()
	{
		if(eg!=null)
		{
			eg.stopEngine();
		}
	}

	public void getVehicle()// get the vehicle number
	{
		System.out.println("Here is the car "+vehicleNumber);
	}
}
