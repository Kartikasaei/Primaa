#include <iostream>
using namespace std;

int main(){

int a, b;
cout<<"Masukkan Angka : ";
cin>>a;

for(int i=1; i<=a; i++){
	if(a%i==0)
	b++;
}if(b==2){
	cout<<a<<" adalah bilangan prima";
}else{
	cout<<a<<" bukan bilangan prima";
}
return 0;
 }
