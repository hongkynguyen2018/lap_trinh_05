// sum=1+1/2+...1/n
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"nhap 1 so nguyen "<<"\t";
	cin>>n;
	float sum;
	for(float i=1;i<=n;i++){
		sum+=(1/i);
	}
	cout<<"Tong nghich dao "<<sum;
}
