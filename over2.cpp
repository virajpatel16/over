 /*
52. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes*/

#include<iostream>
using namespace std;

class cricket{
	
	public:
		
	int a=20;
	
	void match(){
		cout<<"the over t20: "<<a<<endl;
		
		
	}
};

class data:public cricket{
	
	public:
	int b=90;
	
	void f(){
		cout<<"the over test match:"<<b<<endl;
	
		
	}
};
main(){
	
	data obj;
	
	obj.match();
	obj.f();
	
}

