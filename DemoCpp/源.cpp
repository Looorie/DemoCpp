#include  <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	//输出内容到控制台用cout,cout不是一个方法而是一个类
	cout << "HelloWorld" << endl;

	/*
	cout是一个奇怪的东东他不是一个函数
	cout("helloWorld");
	这样的写法是会报错的

	cout<<的实质是对<<运算符的实现，所以它可以这么写，这个设计有点让初学者迷惑不解
	相同的情况还有cin>>
	*/
	cout.operator <<(100);
	cout.operator <<(endl);

	//但是这么写是有问题的
	cout.operator<<("HelloWorld").operator <<(endl); //这一行并不能正确的输出HelloWord字符串，而是输出了一个数字，为什么呢？

													 //声明一个int类型的变量i，并输出他
	int i = 10;
	cout << "i = " << i << endl;

	//c++对变量的初始化还有另外一种写法
	int anotherI(10);
	cout << "anotherI = " << anotherI;



	cout << "请为j输入一个值" << endl;
	int j;
	//使用cin给j赋值，这里如果用户胡乱输入一个字母，而非数字的值，也会得到一个值但是不是你想要的值
	cin >> j;

	cout << "j = " << j << endl;
}