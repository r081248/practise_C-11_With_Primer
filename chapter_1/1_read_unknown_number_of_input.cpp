#include<iostream>

// When cin is used in conditional statement, state of cin is checked whether it is error condition or not... Error will be occured when type mismatches or EOF occurs......

int main(int argc, char **argv){

	int sum=0,temp=0;
	
	std::cout << "Enter values until get bored to get summed... when get bored press CTL+D to EOF" << std::endl;

	while(std::cin >> temp)  // Read until EOF {EOF is issued by ctl+D in UNIX Like OS, ctl+Z after that ENTER in Windows OS}
	{
		sum += temp;
	}

	std::cout << "Sum = " << sum << std::endl;

	return 0;
}
