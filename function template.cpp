#include<iostream>
using namespace std;
//function template
//to find maximum of 2 values
class Sample
{
	public:
		template<class T>
		T maxValue(T a,T b)
		{
			return (a>b)?a:b;
		}
};
main()
{
	Sample s;
	cout<<"max integer value is: "<<s.maxValue(2,5)<<endl;
	cout<<"max float value is: "<<s.maxValue(2.5f,3.5f)<<endl;
	cout<<"max double value is: "<<s.maxValue(2.5,3.5)<<endl;
	cout<<"mac char value is: "<<s.maxValue('a','d')<<endl;	
}
