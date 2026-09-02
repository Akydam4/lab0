#include <locale.h>
#include <stdio.h>
void name()
{
	setlocale(LC_ALL, "RUS");
	getchar();
	puts("   *********************************************");
	puts("   *                                           *");
	puts("   *  тема: Разработка консольного приложения  *");
	puts("   *                                           *");
	puts("   *      Выполнил Азиханов Д.М.              *");
	puts("   *                                           *");
	puts("   *********************************************");
	puts("  _  _   _  __  _  _");
	puts(" | | _| | | __|| ||_| ");
	puts(" |_| _|.|_||__.|_||_|");
}
void date()
{
	setlocale(LC_ALL, "RUS");
	getchar();
	puts("  _  _   _  __  _  _");
	puts(" | | _| | | __|| ||_| ");
	puts(" |_| _|.|_||__.|_||_|");
}
void main()
{
	name();
	date();
}