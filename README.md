# 심화 프로그래밍 2024
IoT 개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
    - Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행
	- 변수 : 무언가를 저장할 수 있는 공간이지만 안에 들어가 있는 값 변경 가능 -> RAM으로부터 할당받음
	- 상수 : 무언가를 저장할 수 있는 공간이지만 안에 들어가 있는 값을 변경 못함
	- m = 10 : 오른쪽에 있는 것을 왼쪽에 집어넣어라 # 대입연산자
	
- C++ 
    - 메인함수 한개 필요 -> 프로그램 실행  # int main(){} # 함수는 괄호가 있고 변수는 괄호가 없음
    - int : 출력 / main : 함수명 / () : 입력 -> int main(){} : 함수의 정의!!
	- int 대신 void가 적혀있으면 출력이 없음을 뜻함 / ()가 비워져 있으면 입력이 없음을 뜻함
	
	- 변수를 사용하려면 변수선언을 먼저 해야함 
	- 문자는 '' / 문자열은 ""
	- 지역변수는 어떤 범위 안에서만 사용 가능, 전역변수는 어디에도 소속되어있지 않아서 모든 프로그램에서 사용 가능(int global = ) 
	
    - 자료형
	    - 문자 : 문자(char)/ 문자열
		- 숫자 : 정수(int)/ 실수
	- 함수 다양성
	    - 오버로딩 = 다중정의 : 함수 이름은 똑같고 입력이 다를 때 사용 가능
		- 오버라이딩 = 재정의(상속관계에서 일어난다) 
 
## 2일차
- C++
    - 클래스 안에 들어가는 함수를 '메서드'라고 부름!!!
	- 함수 선언 -> 함수 호출 -> 함수 정의 순서 // 함수 선언은 함수 정의의 머릿글?!만 가져오면 된다(EX. void func(); <- void func(){cout << "func() << endl;}
	
	- 매크로 함수 : #define SQUARE(x) ((x) x (x)) / 타입에 제약이 없는 함수이다
	- 인라인 함수 : 함수 정의 앞에 inline이라는 키워드가 붙음 (inline int SQUARE(int x) 
	- 참조 : 기존에 있던 것에 별명을 하나 더 짓는 것 (= 주소 Ex.문패) 
	
	-  const int num = 10; -> num 변수를 상수화시킨다.
	
- C 에서 메모리
    - 1. 스택 : 지역변수, 매개변수
	- 2. heap : 사용자에게 할당된 영역 -> 사용하려면 malloc()으로 할당을 받는다 - free()로 반환
	- 3. data : 함수, 전역변수, 상수, 문자리터럴
	
	- ![리터럴](https://raw.githubusercontent.com/qkrskdusdlqslek/basic-cpp-2024/main/images/리터럴.png)
	
- 포인터 
    -  주소를 뜻함 (스택에 있는 포인터변수)
	
- & / && 차이점
    - A & B : 비트연산자 -> A와 B를 논리곱연산을 해라.
	        - Ex. A: ob 1000 1111 / B: ob 1011 0010 => A&B : 1000 0010
			 
	- A && B : 논리연산자 - 논리곱 -> A가 참이고 B도 참인 경우 결과가 참.
	
- 배열
    - for문
	- 배열 이름은 주소다.
	 
## 3일차
- const
    - 상수화 시키는 것
    - const int는 하나의 타입이다.
    - const가 붙으면 상수도 참조가 가능하다.
	
- heap 
    - 사용자에게 할당된 영역 -> 사용하려면 malloc(C++: new)으로 할당을 받는다 - free(C++: delete)로 반환
	- new 연산자를 통해서 객체를 생성 (객체생성을 위해선 new 키워드를 꼭 사용해야 함!!) 
	- new , delete 키워드를 사용해야 함
	
- 접근제어 지시자
    - public : 어디서든 접근허용
	- private : 클래스 내에서만 접근허용

## 4일차
- 중간 정리

    - Class : 멤버변수와 멤버함수로 구성된다. (함수는 모두 전역함수이다..)
	        : 클래스 내부에는 멤버들의 선언으로 작성된다.
			: 멤버함수의 정의를 외부로 빼낸다.(스코프연산자 사용 -> '나는 어디 소속입니다'를 나타냄)
			: 일반적으로 멤버변수는 private, 멤버함수는 public의 접근제한을 사용한다.
			
- 클래스 기반의 두 가지 객체생성
    - ClassName objName;
	- ClassName *p = new ClassName;
	     - new 연산자는 힙영역에 메모리를 할당하고 그 주소를 리턴한다.
    - 타입 일치시켜야 함(무조건!!) 
	
- 멤버 이니셜라이저
    - 객체 생성시 초기화 되지 않는 멤버들을 초기화 할 때 사용한다. 즉 객체생성과 상관없이 미리 초기화되는 멤버들에게 초기화

## 5일차
- 중간 정리

    - 생성자(클래스 이름과 같은 멤버 함수로 출력은 없다)  
	        - 객체 생성시 자동으로 호출되는 멤버함수
			- 모든 클래스는 디폴트 생성자를 가지고 있다.
			- 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출은 불가능, 디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
			- -> Ex) StudentClass(int aID, int aage) -> 디폴트값이 없으므로 StudentClass s1;을 작성하면 오류// StudentClass();처럼 디폴트 생성자를 만들어주면 오류X
			- 멤버변수들의 초기화를 담당한다.
			
	- 멤버 이니셜라이저
	        : 객체 생성전에 선언과 동시에 초기화가 필요한 경우에 사용한다.
			: 참조 형태의 변수 선언
			: const 변수와 참조변수의 초기화에 사용
			: Ex) ID = aID; ---> : ID(aID)
			
	- 참조(&) -> 참조 변수를 사용할 때는 바로 초기화 시켜야 한다.
			
- 싱글톤패턴
    - 싱글톤은 말 그대로 혼자라는 뜻입니다. 클래스의 생성을 딱!! 1개로 정한다는 뜻. 따라서 해당 클래스의 객체는 static으로 생성

- 소멸자
    - 클래스 이름 앞에 '~'를 붙인다.
	- 오버로딩 불가 (입력값이 필요없다.)

- 포인터 배열 : 배열 --> 포인터를 저장하는 배열   
- 배열 포인터 : 포인터 --> 배열을 가리키는 포인터(배열의 주소를 저장하고 있는 포인터)

- this 포인터
    - 객체 자기자신을 가리키는 형태
	
- 복사 생성자 = 객체 복사
    - 객체를 복사할 때 호출되는 생성자
    - 복사생성자가 자동으로 호출된다.
    - 복사할 객체를 입력으로 가져야 하는데,, 이때 원본 객체의 참조를 입력으로 받아야 한다.
	- 복사생성자를 정의하지 않으면, 디폴트 복사 생성자가 자동으로 삽입됨
	- 복사생성자 입력부분은 객체의 참조타입으로 생성해야 함

## 6일차
- 호출과 실행은 다름!
    - 멤버 이니셜라이저에서 알 수 있음. 

- P.238 --> ReturnObjDeadTime 해석
    - ![ReturnObjDeadTime 해석](https://raw.githubusercontent.com/qkrskdusdlqslek/basic-cpp-2024/main/images/day06.png)

## 7일차
- 중간 정리
    - ![Practice01](https://raw.githubusercontent.com/qkrskdusdlqslek/basic-cpp-2024/main/images/Practice01.png)
	
- static 멤버변수(클래스 변수)
    - 객체 없이 클래스에 접근 가능한 변수
	
- instance 멤버변수(앞서 배운 모든 것들은 객체 변수임)
    - 객체를 생성해야만 접근 가능한 변수

- Mutable 키워드
    - 사용하면 const 함수 내에서의 값의 변경을 예외적으로 허용한다(상수화가 없어진다, 값 고정이 안된다..)

- explicit 키워드
    - 자신이 원하지 않은 형변환이 일어나지 않도록 제안하는 키워드

- 상속 : 확장의 의미(기존에 있는 것에서 +하는 것)
## 8일차

## 9일차

## 10일차
