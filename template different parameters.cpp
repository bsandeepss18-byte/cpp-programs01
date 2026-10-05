#include<iostream>
using namespace std;
//function template
//to find maximum of 2 values
class Sample
{
	public:
		template<class T, class U>
		T maxValue(T a,U b)
		{
			return (a>b)?a:b;
		}
};
main()
{
	Sample s;
	cout<<"max integer value is: "<<s.maxValue(2,3.5f)<<endl;
	cout<<"max float value is: "<<s.maxValue(2.5f,2)<<endl;
	cout<<"max double value is: "<<s.maxValue(2.5,50)<<endl;
	cout<<"max char value is: "<<s.maxValue('a','A')<<endl;	
}
