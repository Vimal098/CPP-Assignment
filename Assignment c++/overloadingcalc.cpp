#include<iostream>
using namespace std;
int add(int x,int y){
	return x+y;
}
double add(double m,double n){
	return m-n;
}
 char add(char p,char q){

	return p*q;
}

float add(float p,float q){
	return p/q;
}

int main(){
	int a,b,c;
	char op;
	cout<<"Select operator :"<<endl;
	cout<<"\t +, -, *, /"<<endl;
	cin>>op;
	if(op=='+'){
		c=add(23,65);
		cout<<c;
	}
	else if(op=='-'){
		c=add(64,54);
		cout<<c;
	}
	else if(op=='*'){
		c=add(34,5);
		cout<<c;
	}
		else {
		c=add(90,45);
		cout<<c;
	}
	return 0;
}