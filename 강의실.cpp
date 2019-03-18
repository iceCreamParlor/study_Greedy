#include <cstdio>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;
struct cmp{
  bool operator()(pair <int, int> a, pair<int, int> b){
    return a.second > b.second;
  }
};
int main(){
  freopen("input.txt", "r", stdin);
  pair<int, int> mypair[100001];
  int num;  scanf("%d", &num);
  priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

  for(int i=0; i<num; i++){
    int trash;  scanf("%d", &trash);
    int start, end; scanf("%d%d", &start, &end);
    mypair[i].first = start;
    mypair[i].second = end;
  }
  sort(mypair, mypair + num);
  for(int i=0; i<num; i++){
    if(!pq.empty() && pq.top().second <= mypair[i].first){
      //printf("%d %d\n", pq.top().second, mypair[i].first);
      pq.pop();
    }
    pq.push(make_pair(mypair[i].first, mypair[i].second));
  }
  printf("%d", pq.size());
  return 0;
}
