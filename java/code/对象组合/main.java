class 对象组合{
	public static void main(String[] args) {
		// 构造一个圆
		Cricle c1=new Cricle(10);
		System.out.println("半径为10的圆的面积："+c1.getArea());
		// 构造以上一个圆为底，高=10的圆锥
		Cricular ca1=new Cricular(c1,10);
		System.out.println("圆锥表面积："+ca1.getArea());
		System.out.println("圆锥体积："+ca1.getVolume());

		// 尝试修改圆锥地面圆的半径
		System.out.println("修改前c1.r:"+c1.getRidious());
		ca1.setBottomRidious(5);
		System.out.println("修改后ca1.r:"+ca1.getBottomRidious());
		System.out.println("修改后c1.r:"+c1.getRidious());

	}
}