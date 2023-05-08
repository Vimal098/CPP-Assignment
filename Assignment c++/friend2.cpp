#include<iostream>
using namespace std;

class A{
	public:
		int a,b,c;	
		friend int vimal(A);		
};
 int vimal(A x){
	cout<<"enter the value of a :"<<endl;
	cin>>x.a;
	cout<<"Enter the value of b :"<<endl;
	cin>>x.b;
	x.c=x.a+x.b;
	cout<<"a+b="<<x.c<<endl;
return x.c;
}
int main(){
	A obj;
	cout<<vimal(obj);
	return 0;
}