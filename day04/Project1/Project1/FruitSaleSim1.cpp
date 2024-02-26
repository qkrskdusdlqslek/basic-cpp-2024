/*#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)     //---> 생성자(기능: 객체를 생성하고 초기화, Init: 초기화 시켜주는 것)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;                //판매갯수
		numOfApples -= num;                          //남은 사과갯수 (-=, +=: 복합대입연산자)
		myMoney += money;                           // 번 돈, myMoney = myMoney + money;
		return num;
	}
	void ShowSalesResult()
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매수익: " << myMoney << endl;
	}
};

class FruitBuyer
{
	int myMoney;         // private:
	int numOfApples;       // private:

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& refseller, int money)          //BuyApples를 호출하면서 
	{
		numOfApples += refseller.SaleApples(money);            //refseller랑 밑에 seller는 같은 객체이지만 다르다..
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void)                                //스택 영역
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);         //과일구매!

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}
*/