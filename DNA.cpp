#include <cstdio>
#define MAX(a,b) (((a)>(b))? (a):(b))

char toChar(int a, int t, int g, int c, int max){
  if(max==a)  return 'A';
  else if(max==c)  return 'C';
  else if(max==g)  return 'G';
  else   return 'T';
}
int main(){
  freopen("input.txt", "r", stdin);
  int i, j, n, m, max= 0, hd=0;
  scanf("%d %d", &n, &m);
  char dna[1001][51];
  for(i=0; i<n; i++)  scanf("%s", &dna[i]);
  for(i=0; i<m; i++){
    int a=0, t=0, g=0, c=0;
    for(j=0; j<n; j++){
      switch(dna[j][i]){
        case 'A' : a++;break;
        case 'T' : t++;break;
        case 'G' : g++;break;
        case 'C' : c++;break;
      }
    }
    max= MAX(a>c?a:c, g>t? g:t);
    hd+= (n-max);
    printf("%c", toChar(a,t,g,c,max));
  }
  printf("\n%d", hd);
}
