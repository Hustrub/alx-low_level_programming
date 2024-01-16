#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>


int add(int a, int b)
{
return a + b;
}

int sub(int a, int b)
{
return a - b;
}


int mul(int a, int b)
{
return a * b;
}

int division(int a, int b)
{
if (b == 0) { 
printf("Error: Division by Zero\n");
return  0;
}
return  a / b;
}



int mod(int a, int b)
{
if (b == 0) { 
printf("Error: Division by Zero\n");
return 0;
}
return a % b;
}



