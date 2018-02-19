#include <cstdio>
#include <algorithm>
int main(){
	freopen("input.txt", "r", stdin);
	int n, p[10000], sum=0;
	scanf("%d", &n);
	for( int i=0 ; i< n; i++ )
		scanf("%d", &p[i]);
	std::sort(&p[0], &p[n]);
	for(int i=0 ; i< n-1 ; i++)
		if(p[i]<0 && p[i+1] <=0){
			p[i] *= p[i+1];
			p[i+1] =0;
			++i;
		}
		else break;
	for(int i=n-1 ; i> 0 ; i--)
		if(p[i] >1 && p[i-1] > 1){
			p[i-1] *= p[i];
			p[i] =0;
			--i;
		}
		else break;
	for(int i=0; i<n ; ++i)
		sum+= p[i];
	printf("%d", sum);
	return 0;
}