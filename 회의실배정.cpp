/*
	Greedy : 가장 빨리 끝나는 회의를 기준으로 정렬하는 것이 효율적인 알고리즘이 된다.
	이 문제가 까다로운 이유 : 끝나는 시간이 같을 경우, 시작하는 시간을 기준으로도 정렬을 해 줘야 한다.
*/

#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int num, answer, temp=-1;
vector<pair<int, int>> myvector;

bool myfunction( pair<int, int> i, pair<int, int> j ){
	if(i.second == j.second)
		return i.first < j.first;
	return i.second < j.second;
}
int main(){
	freopen("input.txt", "r", stdin);
	scanf("%d", &num);
	for(int i=0 ; i< num ; i++){
		int temp1, temp2;
		scanf("%d %d", &temp1, &temp2);
		myvector.push_back( make_pair(temp1, temp2) );
	}
	sort(myvector.begin(), myvector.end(), myfunction);
	
	for( auto itr = myvector.begin(); itr!= myvector.end(); ++itr ){
		if( (*itr).first>= temp ){
			printf("%d %d\n", (*itr).first,(*itr).second);
			temp= (*itr).second; answer++;
		}
	}
	printf("%d", answer);
	return 0;
}