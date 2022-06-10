#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[102][102]= {{0}};
    char b[102]= {0};
    int i,j,c,max;
    c=0;
    //OUTPUT後的列數
    max=0;
    while(gets(b)) {
        //(1)b="234"
        //(2)b="abcd"
        for(i=0 ; i<=101; i++)

        {
            if(i<strlen(b))
            //(1)strlen(b)=3
            //(2)strlen(b)=4
                a[c][i]=b[i];
          //(1)a[0][0]=b[0]->a[0][1]=b[1]->a[0][2]=b[2]
          //(2)a[1][0]=b[0]->a[1][1]=b[1]->a[1][2]=b[2]->a[1]a[3]=b[3]
            else
                a[c][i]=' ';
        }
        c++;
        //(1)c=1
        //(2)c=2
        if(strlen(b)>max)
            max=strlen(b);
            //(1)max=3
            //(2)max=4
             printf("reverse string:\n");
    for(i=0 ; i<max; i++) {
        for(j=c-1 ; j>=0; j--){
            printf("%c",a[j][i]);}
    //(1)a[0][0]->a[0][1]->a[0][2]
    //(2)a[1][0]->a[0][0]->a[1][1]->a[0][1]->a[1][2]->a[0][2]->a[1][3]->a[0][3]
        printf("\n");
    }
    }
    return 0;
}