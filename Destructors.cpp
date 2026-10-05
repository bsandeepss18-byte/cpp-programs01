#include<iostream>
using namespace std;
class Demo
{
	public:
		Demo()
		{
			cout<<"This is a constructor"<<endl;
		}
		~Demo()
		{
			cout<<"This is a destructor"<<endl;
		}
};
int main()
{
	Demo d;
	
}
