#include<bits/stdc++.h>
using namespace std;

int power(int base,int pow){
	if(pow == 0) return 1;
	
	int sml = power(base,pow-1);
	
	return sml*base;
}

int main(){
	cout<<power(2,3);
	return 0;
}
