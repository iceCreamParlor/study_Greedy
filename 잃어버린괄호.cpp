#include <cstdio>
#include <cstdlib>
int temp, result;

int main(){
	freopen("input.txt", "r", stdin);
	while( temp >=0 && scanf("%d", &temp) != EOF)
		result +=  temp;
	
	while( scanf("%d", &temp) != EOF )
		result -= abs(temp);
	printf("%d", result);
	
	return 0;
}