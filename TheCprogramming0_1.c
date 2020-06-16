
#include <stdio.h>
#include <stdlib.h>
#define MAX_TEMP 300
#define STEP 20
#define ZERO_TEMP 0

int main(){
	float celesus=ZERO_TEMP;
	/*declare celesus var*/
	int fehr=ZERO_TEMP;
	/*declare fehr var*/
		printf("  C\tfehrenhiet\n");
	while(fehr <= MAX_TEMP)  /*stay in the loop while fehr is less than max*/  
	{
		celesus=(5.0/9.0)*(float)(fehr-32.0); /*convert fehr to celseus*/
		printf("%3d\t%5.1f\n",fehr,celesus); /*print */
		fehr += STEP;/*fehr=fehr+step*/
	}
	
	
	return 0;
}