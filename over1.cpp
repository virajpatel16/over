#include<iostream>
using namespace std;

class data{
	
	
		public:
		
		void fun(int a,int b){
		cout<<"the division :"<<a/b<<endl;
	
		}
		void fun(int a, int b,int c){
		cout<<"the subtraction of 3 number :"<<a-b-c<<endl;
		
		}

	   void fun(int a,int b,int c,int d){
	   	cout<<"the multiplication of 4 number :"<<a*b*c*d<<endl;
	   }
	   void fun(int a,int b,int c,int d,int e){
	   	cout<<"the addition of 5 number :"<<a+b+c+d+e<<endl;
	
	   }
};

main(){
	
	data obj;
	obj.fun(30,15);
	obj.fun(1,2,3);
	obj.fun(1,2,3,4);
	obj.fun(1,2,3,4,5);
}
