#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int total=0,i;
    for(i=0;i<strlen(str);i++){
        if(str[i]>='0' && str[i]<='9'){
            total+=str[i]-'0';
        }
    }
    printf("%d",total);
}