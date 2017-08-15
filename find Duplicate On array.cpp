//============================================================================
//find duplicate on array  this is an algorithm that find the duplicates of an array;
//it's time complexty is O(n);
// Name        : find.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//
//============================================================================

#include <iostream>
#include<map>
using namespace std;

int main() {

	 
	int n;
	cin>>n;
	map<int,int>ma;
 	map<int,int>::iterator it;
	for(int i=0;i<n;i++)
	{int x;
	cin>>x;
		++ma[x];
	}
	 for(it=ma.begin();it!=ma.end();it++){
		 if((*it).second>1){
			 cout<<(*it).first<<" ";
			 
		 }
	 }
	  
	 
	return 0;
}
