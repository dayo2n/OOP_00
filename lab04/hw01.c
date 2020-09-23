// #include <string>
// #include <iostream>
#include <stdio.h>

int main()
{
    //std::string s;
    char word[100];

    //std::cout << "문자를 입력하세요(100자 이내)." << std::endl;
    printf("문자를 입력하세요(100자 이내).\n");

    //std::cin >> s;
    scanf("%[^\n]s", word);

    //std::cout << "입력된 문자는 " << s << "입니다." << std::endl;
    printf("입력된 문자는 %s 입니다.", word);

    // system("pause"); // keep terminal open
    return 0;
}
