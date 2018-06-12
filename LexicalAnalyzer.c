#include<stdio.h>
#include<stdlib.h> 
#include<stdbool.h>
#include<string.h>
#include<espace.h>

struct User
{
	char * firstName;
	char * lastName;
	int * DOB;
	char * userId;
};

int main()
{
	struct User;
	int maxToken = 10;
	char token[10];

	FILE * userFile;

	userFile = fopen("C:\\Users\\Saranya\\Development\\Genomigo_cpp\\Genomigo_cpp\\user.csv", "r");

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

		parseLine(char * linePtr, char delimiter, char * tokens[], int maxToken);
		char result = parseLine(linePtr, ';', tokens, maxToken);
		printf("%d" token were found",result");
		return 0;
	}
	int parseLine(char * linePtr, char delimiter, char * tokens[], int maxToken)
	{
		char* srcStr = (char*)malloc(strlen(linePtr) + 1);
		strcpy(srcStr, lineptr);
		int strlen = 0;
		int tokenCount = 0;
		if (srcStr[strlen] != delimiter && scrStr[strlen] != '\0' && scrStr[strlen] != 'espace')
		{
			tokens[tokenCount] = char*malloc(size of(char) * strlen + 1);
			tokens[tokenCount] = &scrStr[strlen];
			tokenCount++;
		}
		else
		{
			strlen++;
		}

		fclose userFile;
		return linePtr;
	}