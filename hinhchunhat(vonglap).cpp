//V? hình ch? nh?t d?c có chi?u dài n và chi?u r?ng m. Ví d?: m = 4, n = 5

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b;
	cout<<" nhap vao chieu dai :"<<endl;
	cin>>a;
	cout<<" nhap chieu rong :"<<endl;
	cin>>b;
	
    for (int i=1;i<a;++i){
	   for (int j=1;j<b;++j){
	        cout<<" * ";
	  }cout<<endl;
	   }

}
