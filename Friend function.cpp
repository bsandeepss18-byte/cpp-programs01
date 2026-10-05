#include<iostream>
using namespace std;
class Bike{
	int cost;
	public:
		Bike(int c=0):cost(c){}
		friend Bike operator+(Bike b,cost d);
	void display()
	{
		cout<<"Rs. "<<cost;
	}
};
//	Friend function defined outside the class
Bike operator+(Bike b,cost d)
{
	Bike temp;
	temp.cost = b.cost + d.cost;
	return temp;
}
int main()
{
	Bike b1(20),b2(25);
	Bike b3=b1+b2;
	b3.display();
}
