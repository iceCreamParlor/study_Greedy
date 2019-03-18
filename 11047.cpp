#include <iostream>
#define MAX 11

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  freopen("input.txt", "r", stdin);
  int coin[MAX];
  int num, amount;  cin >> num >> amount;
  int count = 0;

  for(int i = 0 ; i < num ; i++){
    cin >> coin[i];
  }
  for(int i = num-1 ; i >= 0 ; i-- ){
    count += (amount / coin[i]);
    amount %= coin[i];
  }
  cout << count << '\n';
  return 0;
}