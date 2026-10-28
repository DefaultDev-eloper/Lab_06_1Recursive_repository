#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void CreateRec(int* b, const int size, const int Low, const int High, int i) {
	if (i < size) {
		b[i] = Low + rand() % (High - Low + 1);
		CreateRec(b, size, Low, High, i + 1);
	}
}

void PrintRec(const int* b, const int size, int i) {
	if (i < size) {
		cout << setw(4) << b[i];
		PrintRec(b, size, i + 1);
	}
	else
		cout << endl;
}

int CountRec(const int* b, const int size, int i) {
	if (i >= size)
		return 0;

	if (b[i] % 2 == 0 && b[i] <= 0)
		return 1 + CountRec(b, size, i + 1);
	else
		return CountRec(b, size, i + 1);
}

int SumRec(const int* b, const int size, int i) {
	if (i >= size)
		return 0;

	if (b[i] % 2 == 0 && b[i] <= 0)
		return b[i] + SumRec(b, size, i + 1);
	else
		return SumRec(b, size, i + 1);
}

void ZeroRec(int* b, const int size, int i) {
	if (i < size) {
		if (b[i] % 2 == 0 && b[i] <= 0)
			b[i] = 0;
		ZeroRec(b, size, i + 1);
	}
}

int main() {
	srand((unsigned)time(NULL));

	const int size = 24;
	int b[size];

	int Low = -15;
	int High = 75;

	CreateRec(b, size, Low, High, 0);

	cout << "Original array: ";
	PrintRec(b, size, 0);
	cout << endl;

	int count = CountRec(b, size, 0);
	int sum = SumRec(b, size, 0);
	ZeroRec(b, size, 0);

	cout << "Count of the elements: " << count << endl;
	cout << "Sum of the elements: " << sum << endl;

	cout << endl;
	cout << "Modified array: ";
	PrintRec(b, size, 0);

	return 0;
}