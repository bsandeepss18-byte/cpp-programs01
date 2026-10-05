#include<iostream>
using namespace std;
//class template
//to print given value
template <class T>
class Sample
{
	public:
		T data;
		Sample(T x)
		{
			data = x;
		}
		void display()
		{
			cout<<"The value is: "<<data<<endl;
		}
};
main()
{
   Sample<int>s1(10);
   Sample<double>s2(10.0);
   Sample<string>s3("hello cpp");
   s1.display();
   s2.display();
   s3.display();
}
