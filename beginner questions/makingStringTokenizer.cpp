#include<bits/stdc++.h>
using namespace std;
char* mystrtok(char * s,char* del)
{
    static char * input =NULL;
    if(s!=NULL)
    {
        input=s;
    }
    if(input==NULL)
    {
        return NULL;
    }
    char * output = new char[strlen(input)];
    int count=0;
    int i=0,j=0;
    for(;input[i]!='\0';i++)
    { if(count==strlen(del)-1)
        {
           output[i-count]='\0';
           input=input+i;
           return output;
        }
            output[i]=input[i];

        if(input[i]==del[j])
        {
            count++;
            j++;
        }
     else{
         count=0;
         j=0;
     }
    }
    input=NULL;
    output[i]='\0';
    return output;
}

int main()
{
    char s[100] = "jdb is skj,is skjfb";
   char del[100]="s s";
    char* ptr = mystrtok(s,del);
    while(ptr!=NULL)
    {
        cout<<ptr<<endl;
        ptr = mystrtok(NULL,del);
    }
    return 0;
}
