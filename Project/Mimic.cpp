#include <iostream>
#include "Mimic.h"

// Editing out the third value as it serves no purpose as Mimics don't give you money
// Also Editing out m_worth as it serves no purpose

Mimic::Mimic(int x, int y)
	: PlacableActor(x, y)
//	, m_worth(worth)
{

}

void Mimic::Draw()
{
	std::cout << "S";
}