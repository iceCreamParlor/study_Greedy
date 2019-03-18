#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
int num, result;
vector<int> line;

bool cmp( int i, int j ){
	return i<= j;
}

int main(){
	freopen("input.txt", "r", stdin);
	cin >> num;
	for( int i=0 ; i< num ; i++ ){
		int temp; cin >> temp;
		line.push_back(temp);
	}
	sort(line.begin(), line.end());
	
	while( num ){
		result += line[line.size()-num] * num;
		line.erase(line.begin(), line.begin());
		num--;
	}
	cout << result;

	return 0;
}