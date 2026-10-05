#include<iostream>
using namespace std;
class Book
{
    public:
    int bid;
    //default constructor
    Book()
    {
        cout<<"Default Constructor"<<endl;
    }
    //parameterized Constructor
    Book(int id)
    {
        bid=id;
    }
    //copy Constructor
    Book(Book &b)
    {
        bid=b.bid;
    }
    //move Constructor
    Book(Book &&b)
    {
        bid=b.bid;
        b.bid=0;
    }
};
main()
{
    Book b;
    Book b1(111);
    Book b2(b1);
    Book b3(move(b1));
    cout<<"Parameterized constructor value is: "<<b1.bid<<endl;
    cout<<"Copy constructor value is: "<<b2.bid<<endl;
    cout<<"Move constructor value: "<<b3.bid<<endl;
}
