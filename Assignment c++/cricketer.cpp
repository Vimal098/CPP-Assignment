#include<iostream>
using namespace std;

class cricketer{
	string name;
	public:
		void c(){
		cout<<"Enter the Cricketer Name:"<<endl;
		cin>>name;	
		}	
		void display(){
			cout<<"The Name of the Batsman is"<<name<<endl;
		}	
};
class batsman:public cricketer
{
	public:
	int total,average,matches,notout,dismissed;
	void b(){
	cout<<"Enter the Total run:"<<endl;
	cin>>total;
	cout<<"Number of Matches Played:"<<endl;
	cin>>matches;
	cout<<"How Many Times Batsman was not Out:"<<endl;
	cin>>notout;
	dismissed=matches-notout;
	average=total/dismissed;
	cout<<"the Average run is:"<<average;
	
}
};
int main(){
	batsman obj;
	obj.c();
	obj.b();
	return 0;
}