#include <stdio.h>

int main()
{
	printf("%s\n", "Hello, world!");
	printf("%s %s\n", "Hello,", "1234");
	printf("%s, %s\n", "Hello", "1234");
	printf("%s%s\n", "Hello ", "1234");
	printf("%s%s\n", "Hello", " 1234");

	return 0;
}

/*
��, printf�� ���� �������� ����� ����� ���ڿ��� �����Ͽ� ���� ����� �����Ƿ� �پ��� ������� ������ �� �ֽ��ϴ�.
Ư�� ���鵵 ���ڿ��� �� �κ��̹Ƿ� ��� ����� ������ ��ģ�ٴ� �� ����ϼ���.

%s: ���ڿ�(string)�� ���� s�� ����մϴ�.
*/