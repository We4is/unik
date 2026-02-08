#include <iostream>

// SilkoNikita2007
// 53 69 6C 6B 6F 4E 69 6B 69 74 61 32 30 30 37 (Windows-1251. )
// 53 69 6C 6B 6F 4E 69 6B 69 74 61 32 30 30 37 (Utf - 8)
// 0053 0069 006C 006B 006F 004E 0069 006B 0069 0074 0061 0032 0030 0030 0037 (Utf - 16)


// СилкоНикита2007
// d1 e8 eb ea ee cd e8 ea e8 f2 e0 32 30 30 37 (Windows-1251. )
// D0 A1 D0 B8 D0 BB D0 BA D0 BE D0 9D D0 B8 D0 BA D0 B8 D1 82 D0 B0 32 30 30 37 (Utf - 8)
// 0421 0438 043B 043A 043E 041D 0438 043A 0438 0442 0430 0032 0030 0030 0037 (Utf - 16)

// Силко2007Nikita
// d1 e8 eb ea ee 32 30 30 37 4e 69 6b 69 74 61 (Windows-1251. )
// D0 A1 D0 B8 D0 BB D0 BA D0 BE 32 30 30 37 4E 69 6B 69 74 61 (Utf - 8)
// 0421 0438 043B 043A 043E 0032 0030 0030 0037 004E 0069 006B 0069 0074 0061 (Utf - 16)
 

int main() {
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "SilkoNikita2007";
	char rfie[] = "СилкоНикита2007";
	char lr[] = "Силко2007Nikita";
	char bfl[] = "Н.И.К.И.Т.А"; // cd 2e c8 2e ca 2e c8 2e d2 2e c0 00
	char lfl[] = "н.и.к.и.т.а"; // ed 2e e8 2e ea 2e e8 2e f2 2e e0 00

	wchar_t Lfie[] = L"SilkoNikita2007";
	wchar_t Rfie[] = L"СилкоНикита2007";
	wchar_t LR[] = L"Силко2007Nikita";

	std::cout << hello << lfie << std::endl;
	return 0;
}