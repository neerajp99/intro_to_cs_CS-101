#include <stdio.h>
#include <string.h>
#include<math.h>

//Function that verifies all the conditions and print out the matches statement
int checkForEmail (int atcheck, int atpos, char addr[], char name[], int matches, int nameArray[], int addrArray[] ) {
  //Checks the uppercase letters of email for their ascii values and add 2 so that they are changed to lowercase.
  for(int i = 0 ; i < atpos ; i++){
      if( (int)addr[i] >= 65 && (int)addr[i] <= 90){
          addrArray[i] = ((int)addr[i] + 32);
      }
      else{
          addrArray[i] = (int)addr[i];
      }
  }
  //Checks the uppercase letters of name for their ascii values and add 2 so that they are changed to lowercase.
  for(int i = 0 ; i < strlen(name) ; i++){
      if( (int)name[i] >= 65 && (int)name[i] <= 90){
          nameArray[i] = ((int)name[i] + 32);
      }
      else{
          nameArray[i] = (int)name[i];
      }
  }
  //Checks if a letter is there, it gives it a value of 0 and do not check it further.
  for(int i = 0 ; i < atpos ; i++){
      for(int j = 0 ; j < strlen(name);j++){
          if(addrArray[i] == nameArray[j]){
              addrArray[i] = 0;
              nameArray[j] = 0;
          }
      }
  }
  //Looping through and checking if there is any character is still remaining than there is zero match.
  for(int i = 0 ; i < atpos ; i++){
      if (addrArray[i] >= 97 && addrArray[i] <= 122){
          matches = 0;
          break;
      }
      // If no other conditions apply, then the email matches.
      else{
          matches = 1;
      }
  }
  if (matches == 1) {
    printf("%s\n", "Verified Successfully");
  }
  printf("%d\n", matches);
  return 1;
}

// Function that checks for email if it has @ or not and increment the value and sends the value to checkForEmail function
int checkForAt (char addr[], int checkPos, int check, char name[], int matches, int nameArray[], int addrArray[]) {
  //Looping thorugh the email enetered and checking for "@"
  for (int i = 0 ; addr[i] != '\0' ; i++) {
    //If there is "@" in the string, initialize the position as i and check as true
    if (addr[i] == '@') {
      checkPos = i;
      check = 1;
      break;
    }
    else {
      matches = 0;
      check = 0;
    }
  }
  //if check is true or @ is present, then call the function that returns the final match statement
  if (check == 1) {
    checkForEmail(check, checkPos, addr, name, matches, nameArray, addrArray);
  }
  return 1;
}

int main(int x){
	char name[100];//Store the person's name
	char addr[100];//Store the email address
	int matches;//Store 0 or 1, depending on validity
	fgets(name, 100, stdin);//Find out what this does
	fgets(addr, 100, stdin);
  //Your Code goes here
  int check = 0, checkPos, nameArray[100], addrArray[100];
  //Calling the function checkForAt which checks for the email
  checkForAt(addr, checkPos, check, name, matches, nameArray, addrArray );
  //printf("%s", name);
  // printf("Matches: %d\n", matches);
  return 0;
}
