#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		friend int max1(A);
};
 int max1(A x){
	cout<<"Enter the value of a"<<endl;
	cin>>x.a;
	cout<<"Enter the value of b"<<endl;
	cin>>x.b;
	if(x.a>x.b){
		cout<<"A is Maximum."<<endl;
	}
	else{
		cout<<"B is Maximum."<<endl;
	}
	return 0;
}
int main(){
	A obj;
	cout<<max1(obj);
	return 0;
}