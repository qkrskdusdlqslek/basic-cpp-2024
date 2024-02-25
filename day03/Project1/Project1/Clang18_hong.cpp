#include "Clang18_hong.h"
#include <iostream>

Hong::Hong(const std::string& name, int age) : name(name), age(age) {}

void Hong::ShowInfo() {
    std::cout << "���� " << age << " ��� " << name << "!" << std::endl;
}


/*
1. #include "clang18_hong.h":
-> �̴� ������ �ۼ��� ��� ������ "clang18_hong.h"�� ����.
-> �� ��� ���Ͽ��� Hong Ŭ������ ����.

2. #include <iostream>:
-> �̴� ǥ�� ���̺귯���� iostream ��� ������ ����.
-> �̴� ǥ�� ����� ��Ʈ���� ����ϱ� ���� �ʿ�.

3. Hong::Hong(const std::string& name, int age) :
-> name(name), age(age) {}:
-> �̴� Hong Ŭ������ �����ڸ� ����.
-> �����ڴ� Ŭ������ ��ü�� �ʱ�ȭ�ϴ� ����.
-> �� �����ڴ� ���ڿ� name�� ���� age�� �Ű������� �޾Ƶ��̰�,
-> �ʱ�ȭ ����Ʈ�� ����Ͽ� ��� ���� name�� age�� �ʱ�ȭ.

4. void Hong::ShowInfo() { ... }:
-> �̴� Hong Ŭ������ ShowInfo �޼��带 ����.
-> �� �޼���� ��ü�� ������ ����ϴ� ����.
-> �̸��� ���̸� ����ϴ� ������ ��¹��� ����.


*/


