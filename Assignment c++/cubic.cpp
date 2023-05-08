#include<iostream>
using namespace std;
class A{
	public:
		int a,b,c,ch;
		inline void mul(){
			cout<<"For Multiplication Press 1."<<endl;
			cout<<"For Cubic Value press 2."<<endl;
		cout<<"Enter Your Choice:"<<endl;
		cin>>ch;
			switch(ch){
				case 1:
			cout<<"Enter the value of a:"<<endl;
			cin>>a;
			cout<<"Enter the value of b:"<<endl;
			cin>>b;
			c=a*b;
			cout<<c;
			break;
			case 2:
	     	cout<<"Enter the value of a:"<<endl;
			cin>>a;
			a=a*a*a;
			cout<<a;
			}
		}
};

int main(){
	A obj;
	obj.mul();
	return 0;
}





