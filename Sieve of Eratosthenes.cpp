//============================================================================
// Name        : Sieve.cpp
// Author      :mohand sakr
// Version     :
// Copyright   : use the code under your responsibility	 .
// Description : Hello World in C++, Ansi-style
/*
 * here the implemtaton of Sieve of Eratosthenes algorithm .
 * */
//============================================================================

#include <iostream>
using namespace std;
const int  N= 1000002;
bool primecheck[N];
void seive(){
primecheck[0]=1;
primecheck[1]=1;
for(int i=2;i<=N;i++){
	if(primecheck[i])continue;
	for(long long j=(long long)i*i;j<=N;j+=i){
		//the cast to long long is must here to avoid the runtime error
		primecheck[j]=1;
	}
}

}
int main() {
	seive();
int n;
cin>>n;
for(int i=1;i<=n;i++){
	if(!primecheck[i]){
		cout<<i<<" ";
	}
}


	return 0;
}
