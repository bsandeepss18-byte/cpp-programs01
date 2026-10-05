#include<iostream>
using namespace std;
class Student
{
	public:
		int marks;
		Student(int m):marks(m){		}
		Student operator +(Student s)
		{
			return Student(marks+s.marks);
		}
		void display()
		{
			cout<<"Student marks total is: "<<marks;
		}
};
class MinusNum
{
	public:
		int num;
		MinusNum(int n):num(n){}
		MinusNum operator -()
		{
			return -num;
		}
		void show()
		{
			cout<<"Minus OPOverloading value is: "<<num;
		}
};
int main()
{
	Student s1(67),s2(76);
	Student s3=s1+s2;
	s3.display();
}
