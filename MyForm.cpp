#include "MyForm.h"
//using namespace lab11;
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	myForm::MyForm form;
	Application::Run(% form);
	return 0;
}
