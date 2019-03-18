#define MAX 1000001
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int possibile(int channel);
const int CURRENT = 100;

bool broken[10] = { false, };

int main(){
  freopen("input.txt", "r", stdin);
  int target; scanf("%d", &target);
  int num;  scanf("%d", &num);
  
  for(int i = 0 ; i < num ; i++){
    int temp; scanf("%d", &temp);
    broken[temp] = true;
  }
  int mini = MAX;
  for(int i = 0 ; i < MAX ; i++){
    int isPossible = possibile(i);
    if(isPossible != 0){
      int current = possibile(i) + abs(target - i);
      mini = min(current, mini);
    }
    
  }
  mini = min(abs(CURRENT-target), mini);
  printf("%d\n", mini);
  return 0;
}

int possibile(int channel){
  // 불가능하면 0, 가능하면 입력 횟수를 return
  if(channel == 0){
    return broken[0] ? 0 : 1;
  }
  int len = 0;
  while(channel > 0){
    if(broken[channel%10]){
      return 0;
    }
    len += 1;
    channel /= 10;
  }
  return len;
}