/*#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	void set_m()
	{	
		cin >> hour >> minute >> sec;    //����ʱ��
	}
	void get_m()
	{
		cout << hour <<" "<< minute << " " << sec << endl;     //���ʱ��
	}
	
private:             // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.set_m();
	t1.get_m();
	return 0;
}*/        //�����ʵ���һ��





/*#pragma once
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value();
private:
	string num;
	string name;
	string sex;
};

//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
using namespace std;
#include"student.h"  //��Ҫ©д���У��������ͨ����
void Student::set_value()
{
	cin >> num >> name >> sex;
}
void Student::display()         //�����ⶨ��display�ຯ��
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}

//main.cpp                      ������ģ��
#include <iostream>//��������ͷ�ļ���������
using namespace std;
#include "student.h"
int main()
{
	Student stud;                //�������
	stud.set_value();
	stud.display();              //ִ��stud�����display����
	return 0;
}*/       //�����ʵ��ڶ���







/*#include<iostream>
using namespace std;

//���ó�������
class Cube
{
	//���峤������
private:
	int length;
	int weight;
	int height;

public:
	void set()
	{
		cin >> length >> weight >> height;
	}

	int calculateV()    //�������
	{
		return length * weight * height;
	}
};

int main()
{
	cout << "���õ�һ��������:" << endl;
	Cube c1;
	c1.set();
	cout << "���õڶ���������:" << endl;
	Cube c2;
	c2.set();
	cout << "���õ�����������:" << endl;
	Cube c3;
	c3.set();
	cout << "��һ�����������Ϊ��" << c1.calculateV() << endl <<
		"�ڶ������������Ϊ��" << c2.calculateV() << endl <<
		"���������������Ϊ��" << c3.calculateV() << endl;
	system("pause");
	return 0;
}*/        //�����ʵ�������





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
	cout << "��������ߵ�ѧ��Ϊ:" << p[temp].get_n() << endl;
}
int main()
{
	student * p=new student[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "�������" << i+1 << "��ͬѧ�����ݣ�" << endl;
		cout << "ѧ�ţ�";
		cin >> p[i].num;
		cout << "������";
		cin >> p[i].score;
	}
	max(p);
	delete[] p;
	system("pause");
	return 0;
}*/        //�����ʵ�������






/*#include<iostream>
using namespace std;
class Point
{
public:
	Point(int m_x = 60, int m_y = 80)
	{
		x = m_x;
		y = m_y;
		cout <<"�޸�ǰ���꣺" << "(" << x << "," << y << ")" << endl;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "�޸ĺ����꣺" << "(" << x << "," << y << ")" << endl;
	}
private:
	int x;
	int y;
};
int main()
{
	Point p;
	int i;
	cout << "����i��ֵ��";
	cin >> i;
	int j;
	cout << "����j��ֵ��";
	cin >> j;
	p.setPoint(i,j);
	p.display();
	return 0;
}*/           //�����ʵ�������