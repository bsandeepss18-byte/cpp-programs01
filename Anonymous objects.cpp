#include<iostream>
using namespace std;
class Student
{
	public: 
	Student()
	{
		cout<<"Student object created"<<endl;
	}
	void display()
	{
		cout<<"Welcome";
	}
};
int main()
{
	Student().display();
}
