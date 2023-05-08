#include<iostream>
using namespace std;
class demo{
	private: 
	int a,b;
	friend int demo1(demo);
};
int demo1(demo x){
	cout<<"Enter the value of a"<<endl;
	cin>>x.a;
	cout<<"Enter the value of b"<<endl;
	cin>>x.b;
cout<<"Before Swapping the value of a and b was\n"<<x.a<<" "<<x.b<<endl;
x.a=x.a-x.b;
x.b=x.a+x.b;
x.a=x.b-x.a;
cout<<"after swapping the value of a and b becomes"<<x.a<<" "<<x.b<<endl;
return 0;
}
int main(){
	demo obj;
	cout<<demo1(obj);
	return 0;
}