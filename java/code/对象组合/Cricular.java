class Cricular{
	private Cricle bottom;
	private double height=1.0;
	public Cricular(){};
	public Cricular(Cricle b,double h){
		this.bottom=b;
		this.height=h;
	}
	public void setBottomRidious(double r){
		bottom.setRidious(r);
	}
	public double getBottomRidious(){
		return bottom.getRidious();
	}
	public void setBottom(Cricle b){
		bottom=b;
	}
	public void setHeight(double h){
		height=h;
	}

	public double getArea(){
		if (bottom==null){
			return -1;
		}else{
			return bottom.getPerimeter()*height/2+bottom.getArea();
		}
	}
	public double getVolume(){
		if(bottom==null)
			return -1;
		else
			return bottom.getArea()*height/3.0;
	}

}