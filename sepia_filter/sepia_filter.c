#include <stdio.h>
#include <conio.h>



int main(int argc, char* argv[])
{
	FILE *in;

	fopen_s(&in,"pict.jpg","rb");//��������� ��������� � ��������� ���� ��� ������ � �������� ������ 

	if (in==NULL) 
	{
		printf("Can not open the file");
		_getch();
		return 1; //�����
	}


	fclose(in);
	_getch();
	return 0;
}

