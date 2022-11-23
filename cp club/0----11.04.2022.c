///check the frequency of a string

#include <stdio.h>
#include <string.h>
int cnt[26];
int main()
{
    char s[1000];
    gets(s);
    int size=strlen(s);
    for(int i=0;i<size;i++){
        int x = (int) s[i]- 'a';
        cnt[x]++;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]>0){
            printf("%c = %d\n",i+97,cnt[i]);
        }

    }
    for(int i=0;i<26;i++){
        if(cnt[i]>0){
            int y=cnt[i];
            for(int j=0;j<y;j++)
                printf("%c",i+97);
        }

    }
    return 0;
}
