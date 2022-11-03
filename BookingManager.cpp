#include <iostream>
#include <string>
using namespace std;

class Client {
protected:
	string name;
	string tel;
public:
	Client();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

Client::Client()
{
	this->name = " ";
	this->tel = " ";
}

void Client::set(string name, string tel)
{
	this->name = name;
	this->tel = tel;
}

class BookingManager {
	int a;
	int i = 0;
	int select = 0;
	string name, tel;
	Client *client = new Client[a];
	void show()
	{
		for (int i = 0; i < a; i++) {
			cout << "[" << i + 1 << "]" << client[i].getName() << client[i].getTel() << "\n";
		}
	}
	void search()
	{
		int b = 0;
		char name[50];
		cout << "\n계속 검색[6], 검색 종료[7] >>";
		cin >> b;
		while (b != 7) {
			cout << "검색할 이름을 입력하세요.";
			cin >> name;
			if (name == client[0].getName())
				cout << name << "의 번호는 " << client[0].getTel() << "입니다." << endl;
			if (name == client[1].getName())
				cout << name << "의 번호는 " << client[1].getTel() << "입니다." << endl;
			if (name == client[2].getName())
				cout << name << "의 번호는 " << client[2].getTel() << "입니다." << endl;
			if (name != client[0].getName() & name != client[1].getName() & name != client[2].getName())
				cout << "검색한 이름이 없습니다." << endl;
			cout << "\n계속 검색[6], 검색 종료[7] >>";
			cin >> b;
		}
	}
	void del()
	{
		int e = 0;
		for (int i = 0; i < a; i++) {
			cout << "[" << i + 1 << "]" << client[i].getName() << client[i].getTel() << "\n";
		}
		cout << "번호를 선택하면 삭제됩니다. >>";
		cin >> e;
	}
	void modify()
	{
		int d = 0;
		for (int i = 0; i < a; i++) {
			cout << "[" << i + 1 << "]" << client[i].getName() << client[i].getTel() << "\n";
		}
		cout << "수정할 번호를 선택하세요. >>";
		cin >> d;
		cout << "이름과 전화번호 입력 >>";
		cin >> name >> tel;
		cout << "[" << d << "]" << name << tel << "\n";
	}
	void exit()
	{
		cout << "\n프로그램을 종료합니다.\n" << endl;
	}
};

int main(int argc, const char *argv[])
{
	int a;
	int i = 0;
	int select = 0;
	string name, tel;
	cout << "등록할 인원수 >>";
	cin >> a;
	cout << a << "명의 이름과 전화번호를 입력합니다." << endl;
	Client *client = new Client[a];
	for (int i = 0; i < a; i++) {
		cout << "이름과 전화번호 입력:";
		cin >> name >> tel;
		client[i].set(name, tel);
	}
	cout << "저장되었습니다.\n" << endl;

	while (select != 5) {
		cout << "\n목록보기[1], 검색[2], 삭제[3], 수정[4], 종료[5] >>";
		cin >> select;
		if (select == 1)
			for (int i = 0; i < a; i++) {
				cout << "[" << i + 1 << "]" << client[i].getName() << client[i].getTel() << "\n";
			}
		if (select == 2)
		{
			int b = 0;
			char name[50];
			cout << "\n계속 검색[6], 검색 종료[7] >>";
			cin >> b;
			while (b != 7) {
				cout << "검색할 이름을 입력하세요.";
				cin >> name;
				if (name == client[0].getName())
					cout << name << "의 번호는 " << client[0].getTel() << "입니다." << endl;
				if (name == client[1].getName())
					cout << name << "의 번호는 " << client[1].getTel() << "입니다." << endl;
				if (name == client[2].getName())
					cout << name << "의 번호는 " << client[2].getTel() << "입니다." << endl;
				if (name != client[0].getName() & name != client[1].getName() & name != client[2].getName())
					cout << "검색한 이름이 없습니다." << endl;
				cout << "\n계속 검색[6], 검색 종료[7] >>";
				cin >> b;
			}
		}
		if (select == 3)
		{
			int e = 0;
			for (int i = 0; i < a; i++) {
				cout << "[" << i + 1 << "]" << client[i].getName() << client[i].getTel() << "\n";
			}
			cout << "번호를 선택하면 삭제됩니다. >>";
			cin >> e;
		}
		if (select == 4)
		{
			int d = 0;
			for (int i = 0; i < a; i++) {
				cout << "[" << i + 1 << "]" << client[i].getName() << client[i].getTel() << "\n";
			}
			cout << "수정할 번호를 선택하세요. >>";
			cin >> d;
			cout << "이름과 전화번호 입력 >>";
			cin >> name >> tel;
			cout << "[" << d << "]" << name << tel << "\n";
		}
		if (select == 5)
			cout << "\n프로그램을 종료합니다.\n" << endl;
	}
}