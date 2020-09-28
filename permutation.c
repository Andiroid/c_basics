#include <stdio.h>
#include <string.h>
#define MAX_DEPTH 3

void iter_combo(char n[], int x, int CURR_DEPTH, char* result);

int main(void)
{
    char *n = "Aabc";
    //char *n = "abcdefghijklmnopqrstuvwxyz"
              //"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
           // "0123456789"
           // "!@#$\%^&*()_-+={}[]\\|:;'\"<>,./?~`"
    int x = strlen(n);

    iter_combo(n, x, 0, NULL);
}

void iter_combo(char n[], int x, int CURR_DEPTH, char* result)
{

    if (CURR_DEPTH < MAX_DEPTH) 
    {
        char single[MAX_DEPTH + 1];
        
        if (result)
        {
            strcpy(single,result);
        }
        
        for (int i = 0;i< x;i++) 
        {
            single[CURR_DEPTH] = n[i];
            single[CURR_DEPTH + 1] = '\0';
            iter_combo(n,x,CURR_DEPTH + 1,single);
            //printf("%s\n",single);
        }
    }
    //int compare;
    if (CURR_DEPTH > 0)
    {
        /*
        compare = strcmp(result, "Andi");
        if(compare == 0)
        {
            printf("%s\n", result);    
        }
        */
        printf("%s\n", result);
    }
    
}
