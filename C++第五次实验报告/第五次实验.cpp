/*#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void set_m()
	{	
		cin >> hour >> minute >> sec;    //设置时间
	}
	void get_m()
	{
		cout << hour <<" "<< minute << " " << sec << endl;     //输出时间
	}
	
private:             // 数据成员为公用的
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.set_m();
	t1.get_m();
	return 0;
}*/        //第五次实验第一题





/*#pragma once
//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value();
private:
	string num;
	string name;
	string sex;
};

//student.cpp                     在此文件中进行函数的定义
#include <iostream>
using namespace std;
#include"student.h"  //不要漏写此行，否则编译通不过
void Student::set_value()
{
	cin >> num >> name >> sex;
}
void Student::display()         //在类外定义display类函数
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}

//main.cpp                      主函数模块
#include <iostream>//将类声明头文件包含进来
using namespace std;
#include "student.h"
int main()
{
	Student stud;                //定义对象
	stud.set_value();
	stud.display();              //执行stud对象的display函数
	return 0;
}*/       //第五次实验第二题







/*#include<iostream>
using namespace std;

//设置长方体类
class Cube
{
	//定义长、宽、高
private:
	int length;
	int weight;
	int height;

public:
	void set()
	{
		cin >> length >> weight >> height;
	}

	int calculateV()    //体积计算
	{
		return length * weight * height;
	}
};

int main()
{
	cout << "设置第一个长方体:" << endl;
	Cube c1;
	c1.set();
	cout << "设置第二个长方体:" << endl;
	Cube c2;
	c2.set();
	cout << "设置第三个长方体:" << endl;
	Cube c3;
	c3.set();
	cout << "第一个长方体体积为：" << c1.calculateV() << endl <<
		"第二个长方体体积为：" << c2.calculateV() << endl <<
		"第三个长方体体积为：" << c3.calculateV() << endl;
	system("pause");
	return 0;
}*/        //第五次实验第三题





/*#include<iostream>
using namespace std;
class student
{
public:
	string get_n()
	{
		return num;
	}
	
	int get_s()
	{
		return score;
	}

	string num;
	int score;
};
void max(student* p)
{
	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-1-i; j++)
		{
			if ((p[j].get_s()) > (p[j + 1].get_s()))
			{
				temp = j;
			}
			else
			{
				temp = j + 1;
			}
		}
	}
	cout << "分数最大者的学号为:" << p[temp].get_n() << endl;
}
int main()
{
	student * p=new student[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入第" << i+1 << "个同学的数据：" << endl;
		cout << "学号：";
		cin >> p[i].num;
		cout << "分数：";
		cin >> p[i].score;
	}
	max(p);
	delete[] p;
	system("pause");
	return 0;
}*/        //第五次实验第四题






/*#include<iostream>
using namespace std;
class Point
{
public:
	Point(int m_x = 60, int m_y = 80)
	{
		x = m_x;
		y = m_y;
		cout <<"修改前坐标：" << "(" << x << "," << y << ")" << endl;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "修改后坐标：" << "(" << x << "," << y << ")" << endl;
	}
private:
	int x;
	int y;
};
int main()
{
	Point p;
	int i;
	cout << "输入i的值：";
	cin >> i;
	int j;
	cout << "输入j的值：";
	cin >> j;
	p.setPoint(i,j);
	p.display();
	return 0;
}*/           //第五次实验第五题