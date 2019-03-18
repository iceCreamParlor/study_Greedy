#include <cstdio>

using namespace std;

int coin[10];
int num, target, total, temp;
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d %d", &num, &target);
	for(int i=0 ; i< num ; i++){
		scanf("%d", &coin[i]);
	}
	for(int i=num-1 ; i>= 0 ; i--){
		while(target >= temp + coin[i] ){
			total++; temp += coin[i];
		}
		if( target < temp )
			temp -= coin[i];
	}

	printf("%d", total);
	return 0;
}