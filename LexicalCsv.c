#include<stdio.h>
#include<stdlib.h> 

struct User
{
    char * firstName;
    char * lastName;
    int * DOB;
    int * userId;
};

int main()
{
    struct user;
    char firstName;
    char lastName;
    int userId;
    int DOB;
    char * linePtr;
    char * token;
    char line[400];
    FILE * userFile;

    userFile = open("user.csv", "r"); 

    if ( userFile == NULL )
    {
        printf("Unable to open the file !!!");
        return 2;
    }

    while ( userFile != NULL )
    {
        if ( fgets (line, sizeof(line), userFile))
        {
            linePtr = line;
                while (*linePtr)
                {
                    if (*linePtr == delimiter)
                    {
                        linePtr++;
                        printf("Token");
                    }
                    else
                    {
                        continue;
                    }
               } 
        }
    }

    fclose(userFile);
    return 0;
}
