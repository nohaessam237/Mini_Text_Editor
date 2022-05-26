#pragma once
#include"insertionForm.h"
#include"TextEditor.h"
#include"DeletionForm.h"
#include"FileForm.h"
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
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ showToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;


	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;

	private: System::Windows::Forms::ToolStripMenuItem^ deletionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteFirstToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteLastToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteAtToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ showToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ findToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ updateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ replaceWordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fileIsEmptyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getNumberOfLineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ existToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ returnToMainToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getLineToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->deletionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteFirstToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteLastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteAtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->findToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->replaceWordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileIsEmptyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getNumberOfLineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getLineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->existToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->returnToMainToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->deletionToolStripMenuItem, this->fileToolStripMenuItem1, this->returnToMainToolStripMenuItem, this->existToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(1231, 49);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->showToolStripMenuItem,
					this->addToolStripMenuItem, this->toolStripTextBox1
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fileToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fileToolStripMenuItem.Image")));
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(168, 45);
			this->fileToolStripMenuItem->Text = L"Insertion";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::fileToolStripMenuItem_Click);
			// 
			// showToolStripMenuItem
			// 
			this->showToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showToolStripMenuItem.Image")));
			this->showToolStripMenuItem->Name = L"showToolStripMenuItem";
			this->showToolStripMenuItem->Size = System::Drawing::Size(222, 42);
			this->showToolStripMenuItem->Text = L"Insert At";
			this->showToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::showToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addToolStripMenuItem.Image")));
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->ShowShortcutKeys = false;
			this->addToolStripMenuItem->Size = System::Drawing::Size(222, 42);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::addToolStripMenuItem_Click);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 27);
			this->toolStripTextBox1->Click += gcnew System::EventHandler(this, &MyForm1::toolStripTextBox1_Click);
			// 
			// deletionToolStripMenuItem
			// 
			this->deletionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->deleteFirstToolStripMenuItem,
					this->deleteLastToolStripMenuItem, this->deleteAtToolStripMenuItem, this->clearAllToolStripMenuItem
			});
			this->deletionToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deletionToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deletionToolStripMenuItem.Image")));
			this->deletionToolStripMenuItem->Name = L"deletionToolStripMenuItem";
			this->deletionToolStripMenuItem->Size = System::Drawing::Size(164, 45);
			this->deletionToolStripMenuItem->Text = L"Deletion";
			// 
			// deleteFirstToolStripMenuItem
			// 
			this->deleteFirstToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deleteFirstToolStripMenuItem.Image")));
			this->deleteFirstToolStripMenuItem->Name = L"deleteFirstToolStripMenuItem";
			this->deleteFirstToolStripMenuItem->Size = System::Drawing::Size(260, 42);
			this->deleteFirstToolStripMenuItem->Text = L"Delete First";
			this->deleteFirstToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::deleteFirstToolStripMenuItem_Click);
			// 
			// deleteLastToolStripMenuItem
			// 
			this->deleteLastToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deleteLastToolStripMenuItem.Image")));
			this->deleteLastToolStripMenuItem->Name = L"deleteLastToolStripMenuItem";
			this->deleteLastToolStripMenuItem->Size = System::Drawing::Size(260, 42);
			this->deleteLastToolStripMenuItem->Text = L"Delete Last";
			this->deleteLastToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::deleteLastToolStripMenuItem_Click);
			// 
			// deleteAtToolStripMenuItem
			// 
			this->deleteAtToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deleteAtToolStripMenuItem.Image")));
			this->deleteAtToolStripMenuItem->Name = L"deleteAtToolStripMenuItem";
			this->deleteAtToolStripMenuItem->Size = System::Drawing::Size(260, 42);
			this->deleteAtToolStripMenuItem->Text = L"Delete At";
			this->deleteAtToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::deleteAtToolStripMenuItem_Click);
			// 
			// clearAllToolStripMenuItem
			// 
			this->clearAllToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clearAllToolStripMenuItem.Image")));
			this->clearAllToolStripMenuItem->Name = L"clearAllToolStripMenuItem";
			this->clearAllToolStripMenuItem->Size = System::Drawing::Size(260, 42);
			this->clearAllToolStripMenuItem->Text = L"Clear All";
			this->clearAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::clearAllToolStripMenuItem_Click);
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->showToolStripMenuItem1,
					this->findToolStripMenuItem, this->updateToolStripMenuItem, this->replaceWordToolStripMenuItem, this->fileIsEmptyToolStripMenuItem,
					this->getNumberOfLineToolStripMenuItem, this->getLineToolStripMenuItem
			});
			this->fileToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fileToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fileToolStripMenuItem1.Image")));
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(104, 45);
			this->fileToolStripMenuItem1->Text = L"File";
			// 
			// showToolStripMenuItem1
			// 
			this->showToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showToolStripMenuItem1.Image")));
			this->showToolStripMenuItem1->Name = L"showToolStripMenuItem1";
			this->showToolStripMenuItem1->Size = System::Drawing::Size(384, 46);
			this->showToolStripMenuItem1->Text = L"Show ";
			this->showToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::showToolStripMenuItem1_Click);
			// 
			// findToolStripMenuItem
			// 
			this->findToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findToolStripMenuItem.Image")));
			this->findToolStripMenuItem->Name = L"findToolStripMenuItem";
			this->findToolStripMenuItem->Size = System::Drawing::Size(384, 46);
			this->findToolStripMenuItem->Text = L"Find ";
			this->findToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::findToolStripMenuItem_Click);
			// 
			// updateToolStripMenuItem
			// 
			this->updateToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateToolStripMenuItem.Image")));
			this->updateToolStripMenuItem->Name = L"updateToolStripMenuItem";
			this->updateToolStripMenuItem->Size = System::Drawing::Size(384, 46);
			this->updateToolStripMenuItem->Text = L"Update";
			this->updateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::updateToolStripMenuItem_Click);
			// 
			// replaceWordToolStripMenuItem
			// 
			this->replaceWordToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"replaceWordToolStripMenuItem.Image")));
			this->replaceWordToolStripMenuItem->Name = L"replaceWordToolStripMenuItem";
			this->replaceWordToolStripMenuItem->Size = System::Drawing::Size(384, 46);
			this->replaceWordToolStripMenuItem->Text = L"Replace Word";
			this->replaceWordToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::replaceWordToolStripMenuItem_Click);
			// 
			// fileIsEmptyToolStripMenuItem
			// 
			this->fileIsEmptyToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fileIsEmptyToolStripMenuItem.Image")));
			this->fileIsEmptyToolStripMenuItem->Name = L"fileIsEmptyToolStripMenuItem";
			this->fileIsEmptyToolStripMenuItem->Size = System::Drawing::Size(384, 46);
			this->fileIsEmptyToolStripMenuItem->Text = L"File is Empty";
			this->fileIsEmptyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::fileIsEmptyToolStripMenuItem_Click);
			// 
			// getNumberOfLineToolStripMenuItem
			// 
			this->getNumberOfLineToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"getNumberOfLineToolStripMenuItem.Image")));
			this->getNumberOfLineToolStripMenuItem->Name = L"getNumberOfLineToolStripMenuItem";
			this->getNumberOfLineToolStripMenuItem->Size = System::Drawing::Size(384, 46);
			this->getNumberOfLineToolStripMenuItem->Text = L"Get number Of Line";
			this->getNumberOfLineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::getNumberOfLineToolStripMenuItem_Click);
			// 
			// getLineToolStripMenuItem
			// 
			this->getLineToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"getLineToolStripMenuItem.Image")));
			this->getLineToolStripMenuItem->Name = L"getLineToolStripMenuItem";
			this->getLineToolStripMenuItem->Size = System::Drawing::Size(384, 46);
			this->getLineToolStripMenuItem->Text = L"Get Line";
			this->getLineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::getLineToolStripMenuItem_Click);
			// 
			// existToolStripMenuItem
			// 
			this->existToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->existToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"existToolStripMenuItem.Image")));
			this->existToolStripMenuItem->Name = L"existToolStripMenuItem";
			this->existToolStripMenuItem->Size = System::Drawing::Size(105, 45);
			this->existToolStripMenuItem->Text = L"Exit";
			this->existToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::existToolStripMenuItem_Click);
			// 
			// returnToMainToolStripMenuItem
			// 
			this->returnToMainToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->returnToMainToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"returnToMainToolStripMenuItem.Image")));
			this->returnToMainToolStripMenuItem->Name = L"returnToMainToolStripMenuItem";
			this->returnToMainToolStripMenuItem->Size = System::Drawing::Size(262, 45);
			this->returnToMainToolStripMenuItem->Text = L"Return to Main";
			this->returnToMainToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::returnToMainToolStripMenuItem_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1231, 490);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L"Mini Text Editor";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:	bool FileEmpty()
{
	String^ ReadFile = File::ReadAllText("C:\\Users\\Lenovo\\source\\repos\\nohaessam237\\NewRepo2\\Project4\\Text.txt");
	return (ReadFile->Length == 0);
}

private: System::Void showToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!FileEmpty())
		{
			insertionForm^ inf = gcnew insertionForm();
			inf->ShowInsert();
		}
		else
		{
			MessageBox::Show("This File is empty \n Add lines first ", "warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

private: System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void existToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void returnToMainToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	///*MyForm1 ^mf =gcnew MyForm1();
	//mf->ShowDialog();*/
	//this->Close();
	this->Close();
}

private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	insertionForm^ inf = gcnew insertionForm();
	//inf->ShowDialog();
	inf->ShowAdd();
	
}

private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void deleteFirstToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MessageBox::Show("Do you want to delete first line? ", "Delete First", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		if (!FileEmpty())
		{
			TextEditor Text;
			Text.deleteFirst();
			
		}
		else
		{
			MessageBox::Show("This File is Empty.", "Errorrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			
		}
	}
	
}

private: System::Void deleteLastToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you want to delete Last line? ", "Delete Last", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		if (!FileEmpty())
		{
			TextEditor Text;
			Text.deleteLast();
		}
		else

		{
			MessageBox::Show("This File is Empty.", "Errorrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}
	}
	
}

private: System::Void deleteAtToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (FileEmpty()) {
		MessageBox::Show("This File is Empty.", "Errorrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		DeletionForm^ D = gcnew DeletionForm();
		D->ShowDialog();
	}
}

private: System::Void clearAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you want to Clear All? ", "Clear All", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
	{
		TextEditor Text;
		Text.ClearFile();
		

		if (FileEmpty())
		{
			MessageBox::Show("File Cleared Succesfully.", "Clear",MessageBoxButtons::OK);
			
		}

	}
	
}

private: System::Void findToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (FileEmpty()) {
		MessageBox::Show("This File is Empty.", "Errorrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		FileForm^ ff = gcnew FileForm();
		ff->ShowFind();
	}
}

private: System::Void updateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (FileEmpty()) {
		MessageBox::Show("This File is Empty.", "Errorrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		FileForm^ ff1 = gcnew FileForm();
		ff1->ShowUpdate();
	}
}

	private: System::Void replaceWordToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FileEmpty()) {
			MessageBox::Show("This File is Empty.", "Errorrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			FileForm^ ff2 = gcnew FileForm();
			ff2->ShowReplace();
		}
	}

	private: System::Void fileIsEmptyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FileEmpty())
		{
			MessageBox::Show("Yes, This File is Empty.", "Message", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		else
		{ MessageBox::Show("No, This File is not Empty.", "Message", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}

}

	private: System::Void getNumberOfLineToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		TextEditor Text;
		String^ text;
		String^ t;
		int n;
		if (!FileEmpty())
		{
			n = Text.GetSize();
			t = gcnew String(to_string(n).c_str());
			text = "This File Has " + t + " Lines.";

		}
		else

		{	text = "This File Has no Lines";
	}
		MessageBox::Show(text, "Message", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	
}

private: System::Void toolStripTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void showToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (FileEmpty()) {
		MessageBox::Show("This File is Empty.", "Errorrrrrrrrr", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}
	else {
		ShowForm^ sf = gcnew ShowForm();
		sf->ShowDialog();
	}
}
private: System::Void getLineToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (FileEmpty())
	{
		MessageBox::Show("Yes, This File is Empty.", "Message", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}

	else
	{
		FileForm^ ff = gcnew FileForm();
		ff->GetLine();
	}
}
};
}
