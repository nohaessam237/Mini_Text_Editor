#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;
using namespace std;
using namespace System::ComponentModel;
using namespace System::IO;
using namespace System::Collections::Generic;

[STAThreadAttribute]

void main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project4::MyForm form;
	Application::Run(% form);
}