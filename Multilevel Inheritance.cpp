#include<iostream>
using namespace std;
//Multilevel Inheritance
class A
{   public:
	   void show_A()
 	   {
		   cout<<"Class A"<<endl;
	   }
};
class B : public A
{   public:
	   void show_B()
	   {
	    	cout<<"Class B"<<endl;
	   }
};
class C : public B
{   public:
	   void show_C()
	   {
		    cout<<"Class C"<<endl;
	   }
};
int main()
{
	C c;
	c.show_C();
	c.show_B();
	c.show_A();
}
