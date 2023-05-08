#include<iostream>
using namespace std;
class students{
	public:
			int rollno;
		void s(){
			cout<<"Enter Your Roll No :"<<endl;
			cin>>rollno;
		}
	
};
class test:public students
{
	public:	
		int marks1,marks2;
	void t(){
	
		cout<<"Enter The Marks of Subject 1:"<<endl;
		cin>>marks1;
		cout<<"Enter The Marks of Subject 2:"<<endl;
		cin>>marks2;
	}
};
class result:public test
{
	int total;
	public:
		void r(){
			total=marks1+marks2;
		}
		void getdata(){
			cout<<"\nYour roll No. is :"<<rollno<<endl;
			cout<<"\nYour Total Obtained Marks is :"<<total<<endl;
		}

};

int main(){
	result obj;
obj.s();
obj.t();
obj.r();
obj.getdata();
	return 0;
}


