#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
	setlocale(LC_ALL, "Russian");
	//Task 1
	
	int sum=0,counter=0;
	std::cout << "Task 1.\nArray:\n";
	int arr[]{ 54,23,76,87,5,34,24,55,23,99 };
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << ' ';
		if (arr[i] % 2 == 0) {
			sum += arr[i];
			counter++;
		}
	}
	std::cout << "\nArithmetic mean of even elements =" << sum / (double)counter<<"\n\n";
	
	//Task 2
	std::cout << "Task 2.\n Array:\n";
	const int size = 10;
	int arr2[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr2[i] = rand() % (70+1 - 50) + 50;
		std::cout << arr2[i] << ' ';
	}
	std::cout << "\nEnter any number from 50 to 70 ->";
	int N;
	std::cin >> N;
	std::cout << "\nArray elements included in the interval from " << N - 3 << " to " << N + 3 << " :\n";
	for (int i = 0; i < size; i++) {
		if (arr2[i] >= (N - 3) && arr2[i] <= (N + 3)) {
			std::cout << arr2[i] << " ";
		}
	}


	return 0;
}