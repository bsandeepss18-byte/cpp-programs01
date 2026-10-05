#include<iostream>
using namespace std;
//Hierarchial Inheritance
class Parent
{
	public:
		string carname;
		Parent(string cn)
		{
			carname=cn;
		}
		void display1()
		{
			cout<<"This is Parent Class"<<endl;
		}
};
class Child_1 : public Parent
{
	public:
		Child_1(string cn):Parent(cn)
		{
			
		}
		void show()
		{
			cout<<"Child_1 extends car name of Parent :"<<carname<<" "<<endl;
		}
};
class Child_2 : public Parent
{
	public:
		Child_2(string cn):Parent(cn)
		{
			
		}
		void display()
		{
			cout<<"Child_2 extends car name of Parent :"<<carname<<" "<<endl;
		}	
};
class Subchild: public Child_1,public Child_2
{
    public:
	    Subchild(string cn):Child_1(cn), Child_2(cn)
	    {
		};
		void display2()
		{
			cout<<"This is SUBCHILD class :"<<Child_1::carname<<" "<<endl;
		}
};
int main()
{
	Subchild sc("BMW");
	sc.display2();	
}
