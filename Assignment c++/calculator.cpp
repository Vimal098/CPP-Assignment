#include<iostream>
using namespace std;
class calculator{
public:
void calc(){
	int ch,a,b,c;
cout<<"Select Your Choice"<<endl;
cin>>ch;
switch(ch){
	case 1:
		cout<<"Enter the value of a:"<<endl;
cin>>a;
cout<<"Enter the value of b:"<<endl;
cin>>b;
c=a+b;
cout<<"The addition of a and b is:"<<c<<endl;
break;
case 2:
		cout<<"Enter the value of a:"<<endl;
cin>>a;
cout<<"Enter the value of b:"<<endl;
cin>>b;
c=a*b;
cout<<"The multiplication of a and b is:"<<c<<endl;
break;
case 3:
	cout<<"Enter the value of a:"<<endl;
cin>>a;
cout<<"Enter the value of b:"<<endl;
cin>>b;
c=a-b;
cout<<"The subtraction of a and b is:"<<c<<endl;
break;
case 4:
	cout<<"Enter the value of a:"<<endl;
cin>>a;
cout<<"Enter the value of b:"<<endl;
cin>>b;
c=a/b;
cout<<"The division of a and b is:"<<c<<endl;
break;
default:
	cout<<"Please Select Right Choice"<<endl;
	break;
}
}	
};
int main(){
	calculator obj;
	obj.calc();
	return 0;
}