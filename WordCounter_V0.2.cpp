#include "iostream"
#include "string"
#include "stdio.h"

using namespace std;

FILE *file;
int chars=0,words=0,symbols=0,s[500];
char c;

void analyse()
{
    while((c=fgetc(file))!=EOF) 
    {
        chars++;
        if (((c<='z')&&(c>='a'))||((c<='Z')&&(c>='A'))||((c>='0')&&(c<='9')))
        {
            words++;
            while((c=fgetc(file))!=EOF)
            {    
                chars++;
                if (((c<='z')&&(c>='a'))||((c<='Z')&&(c>='A'))||((c>='0')&&(c<='9')))
                {
                }
               
                else if (c==' ')
                    break;
                
            }
        }
        
    }

}//分析所有字符数、单词数

int main ()
{
    char name[30],b;
    int a,i,j;
    cout<<"请输入源文件名:";
    for(;;)
    {
        cin>>name;
        if((file=fopen(name,"r"))!=NULL) 
            break;
        else 
            cout<<"错误！请重新输入源文件名:";
    }
    analyse();
    fclose(file);
    cout<<"字符数："<<chars<<endl;
    cout<<"单词数："<<words<<endl;
    cout<<"按任意键返回：";
    b=getchar();
    b=getchar();
                   
        system("cls");
  
    return 0;
}
