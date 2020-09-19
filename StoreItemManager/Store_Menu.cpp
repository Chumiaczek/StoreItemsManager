#include "Store_Menu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main1(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StoreItemManager::Store_Menu form;
	Application::Run(% form);
}