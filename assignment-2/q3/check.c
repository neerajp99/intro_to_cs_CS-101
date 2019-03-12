#include <stdio.h>
#include <string.h>
#include<math.h>
int main(int x){
	char name[100];//Store the person's name
	char addr[100];//Store the email address
	int matches;//Store 0 or 1, depending on validity
	fgets(name, 100, stdin);//Find out what this does
	fgets(addr, 100, stdin);
    int atcheck = 0;
    int atpos;
    int nameArray[100];
    int addrArray[100];
	//Your code here
    for (int i = 0; addr[i] != '\0';i++){
        if (addr[i] == '@'){
            atcheck = 1;
            atpos = i;
            break;
        }else{
            matches = 0;
            atcheck = 0;
        }
    }
    if(atcheck == 1){
        for(int i = 0 ; i < atpos ; i++){
            if( (int)addr[i] >= 65 && (int)addr[i] <= 90){
                addrArray[i] = ((int)addr[i] + 32);
            }else{
                addrArray[i] = (int)addr[i];
            }
        }
        for(int i = 0 ; i < strlen(name) ; i++){
            if( (int)name[i] >= 65 && (int)name[i] <= 90){
                nameArray[i] = ((int)name[i] + 32);
            }else{
                nameArray[i] = (int)name[i];
            }
        }
        for(int i = 0 ; i < atpos ; i++){
            for(int j = 0 ; j < strlen(name);j++){
                if(addrArray[i] == nameArray[j]){
                    addrArray[i] = 0;
                    nameArray[j] = 0;
                }
            }
        }
        for(int i = 0 ; i < atpos ; i++){
            if (addrArray[i] >= 97 && addrArray[i] <= 122){
                matches = 0;
                break;
            }else{
                matches = 1;
            }
        }
    }
	printf("%d\n", matches);
	return 0;
}
