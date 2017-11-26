#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
	char* foo = "abcdefghijkl";
    char* p = strchr(foo,'f')+1;
    printf("%d a",p);
       return 0;
    }
