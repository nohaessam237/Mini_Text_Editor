#pragma once
#include"TextEditor.h"
#include <vector>
#include <fstream>
#include <string>
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
	/// Summary for FormAdd
	/// </summary>
	public ref class insertionForm : public System::Windows::Forms::Form
	{
	public:
		insertionForm(void)
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
		~insertionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;

	protected:


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(insertionForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(302, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 67);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &insertionForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(183, 202);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(443, 22);
			this->textBox3->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(302, 322);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 67);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &insertionForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(283, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(253, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"\"What\'s your Sentence\?\"";
			this->label2->Click += gcnew System::EventHandler(this, &insertionForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(267, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(321, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"\"What\'s the number of the line\?\"";
			this->label3->Click += gcnew System::EventHandler(this, &insertionForm::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(349, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 22);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &insertionForm::textBox1_TextChanged);
			// 
			// insertionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(800, 401);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Name = L"insertionForm";
			this->Text = L"Insertion Form";
			this->Load += gcnew System::EventHandler(this, &insertionForm::insertionForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void ShowAdd() 
		{
			label2->Visible=true;
			textBox3->Visible = true;
			button1->Visible = true;
			
			label3->Visible = false;//insert
			
			button2->Visible = false;//insert
			//button3->Visible = false;//insert
			textBox1->Visible = false;//number of line

			ShowDialog();

		}
	public: void ShowInsert()
			  {
				  label2->Visible = true;//What is sentence 
				  textBox3->Visible = true;//sentence
				  button1->Visible = false;//Add

				  label3->Visible = true;//"What's the number of the line?"
				  textBox1->Visible = true;//number of line
				  button2->Visible = true;//Done
				 // button3->Visible = true;//insert

				  ShowDialog();

			  }
	public:	bool FileEmpty()
		{
			String^ ReadFile = File::ReadAllText("C:\\Users\\Lenovo\\source\\repos\\Project4\\Project4\\Text.txt");
			return (ReadFile->Length == 0);
		}
	public:	bool isNumber(const string& str)
		  {
			  for (char const& c : str) {
				  if (std::isdigit(c) == 0) return false;
			  }
			  return true;
		  }
	public:	void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		TextEditor Text;

		string str;
		String^ s;
		if (textBox3->Text->Length != 0)
		{
			if (FileEmpty())
			{
				s = textBox3->Text;
				MarshalString(s, str);
				Text.addFirstLine(str);
				textBox3->Text = "";
			}
			else
			{
				s = textBox3->Text;
				MarshalString(s, str);
				Text.addLine(str);
				textBox3->Text = "";
			}
		}

	}
	private: System::Void insertionForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


		TextEditor Text;
		string str1;
		String^ s1;
		string str2;
		String^ s2;
		
		int n;
		s1 = textBox1->Text;
		MarshalString(s1, str1);
		if (isNumber(str1))
		{
			stringstream ss;
			ss << str1;
			ss >> n;
			if (n > Text.GetSize() || n < 1)
			{
				n = Text.GetSize();
				string t = "This number is out of range \nPlease put a number between 1 and " + to_string(n);
				String^ text = gcnew String(t.c_str());
				MessageBox::Show(text, "Errorrrrrrrrrrrrrrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			}
			else
			{
				s2 = textBox3->Text;
				MarshalString(s2, str2);
				Text.Move(n);
				Text.insertAt(n, str2);
			}
		}
		else
		{
			MessageBox::Show(" That is Not a Number", "Errorrrrrrrrrrrrrrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		textBox1->Text = "";
		textBox3->Text = "";

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
