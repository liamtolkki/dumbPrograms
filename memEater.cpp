//WARNING:
//This will eat all of your memory!!!!!
//you've been warned!!!

#include <stdio.h>
#include <iostream>
class BigData{
	//big use of memory
long *a;
	public:
	BigData() {
	a = new long[0x1000]; //big chomp!
	printf("big bite out of your yummy RAM! :D\n");
	}
};
int main(){
	std::cout << "WARNING! THIS WILL EAT ALL OF YOUR MEMORY FOR NO REASON..." << std::endl;
	std::cout << "Start eating memory? y/n: ";
	char c;
	std::cin >> c;
	if (c == 'y' || c == 'Y') {
		std::cout << "EATING MEMORY!" << std::endl;
		while (true){
			BigData chomp = BigData();
		}

	} else
		std::cout << "Truely, a wise soul!\nBYE!" << std::endl;

	return 0;
}
