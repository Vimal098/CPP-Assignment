#include<iostream>
using namespace std;
class bankaccount
{
	public:
		string name,type;
		double account,balance=20000,amount,deposit,withdraw,remaining,sum;
            void person(){
            	cout<<"enter your name"<<endl;
            	cin>>name;
            	cout<<"Enter Your Account Number"<<endl;
            	cin>>account;
            	cout<<"Type of Account"<<endl;
            	cin>>type;
            	cout<<"Balance in the Account is:"<<balance<<endl;
            			cout<<"Deposite Your Amount"<<endl;
            	cin>>amount;
            		sum=amount+balance;
            	cout<<"Total Amount is:"<<sum<<endl;
            	cout<<"Withdraw Your Amount:"<<endl;
            	cin>>withdraw;
            	remaining=sum-withdraw;
            	cout<<"The Remaining balance is:"<<remaining<<endl;
            	cout<<"\nname is:"<<name<<"\n\nbalance is:"<<remaining;
            	
			}
			void data(){
				
			}	
};
	int main(){
		bankaccount obj;
		obj.person();
		return 0;
	}