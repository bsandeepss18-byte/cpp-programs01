#include<iostream>
using namespace std;
//Multiple Inheritance
class Father
{
	public:
		string surname;
		Father(string sn)
		{
			surname=sn;
		}
};
class Mother
{
	public:
		string blgrp;
		Mother(string bg)
		{
			blgrp=bg;
		}
};
class Child : public Father, public Mother
{
	public:
		Child(string sn, string bg):Father(sn),Mother(bg)
		{
		}
		void display()
		{
			cout<<"Mother and Father properties to child class are: "<<surname<<" "<<blgrp;
		}
};
int main()
{
	Child c("ABC","O+VE");
	c.display();
}
