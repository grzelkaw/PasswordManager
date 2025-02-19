#include "rejestracja.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]
static void Main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::rejestracja form;
	Application::Run(% form);
}
