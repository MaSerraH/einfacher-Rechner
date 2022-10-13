#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


void main(array<String^>^ argv)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);


	while (true)
	{
		Project::MyForm form;
		form.ShowDialog();

		break;
	}

}