#include<stdio.h>
#include<string.h>
void f1()
{
    int m,n;
	printf("\nenter the no of row in matrix:");
    scanf("%d",&m);
    printf("\nenter the no of column in matrix:");
    scanf("%d",&n);
	int mat[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("mat%d%d:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("the matrix you entered:\n");
    for(int l=0;l<m;l++)
    {
        for(int h=0;h<n;h++)
        {
            printf("%5d",mat[l][h]);
        }
        printf("\n");
    }

}
void f2()
{
   int a,b;
   printf("\nenter the no of row in matrix:");
    scanf("%d",&a);
    printf("\nenter the no of column in matrix:");
    scanf("%d",&b);
   int add1[a][b],add2[a][b],sum[a][b];
   printf("\nenter the first matrix:\n");
   for(int i=0;i<a;i++)
   {
   	for(int j=0;j<b;j++)
   	{
   		printf("a%d%d:",i,j);
   		scanf("%d",&add1[i][j]);
	}
   }
   printf("\nenter the second matrix:\n");
   for(int i=0;i<a;i++)
   {
   	for(int j=0;j<b;j++)
   	{
   		printf("b%d%d:",i,j);
   		scanf("%d",&add2[i][j]);
	}
   }
   printf("\nsum of matrix:\n");
   for(int i=0;i<a;i++)
   {
   	for(int j=0;j<b;j++)
   	{
   		sum[i][j]=add1[i][j]+add2[i][j];
		   printf("%3d",sum[i][j]);
	}
	printf("\n");
   }
}
void f3()
{
   int a,b;
   printf("\nenter the no of row in matrix:");
    scanf("%d",&a);
    printf("\nenter the no of column in matrix:");
    scanf("%d",&b);
   int sub1[a][b],sub2[a][b],diff[a][b];
   printf("\nenter the first matrix:\n");
   for(int i=0;i<a;i++)
   {
   	for(int j=0;j<b;j++)
   	{
   		printf("a%d%d:",i,j);
   		scanf("%d",&sub1[i][j]);
	}
   }
   printf("\nenter the second matrix:\n");
   for(int i=0;i<a;i++)
   {
   	for(int j=0;j<b;j++)
   	{
   		printf("b%d%d:",i,j);
   		scanf("%d",&sub2[i][j]);
	}
   }
   printf("\ndiff of matrix:\n");
   for(int i=0;i<a;i++)
   {
   	for(int j=0;j<b;j++)
   	{
   		   diff[i][j]=sub1[i][j]-sub2[i][j];
		   printf("%3d",diff[i][j]);
	}
	printf("\n");
   }	
}
void f4()
{
	int u,v,s;
	printf("enter the no of row:\n");
	scanf("%d",&u);
	printf("enter the no of column:\n");
	scanf("%d",&v);
	int mat1[u][v];
	printf("enter the no. you want multiply with matrix:\n");
	scanf("%d",&s);
	for(int i=0;i<u;i++)
	{
		for(int j=0;j<v;j++)
		{
			printf("a%d%d:",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("the new matrix:\n");
	for(int i=0;i<u;i++)
	{
		for(int j=0;j<v;j++)
		{
			mat1[i][j]=mat1[i][j]*s;
			printf("%4d",mat1[i][j]);
		}
		printf("\n");
	}
}
void f5()
{
    int x,y,z;
    printf("\nenter the no of row in first matrix:");
    scanf("%d",&x);
    printf("\nenter the no of column in first matrix:");
    scanf("%d",&y);
    //first matrix's column and second's row are same.
    printf("\nenter the no of column in second matrix:");
    scanf("%d",&z);
    int multi1[x][y],multi2[y][z],multi[x][z];
    printf("\nenter the first matrix:\n");
    for(int i=0;i<x;i++)
    {
   	for(int j=0;j<y;j++)
   	{
	    printf("multi1(%d%d):",i,j);
   		scanf("%d",&multi1[i][j]);
	}
   }
   printf("\nenter the second matrix:\n");
   for(int i=0;i<y;i++)
   {
   	for(int j=0;j<z;j++)
   	{
   		printf("multi2(%d%d):",i,j);
   		scanf("%d",&multi2[i][j]);
	}
   }
   	 for(int g=0;g<x;g++)
     {
		 for(int k=0;k<z;k++)
   	       {
   	       	  int mult=0;
			 for(int h=0;h<y;h++)
   	         {
   	  	      mult=mult+(multi1[g][h]*multi2[h][k]);
	         }
	        multi[g][k]=mult;
	       }
   	  }
   printf("result:\n");
  for(int r=0;r<x;r++)
  {
  	for(int v=0;v<z;v++)
  	{
  		printf("%5d",multi[r][v]);
	  }
	  printf("\n");
  }
}
   
int main()
{
    int num;
    char choice[5];
    printf("Welcome to matrix calculator!!!!!!!!");
    printf("\nDo you want to see the menu(yes/no):");
    gets(choice);
    if(strcmp(choice,"yes")==0)
    {
        printf("\n1.Read and display matrix");
        printf("\n2.Add matrix");
        printf("\n3.Subtract matrix");
        printf("\n4.Perform a scalar multiplication");
        printf("\n5.Perform matrix multipliaction");
        printf("\nenter the option you want to perform:");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            f1();
            break;
        case 2:
        	f2();
        	break;
        case 3:
		    f3();
			break;
		case 4:
		     f4();
			 break;
		case 5:
		     f5();
			 break;	 		
        default:
        	printf("Wrong entry");
            break;
        }
        
		}
    else 
    {
        printf("\nGoodbye");
    }
    
    return 0;
}
