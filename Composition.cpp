#include<iostream>
using namespace std;
class Engine
{
	public:
		void start()
		{
			cout<<"car started"<<endl;
		}
};
class Car
{ 
    public:
    	Engine e;
    	void run()
    	{
    		e.start();
		}
};
int main()
{
	Car c;
	c.run();
}
