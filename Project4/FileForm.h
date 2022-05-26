#pragma once

#include"ShowForm.h"
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
	/// Summary for FileForm
	/// </summary>
	public ref class FileForm : public System::Windows::Forms::Form
	{
	public:
		FileForm(void)
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
		~FileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FileForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Word that you want to get";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(157, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Find";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FileForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(147, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 28);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FileForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(176, 22);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &FileForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(56, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(354, 29);
			this->label3->TabIndex = 9;
			this->label3->Text = L"What the number of The line\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 29);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Old Word ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 151);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 22);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FileForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 29);
			this->label5->TabIndex = 12;
			this->label5->Text = L"New Word ";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(145, 286);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 35);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Done";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FileForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(386, 212);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 20);
			this->label6->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(99, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(272, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"What\'s your sentence\?";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(145, 424);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 35);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Get";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FileForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(180, 369);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(176, 22);
			this->textBox3->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1, 369);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 29);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Num of Line";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(417, 371);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 20);
			this->label8->TabIndex = 19;
			// 
			// FileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(772, 495);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"FileForm";
			this->Text = L"FileForm";
			this->Load += gcnew System::EventHandler(this, &FileForm::FileForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:void ShowFind() {
		button1->Visible = true;
		textBox1->Visible = true;
		label1->Visible = true;
		label6->Visible = true;

		textBox2->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		label7->Visible = false;
		textBox3->Visible = false;
		button4->Visible = false;
		label8->Visible = false;
		ShowDialog();



	}

	public:void ShowUpdate() {
		textBox1->Visible = true;
		textBox2->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		button2->Visible = true;


		label1->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;

		button1->Visible = false;
		button3->Visible = false;
		label7->Visible = false;
		textBox3->Visible = false;
		button4->Visible = false;
		label8->Visible = false;
		ShowDialog();

	}

	public:void ShowReplace() {

		textBox1->Visible = true;
		textBox2->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		button3->Visible = true;


		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		button2->Visible = false;
		button1->Visible = false;
		label6->Visible = false;

		label7->Visible = false;
		textBox3->Visible = false;
		button4->Visible = false;
		label8->Visible = false;

		ShowDialog();




	}	
	public:void GetLine() {

		textBox1->Visible = false;
		textBox2->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		button3->Visible = false;


		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		button2->Visible = false;
		button1->Visible = false;
		label6->Visible = false;

		label7->Visible = true;
		textBox3->Visible = true;
		button4->Visible = true;
		label8->Visible = true;

		ShowDialog();
	}public:	bool FileEmpty()
	{
		String^ ReadFile = File::ReadAllText("C:\\Users\\Lenovo\\source\\repos\\nohaessam237\\NewRepo2\\Project4\\Text.txt");
		return (ReadFile->Length == 0);
	}
private: System::Void deleteLastToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			  
		if (!FileEmpty())
		{
			TextEditor Text;
			Text.deleteLast();
		}
				  
			  

	}
public:	bool isNumber(const string& str)
{
	for (char const& c : str) {
		if (std::isdigit(c) == 0) return false;
	}
	return true;
}
	public: void MarshalString(String^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	private: System::Void FileForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		TextEditor Text;
		string t;
		String^ s = textBox1->Text;
		MarshalString(s, t);
		t = Text.FindAll(t);
		String^ text = gcnew String(t.c_str());
		label6->Text = text;
		textBox1->Text = "";
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		TextEditor Text;
		string str1;
		String^ s1;
		string str2;
		String^ s2;
     	s1 = textBox2->Text;
		MarshalString(s1, str1);
		s2 = textBox1->Text;
		MarshalString(s2, str2);
		Text.FindAndReplace(str1, str2);
		textBox1->Text = "";
		textBox2->Text = "";
		deleteLastToolStripMenuItem_Click(sender, e);
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		TextEditor Text;
		string str1;
		String^ s1;
		string str2;
		String^ s2;
		int n;
		s1 = textBox2->Text;//num
		MarshalString(s1, str1);
		if (isNumber(str1)) {
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
				s2 = textBox1->Text;//text
				MarshalString(s2, str2);
				Text.update(n, str2);
			}
		}
		else {
			MessageBox::Show(" That is Not a Number", "Errorrrrrrrrrrrrrrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);


		}
		textBox1->Text = "";
		textBox2->Text = "";
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	int n;
	TextEditor Text;
	String^ text;
	string t;
	String^ s = textBox3->Text;
	MarshalString(s, t);
	if (isNumber(t)) {
		stringstream ss;
		ss << t;
		ss >> n;
		if (n > Text.GetSize() || n < 1)
		{
			n = Text.GetSize();
			t = "This number is out of range \nPlease put a number between 1 and " + to_string(n);
			s = gcnew String(t.c_str());
			MessageBox::Show(s, "Errorrrrrrrrrrrrrrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}
		else
		{
			t = Text.Getline(n);
			text = gcnew String(t.c_str());
		}
	}
	else {
		MessageBox::Show(" That is Not a Number", "Errorrrrrrrrrrrrrrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}
	label8->Text = text;
	label8->Visible = true;
	textBox3->Text = "";



}
};
}
