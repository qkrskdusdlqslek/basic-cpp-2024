/*#pragma once
#ifndef HONG_CLASS_H
#define HONG_CLASS_H

#include <string>

class Hong {
public:
    Hong(const std::string& name, int age); // ������
    void ShowInfo(); // ���� ��� �޼���

private:
    std::string name;
    int age;
};

#endif


1. #pragma once:
-> �̴� ��� ������ �� ���� ���Եǵ��� �ϴ� ��ó�� ���ù�.
-> #ifndef, #define, #endif�� ����ϴ� ��ſ� #pragma once�����ε� �ߺ� ������ ����

2. #ifndef clang18_hong.h �� #define clang18_hong.h: ��� ������� ����.
-> �̴� �ߺ� ������ �����ϴµ� ���.
-> ��� ������ ó������ ���Ե� ���� clang18_hong.h�� ���ǵ��� �ʾ����Ƿ�, ifndef ��� ���� �ڵ尡 ó��

3.#include <string>: ǥ�� ���̺귯���� string ��� ������ ����.
-> �̴� std::string�� ����ϱ� ���� �ʿ�.

4. class Hong { ... };: Hong Ŭ������ ���Ǹ� ����.
-> �� Ŭ�������� �����ڿ� ���� ��� �޼���.

5. public: Ŭ���� ����� ���� �����ڸ� ����.
-> �� ��� �����ڿ� ShowInfo �޼���� public���� ����Ǿ� �ܺο��� ����.

6. Hong(const std::string& name, int age);:
-> �����ڴ� Ŭ������ ��ü�� �ʱ�ȭ�ϴ� ����.
--> �� �����ڴ� ���ڿ� name�� ���� age�� �Ű������� �޾Ƶ���.

7. void ShowInfo();:
-> �� �޼���� Hong Ŭ������ ��ü ������ ���.

8. private::
-> �� ���� �����ڴ� ���Ŀ� ������ ��� �������� Ŭ���� ���ο����� ���� �����ϵ��� ����.

9. std::string name; �� int age;:
-> �̵��� Hong Ŭ������ ��� ����.
--> name�� ȫ�浿�� �̸��� �����ϴ� ���ڿ��̸�, age�� ȫ�浿�� ���̸� �����ϴ� ����.

10. #endif:
-> ��� ������� ���� ��Ÿ��.
--> �̷ν� �ߺ� ���� ���� ���ù��� ������ �� �κб����� ����.

4.

*/