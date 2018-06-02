/*
 * 3.32.cpp
 *    静态成员函数访问非静态数据成员
 *  Created on: 2018年6月1日
 *      Author: xy
 */
#include<iostream>
using namespace std;

class Small_cat{
public:
	Small_cat(double w);//声明构造函数
	static void display(Small_cat & w);//声明静态成员函数
	static void total_disp();//声明静态成员函数
	private:
	double weight;
	static double total_weight;
	static double total_number;//声明静态数据成员
};

Small_cat::Small_cat(double w)//定义构造函数
{
	weight=w;
	total_weight+=w;
	total_number++;
}

void Small_cat::display(Small_cat & w)//定义静态成员函数，将对象的引用作为参数
{
	cout<<"这只小猫的重量为"<<w.weight<<endl;
}

void Small_cat::total_disp()   //定义静态成员函数
{
	cout<<total_number<<"只小猫的重量为";
	cout<<total_weight<<"千克"<<endl;
}

double Small_cat::total_weight=0;//静态数据成员初始化
double Small_cat::total_number=0;

int main()
{
	Small_cat w1(0.3),w2(0.2),w3(0.1);
	Small_cat::display(w1);
	Small_cat::display(w2);
	Small_cat::display(w3);
	Small_cat::total_disp();
	return 0;


}
