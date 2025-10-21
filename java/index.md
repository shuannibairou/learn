
== 10/05/2025 星期日==

#### 看书笔记
* java使用unicode字符集，字符变量char占两个字节，0-65535,不存在无符号。
	* 与c语言不同，c语言char占一个字节,-128-127,主要使用0-127。
* 对于字符数组`char[] str={'h','e','l','l','o'};`，使用`System.out.println(str)`,不打印引用，而是`hello`。
* 如果不想遍历输出数组的每一个元素，可以使用Arrays.toString(arr)。**注意：导包**
* java声明一个数组`int[] arr;`或`int arr[];`。
	* 不能和C语言一样`int arr[5];`在方括号内指定元素个数。
* 使用`arr=new int[5];`为数组分配元素。
* 使用`arr.length`求数组的元素个数。
* 与C语言不同，Java可以使用`int`类型的变量指定数组元素的个数。

== 10/06/25 Mon ==

#### 看书笔记
* &&和||也称短路运算符,当前面满足条件,后面就不会被计算
* 不同于短路运算,位运算a|b,a&b等要计算完a,b的值再给出计算结果
* 局部变量无默认值,成员变量具有默认值。
	* boolean默认false,应用型默认null。
* 对象引用存放在栈,对象实体存放在堆中.
	* 堆：可以动态地分配内存的大小
	* 栈：存取速度比堆要快
* 匿名对象和空对象
	* 匿名对象可以用"."访问自己的成员
	* 空对象没有实体,不能调用方法产生行为
* 垃圾收集
	* 与C++不同,没有析构函数,垃圾收集机制会自动释放掉不被栈中任何对象引用的在堆中实体占用的内存.
* 可变参数的参数类型必须相同,使用"..."表示若干参数
	* `public void f(int ... x)`
	* 可变参数必须在参数列表的最后.
* 类变量(共享变量).
	* 当用new创建多个对象时,分配给这些对象的类变量占据相同内存
	* 直到程序退出运行才释放所占用的内存
	* 不仅可以通过某个对象访问,也可以直接通过类名访问.
	* 该类被加载到内存时就分配了相应的内存空间.
	* 使用static关键字修饰
* 不能用static修饰构造方法
* 创建第一个对象类的实例方法就分配了入口地址;方法的入口地址被所有对象共享
* 方法重载,可以有多个相同名字的方法
	* 如果两个方法的名字相同,返回值类型不同,也必须保证参数不同.
	* 参数不同指:
		* 1.参数个数不同.
		* 2.如果个数相同,但要参数列表对应某个参数的类型不同
* this不可以出现在类方法中.

== 10/08/25 Wed ==

#### 看书笔记
* 子类与继承
	* 不支持多继承
	* Object是所有类的祖先类
	* 子类继承的方法不能操作子类新声明的变量
	* 对象 instanceof 类
		* 左对象如果是右类或子类创建的对象时,true,否则false
	* 子类定义的新方法无法操作隐藏的成员变量,需要使用`super.隐藏变量`
	* 重写:隐藏已继承的方法
	* final
		* 修饰类,不能被继承
		* 修饰父类方法,不能被子类重写
		* 修饰成员变量/局部变量,那就是常量,不允许变化修改
	* 上转型对象
		* 不能访问子类新增的成员变量和方法
		* 可以访问子类继承和隐藏的成员变量
		* 可以调用继承和子类重写的实例方法
	* abstract类和abstract方法
		* abstract方法不允许实现
		* final和abstract不能同时修饰方法或类
		* static和private不能修饰abstract方法
		* abstract类不能用new造对象,但可以成为子类对象的上转型对象
* 接口interface
	* 接口体的所有抽象方法的访问权限都是public,可以缺省public,abstract
	* ...所有static常量都是public,可以缺省public,final,static.不存在变量.
	* default实例方法
		* 可以重写
		* 有具体实现
	* static方法,可以用接口名调用
	* private方法,供default方法调用
	* 接口回调:实现某一接口的类创建的对象的引用赋值给该接口声明的接口变量.
		* 接口变量就可以调用被类实现的接口方法和接口提供的default方法和重写的default方法
	* 函数接口和lambda表达式
		* ```java
		  public interface SingleCom{
		  	int computeSum(int a,int b);
		  }
		  SingleCom com = (a,b) -> {
		  	return a+b;
		  };
		  int result=com.computeSum(33,44)
		  ```
	* 接口与多态

== 10/09/25 thu ==

#### 用java的函数接口实现了可扩展性很强的五子棋

#### 读书笔记
* 内部类
	* 可以调用外嵌类的方法和使用外部成员变量
	* 不可以声明类变量和类方法
	* 内部类仅供外嵌类使用
	* 字节码文件格式“外嵌类名$内部类名”
	* 可以被static修饰成静态数据类型
* 匿名类
	* 一定是内部类
	* 可以重写父类的方法
	* 由于没有类名，所以使用父类的构造方法
* 异常类
	* 异常对象调用的方法
		* getmessage()
		* printstacktrace()
		* tostring()
	* `try-catch`处理异常，catch参数的异常类都是exception的某个子类
	* 自定义异常类
		* > **throws**：一个方法在声明时使用throws声明要产生的若干异常,并用相应的异常类创建对象,再用**throw**抛出该异常对象,导致该方法结束执行.
* 断言
	* 格式
		* `assert a>=0:"a不能是负数"`。
	* java默认关闭断言,使用`java -ea mainclass`开启断言
* string类
	* final类不能扩展
	* `string s1 = "hello";`是常量,放入常量池.常量池的数据在程序运行期间再也不能改变.
	* `string s2 = new string("hello");`放入动态区.
	* 使用`int address = system.identityhashcode(s);`可以返回string对象的引用.
	* 构造方法
		* string(char a[])
		* string(char a[],int startindex,int count)
	* string对象的并置运算
		* 只要有一个是变量,java就会在动态区存放新string对象的实体和引用.
		* 两个常量,结果还是常量,放入常量池.
	* 常用方法
		* length()
		* equals(string s)
		* startwith(string s);endwith(string s)
		* compareto(string s)
		* contains(string s)
		* indexof(string s);lastindexof(string s)
		* substring(int startpoint)
		* trim()
	* string和基本数据类型相互转换
		* string->基本..
			* ```java
			  int x;
			  string s="867";
			  x=integer.paserint(s);
			  ```
			* byte,short...同理
		* 基本...->string
			* valueof();
		* 基本...进制表示
			* tobinarystring(int i)
			* tooctalstring(int i)
			* tohexstring(int i)
			* tobinarystring(long i)
			* tooctalstring(long i)
			* tohexstring(long i)
		* main()方法的参数化
	* string对象与字符数组,字节数组.
		* 字符数组->string对象
			* string(char a[]);
			* string(char a[],int startindex,int count);
		* string对象->字符数组
			* s.getchars(int start,int end,char c[],int offset);
			* s.tochararray();
		* 字节数组->string对象
			* string(byte[])
			* string(byte[],int offset,int length)
		* string对象->字节数组
			* s.getbytes();
			* s.getbytes("gbk");
* 正则表达式
	* 查看java.util.regex的pattern类,这里略
	* s.replaceall(string regex,string replacement),将当前string的所有和regex匹配的字符,都替换成replacement的字符序列
* stringtokenizer类:(用空间换速度)
* scanner类:(用速度换空间)
* pattern和matcher类
* stringbuffer类:内存空间可以自动改变大小,便于存放可变的字符序列.
	* 构造方法
		* stringbuffer() 初始容量16字符
		* stringbuffer(int size)  初始容量size字符
		* stringbuffer(String s)  初始容量s.length()+16字符
	* 方法
		* append(String s);append(Object o)
		* charAt(int n);setCharAt(int n,char ch)
		* insert(int index,String str)
		* reverse()
		* delect(int startIndex,int endIndex)
		* replace(int startIndex,int endIndex,String str)

== 10/16/25 Thu ==

#### IO流

```java
import java.io.FileInputStream;


public class Test {
    public static void main(String[] args) {
        FileInputStream fis=null;
        try{
            int temp=0;
            // 创建字节输入流对象
            StringBuffer sb=new StringBuffer();
            fis=new FileInputStream("d:/sublimeDoc/a.txt");
            while((temp=fis.read())!=-1){

//                System.out.print(temp);
                sb.append((char)temp);
            }
            System.out.println(sb.toString());
//            int s1=fis.read(); // 读取一个字符的ascii码
//            System.out.println(s1);
        }catch(Exception e){
            e.printStackTrace();
        }finally {
            if(fis!=null){
                try {
                    fis.close();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    }
}

```

