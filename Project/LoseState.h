#pragma once
#include "GameState.h"
#include <thread>

class StateMachineExampleGame;

class LoseState : public GameState
{
	StateMachineExampleGame* m_pOwner;

public:
	LoseState(StateMachineExampleGame* pOwner);
	~LoseState() = default;

	virtual bool Update(bool processInput = true) override;
	virtual void Draw() override;
};


