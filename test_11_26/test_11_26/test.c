//#include<stddef.h>
//
//int a = 3, b = 5, * pa = &a, * pb;
//
//char c = 'h', d = 'e', * pc = &c, * pd;

#include"stdio.h"
#include<string.h>
#pragma warning( disable : 4996)

void main()
{
	char src[11] = { 'I',' ','a','m',' ','h','a','p','p','y' };
char dest1[11], dest2[11], dest3[11];
char *pSrc = src, *pDest1 = dest1, * pDest2 = dest2, * pDest3 = dest3;
strcpy(pDest1, pSrc);
strcpy(pDest2, "I am happy");
strcpy(pDest3, pDest2);

printf("dest1:%s\n", dest1);
printf("dest2:%s\n", dest2);
printf("dest3:%s\n", dest3);
printf("pDest2[0]:%c\n", *pDest2);
printf("pDesr3[0]:%c\n", *pDest3);

}
