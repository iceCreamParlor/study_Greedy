#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int temp, total;
vector<int> myvector;
bool cmp(int i, int j){
	return i> j;
}
int main()
{
	freopen("input.txt", "r", stdin);
	while( scanf("%1d", &temp) != EOF ){
		myvector.push_back(temp);
	}
	for( int i=0 ; i< myvector.size() ; i++ ){
		total += myvector[i];
	}
	if( total%3==0 ){
		sort(myvector.begin(), myvector.end());
		if( myvector[0]==0 ){
			for( int i=myvector.size()-1 ; i>= 0 ; i-- ){
				printf("%d", myvector[i]);
			}	
		}
		else
			printf("-1");
	}
	else{
		printf("-1");
	}
	return 0;
}
