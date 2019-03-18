#define MAX 100001
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
  if(p1.second == p2.second)
		return p1.first < p2.first;
  return p1.second < p2.second;
}

int main(){
  freopen("input.txt", "r", stdin);
  int num;  scanf("%d", &num);
  vector<pair<int, int>> v;

  for(int i = 0 ; i < num ; i++){
    int start, end; scanf("%d %d", &start, &end);
    v.push_back(make_pair(start, end));
  }

  sort(v.begin(), v.end(), cmp);

  int begin = 0; int count = 0;
  for(int i = 0 ; i < v.size() ; i++){
    if(begin <= v[i].first){
      begin = v[i].second;
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}