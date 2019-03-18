#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  freopen("input.txt", "r", stdin);
  int num;  scanf("%d", &num);
  vector<int> v;

  for(int i = 0 ; i < num ; i++){
    int temp; scanf("%d", &temp);
    v.push_back(temp);
  }

  sort(v.begin(), v.end());
  
  int result = 0;
  for(int i = 0 ; i < num ; i++){
    result += (num-i) * v[i];
  }
  printf("%d\n", result);

  return 0;
}