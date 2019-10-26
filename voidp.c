
int main()
{int a = 10; 
char b = 'x'; 
void *p=&a;
printf("%d",*((int*)p)); // void pointer holds address of int 'a' 
p=&b;
printf("%c",*((char*)p));
//*(char*)p = &b; // void pointer holds address of char 'b' 
return 0;
}