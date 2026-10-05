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
int main()
{
	Child_2 c2("BMW");
	c2.display();	
}
