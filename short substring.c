#include<stdio.h>
int main()
{
    char b[1010];
    int n,j;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",b);
    for( j=1; b[j]!='\0'; j++)
    {
        if(b[j]==b[j+1])
        {
            for(int k=j; b[k]!='\0'; k++)
            {
                b[k]=b[k+1];
            }
        }
    }
        b[j]='\0';
        printf("%s\n",b);
    }
}

/*
#include<stdio.h>
int main()
{
    char s[1000];
    int i,t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        scanf("%s",s);
        for(i=1;s[i]!='\0';i++){
            if(s[i]==s[i+1]){
              for(int j=i;s[j]!='\0';j++){
                s[j]=s[j+1];
              }
            }
       }s[i]='\0';
        printf("%s\n",s);
    }
}*/
