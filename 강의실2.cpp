#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;
struct lecture{
  int no, start, end, classroom;
  lecture(){

  }
  lecture(int no, int start, int end, int classroom){
    this->no=no;this->start=start;this->end=end;this->classroom=classroom;
  }
};
struct end_early{
  bool operator()(lecture a, lecture b){
    return a.end > b.end;
  }
};
bool cmp(lecture a, lecture b){
  return a.start > b.start;
}
int main(){
  freopen("input.txt", "r", stdin);
  short ans[100001];
  priority_queue<lecture, vector<lecture>, end_early> pq;
  int n;  scanf("%d", &n);
  lecture lec[100001];
  for(int i=0; i<n; i++){
    scanf("%d", &lec[i].no);
    scanf("%d", &lec[i].start);
    scanf("%d", &lec[i].end);
    lec[i].classroom = i+1;
  }
  sort(lec, lec+n, cmp);
  for(int i=0; i<n; i++){
    int num=i+1;int room = i+1;
    if(!pq.empty() && pq.top().end <= lec[i].start){
      room = pq.top().classroom;
      num = pq.top().no;
      ans[pq.top().no] = room;
      //printf("%d %d\n", pq.top().end, lec[i].start);
      pq.pop();
    }
    pq.push(lecture(num, lec[i].start, lec[i].end, room));
  }
  printf("%d\n", pq.size());
  while(!pq.empty()){
    ans[pq.top().no] = pq.top().classroom;
    pq.pop();
  }

  for(int i=0; i<n; i++){
    printf("%d", ans[i]);
  }
}
