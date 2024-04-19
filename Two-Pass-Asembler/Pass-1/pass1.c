#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main() {
    FILE *f1, *f2, *f3, *f4, *f5, *f6;
    f1 = fopen("input.txt", "r");
    f2 = fopen("Symtab.txt", "r+");
    f3 = fopen("optab.txt", "r+");
    f4 = fopen("inter.txt", "r+");

    if (f1 == NULL) {
        printf("file not opened");
    } else {
        printf("file is open now\n");
    }

    char a[100], b[200], c[100], buffer[100];
    int i, locctr;

    char s[100] = "START";
    fscanf(f1, "%s %s %s", a, b, c);

    if (strcmp(s, b) == 0) {
        locctr = atoi(c);
        printf("%d", locctr);
    } else {
        locctr = 0;
    }

    printf("\n");
    printf("%d\t", locctr);
    printf("%s\t", a);
    printf("%s\t", b);
    printf("%s\t", c);
    printf("\n");
    fprintf(f4, "%x %s %s %s\n", locctr, a, b, c);


    for (i = 0; i <= 9; i++) {
            fscanf(f1, "%s %s %s", a, b, c);
            printf("\n");
            printf("%d\t", locctr);
            printf("%s\t", a);
            printf("%s\t", b);
            printf("%s\t", c);
            printf("\n");
            char buffer[2000];

            fgets(buffer, sizeof(buffer), f2);
            char z[10] = "-";
            if (strcmp(a, z) == 0) {
                // do nothing
            } else {
                char *res = strstr(buffer, a);
                if (res == NULL) {
                    fprintf(f2, "%s %d", a, locctr);
                    fseek(f2, 10, SEEK_CUR);
                }
            }

            char buffer1[2000];

            fgets(buffer1, sizeof(buffer1), f3);
            char *res1 = strstr(buffer1, b);
            if (res1 == NULL) {
                // do nothing here
            }

            fprintf(f4, "%x %s %s %s\n", locctr, a, b, c);

            fseek(f1, 0, SEEK_CUR);
            fseek(f4, 10, SEEK_CUR);
            char r[100] = "RESW", r1[100] = "RESB", x[10] = "+";
            char v1[10] = "ADDR", v2[10] = "SUBR", v3[10] = "MULR", v4[10] = "DIVR";
            char *res2 = strstr(b, x);
            if (strcmp(r, b) == 0) {
                locctr = locctr + atoi(c) * 3;
            } else if (strcmp(r1, b) == 0) {
                locctr = locctr + atoi(c);
            } else if (res2 != NULL) {
                locctr = locctr + 4;
            }else if (strcmp(v1, b) == 0 || strcmp(v2, b) == 0 || strcmp(v3, b) == 0 || strcmp(v4, b) == 0) {

                locctr = locctr + 2;
            } else {
                locctr = locctr + 3;
            }

            }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);
    }




