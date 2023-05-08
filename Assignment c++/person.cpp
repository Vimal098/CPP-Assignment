#include<iostream>
using namespace std;
class person
{
	public:
		string name;
    int age;
    int rollno;
		void p(){
			cout<<"Enter Your Name:"<<endl;
			cin>>name;
			cout<<"Enter Your Age:"<<endl;
			cin>>age;
			cout<<"Enter Your Roll NO.:"<<endl;
			cin>>rollno;
		}
		void display1(){
			cout<<"Name is :"<<name<<endl;
			cout<<"Age is :"<<age<<endl;
			cout<<"Your Roll No.is :"<<endl;
		}
};
class student{
	public:
			int percent;
		void s(){
		cout<<"Enter Your Percentage"<<endl;
		cin>>percent;
	}
	void display2(){
		cout<<"Your Percentage is:"<<percent<<endl;
	}
};
class teacher:public person,public student
{
	public:
	string name;
	int salary;
		void t(){
			cout<<"Enter Your Name :"<<endl;
			cin>>name;
			cout<<"Enter Your Salary"<<endl;
			cin>>salary;
		}
		void display3(){
			cout<<"Your Name is :"<<name<<endl;
			cout<<"Your Salary is :"<<salary<<endl;
		}
};

int main(){
	teacher obj;
	obj.p();
	obj.display1();
	obj.s();
	obj.display2();
	obj.t();
	obj.display3();
	return 0;
}





