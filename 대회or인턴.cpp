#include <stdio.h>

using namespace std;
int result;
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int total, male, female, test;
	scanf("%d %d %d", &female, &male, &test);
	total = male + female;

	while (total >= test+3 && male>=1 && female >=2)
	{
		male-= 1; female -=2; total -=3; result++;
	}
		printf("%d", result);
	
	return 0;
}
