package rsl.oops;
class BusFectory extends Vehicle
{
	private SteeringWheel sw;
	private Brake b;
	private Tyre t;
	private Engine eg; 
	BusFectory(String vehicleNumber)
	{
		super(vehicleNumber);
		System.out.println("bus is creating");
		sw=new SteeringWheel("Power Steering");
		b=new Brake("Diske break");
		t=new Tyre("Tubeless Tyre",6);
		eg=new Engine();
	}
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
	public void getVehicle()
	{
		System.out.println("Here is the bus "+vehicleNumber);
	}
}
