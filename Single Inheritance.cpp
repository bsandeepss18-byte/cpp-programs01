#include<iostream>
using namespace std;
//single inheritance
class Parent
{
	public:
		int pincode,phno;
		Parent(int p, int n)
		{
			pincode=p;
			phno=n;
		}
};
class Child : public Parent
{
	public:
		Child(int p, int n):Parent(p,n)
		{
			
		}
		void display()
		{
			cout<<"pincode is: "<<pincode<<endl;
			cout<<"phone is: "<<phno;
		}
};
int main()
{
	Child c(58459,99999);
	c.display();
}
