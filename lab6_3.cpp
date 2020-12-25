#include<iostream>
using namespace std;

char before(char x){
	string a = "BCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n=0;
	int i = 0;
	if(x=='A'){
		return 'Z';
	}
	while(i<=24){
		if( x == a[i]){
			n = 1;
		}
		i++;
	}
	if(n==1){
		return x-1;
	}
	if(n!=1){
		return '0';
	}
	return '0';
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
