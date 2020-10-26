#include "AddingAdmin.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main10(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StoreItemManager::AddingAdmin form;
	Application::Run(% form);
}
