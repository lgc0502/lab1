#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"please enter a number:";
	cin>>n;
	cout<<n<<" ";
	while(1){
		if(n!=1){
			if((n%2)==1){
				n=n*3+1;
				cout<<n<<" " ;
			}
			if((n%2)==0){
				n=n/2;
				cout<<n<<" " ;
			}
		}
		if(n==1){
			cout<<endl;
			return 0;
		}
	}
}
