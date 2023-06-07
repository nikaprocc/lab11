#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <msclr/marshal_cppstd.h>

namespace myForm 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_fill;
	private: System::Windows::Forms::Button^ btn_set_val;
	private: System::Windows::Forms::Button^ btn_get_val;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ rows;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ colums;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ new_val;
	private: System::Windows::Forms::TextBox^ j_val;
	private: System::Windows::Forms::TextBox^ i_val;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readCtrlRToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeCtrlWToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitAltF4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ setValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Label^ i_j_val;
	private: System::ComponentModel::IContainer^ components;

	private: String^ filePath;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->i_j_val = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->new_val = (gcnew System::Windows::Forms::TextBox());
			this->j_val = (gcnew System::Windows::Forms::TextBox());
			this->i_val = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->colums = (gcnew System::Windows::Forms::TextBox());
			this->rows = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_get_val = (gcnew System::Windows::Forms::Button());
			this->btn_set_val = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_fill = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readCtrlRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeCtrlWToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitAltF4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->i_j_val);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->new_val);
			this->panel1->Controls->Add(this->j_val);
			this->panel1->Controls->Add(this->i_val);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->colums);
			this->panel1->Controls->Add(this->rows);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btn_get_val);
			this->panel1->Controls->Add(this->btn_set_val);
			this->panel1->Controls->Add(this->btn_clear);
			this->panel1->Controls->Add(this->btn_fill);
			this->panel1->Location = System::Drawing::Point(368, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(345, 364);
			this->panel1->TabIndex = 0;
			// 
			// i_j_val
			// 
			this->i_j_val->AutoSize = true;
			this->i_j_val->Location = System::Drawing::Point(187, 212);
			this->i_j_val->Name = L"i_j_val";
			this->i_j_val->Size = System::Drawing::Size(13, 16);
			this->i_j_val->TabIndex = 16;
			this->i_j_val->Text = L"..";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(111, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 21);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Value is";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(70, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 21);
			this->label5->TabIndex = 14;
			this->label5->Text = L"New value";
			// 
			// new_val
			// 
			this->new_val->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->new_val->Location = System::Drawing::Point(166, 252);
			this->new_val->Name = L"new_val";
			this->new_val->Size = System::Drawing::Size(124, 28);
			this->new_val->TabIndex = 13;
			// 
			// j_val
			// 
			this->j_val->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->j_val->Location = System::Drawing::Point(237, 156);
			this->j_val->Name = L"j_val";
			this->j_val->Size = System::Drawing::Size(71, 28);
			this->j_val->TabIndex = 12;
			// 
			// i_val
			// 
			this->i_val->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_val->Location = System::Drawing::Point(95, 156);
			this->i_val->Name = L"i_val";
			this->i_val->Size = System::Drawing::Size(69, 28);
			this->i_val->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(211, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 21);
			this->label4->TabIndex = 9;
			this->label4->Text = L"j = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(71, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 21);
			this->label3->TabIndex = 8;
			this->label3->Text = L"i = ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// colums
			// 
			this->colums->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->colums->Location = System::Drawing::Point(193, 43);
			this->colums->Name = L"colums";
			this->colums->Size = System::Drawing::Size(115, 28);
			this->colums->TabIndex = 7;
			// 
			// rows
			// 
			this->rows->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rows->Location = System::Drawing::Point(43, 46);
			this->rows->Name = L"rows";
			this->rows->Size = System::Drawing::Size(115, 28);
			this->rows->TabIndex = 6;
			this->rows->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(190, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 21);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Colums";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(40, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Rows";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btn_get_val
			// 
			this->btn_get_val->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_get_val->Location = System::Drawing::Point(190, 285);
			this->btn_get_val->Name = L"btn_get_val";
			this->btn_get_val->Size = System::Drawing::Size(119, 33);
			this->btn_get_val->TabIndex = 3;
			this->btn_get_val->Text = L"Get value";
			this->btn_get_val->UseVisualStyleBackColor = true;
			this->btn_get_val->Click += gcnew System::EventHandler(this, &MyForm::btn_get_val_Click);
			// 
			// btn_set_val
			// 
			this->btn_set_val->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_set_val->Location = System::Drawing::Point(44, 285);
			this->btn_set_val->Name = L"btn_set_val";
			this->btn_set_val->Size = System::Drawing::Size(119, 33);
			this->btn_set_val->TabIndex = 2;
			this->btn_set_val->Text = L"Set value";
			this->btn_set_val->UseVisualStyleBackColor = true;
			this->btn_set_val->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_clear->Location = System::Drawing::Point(193, 87);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(115, 32);
			this->btn_clear->TabIndex = 1;
			this->btn_clear->Text = L"Clear";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// btn_fill
			// 
			this->btn_fill->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_fill->Location = System::Drawing::Point(43, 87);
			this->btn_fill->Name = L"btn_fill";
			this->btn_fill->Size = System::Drawing::Size(115, 32);
			this->btn_fill->TabIndex = 0;
			this->btn_fill->Text = L"Fill";
			this->btn_fill->UseVisualStyleBackColor = true;
			this->btn_fill->Click += gcnew System::EventHandler(this, &MyForm::btn_fill_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tableLayoutPanel1);
			this->panel2->Location = System::Drawing::Point(-2, 31);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(374, 364);
			this->panel2->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(30, 33);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(300, 300);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readCtrlRToolStripMenuItem,
					this->writeCtrlWToolStripMenuItem, this->exitAltF4ToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 26);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// readCtrlRToolStripMenuItem
			// 
			this->readCtrlRToolStripMenuItem->Name = L"readCtrlRToolStripMenuItem";
			this->readCtrlRToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->readCtrlRToolStripMenuItem->Text = L"Read    Ctrl+R";
			this->readCtrlRToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readCtrlRToolStripMenuItem_Click);
			// 
			// writeCtrlWToolStripMenuItem
			// 
			this->writeCtrlWToolStripMenuItem->Name = L"writeCtrlWToolStripMenuItem";
			this->writeCtrlWToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->writeCtrlWToolStripMenuItem->Text = L"Write   Ctrl+W";
			this->writeCtrlWToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeCtrlWToolStripMenuItem_Click);
			// 
			// exitAltF4ToolStripMenuItem
			// 
			this->exitAltF4ToolStripMenuItem->Name = L"exitAltF4ToolStripMenuItem";
			this->exitAltF4ToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->exitAltF4ToolStripMenuItem->Text = L"Exit      Alt+F4";
			this->exitAltF4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitAltF4ToolStripMenuItem_Click);
			// 
			// tableToolStripMenuItem
			// 
			this->tableToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fillToolStripMenuItem,
					this->getValueToolStripMenuItem, this->setValueToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->tableToolStripMenuItem->Name = L"tableToolStripMenuItem";
			this->tableToolStripMenuItem->Size = System::Drawing::Size(58, 26);
			this->tableToolStripMenuItem->Text = L"Table";
			// 
			// fillToolStripMenuItem
			// 
			this->fillToolStripMenuItem->Name = L"fillToolStripMenuItem";
			this->fillToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->fillToolStripMenuItem->Text = L"Fill";
			this->fillToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btn_fill_Click);
			// 
			// getValueToolStripMenuItem
			// 
			this->getValueToolStripMenuItem->Name = L"getValueToolStripMenuItem";
			this->getValueToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->getValueToolStripMenuItem->Text = L"Get value";
			this->getValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btn_get_val_Click);
			// 
			// setValueToolStripMenuItem
			// 
			this->setValueToolStripMenuItem->Name = L"setValueToolStripMenuItem";
			this->setValueToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->setValueToolStripMenuItem->Text = L"Set value";
			this->setValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 26);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->tableToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(713, 30);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(713, 398);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void exitAltF4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void btn_fill_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((rows->Text == "") || (rows->Text == "0") || (System::Convert::ToInt32(rows->Text) > 10))
	{
		System::Windows::Forms::MessageBox::Show("Invalid input", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		errorProvider1->SetError(rows, "Enter row number in diapason [1, 10], please ");
	}
	else if ((colums->Text == "") || (colums->Text == "0") || (System::Convert::ToInt32(colums->Text) > 10))
	{
		System::Windows::Forms::MessageBox::Show("Invalid input", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		errorProvider1->SetError(colums, "Enter column number in diapason [1, 10], please ");
	}
	else
	{
		int rowCount = System::Convert::ToInt32(rows->Text);
		int columnCount = System::Convert::ToInt32(colums->Text);

		tableLayoutPanel1->Controls->Clear();

		tableLayoutPanel1->RowCount = rowCount;
		tableLayoutPanel1->ColumnCount = columnCount;

		for (int i = 0; i < rowCount; i++)
		{
			for (int j = 0; j < columnCount; j++)
			{
				Label^ label = gcnew Label();
				if (i >= j)
					label->Text = "1";
				else
					label->Text = "0";
				tableLayoutPanel1->Controls->Add(label, j, i);
			}
		}
	}
}
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->tableLayoutPanel1->Controls->Clear();
}
private: System::Void btn_get_val_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int i = System::Convert::ToInt32(i_val->Text);
	int j = System::Convert::ToInt32(j_val->Text);


	if (i >= 0 && i < tableLayoutPanel1->RowCount && j >= 0 && j < tableLayoutPanel1->ColumnCount)
	{
		Control^ cell = tableLayoutPanel1->GetControlFromPosition(j, i);

		if (cell != nullptr)
			i_j_val->Text = cell->Text;
		else
			i_j_val->Text = "Cell is empty";
	}
	else
		i_j_val->Text = "Invalid row or column";
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) //set value
	{
		int i = System::Convert::ToInt32(i_val->Text);
		int j = System::Convert::ToInt32(j_val->Text);



		if (i >= 0 && i < tableLayoutPanel1->RowCount && j >= 0 && j < tableLayoutPanel1->ColumnCount)
		{
			Control^ cell = tableLayoutPanel1->GetControlFromPosition(j, i); // Змінена послідовність індексів (j, i) замість (i, j)

			if (cell != nullptr)
			{
				Label^ label = dynamic_cast<Label^>(cell); // Припустимо, що використовується Label у комірці таблиці

				if (label != nullptr)
				{
					label->Text = new_val->Text; // Змінити текст Label на нове значення
				}
			}
			else
				i_j_val->Text = "Cell is empty";
		}
		else
			i_j_val->Text = "Invalid row or column";
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void readCtrlRToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	readMenuItem();
}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
{
	if (e->KeyCode == Keys::R && e->Control) 
	{
		readMenuItem();
	}
	if (e->KeyCode == Keys::W && e->Control)
	{
		writeMenuItem();
	}
}
	   public:
		   void readMenuItem()
		   {
			   OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

			   // Set the initial directory and filter for .txt files
			   openFileDialog->InitialDirectory = "C:\\";
			   openFileDialog->Filter = "Text files (*.txt)|*.txt";
			   // Display the OpenFileDialog
			   if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			   {
				   // Get the selected file path
				   filePath = openFileDialog->FileName;
			   }

			   tableLayoutPanel1->Controls->Clear();

			   try
			   {
				   StreamReader^ reader = gcnew StreamReader(filePath);

				   String^ line;
				   int rowIndex = 0;

				   while ((line = reader->ReadLine()) != nullptr)
				   {
					   array<String^>^ values = line->Split(' ');
					   int columnIndex = 0;

					   for each (String ^ value in values)
					   {
						   Label^ label = gcnew Label();
						   label->Text = value;
						   tableLayoutPanel1->Controls->Add(label, columnIndex, rowIndex);
						   columnIndex++;
					   }

					   rowIndex++;
				   }

				   reader->Close();
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("Failed to open file: " + filePath + "\n\n" + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
		   void writeMenuItem()
		   {
			   FolderBrowserDialog^ folderBrowserDialog = gcnew FolderBrowserDialog();

			   // Set the initial directory
			   folderBrowserDialog->SelectedPath = "C:\\";

			   // Display the FolderBrowserDialog
			   if (folderBrowserDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			   {
				   // Get the selected folder path
				   String^ folderPath = folderBrowserDialog->SelectedPath;

				   // Generate a unique file name
				   String^ fileName = "matrix.txt";
				   int count = 1;
				   while (File::Exists(Path::Combine(folderPath, fileName)))
				   {
					   fileName = "matrix" + count.ToString() + ".txt";
					   count++;
				   }

				   // Create the file
				   String^ filePath = Path::Combine(folderPath, fileName);
				   StreamWriter^ writer = gcnew StreamWriter(filePath);

				   try
				   {
					   // Write the matrix data to the file
					   for (int i = 0; i < tableLayoutPanel1->RowCount; i++)
					   {
						   for (int j = 0; j < tableLayoutPanel1->ColumnCount; j++)
						   {
							   Control^ cell = tableLayoutPanel1->GetControlFromPosition(j, i);
							   if (cell != nullptr && cell->GetType() == Label::typeid)
							   {
								   Label^ label = safe_cast<Label^>(cell);
								   String^ value = label->Text;
								   writer->Write(value + "\t");
							   }
						   }
						   writer->WriteLine();
					   }

					   MessageBox::Show("Matrix data has been successfully written to the file: " + filePath, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   }
				   catch (Exception^ ex)
				   {
					   MessageBox::Show("Failed to write matrix data to the file: " + filePath + "\n\n" + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   }
				   finally
				   {
					   writer->Close();
				   }
			   }
		   }
private: System::Void writeCtrlWToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	writeMenuItem();
}
};
}
