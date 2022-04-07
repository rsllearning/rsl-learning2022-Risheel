package rsl.oops; // baicaly this class is for has a relatioship 
class SteeringWheel
{
	private String steeringWheelType;// steeringweel class
	SteeringWheel(String steeringWheelType)
	{
		this.steeringWheelType=steeringWheelType;
	}
}

class Brake
{
	private String breakType;
	Brake(String breakType)
	{
		this.breakType=breakType;
	}
}

class Tyre
{
	private String tyreType;
	private int count;
	Tyre(String tyreType,int count)
	{
		this.tyreType=tyreType;
		this.count=count;
	}
}

class Engine // engine class
{
	private boolean engine;// engine start status 
	private boolean ignite;// engine stop status
	Engine()
	{
		engine=false;
		ignite=false;
	}
	public void startEngine()
	{
		if(ignite)
		{
			engine=true;
			System.out.println("Engine started");
		}
		else
		{
			System.out.println("Start first ingnite");// illogical code :|
		}
	}
	public void startIgnite()
	{
		ignite=true;
		System.out.println("Ignittion done");
	}
	public void stopEngine()
	{
		ignite=false;
		engine=false;
		System.out.println("Engine stoped");
	}
}

class Seat
{
	private String seatType;
	private int count;
	Seat(String seatType,int count)
	{
		this.seatType=seatType;
		this.count=count;
	}

}