#include "AddItem.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main3(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StoreItemManager::AddItem form;
	Application::Run(% form);
}