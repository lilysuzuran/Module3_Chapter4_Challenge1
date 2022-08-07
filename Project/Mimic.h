#pragma once
#include "PlacableActor.h"
#include <thread>

class Mimic : public PlacableActor
{
public:
	// Was copied from Money, but Mimic doesn't give you money when you touch it
	// Editing Out the third value

	Mimic(int x, int y);

	// Editing out this as it serves no purpose
	// int GetWorth() const { return m_worth; }

	virtual ActorType GetType() override { return ActorType::Mimic; }
	virtual void Draw() override;
private:
	// Editing out this as it serves no purpose
	// int m_worth;
};
