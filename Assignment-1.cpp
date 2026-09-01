#include <iostream>
#include <string>
using namespace std;
class Student
{
	public:
	int rollnum;
	string name;
	float marks;

	void Accept()
		{
		cout<< "Enter the roll number of the stdent:"<<endl;
		cin>>rollnum;

		cout<<"Enter the name of the student:"<<endl;
		cin>>name;

		cout<<"Enter the marks of the student"<<endl;
		cin>>marks;
		}
	void result()
		{
		if (marks>40)
		{
			cout<< "you are PASS"<<endl;
		}
		else{
			cout<<"you are FAILED"<<endl;
		}
		}
	void display()
		{
		cout<<"\n ---STUDENT DETAIL---"<<endl;
		cout<<"ROLL NUMBER OF THE STUDENT:"<<rollnum<<endl;
		cout<<"NAME OF THE STUDENT :"<<name<<endl;
		cout<<"MARKS OF THE STUDENT:"<<marks<<endl;
		result();
		}
};

int main(){
	Student s;
	s.Accept();
	s.display();

return 0;
}


