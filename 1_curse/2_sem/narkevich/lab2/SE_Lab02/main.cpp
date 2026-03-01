#include <iostream>
using namespace std;

void testFunc() {};


int main() {
	// Определяем локаль 
	setlocale(LC_CTYPE, "rus"); 

	// Объявляем переменные
	short X;
	int Y;
	long Z;
	float S;
	int n;
	bool valid;
	char secondLetterFamEn = 'i'; // 69
	char secondLetterFamRU = 'и'; // E8
	wchar_t firstLetterFamEn = L'S'; // 00 53
	wchar_t firstLetterFamRU = L'С'; // 04 21
	


	// Объявление и инициализация переменных firstBool в памяти: 00, secondBool в памяти 01 
	bool firstBool = false; // 00
	bool secondBool = true; // 01


	// Проверка на ввод отрицательного номера
	do
	{
		valid = true; // инициализируем valid
		cout << "Введите ваш номер по списку подгруппы n: "; cin >> n;
		if (n <= 0) valid = false;
	} while (!valid);
	
	


	// Инициализируем переменные X, Y, Z, S
	X = 9 + n; 
	Y = 10 + n;
	Z = 11 + n;
	S = 1.0 + n;

	// shord

	short positiveX = X; // 17 00
	short negativeX = -X; // e9 ff


	short maxShort = 0x7FFF;
	short minShort = 0x8000;


	unsigned short maxUnsignedShort = 0xffff;
	unsigned short minUnsignedShort = 0x0000;

	// int

	int positiveY = Y; // 18 00 00 00
	int negativeY = -Y; // e8 ff ff ff


	int maxInt = 0x7fffffff;
	int minInt = 0x80000000;


	unsigned int maxUnsignedInt = 0xffffffff;
	unsigned int minUnsignedInt = 0x00000000;

	// long

	long positiveZ = Z; // 19 00 00 00
	long negativeZ = -Z; // e7 ff ff ff


	long maxLong = 0x7fffffff;
	long minLong = 0x80000000;


	unsigned long maxUnsignedLong = 0xffffffff;
	unsigned long minUnsignedLong = 0x00000000;


	// float

	float positiveS = S; // 00 00 70 41
	float negativeS = -S; // 00 00 70 c1


	float inf = 1.0f / 0.0f;        //  00 00 80 7F
	float negInf = -1.0f / 0.0f;    //  00 00 80 FF
	float nan = 0.0f / 0.0f;        //  00 00 C0 FF


	float f = 2.f; // 2.00000000
	double d = 2.E-1L; // 0.20000000000000001

	char* pChar = &secondLetterFamEn; // 69
	*pChar += 3; // 6C
	wchar_t* pWchar_t = &firstLetterFamEn; // 00 53
	*pWchar_t += 3; // 00 56
	short* pShort = &positiveX; // 00 17
	*pShort += 3; // 00 1a
	int* pInt = &positiveY; // 00 00 00 18
	*pInt += 3; // 00 00 00 1b
	float* pFloat = &f; // 2.00000000
	*pFloat += 3; // 5.00000000
	double* pDouble = &d; // 0.20000000000000001
	*pDouble += 3; // 3.2000000000000002


	char &secondNameChar = secondLetterFamEn; // 6c
	wchar_t &secondNameWchar_t = firstLetterFamEn; // 56 00
	short &secondNameShort = positiveX; // 1a 0
	int &secondNameInt = positiveY; // 1b 00 00 00
	float &secondNameFloat = f; // 00 00 a0 40
	double &secondNameDouble = d; // 9A 99 99 99 99 99 09 40


	void (*funcPtr)() = testFunc;

	return 0;
}