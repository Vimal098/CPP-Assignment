#include<iostream>
using namespace std;
class calc{
	int a,b,c,ch;
	public:
		calc(){
			cout<<"\tFor Addition 1,For subtraction 2,For Multiplication 3,For Division 4."<<endl;
			cout<<"\n\n\n\tSelect Your Choice:"<<endl;
			cin>>ch;
			switch(ch){
				case 1:
					cout<<"Enter the Value of a:"<<endl;
					cin>>a;
					cout<<"Enter the value of b:"<<endl;
					cin>>b;
					c=a+b;
					cout<<"Answer is:"<<c;
					break;
						case 2:
					cout<<"Enter the Value of a:"<<endl;
					cin>>a;
					cout<<"Enter the value of b:"<<endl;
					cin>>b;
					c=a-b;
					cout<<"Answer is:"<<c;
					break;
						case 3:
					cout<<"Enter the Value of a:"<<endl;
					cin>>a;
					cout<<"Enter the value of b:"<<endl;
					cin>>b;
					c=a*b;
					cout<<"Answer is:"<<c;
					break;
						case 4:
					cout<<"Enter the Value of a:"<<endl;
					cin>>a;
					cout<<"Enter the value of b:"<<endl;
					cin>>b;
					c=a/b;
					cout<<"Answer is:"<<c;
					break;
			}
		}
};
int main(){
	calc c;
	return 0;
}
