
// 책에는 "stdafx.h" 라고 적혀있는데 이거 visual studio 용 이라고 한다. vsc 로 코딩하고 있으니 일단은 주석 처리 해둔다.
// 빌드 안되서 헤메다가 ..
// mac vscode c++ 로 검색했더니 , g++ 로 해야된다고 한다. 일단 g++ 이 뭔지 모르겠고 ..
// 현기증난다. 우선은 빌드 성공. 헬로우 월드 찍기 어렵구만... (30분 걸림)
#include <iostream>

int  main()
{
    std::cout << "Hello, World" << std::endl;
    return 0;
}
