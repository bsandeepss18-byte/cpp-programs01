#include<iostream>
using namespace std;
class Student
{
	int roll;
	public: 
	   void getData(int roll){
	   	this->roll=roll;
	   }
	   void display(){
	   	cout<<roll;
	   }
};
int main()
{
	Student s;
	s.getData(101);
	s.display();
}
