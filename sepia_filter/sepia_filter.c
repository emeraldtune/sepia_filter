#include <stdio.h>
#include <conio.h>



int main(int argc, char* argv[])
{
	FILE *in;

	fopen_s(&in,"pict.jpg","rb");//открываем указанный в аргументе файл для чтения в бинарном режиме 

	if (in==NULL) 
	{
		printf("Can not open the file");
		_getch();
		return 1; //выход
	}


	fclose(in);
	_getch();
	return 0;
}

