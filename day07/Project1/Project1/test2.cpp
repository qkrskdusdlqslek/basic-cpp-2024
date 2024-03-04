#include <iostream>
#include <cstring>
using namespace std;

class Myclass {
private:
    char name[30];
    int age;

public:
    // 이름과 나이를 설정하는 멤버 함수
    void setNameAge(const char* _name, int _age) {
        strncpy_s(name, _name, sizeof(name)); // 문자열 복사 (_name의 길이를 초과하면 자동으로 NULL 문자 추가)
        age = _age;
    }

    // 이름을 반환하는 멤버 함수
    const char* getName() const {
        return name;
    }

    // 나이를 반환하는 멤버 함수
    int getAge() const {
        return age;
    }
};

class MyInfo : public Myclass {
private:
    char pNumber[20]; // 전화번호를 저장하는 멤버 변수

public:
    // 전화번호를 설정하는 멤버 함수
    void setPhoneNumber(const char* _pNumber) {
        strncpy_s(pNumber, _pNumber, sizeof(pNumber)); // 문자열 복사 (_pNumber의 길이를 초과하면 자동으로 NULL 문자 추가)
    }