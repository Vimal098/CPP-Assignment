#include<iostream>
using namespace std;
class A{
		int x=25, y=25;
	public:
			void fun(){
			
		int sum=x+y;
		cout<<"Addition"<<sum<<endl;
	}
	void add(int a,int b){
		int sub=a-b;
		cout<<"Subtraction "<<sub<<endl;
	}
};
int main()
{
	 A obj;
	 obj.fun();
	 obj.add(30,25);
	return 0;
	
}