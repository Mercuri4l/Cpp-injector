#pragma once
#include "CCoree.h"
#include <msclr\marshal_cppstd.h>
namespace IvJector {


	CCoree Core;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Top_Lbl;
	protected:
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::TextBox^ txt_dll;

	private: System::Windows::Forms::Label^ lbl_Dll;
	private: System::Windows::Forms::Label^ lbl_pId;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lbl_title;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ num_pID;



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
			this->Top_Lbl = (gcnew System::Windows::Forms::Label());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->txt_dll = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Dll = (gcnew System::Windows::Forms::Label());
			this->lbl_pId = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->num_pID = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_pID))->BeginInit();
			this->SuspendLayout();
			// 
			// Top_Lbl
			// 
			this->Top_Lbl->BackColor = System::Drawing::Color::Black;
			this->Top_Lbl->Location = System::Drawing::Point(-1, -1);
			this->Top_Lbl->Name = L"Top_Lbl";
			this->Top_Lbl->Size = System::Drawing::Size(532, 39);
			this->Top_Lbl->TabIndex = 0;
			// 
			// btn_close
			// 
			this->btn_close->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_close->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_close->FlatAppearance->BorderSize = 0;
			this->btn_close->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btn_close->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_close->ForeColor = System::Drawing::Color::White;
			this->btn_close->Location = System::Drawing::Point(437, -1);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(60, 39);
			this->btn_close->TabIndex = 1;
			this->btn_close->Text = L"X";
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->Click += gcnew System::EventHandler(this, &MainForm::Btn_close_Click);
			// 
			// txt_dll
			// 
			this->txt_dll->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_dll->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_dll->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dll->Location = System::Drawing::Point(99, 145);
			this->txt_dll->Name = L"txt_dll";
			this->txt_dll->Size = System::Drawing::Size(280, 22);
			this->txt_dll->TabIndex = 2;
			// 
			// lbl_Dll
			// 
			this->lbl_Dll->AutoSize = true;
			this->lbl_Dll->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Dll->Location = System::Drawing::Point(22, 142);
			this->lbl_Dll->Name = L"lbl_Dll";
			this->lbl_Dll->Size = System::Drawing::Size(71, 21);
			this->lbl_Dll->TabIndex = 4;
			this->lbl_Dll->Text = L"Dll Path";
			// 
			// lbl_pId
			// 
			this->lbl_pId->AutoSize = true;
			this->lbl_pId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_pId->Location = System::Drawing::Point(56, 212);
			this->lbl_pId->Name = L"lbl_pId";
			this->lbl_pId->Size = System::Drawing::Size(37, 21);
			this->lbl_pId->TabIndex = 5;
			this->lbl_pId->Text = L"PID";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(378, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Inject";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::Button1_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->BackColor = System::Drawing::Color::Black;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_title->ForeColor = System::Drawing::Color::White;
			this->lbl_title->Location = System::Drawing::Point(12, 9);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(81, 21);
			this->lbl_title->TabIndex = 7;
			this->lbl_title->Text = L"IVJECTOR";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DodgerBlue;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(378, -1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 39);
			this->button2->TabIndex = 8;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::Button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 289);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Notes:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 314);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(351, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L"- \"Dll Path\" must include double \"\\\". Eg: C:\\\\Folder\\\\program.exe";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(72, 339);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 15);
			this->label3->TabIndex = 11;
			this->label3->Text = L"- You can find pIDs by using task admin ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(344, 443);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Licensed under MIT License";
			// 
			// num_pID
			// 
			this->num_pID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_pID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num_pID->Location = System::Drawing::Point(108, 216);
			this->num_pID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->num_pID->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->num_pID->Name = L"num_pID";
			this->num_pID->Size = System::Drawing::Size(141, 22);
			this->num_pID->TabIndex = 13;
			this->num_pID->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 456);
			this->ControlBox = false;
			this->Controls->Add(this->num_pID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbl_pId);
			this->Controls->Add(this->lbl_Dll);
			this->Controls->Add(this->txt_dll);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->Top_Lbl);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Text = L"Iv_Jector";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_pID))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context marshal;


		const char* c_Dll = marshal.marshal_as<const char*>(txt_dll->Text);


		
		int pId = (int)num_pID->Value;

		if (Core.b_inject(pId, c_Dll)) {
			System::Console::WriteLine("Error nais");
		}
		else {
			System::Console::WriteLine("OpenProcess? -> {0}", GetLastError());
		}
	}
private: System::Void Btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}

};
}
