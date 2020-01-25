#include <stdio.h>
int main(){
char a='a';
int counter=0;
char s[30]={'0'};
scanf("%s",s);
printf("%s\n",s);
for(int i=0;i<26;i++)
{int j=0;
	while(s[j] != '\0')
	{
	if(s[j] == a)
	{
	counter++;
	printf("%d\n",counter);
	}
if(counter % 2){
	counter =0;
	s[i]=a;
}
j++;
	
	}

//printf("%c",a);
a++;
}
printf("%s\n",s);
return 0;
}
