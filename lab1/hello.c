#include <stdio.h>
#include <stdlib.h>

void helloworld(){

	printf("Hello World\n");
	
}

void helloname(char* name){

	printf("Hello %s\n",name);

}

int main(int argc, char* argv[]){

	switch(argc){
			
		case 1:
			helloworld();
			break;	
		case 2:
			helloname(argv[1]);
			break;
		default:
			printf("Goodbye World\n");
	}

	return 0;
}
