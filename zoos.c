#include <stdio.h>
#include <string.h>
int main () // ASCII : o 111 , z 122
{
char a[21];
printf("enter word like zoos");
scanf("%s",a);

int z=0,o=0;
for (int i=0;i<strlen(a);i++){
if(a[i]=='z') z++;
if(a[i]=='o') o++;
}
if (z*2==o) printf("Yes");
if (z*2!=o) printf("No");
return 0;
}
