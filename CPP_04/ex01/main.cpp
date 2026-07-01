#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* animals[4];

	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();
	// (void) i;
	delete(animals[0]);
	delete(animals[1]);
	delete(animals[2]);
	delete(animals[3]);

	Dog D1;
	Dog D2(D1);
	Dog D3;

	D1 = D1;
	return 0;
}
