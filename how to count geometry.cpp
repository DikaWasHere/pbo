#include<iostream>
using namespace std;

int main(){

int choose,r;
float base,height,L;
cout<<"The Way To Count Geometry"<<endl;
cout<<"1.Triangle\n2.circle\n3.rectangle"<<endl;
cout<<"your choice: ";
cin>>choose;

if(choose==1){
	cout<<"Formula of Triangle is :(1/2)* base * height"<<endl;
	cout<<"enter base :";
	cin>>base;
	cout<<"enter height :";
	cin>>height;
	L=0.5* base * height;
	cout<<"way"<<endl;
	
	cout<<"(1/2)"<<"*"<<base<<"*"<<height<<endl;
	cout<<"so the answer is = "<<L;
}else if(choose==2){
	cout<<"Formula area of circle is : (22/7)*r*r"<<endl;
	cout<<"enter r : ";
	cin>>r;
	
	L=(22/7)*r*r;
	
	cout<<"Way"<<endl;
	cout<<"(22/7) * "<<r<<"*"<<r<<endl;
	cout<<"so the answer is = "<<L;
}else if(choose==3){
	cout<<"Formula area of rectangle is : lenght * widht"<<endl;
	cout<<"enter lenght : ";
	cin>>base;
	cout<<"enter widht:";
	cin>>height;
	L=base * height;
	
	cout<<"Way"<<endl;
	cout<<base <<"*"<<height<<endl;
	cout<<"so the answer is : "<<L;
	
}else{
	cout<<"the choice will coming soon";
}
}

