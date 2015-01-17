//zad1 A
#include <iostream>
#include <math.h>
using namespace std;

int main(){
float a,b;
cout<<"Podaj a:"<<endl;
cin>>a;
cout<<"Podaj b:"<<endl;
cin>>b;
float sin_ = sin(a);
float sqrt_;
if((sqrt_= a-b)>0 && sin_!=0){
	sqrt_= sqrt(sqrt_);
	cout<<"z1="<<(a*a*a+sqrt_)/sin_<<endl;
}else{
	cout<<"a lub b nie naleza do dziedziny wyrazenia z1"<<endl;
}
cout<<"z2="<<(a-b)*(a+b)<<endl;
return 0;
}