#include "Main.h"

void start()
{
	Console::Create(60, 60);
	Console::SetFont(L"Terminal", 8, 8);
	Console::SetColorPalette(cpDefault);
}

void update()
{
	Console::Update();
}