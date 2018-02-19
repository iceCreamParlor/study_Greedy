#include <cstdio>

using namespace std;
int oman, man, ocheon, cheon, obaek, baek, osip, sip, o, il;
int main(){
	int target, pay, total;
	
	scanf("%d %d", &pay, &total);
	target = total - pay;

	while( target >= 50000 ){
		target -= 50000; oman++;
	}
	while( target >= 10000 ){
		target -= 10000; man++;
	}
	while( target >= 5000 ){
		target -= 5000; ocheon++;
	}
	while( target >= 1000 ){
		target -= 1000; cheon++;
	}
	while( target >= 500 ){
		target -= 500; obaek++;
	}
	while( target >= 100 ){
		target -= 100; baek++;
	}
	while( target >= 50 ){
		target -= 50; osip++;
	} 
	while( target >= 10 ){
		target -= 10; sip++;
	}
	while( target >= 5 ){
		target -= 5; o++;
	}
	while( target >= 1 ){
		target -= 1; il++;
	}
	printf("50000 : %d, 10000: %d, 5000: %d, 1000: %d, 500: %d, 100: %d, 50: %d, 10: %d, 5: %d, 1: %d",oman, man, ocheon, cheon, obaek, baek, osip, sip, o, il);
	return 0;
}