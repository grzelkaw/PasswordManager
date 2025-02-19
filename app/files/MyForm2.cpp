#include "MyForm2.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
static void Main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm2 form;
	Application::Run(% form);
}
