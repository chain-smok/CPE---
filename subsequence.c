#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[100000],t[100000];
    int i,j;
    //判斷s是不是t的子字串
    //s的長度一定要比t的長度還要小
    while(scanf("%s%s",&s,&t)!=EOF){
      i=0,j=0;
      //s=1234
      //t=123456
      for(i=0;i<strlen(s);i++){
        for(;s[i]!=t[j]&&j<strlen(t);j++);
        if(t[j]=='\0')break;
        j++;
      }
      if(s[i]=='\0')
        printf("Yes\n");
      else
        printf("No\n");

    }



}