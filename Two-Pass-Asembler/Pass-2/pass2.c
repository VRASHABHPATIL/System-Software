#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *f1,*f2,*f3,*f4;
    f1=fopen("inter.txt","r+");
    f2=fopen("Symtab.txt","r+");
    f3=fopen("optab.txt","r+");
    f4=fopen("output.txt","r+");
    char object[10];
    char a[100],b[100],c[100],d[100];
    int locctr[10];
    int i;
    char text[1000]="T";
    int pl=0;
    char H[100]="H";
    char E[100]="E";
    char t1[10000];
    char v1[10] = "ADDR", v2[10] = "SUBR", v3[10] = "MULR", v4[10] = "DIVR";
    char re1[100]="RESW",re2[100]="RESB",re3[100]="WORD",re4[100]="BYTE",re5[100]="EQU";
    char tb[100000];
    char ext[10]="^";
    fscanf(f1,"%s  %s  %s  %s",a,b,c,d);
    printf("\n");
    printf("%s\t",a);
    printf("%s\t",b);
    printf("%s\t",c);
    printf("%s\t",d);

    printf("\n");
    fprintf(f4,"%s %s %s %s",a,b,c,d);
    strcat(H,ext);
    strcat(H,b);
    strcat(H,ext);
    strcat(H,d);
    strcat(H,ext);
    strcat(E,ext);
    strcat(E,d);

    printf("%s",tb);
    int gc=0;
    for(i=0;i<=8;i++)
    {
        fscanf(f1,"%s  %s  %s  %s",a,b,c,d);
        char j[10]="^";
        char str7[10];

        char buffer[10000];
        char p[10],q[10];
        char l[10],r[10];
        int temp=0,count=0,temp1=0;
        unsigned long decimalValue;
        unsigned long decimalValue1;
        unsigned long decimalValue3;
        char str[10];
        char r1[100]="RESW",r2[100]="RESB",r3="END",x[10]="+";
        char *res1=strstr(c,x);
        if(res1!=NULL)
        {
            while (fscanf(f2, "%s", buffer) != EOF)
            {
                if (strcmp(buffer, d) == 0)
                {
                    fscanf(f2,"%s",p);
                    decimalValue = strtoul(p, NULL, 16);
                    temp= decimalValue;
                    printf("%d",&temp);
                    temp1=temp;
                    while (temp != 0) {
                        temp = temp / 10;
                        ++count;
                    }
                    if(count==1)
                    {
                        char obj1[10]="000";
                        sprintf(str, "%X", temp1);
                        strcat(obj1,str);
                        strcpy(l,obj1);

                    }
                    else if(count==2)
                    {
                        char obj2[10]="00";
                        sprintf(str, "%X", temp1);
                        strcat(obj2,str);
                        strcpy(l,obj2);
                    }
                    else if(count==3)
                    {
                        char obj2[10]="0";
                        sprintf(str, "%X", temp1);
                        strcat(obj2,str);
                        strcpy(l,obj2);
                    }
                    else
                    {

                        sprintf(str, "%X", temp1);
                        strcpy(l,str);

                    }

                }
            }
            while (fscanf(f3, "%s", buffer) != EOF)
        {

            if (strcmp(buffer, c) == 0)
            {
                fscanf(f3,"%s",q);
                decimalValue3 = strtoul(q, NULL, 16);
                decimalValue3=decimalValue3+4;
                char m[10]="3";
                sprintf(str, "%X", decimalValue3);
                strcat(str,m);
                strcpy(r,str);


            }
        }
        strcat(r,l);
        int n=strlen(r);

        if(n==6)
        {
            char w[10]="0";
            strcat(w,r);
            strcpy(r,w);
        }

        strcat(tb,r);
        strcat(tb,ext);

        gc=gc+4;
        pl=pl+4;

        }
        else if(strcmp(c,re1)== 0 || strcmp(c,re2)== 0 || strcmp(c,re3)== 0 || strcmp(c,re4)== 0 || strcmp(c,re5)== 0 )
        {
            //do nothing
            pl=pl+3;
        }
        else if(strcmp(v1, c) == 0 || strcmp(v2, c) == 0 || strcmp(v3, c) == 0 || strcmp(v4, c) == 0)
        {
            while (fscanf(f3, "%s", buffer) != EOF)
                {

                    if (strcmp(buffer, c) == 0)
                    {
                        fscanf(f3,"%s",q);


                    }
                }

            char A[10]="A";
            char X[10]="X";
            char L[10]="L";
            char B[10]="B";
            char S[10]="S";
            char T[10]="T";
            char F[10]="F";
            char PC[10]="PC";
            char SW[10]="SW";
            char res1[10];
            if(strcmp(d,A) == 0)
            {
                char A1[10]="00";
                strcat(q,A1);
                strcpy(r,q);
            }
            else if(strcmp(d,X) == 0)
            {
                char A2[10]="01";
                strcat(q,A2);
                strcpy(r,q);
            }
            else if(strcmp(d,L) == 0)
            {
                char A3[10]="02";
                strcat(q,A3);
                strcpy(r,q);
            }
            else if(strcmp(d,B) == 0)
            {
                char A4[10]="03";
                strcat(q,A4);
                strcpy(r,q);
            }
            else if(strcmp(d,S) == 0)
            {
                char A5[10]="04";
                strcat(q,A5);
                strcpy(r,q);
            }
            else if(strcmp(d,T) == 0)
            {
                char A6[10]="05";
                strcat(q,A6);
                strcpy(r,q);
            }
            else if(strcmp(d,F) == 0)
            {
                char A7[10]="06";
                strcat(q,A7);
                strcpy(r,q);
            }
            else if(strcmp(d,PC) == 0)
            {
                char A8[10]="08";
                strcat(q,A8);
                strcpy(r,q);
            }
            else
            {
                char A9[10]="09";
                strcat(q,A9);
                strcpy(r,q);
            }
            strcat(tb,r);
            strcat(tb,ext);

            gc=gc+2;
            pl=pl+2;


        }
        else if(res1==NULL)
        {

            while (fscanf(f2, "%s", buffer) != EOF)
            {

            if (strcmp(buffer, d) == 0)
                {
                    fscanf(f2,"%s",p);
                    decimalValue = strtoul(p, NULL, 16);
                    decimalValue1 = strtoul(a, NULL, 16);
                    decimalValue1=decimalValue1+3;
                    temp= decimalValue-decimalValue1;
                    temp1=temp;
                    while (temp != 0) {
                        temp = temp / 10;
                        ++count;
                    }
                    if(count==1)
                    {
                        char obj1[10]="00";
                        sprintf(str, "%X", temp1);
                        strcat(obj1,str);
                        strcpy(l,obj1);

                    }
                    else if(count==2)
                    {
                        char obj2[10]="0";
                        sprintf(str, "%X", temp1);
                        strcat(obj2,str);
                        strcpy(l,obj2);
                    }
                    else
                    {

                        sprintf(str, "%X", temp1);
                        strcpy(l,str);

                    }

                }

           }
           while (fscanf(f3, "%s", buffer) != EOF)
        {

            if (strcmp(buffer, c) == 0)
            {
                fscanf(f3,"%s",q);
                decimalValue3 = strtoul(q, NULL, 16);
                decimalValue3=decimalValue3+3;
                char m[10]="2";
                sprintf(str, "%X", decimalValue3);
                strcat(str,m);
                strcpy(r,str);
            }

        }
        strcat(r,l);
        int n=strlen(r);

        if(n==5)
        {
            char w[10]="0";
            strcat(w,r);
            strcpy(r,w);
        }
        else if(n<=2)
        {
            char J[10]="FFF3";
            strcat(r,J);
        }
        else if(n>=10)
        {

            char input_string[10];
            strcpy(input_string,r);
            char char_to_remove = 'F';
            int occurrences = 4;
            int i, j, count = 0;
            int length = strlen(input_string);

            for (i = j = 0; i < length; i++) {
                if (input_string[i] == char_to_remove && count < occurrences) {
                    count++;
                } else {
                    input_string[j++] = input_string[i];
                }
            }

            input_string[j] = '\0';
            strcpy(r,input_string);

        }
        strcat(tb,r);
        strcat(tb,ext);
        gc=gc+3;
        pl=pl+3;


        }
        printf("\n");
        printf("%s\t",a);
        printf("%s\t",b);
        printf("%s\t",c);
        printf("%s\t",d);
        printf("%s",r);
        printf("\n");
        strcpy(str7,r);
        fprintf(f4,"%s %s %s %s %s",a,b,c,d,r);
        fseek(f4,10,SEEK_CUR);
        strcat(text,str7);
        strcat(text,j);
        locctr[i]=strtoul(a, NULL, 16);
        r[0]='\0';
        l[0]='\0';
        fseek(f3,0,SEEK_SET);
        fseek(f2,0,SEEK_SET);
        fseek(f1,0,SEEK_CUR);


}

    char len[10];
    char len7[20];
    sprintf(len, "%X", gc);
    sprintf(len7, "%X", pl);
    strcat(H,len7);
    char text1[100]="T";
    strcat(text1,ext);
    strcat(text1,len);
    strcat(text1,ext);
    strcat(text1,tb);
    printf("%s",H);
    printf("\n");
    printf("%s",text1);
    printf("\n");
    printf("%s",E);
    fclose(f1);
    f1=fopen("inter.txt","r+");
    fscanf(f1,"%s  %s  %s  %s",a,b,c,d);
    int len1;
    printf("\n\n");
    char head[10]="H^",str5[10]="COPY^",str6[10];
    len1=locctr[4]-locctr[0]+1;
    sprintf(str6, "%X", len);
    char h[10]="^";
    strcat(a,h);
    strcat(a,str6);
    strcat(a,h);
    strcat(str5,a);
    strcat(head,str5);
    fprintf("%s",head);
    FILE *f5;
    f5=fopen("output1.txt","r+");
    fprintf(f5,"%s ",head);
    fseek(f5,10,SEEK_CUR);
    fprintf(f5,"%s ",text);

}

