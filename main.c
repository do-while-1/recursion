#include "stdio.h"

void print(int x);

int main(){

	print(50);
	return 0;

}

void print(int x){
	if(x > 0){
		printf("%i\n", x);
		x--;
		print(x);
	}
}
