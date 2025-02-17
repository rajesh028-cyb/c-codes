#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("rajesh.txt","w");
char ch="R";
fprintf(fp,"%c",ch);
fclose(fp);






}
