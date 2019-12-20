#include "MyForm.h"
#pragma comment(lib, "MSCOREE.lib")
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array< String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	grafQueue::MyForm form;
	Application::Run(% form);
}