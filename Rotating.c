#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[102][102]= {{0}};
    char b[102]= {0};
    int i,j,c,max;
    c=0;
    max=0;
    while(gets(b)) {//b="234"
        for(i=0 ; i<=101; i++)

        {
            if(i<strlen(b))//strlen(b)=3
                a[c][i]=b[i];//a[0][0]=b[0]->a[0][1]=b[1]->a[0][2]=b[2]
            else
                a[c][i]=' ';
        }
        c++;//c=1
        if(strlen(b)>max)
            max=strlen(b);//max=3
             printf("reverse string:\n");
    for(i=0 ; i<max; i++) {
        for(j=c-1 ; j>=0; j--){
            printf("%c",a[j][i]);}//a[0][0]->a[0][1]->a[0][2]
        printf("\n");
    }
    }
    return 0;
}