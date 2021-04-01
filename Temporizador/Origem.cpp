#include "MyForm.h"

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Temporizador::MyForm form;
	Application::Run(% form);
}