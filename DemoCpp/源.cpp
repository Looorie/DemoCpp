#include  <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	//������ݵ�����̨��cout,cout����һ����������һ����
	cout << "HelloWorld" << endl;

	/*
	cout��һ����ֵĶ���������һ������
	cout("helloWorld");
	������д���ǻᱨ���

	cout<<��ʵ���Ƕ�<<�������ʵ�֣�������������ôд���������е��ó�ѧ���Ի󲻽�
	��ͬ���������cin>>
	*/
	cout.operator <<(100);
	cout.operator <<(endl);

	//������ôд���������
	cout.operator<<("HelloWorld").operator <<(endl); //��һ�в�������ȷ�����HelloWord�ַ��������������һ�����֣�Ϊʲô�أ�

													 //����һ��int���͵ı���i���������
	int i = 10;
	cout << "i = " << i << endl;

	//c++�Ա����ĳ�ʼ����������һ��д��
	int anotherI(10);
	cout << "anotherI = " << anotherI;



	cout << "��Ϊj����һ��ֵ" << endl;
	int j;
	//ʹ��cin��j��ֵ����������û���������һ����ĸ���������ֵ�ֵ��Ҳ��õ�һ��ֵ���ǲ�������Ҫ��ֵ
	cin >> j;

	cout << "j = " << j << endl;
}