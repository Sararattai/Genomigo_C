#include<stdio.h>
#include<stdlib.h>
struct user
{
char * firstname;
char * lastname;
int * DOB;
int * userId
};
int main()
{
struct user;
char firstname,lastname;
int userId;
int DOB;
char p;
char * token;
FILE * pfile;
pfile = open("user.csv","r"),
if(pfile = NULL)
    printf("error in the file !!!");
while(fgets(line,size of line,pfile)!= NULL)
      {
    p = line;
 while(*p)
    if(*p == delimiter)
        p++;
    else
        continue;

fclose();
}
return 0;
}
