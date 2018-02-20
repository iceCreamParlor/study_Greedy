#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1001
using namespace std;
vector<int> arr1;
vector<int> arr2;
int result, num, brand;

int main(){
	freopen("input.txt", "r", stdin);
	cin >> num >> brand;
	for( int i=0 ; i< brand ; i++ ){
		int temp1, temp2;
		cin >> temp1;
		arr1.push_back(temp1);
		cin >> temp2;
		arr2.push_back(temp2);
	}
	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());
	int div = num/6, resid = num % 6;
	if(arr1[0] >= arr2[0]*6 )
		result = arr2[0]*num;
	else 
		result = min(arr1[0]*div + arr2[0]*resid, arr1[0]*(div+1));
	cout << result;
	return 0;
}