///check the frequency of a string

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    for(char i='a';i<='z';i++){
        int cnt=0;
        for(int j=0;j< strlen(s);j++){
            if(s[j]==i){
                cnt++;
            }
        }
        if(cnt>0)
            printf("%c = %d\n",i,cnt);
    }
}
