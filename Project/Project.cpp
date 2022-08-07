#include <iostream>
#include "Game.h"
#include "AudioManager.h"
#include "StateMachineExampleGame.h"

#include <conio.h>
#include <chrono>
#include <thread>

using namespace std;
extern int keyPushed1 = 0;
extern int keyPushed2 = 0;

void keyPress()
{
	while (1)
	{
		while (!_kbhit());
		keyPushed1 = _getch();
		keyPushed2 = _getch();
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}


int main()
{
	Game myGame;

	StateMachineExampleGame gameStateMachine(&myGame);

	myGame.Initialize(&gameStateMachine);

	// Added this to make key input independent of the rest of the game
	thread First(keyPress);
	First.detach();

	myGame.RunGameLoop();

	myGame.Deinitialize();

	AudioManager::DestroyInstance();

	return 0;
}