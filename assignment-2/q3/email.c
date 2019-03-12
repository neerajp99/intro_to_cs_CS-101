#include <stdio.h>
int main(int x){
	char name[100];//Store the person's name
	char addr[100];//Store the email address
	int matches;//Store 0 or 1, depending on validity
	fgets(name, 100, stdin);//Find out what this does
	fgets(addr, 100, stdin);

	//Your code here


	//printf("%s", name);
	printf("%d\n", matches);
	return 0;
}
