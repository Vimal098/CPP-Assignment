#include<iostream>
#include<string.h>
using namespace std;
class Concate{
	public:
		char s1[25],s2[25];
		Concate(char str1[],char str2[])
		{
			strcpy(s1,str1);
			strcpy(s2,str2);
		}
		void operator+(){
			cout<<"\nConcatenation: "<<strcat(s1,s2);
		}
};

int main(){
	char str1[]="Vimal";
	char str2[]="Tiwari";
	Concate obj(str1,str2);
	+obj;
	return 0;
}