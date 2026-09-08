#include <iostream>
using namespace std;

class Rectangle
{
private:
	float length,breadth;
public:
	void getdata()
	{
		cout<<"Enter the length of the rectangle"<<endl;
		cin>>length;

		cout <<"Enter the breadth of the rectangle"<<endl;
		cin>>breadth;
	}
	float area();
	float perimeter();

	void display()
	{
		cout<<"The Area of the rectangle is :"<<area()<<endl;
		cout<<"The perimeter of the rectangle is:"<<perimeter()<<endl;
	}

};


float Rectangle::area()
{
	return length*breadth;
}

float Rectangle::perimeter()
{
	return 2*(length+breadth);
}


int main()
{
	Rectangle r;
	r.getdata();
	r.display();

	return 0;
}

