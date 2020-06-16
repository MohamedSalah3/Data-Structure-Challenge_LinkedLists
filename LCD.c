#include <stdio.h>
typedef unsigned char uint8_t;
int main(){
	
	static uint8_t X_value=0;
	static uint8_t Y_value=0;
	static uint8_t arr[32]="8ohamed";
	static uint8_t twoDarr[10][32]={"Mohamed","Ahmed","Salah","Elbaramawy","needs","To","Study","hard","To Work in","valeo"};
	static uint8_t u8count=0;
	static uint8_t flag_Null=0;

	if (u8count < 16)
	{
		X_value=u8count;
		Y_value=0;
	}
	else if (u8count == 16)
	{
		Y_value=1;
		X_value=0;
	}
	else if (arr[u8count]=='\0')
	{
	//	flag_Null=1;
			u8count=0;
	}
	
	else if ((u8count > 16) && (arr[u8count]!='\0'))
	{
		Y_value=1;
		X_value=u8count-16;
	}	


/*
		LCD_clear();
		LCD_goto_xy(X_value,Y_value);			
		LCD_send_char(arr[u8count++]);
	if (flag_Null)
	{
		flag_Null=0;
		u8count=0;
	}

*/
int j=0;
for(int i=0;i<10;i++){
	{
			for(int j=0;j < 32;j++)
	arr[j]=twoDarr[i][j];
	
	}
	
	
	}




	for(int j=0;j < 32;j++){

	printf("%c",arr[j]);

	}
	
}