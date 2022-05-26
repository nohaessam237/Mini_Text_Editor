#pragma once
#include"TextEditor.h"
namespace Project4 {


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


	/// <summary>
	/// Summary for ShowForm
	/// </summary>
	public ref class ShowForm : public System::Windows::Forms::Form
	{
	public:
		ShowForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShowForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ShowForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(300, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &ShowForm::label1_Click);
			// 
			// ShowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 780);
			this->Controls->Add(this->label1);
			this->Name = L"ShowForm";
			this->Text = L"ShowForm";
			this->Load += gcnew System::EventHandler(this, &ShowForm::ShowForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	public:	bool FileEmpty()
	{
		String^ ReadFile = File::ReadAllText("C:\\Users\\Lenovo\\source\\repos\\Project4\\Project4\\Text.txt");
		return (ReadFile->Length == 0);
	}
	public: void MarshalString(String^ s, string& os) {
			  using namespace Runtime::InteropServices;
			  const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			  os = chars;
			  Marshal::FreeHGlobal(IntPtr((void*)chars));
		  }
		
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	public: System::Void ShowForm_Load(System::Object^ sender, System::EventArgs^ e) {
		TextEditor Text;
		string t;
		String^ text;
		if (FileEmpty())
			text = "This File is Empty. \nPlease Add Lines First.";
		else
		{
			t = Text.show();
			text = gcnew String(t.c_str());
		}
		label1->Text = text;
		
	}
	};
}
