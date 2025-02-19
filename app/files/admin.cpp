#include "admin.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
static void Main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::admin form;
	Application::Run(% form);
}
