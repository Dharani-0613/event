#include <stdio.h>
int main(){
	char username[20],char email[20],int number;
	printf("Enter username: ");
	scanf("%s",&username);
	printf("Enter email: ");
	scanf("%s",&email);
	printf("Enter your age: ");
	scanf("%d", &number);
	printf("Username: %s\n Email: %s\n Age: %d",username,email,number);
}
