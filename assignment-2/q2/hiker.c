#include <stdio.h>
#include <string.h>
#define MAX 100000 //global variables are good

//Function to check the highest elevation in an array
int checkHighest (int highest[], int highestLength) {
  //initially the highest elevation is the first item of the array
  int max = highest[0];
  //looping over the array and checking for the highest elevation
  for (int j = 0 ; j < highestLength ; j++) {
    if (highest[j] > max) {
      max = highest[j];
    }
  }
  printf("Higest elevation: %d\n", max);
  return 1;
}

//Function to check the lowest elevation in an array
int checkLowest (int lowest[], int lowestLength) {
  //initially the lowest elevation is the first item of the array
  int min = lowest[0];
  //looping over the array and checking for the lowest elevation
  for (int j = 0 ; j < lowestLength ; j++) {
    if (lowest[j] < min) {
      min = lowest[j];
    }
  }
  printf("Lowest elevation: %d\n", min);
  return 1;
}


//Fucntion to check the string and return the final height
char checkUpDowns (char elev[], int height) {
  int ctrUp, ctrDown = 0;
  int highest[MAX]= {};
  int lowest[MAX]= {};
  int x = 0, y = 0;
  // length of the string of the trail entered by the user
  int elevLength = strlen(elev);
  // printf("%d\n", elevLength - 1);
  // looping over the trail string and checking for 'up' and 'down'
  for (int i = 0 ; i < elevLength - 1 ; i++) {
    //Checking for up substring and increasing the height by 5m
    if (elev[i] == 'u' && elev[i+1] == 'p') {
      ctrUp++;
      height += 5;
      highest[x] = height;
      x++;
    }
    //Checking for down substring and decreasing the height by -5m
    if (elev[i] == 'd' && elev[i+1] == 'o' && elev[i+2] == 'w' && elev[i+3] == 'n') {
      ctrDown++;
      height -= 5;
      lowest[y] = height;
      y++;
    }
  }
  // printf("Up Counter: %d\n", ctrUp);
  // printf("Down Counter: %d\n", ctrDown);
  //Printing the final height
  // printf("Final Height: %d%c\n", height, 'm' );
  checkHighest(highest, x);
  checkLowest(lowest, y);
  return 1;
}

int main(int x){
	char elev[100];//The trail
	fgets(elev, 100, stdin);
	int h = 0; //The current height
  //Function that takes the trail string and returns the final height
  checkUpDowns(elev, h);
  //No need to the below statement here
	// printf("%d\n", h);
	//printf("%s", elev);
	return 0;
}
