#include <stdio.h>
#include <string.h>
int main(){
	char fname[100];
	printf("Enter Input file name: " );
	fgets(fname, 100, stdin);
  char foutn[100];
	printf("Enter Output file name: ");
	fgets(foutn, 100, stdin);
	int width;
	int height;
	int maxval;
  int *number;
  FILE *fins;
	FILE *fouts;

	fname [ strcspn(fname, "\r\n") ] = 0;
	fins= fopen(fname, "r");
	foutn [ strcspn(foutn, "\r\n") ] = 0;
	fouts = fopen(foutn, "w");

while(fscanf(fins,"%d",&number)==1){
     fprintf(fouts,"P3\n%d %d\n%\n", width,height,maxval);
     for (int i = 0 ; i < height ; i++){
     for (int j = 0 ; j < width ; j++){
        if (i+j)%maxval == i%maxval == j%maxval == 255{{
            (i+j)%maxval=0
            i%maxval=0
            j%maxval=0
        }
        else if{

        (i+j)%maxval == i%maxval == j%maxval == 0:
            (i+j)%maxval=255
            i%maxval=255
            j%maxval=255
        }
        else{
            (i+j)%maxval=(i+j)%maxval
            i%maxval=i%maxval
            j%maxval=j%maxval
        }
        fprintf(fout,"%d %d %d",(i+j)%maxval, i%maxval,j%maxval)
        }
     }
        fclose.fins()
        fclose.fouts()
     }
return 0;
}
