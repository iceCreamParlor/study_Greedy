//시간초과 -> pq를 사용하는건 맞지만, machine을 사용할 필요 없다.
//pair을 sort한 다음, 겹치는 것이 아니면 pop, 겹치면 push하면 됨
#include <cstdio>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;

struct cmp{
  bool operator()(P a, P b){
    return a.first > b.first;
  }
};

void make_task(int start, int end, vector<int>& machine){

  bool check = false;
  int size = machine.size();
  for(int i=0; i<size; i++){
    if(machine[i] <= start){
      machine[i] = end;
      check= true;
    }
  }
  if(!check){
    machine.push_back(end);
  }
}
int main(){
  freopen("input.txt", "r", stdin);
  int num;  scanf("%d", &num);
  vector<int> machine;
  priority_queue<P, vector<P>, cmp> pq;

  for(int i=0; i<num; i++){
    int start, end; scanf("%d %d", &start, &end);
    pq.push(make_pair(start, end));
  }
  while(pq.size()){
      int start = pq.top().first;
      int end = pq.top().second;
      pq.pop();
      make_task(start, end, machine);
  }
  printf("%d", machine.size());
  return 0;
}
