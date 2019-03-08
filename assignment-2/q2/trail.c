#include <stdio.h>
#include <string.h>

//Fucntion to check the string and return the final height
char checkUpDowns (char elev[], int height) {
  int ctrUp, ctrDown = 0;
  // length of the string of the trail entered by the user
  int elevLength = strlen(elev);
  // printf("%d\n", elevLength - 1);
  // looping over the trail string and checking for 'up' and 'down'
  for (int i = 0 ; i < elevLength - 1 ; i++) {
    //Checking for up substring and increasing the height by 5m
    if (elev[i] == 'u' && elev[i+1] == 'p') {
      ctrUp++;
      height += 5;
    }
    //Checking for down substring and decreasing the height by -5m
    if (elev[i] == 'd' && elev[i+1] == 'o' && elev[i+2] == 'w' && elev[i+3] == 'n') {
      ctrDown++;
      height -= 5;
    }
  }
  // printf("Up Counter: %d\n", ctrUp);
  // printf("Down Counter: %d\n", ctrDown);
  printf("Final Height: %d%c\n", height, 'm' );
  return 1;
}

int main(int x){
	char elev[100];//The trail
	fgets(elev, 100, stdin);
	int h = 0; //The current height
  //Function that takes the trail string and returns the final height
  checkUpDowns(elev, h);
  //No need to the below statement
	// printf("%d\n", h);
	//printf("%s", elev);
	return 0;
}
