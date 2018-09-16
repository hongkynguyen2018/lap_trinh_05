// tong cac chu so trong so do 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<" nhap vao 1 so nguyen "<<"\t";

cin>>n;
int sum;
while(n>0){
	int dv=n % 10;
	sum+= dv;
    n=n/10;
}cout<<" tong cac chu so trong so "<<n<<" la "<<sum;


}
