//zad2 A
#include <iostream>
#include <math.h>
using namespace std;

int main(){
int n;
cout<<"Podaj dlugosc ciagu:"<<endl;
cin>>n;
int s1 = 0;
float s2=0;
int m = 1;
for(int i=1;i<=n;i++){
	s1+=(m*3);
	s2+=(1.0f/m);
	m*=2;
}
cout<<"z="<<(2*s1-s2)/s1<<endl;
return 0;
}