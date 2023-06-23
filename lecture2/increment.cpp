#include<bits/stdc++.h>
using namespace std;


 //pass ref
 
void increment(int&a){       
  
       //	(*a)++;

a++;
	return ;
}


int main(){
	int i = 11;
	
	increment(i);
	
	cout<<i<<endl;
	
	return 0;
}
