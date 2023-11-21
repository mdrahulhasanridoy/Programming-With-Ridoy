#include<stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int count=0;
    for(int i=0; a[i]!='\0';i++)
    {
        count++;
    }
    /* Convert for loop to while loop
    
    int i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    
    */
    printf("%d\n",count);
    return 0;
}

/*
Also we can use strlen() function to find the length of a string.
strlen() function is defined in string.h header file.

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int count=strlen(a);
    printf("%d\n",count);
    return 0;
}


*/