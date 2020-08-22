#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string kind;
	float speed;
	double weight;
	string habitat;
public:
	Animal() : kind("NO KIND"), speed(0), weight(0), habitat("NOHABITAT")
	{	}
	Animal(string kind, float speed, double weight, string habitat)
		: kind(kind), speed(speed), weight(weight), habitat(habitat)
	{	}

	void Move()
	{
		cout << "Animal walked 1 km" << endl;
		weight = weight - 0.01;
	}
	void Show() const
	{
		cout << "Kind: " << kind << endl;
		cout << "Speed: " << speed << " km/h" << endl;
		cout << "Weight: " << weight << " kg" << endl;
		cout << "Habitat: " << habitat << endl;
	}
	void Say(string sound)
	{
		cout << kind << " say: " << sound << endl;
	}
};

class Bird : public Animal
{
private:
	string soundB;
public:
	Bird() : soundB("NO SOUND")
	{	}
	Bird(string kind, float speed, double weight, string habitat, string sound, int maxS) : Animal(kind, speed, weight, habitat), soundB(sound)
	{	}
	void Print() const
	{
		Animal::Show();
	}
	void Say()
	{
		Animal::Say(soundB);
	}
};

class Reptile : public Animal
{
private:
	string soundB;
public:
	Reptile() : soundB("NO SOUND")
	{	}
	Reptile(string kind, float speed, double weight, string habitat, string sound) : Animal(kind, speed, weight, habitat), soundB(sound)
	{	}
	void Print() const
	{
		Animal::Show();
	}
	void Say()
	{
		Animal::Say(soundB);
	}
};

class Fish : public Animal
{
public:
	Fish(string kind, float speed, double weight, string habitat) : Animal(kind, speed, weight, habitat)
	{	}
	void Print() const
	{
		Animal::Show();
	}
	void Say()
	{
		Animal::Say("Silent like a fish\nP.S.   Biulk\n");
	}
};

int main()
{
	Bird c("Gravedigger", 120, 3.2, "Near the forest", "Kawwwww kaawwwww", 240);
	c.Say();
	c.Print();
	Reptile r("Screech agama", 10, 0.04, "Tracts of sand", "PSHHSHHshhs");
	r.Say();
	r.Print();
	Fish f("Emperor angelfish", 15, 0.045, "Tropical waters");
	f.Say();
	f.Print();
	return 0;
}