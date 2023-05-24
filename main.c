#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void array_input(int array[], intarr[6][5]) 
{
    FILE *file = fopen("test.txt","w");
    inti, a, b;
    char buff[5];
    srand(time(NULL));
    fprintf(file, "Massiv A\n");
    for (i = 0; i< 20; i++)
    {
        fprintf(file, strcat(itoa(*(array + i) = rand() % 100 - 50, buff, 10), "\n"));
    }
    fprintf(file, "Massiv B\n");
    for(a = 0; a < 6; a++) 
    {
        for( b = 0; b < 5; b++) 
        {
            fprintf(file, strcat(itoa(*(*(arr + a) + b) = rand() % 100 - 50, buff, 10), "\n"));
        }
    }
    fclose(file); 
}

void array_output(int array[], intarr[][5]) 
{
    FILE *file = fopen("test.txt","r");
    inti, a, b;
    char buff[5];
    printf("Massiv 1-A\n");
    for (i = 0; i< 20; i++)
    {
        printf("%s",fgets(buff, 5, file));
    }
    printf("Massiv 2-B\n");
    for(a = 0; a < 6; a++)
    {
        for(b = 0; b < 5; b++)
        {
            printf("%s",fgets(buff, 5, file));
        }
        printf("\n");
    }
    fclose(file); 
}

void calculate(int array[], intarr[][5])
{
    FILE *file = fopen("test.txt","a");
    inti,a,b;
    int min = 0;
    char buff[5], men[5];
    intx[5] = { 0 };
    int k1 = 0;
    int k2 = 0;
    scanf("%d", &k1);
    scanf("%d", &k2);
    for (i = 0; i< 20; i++)
    {
        if (i == k1){
            k1 = *(array + k1);
        }
        if (i == k2){
            k2 = *(array + k2);
        }
    }
    printf("k1 = %d k2 = %d\n", k1, k2);
   
    fprintf(file, "result A:\n");
    for (i = 0; i< 20; i++)
    {
        if (*(array + i) > 0)
        {
            printf("%d %d\n", *(array + i), *(array + i) - k1);
            fprintf(file, strcat(itoa(*(array + i) - k1, buff, 10), "\n"));
        }
        else 
        {
            printf("%d %d\n", *(array + i), *(array + i) - k2);
            fprintf(file, strcat(itoa(*(array + i) - k2, buff, 10), "\n"));
        }
    }
    for(  a = 0; a < 6; a++)
    {
        for(b = 0; b < 5; b++)
        {
            x[b] += *(*(arr + a) + b);
        }
    }
    for (i = 0; i< 5; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }   
    }
    printf("Minimal: %5d\n", min);
    fprintf(file, "result B:\n");
    fprintf(file, "Minimal: ");
    fprintf(file, itoa(min, men, 10));
    fclose(file);
    }
intmain()
{
    intarray[20], arr[6][5];
    array_input(array, arr);
    array_output(array, arr);
    calculate(array, arr);
    system("pause");
    return 0;
    }
