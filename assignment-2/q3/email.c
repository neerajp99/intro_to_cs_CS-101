#include <stdio.h>
#include <string.h>
#include<math.h> // For maths functions

int checkForAt (char addr[], int checkPos, int check, int matches) {
  for (int i = 0 ; addr[i] != '\0' ; i++) {
    if (addr[i] == '@') {
      checkPos = i;
      check = 1;
      break;
    } else {
      matches = 0;
      check = 0;
    }
  }
  return (check, checkPos);
}



int main(int x){
	char name[100];//Store the person's name
	char addr[100];//Store the email address
	int matches;//Store 0 or 1, depending on validity
	fgets(name, 100, stdin);//Find out what this does
	fgets(addr, 100, stdin);

  //Your Code goes here
  int check = 0, checkPos, nameArray[100], addrArray[100];
  checkForAt(addr,checkPos, check, matches );
  //printf("%s", name);
  printf("Matches: %d\n", matches);
  return 0;
}
