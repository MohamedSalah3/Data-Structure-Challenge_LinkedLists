/*#include <stdio.h>
#define MAX 10
#define GENIUS 10
#define MOHAMED  0
#define GAMED  11

#if MOHAMED == Genius
#include <stdlib.h>
#elif MOHAMED == GAMED
#undef MAX
#else 
#error BAD practice
#endif
#if MAX==10
int main(){printf("%d\n",10);
return
 0;}
#endif*/
#include <stdio.h>
#define MAX 10
#define GENIUS 10
#define MOHAMED  0
#define GAMED  11

#if MOHAMED == Genius
#include <stdlib.h>
#elif MOHAMED == GAMED
#undef MAX
#else 
#error BAD practice
#if MAX==10
int main(){printf("%d\n",10);
return 0;}
#endif
#endif
