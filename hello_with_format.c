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
즉, printf는 서식 지정자의 내용과 출력할 문자열을 조합하여 최종 결과를 만들어내므로 다양한 방법으로 응용할 수 있습니다.
특히 공백도 문자열의 한 부분이므로 출력 결과에 영향을 미친다는 점 기억하세요.

%s: 문자열(string)의 약어로 s를 사용합니다.
*/