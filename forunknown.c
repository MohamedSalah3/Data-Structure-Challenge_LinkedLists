#include<stdio.h>
/*int main()
{
    int i=5;
    for(;scanf("%s", &i); printf("%d\n", i));
    return 0;
}*/
int main()
{
    int i=5;
    for(;printf("%d\n", i);scanf("%s", &i));
    return 0;
}/*infinte loop in either cases*/