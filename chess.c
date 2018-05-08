#include <stdio.h>

 
void main() {

char a[8][8];
int i,j,x1,y1,x2,y2;
a[0][0]='r'; 
a[0][7]='r'; 

a[0][1]='n';
a[0][6]='n'; 

a[0][2]='b';
a[0][5]='b'; 

a[0][3]='q'; 

a[0][4]='k'; 



a[7][0]='R'; 
a[7][7]='R'; 

a[7][1]='N';
a[7][6]='N'; 

a[7][2]='B';
a[7][5]='B'; 

a[7][3]='Q'; 

a[7][4]='K'; 
for (i=0;i<8;i++) 
{
	a[1][i]='p';
	a[6][i]='P';
}
for (i=2;i<6;i++) 
{	
	for (j=0;j<8;j++)
	{
		a[i][j]=' ';
	}
}
for (i=0;i<8;i++) 
{	printf("%d ",8-i);
	for (j=0;j<8;j++)
	{
		printf("%c",a[i][j]);
	}
	printf("\n");
}
printf("  ");
for (i=0;i<8;i++)
	printf("%d",1+i);
printf("\n");
printf("\nenter x1 y1:\n");
scanf("%d %d",&x1,&y1);
printf("\nenter x2 y2:\n");
scanf("%d %d",&x2,&y2);
do
{

a[8-y2][x2-1]=a[8-y1][x1-1];
a[8-y1][x1-1]=' ';
for (i=0;i<8;i++) 
{	printf("%d ",8-i);
	for (j=0;j<8;j++)
	{
		printf("%c",a[i][j]);
	}
	printf("\n");
}
printf("  ");
for (i=0;i<8;i++)
	printf("%d",1+i);
printf("\n");
printf("\nenter x1 y1:\n");
scanf("%d %d",&x1,&y1);
printf("\nenter x2 y2:\n");
scanf("%d %d",&x2,&y2);
} while((a[8-y2][x2-1]!='k') && (a[8-y2][x2-1]!='K'));
} 
