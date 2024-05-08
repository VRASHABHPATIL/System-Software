#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *f1,*f2,*f3,*f4;
    f1=fopen("cs1.txt","r+");
    f2=fopen("output.txt","r+");
    f3=fopen("cs2.txt","r+");
    f4=fopen("cs3.txt","r+");
    char a[10],b[10],c[10],buffer[10];
    char c1[10]="H";
    char c2[10]="T";
    int i;
    printf("CS \t NAME  \t ADRESS \t LENGTH");
    fprintf(f2,"CS \t NAME  \t ADRESS \t LENGTH");
    printf("\n");
    fprintf(f2,"\n");
    for(i=0;i<=1;i++)
    {
        fscanf(f1,"%s",buffer);
        if(strcmp(buffer,c1)== 0)
        {
            fscanf(f1,"%s %s %s",a,b,c);
            printf("%s \t \t %s \t %s",a,b,c);
            fprintf(f2,"%s \t \t %s \t %s",a,b,c);
            printf("\n");
            fprintf(f2,"\n");
        }
        else
        {
            while(strcmp(a,c2)!= 0)
                  {
                      fscanf(f1,"%s %s ",a,b);
                      if(strcmp(a,c2)!= 0)
                      {
                          printf("\t %s \t %s",a,b);
                          fprintf(f2,"\t %s \t %s",a,b);
                          printf("\n");
                          fprintf(f2,"\n");
                      }

                  }


        }
    }

    ////////////////////////////////////////////////////////
    for(i=0;i<=1;i++)
    {
        fscanf(f3,"%s",buffer);
        if(strcmp(buffer,c1)== 0)
        {
            fscanf(f3,"%s %s %s",a,b,c);
            printf("%s \t \t %s \t %s",a,b,c);
            fprintf(f2,"%s \t \t %s \t %s",a,b,c);
            printf("\n");
            fprintf(f2,"\n");
        }
        else
        {
            while(strcmp(a,c2)!= 0)
                  {
                      fscanf(f3,"%s %s ",a,b);
                      if(strcmp(a,c2)!= 0)
                      {
                          printf("\t %s \t %s",a,b);
                          fprintf(f2,"\t %s \t %s",a,b);
                          printf("\n");
                          fprintf(f2,"\n");
                      }

                  }


        }
    }
    //////////////////////////////////////////////////////

    for(i=0;i<=1;i++)
    {
        fscanf(f4,"%s",buffer);
        if(strcmp(buffer,c1)== 0)
        {
            fscanf(f4,"%s %s %s",a,b,c);
            printf("%s \t \t %s \t %s",a,b,c);
            fprintf(f2,"%s \t \t %s \t %s",a,b,c);
            printf("\n");
            fprintf(f2,"\n");
        }
        else
        {
            while(strcmp(a,c2)!= 0)
                  {
                      fscanf(f4,"%s %s ",a,b);
                      if(strcmp(a,c2)!= 0)
                      {
                          printf("\t %s \t %s",a,b);
                          fprintf(f2,"\t %s \t %s",a,b);
                          printf("\n");
                          fprintf(f2,"\n");
                      }

                  }


        }
    }
    /////////////////////////////////////////
}
