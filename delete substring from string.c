//program to delete a substring from a text

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i = 0, k, j = 0, n = 0, copy_loop = 0;
    char text[100], str[20], new_text[100];
    printf("\n Enter the main String: ");
    gets(text);
    printf("\n Enter the string to be deleted: ");
    gets(str);
    while(text[i] != '\0')
    {
        j=0, k=i;
        while(text[k] == str[j] && str[j] != '\0')
        {
            k++;
            j++;
        }
        if(str[j] == '\0')
        {
            copy_loop = k;
        }
        new_text[n] = text[copy_loop];
        i++;
        copy_loop++;
        n++;
    }
    new_text[n] = '\0';
    printf("\n The new String is : ");
    puts(new_text);
    getch();
    return 0;
}
