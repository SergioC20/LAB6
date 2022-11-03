#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LABORATORIO6SERGIOCARDONA1222419::MyForm form;
	Application::Run(% form);
	return 0;
}