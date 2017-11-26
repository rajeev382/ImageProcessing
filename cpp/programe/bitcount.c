#include <stdio.h>
 
void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n/2);
 
    /* step 2 */
    printf("%d", n % 2);
}
int main(void)
{
	char a[]="fgggdcdcdscdvdfvdfvdvd";
	printf("%d \n",sizeof(a));
	printf("%s",a);
    bin(1024);
    printf("\n");
    bin(18446744073709551614);
}
