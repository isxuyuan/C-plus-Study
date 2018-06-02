//============================================================================
// Name        : C++Study.cpp
// Author      : XuYuan
// Version     :
// Copyright   : Your copyright notice
// Description : 静态数据成员函数访问非静态数据成员, ANSI-style
//============================================================================

#include <iostream>
using namespace std;


class Small_cat{
public:
	Small_cat(double w);//声明构造函数
	void display();     //声明非静态成员函数
	static void total_disp();
private:
	double weight;     //普通数据成员，重量
	static double total_weight;//静态数据成员，用来累计小猫的重量
	static double total_number;//静态数据成员，用来累计小猫的数量
};


Small_cat::Small_cat(double w)//定义构造函数
{
	weight=w;
	total_weight+=w;//累加小猫的重量
	total_number++;//累加小猫的数量
}



void Small_cat::display()//定义非静态成员函数
{
	cout<<"这只小猫的重量是："<<weight<<endl;
}


void Small_cat::total_disp()//定义静态成员函数，不用static前缀
{
	cout<<total_number<<"只小猫的重量为";
	cout<<total_weight<<"千克"<<endl;
}


double Small_cat::total_weight=0;//静态数据成员初始化
double Small_cat::total_number=0;//静态数据成员初始化


int main()
{
	Small_cat w1(0.5),w2(0.6),w3(0.4);
	w1.display();
	w2.display();
	w3.display();
	Small_cat::total_disp();
	return 0;
}
