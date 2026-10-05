#include<iostream>
using namespace std;
class Counter
{
	int count;
	public:
		counter();
		//prefix ++ overload
		void operator++()
		{
			count++;
		}
		void display()
		{
			cout<<"Value = "<<count;
		}
};
int main()
{
	Counter c;
	c.display();
	++c;
	c.display();
}
