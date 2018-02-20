#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> myvector;
int main(int argc, char *argv[])
{
	freopen("input.txt", "r",stdin);
	int num, incre, decre;
	cin >> num >> incre >> decre;

	for(int i=1 ; i<= num ; ++i){
		myvector.push_back(i);
	}
	/* n 은 incre * decre를 넘을 수 없다 (비둘기집의 원리) */
	
	if(incre + decre -1 <= num && num <= incre* decre){
		reverse(myvector.begin(), myvector.begin() + decre);
		int temp = num/incre;
		for(int i= decre ; i< num-1 ; i++){
			if( i+ temp < num)
				reverse(&myvector[i], &myvector[i+temp]);
			else
				reverse(myvector.begin()+i, myvector.begin()+i+1);
		}
		for(auto itr=myvector.begin() ; itr != myvector.end() ; ++itr)
			cout<< *itr << " ";
	}
	else{
		printf("-1");
	}
	return 0;
}
