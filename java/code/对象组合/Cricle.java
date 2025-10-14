public class Cricle{
	private double ridious=1.0;
	public Cricle(){};
	public Cricle(double r){
		this.ridious=r;
	}
	public void setRidious(double r){
		ridious=r;
	}
	public double getRidious(){
		return ridious;
	}
	public double getArea(){
		return Math.PI*ridious*ridious;
	}
	public double getPerimeter(){
		return 2*Math.PI*ridious;
	}
}