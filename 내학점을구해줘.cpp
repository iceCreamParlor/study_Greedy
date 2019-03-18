#include <stdio.h>
#include <iostream>

using namespace std;
int total; double avg;

int main()
{
	freopen("input.txt", "r", stdin);
	int sem;
	cin >> sem;
	for(int i=0 ; i< sem ;i++){
		total= 0; avg= 0.0;
		int course;
		cin >> course;
		for( int i=0 ; i< course ; i++){
			int temp1; double temp2;
			cin >>temp1 >>temp2;
			total+= temp1; avg += temp2* temp1;
		}
		printf("%d %.1lf\n", total, avg/ total);
	}
	return 0;
}
