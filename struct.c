#include<stdio.h>
#include<stdlib.h>
struct User 
	{
 
char *	firstName ;
char *	lastName ;
char *	address ;
char *	city ;
char 	state[2] ;
char 	zip[5] ;
char 	dob[10] ;		
} ;
int main()
{
File*infile;
infile = fopen("User.csv","r",delimiter(\t));
if(infile == NULL)
{
fprintf(stderr,"\nerror opening file");
return(1);
}
while(fread != NULL)
{
printf("first name = %c lastname = %c address = %c city = %c state = %c zip = %c dob = %c,firstname,lastname,address,city,state,zip,dob);
return 0;
}

}

