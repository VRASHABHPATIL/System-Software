#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *f1,*fp2;
    f1=fopen("object1.txt","r+");
    fp2=fopen("output2.txt","r+");
    char buffer[1000];
    char b[10],c[10],d[10],e[10];
    char a[10]="H";
    char temp[100];
    unsigned long temp1,temp2,temp3;
    int i;
    int len;
    int j;
    char z[10]="E";
    printf("memory locations object codes");
    fprintf(fp2, "Memory values  \t\t\t  contens");
    printf("\n");
    for(i=0;i<=5;i++)
    {
        fscanf(f1,"%s",buffer);
        if(strcmp(buffer,a)== 0)
        {
            fscanf(f1,"%s %s %s",b,c,d);
            temp1=strtoul(c, NULL, 16);
        }

        else
        {
            fscanf(f1,"%s %s",b,d);
            temp2=strtoul(d, NULL, 16);
            len=temp2/3;
            temp3=temp1-3096;
            printf("%d",temp3);
            fprintf(fp2, "\n");
            fprintf(fp2, "%d", temp3);
            for(j=0;j<len;j++)
            {
                fscanf(f1,"%s",c);
                printf("\t");
                printf("%s",c);
                fprintf(fp2, "\t%s", c);
                printf("\t");
            }
            fprintf(fp2, "\n");
            printf("\n");
            temp1=temp1+temp2;
        }

    }


}
