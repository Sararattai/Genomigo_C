#include<stdio.h>
#include<stdlib.h> 
#include<stdbool.h>
#include<ctype.h>

void parseLine(char * linePtr);

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

	userFile = fopen("C:\\Users\\Saranya\\Development\\Genomigo_cpp\\Debug\\user.csv", "r");

	if (userFile == NULL)
	{
		printf("Unable to open the file !!!");
		return 2;
	}

	while (true)
	{
		linePtr = fgets(line, sizeof(line), userFile);
		if (linePtr == NULL)
		{
			break;
		}

		parseLine(linePtr);

	}

	fclose(userFile);
	return 0;
}

void parseLine(char * linePtr)
{
	while (*linePtr)
	{
		if (isalpha(*linePtr))
		{
			linePtr++;
			printf("%c", *linePtr);
		}

	}
}