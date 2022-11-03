#include <iostream>
#include <string>
using namespace std;

class Tower {
	int height;
	string TowerName;
public:
	Tower() { height = 1;}
	Tower(int height);
	Tower(string TowerName);
	Tower(string TowerName, int height);
	int getHeight();
	string getTowerName();
};


Tower::Tower(int height)
{
	this->height = height;
}

Tower::Tower(string TowerName)
{
	this->TowerName = TowerName;
	this->height = 1;
}

Tower::Tower(string TowerName, int height)
{
	this->TowerName = TowerName;
	this->height = height;

}

int Tower::getHeight()
{
	return this->height;
}

string Tower::getTowerName()
{
	return this->TowerName;
}


int main() {
	Tower myTower("myTower");
	Tower seoulTower("seoulTower",100);
	cout << myTower.getTowerName() + ":\t" << myTower.getHeight() << "m" << endl;
	cout << seoulTower.getTowerName() + ":\t" << seoulTower.getHeight() << "m" << endl;
}