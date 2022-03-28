#pragma once

namespace CMSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ASections
	/// </summary>
	public ref class ASections : public System::Windows::Forms::Form
	{
	public:
		ASections(void)
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
		~ASections()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 16);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Sections";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(123, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(254, 21);
			this->comboBox1->TabIndex = 24;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(123, 86);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(254, 21);
			this->comboBox2->TabIndex = 25;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"2010", L"2011", L"2012", L"2013", L"2014", L"2015",
					L"2016", L"2017", L"2018", L"2019", L"2020"
			});
			this->comboBox3->Location = System::Drawing::Point(123, 128);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(254, 21);
			this->comboBox3->TabIndex = 26;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(123, 171);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(254, 20);
			this->textBox1->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 28;
			this->label1->Text = L"School";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Department";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Batch";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Sections";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(302, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ASections::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(221, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Change";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ASections::button2_Click);
			// 
			// ASections
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label12);
			this->Name = L"ASections";
			this->Text = L"Sections";
			this->Load += gcnew System::EventHandler(this, &ASections::ASections_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectT;
	MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("Insert into cmsproject.sections (School,Department,Batch,Sections,Code) values('" + this->comboBox1->Text + "','" + this->comboBox2->Text + "','" + this->comboBox3->Text + "','" + this->textBox1->Text + "','" + this->comboBox1->Text + "-" + this->comboBox2->Text + "-" + this->comboBox3->Text + "-" + "');", ConnectCMSProjectT);
	try
	{
		ConnectCMSProjectT->Open();
		ReadCMSProjectT = CommandCMSProjectLogInTeacher->ExecuteReader();
		MessageBox::Show("Section Created!");
		while (ReadCMSProjectT->Read())
		{

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectT;
	MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("Update cmsproject.sections set Sections ='" + this->textBox1->Text + "' where School='" + this->comboBox1->Text + "' and Department='" + this->comboBox2->Text + "' and Batch ='" + this->comboBox3->Text + "';", ConnectCMSProjectT);
	try
	{
		ConnectCMSProjectT->Open();
		ReadCMSProjectT = CommandCMSProjectLogInTeacher->ExecuteReader();
		MessageBox::Show("Sections Changed!");
		while (ReadCMSProjectT->Read())
		{

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void ASections_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectT;
	MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("select * from cmsproject.schooldept;", ConnectCMSProjectT);
	try
	{
		ConnectCMSProjectT->Open();
		ReadCMSProjectT = CommandCMSProjectLogInTeacher->ExecuteReader();
		while (ReadCMSProjectT->Read())
		{
			String^ School;
			School = ReadCMSProjectT->GetString("School");
			if (!comboBox1->Items->Contains(School))
			{
				comboBox1->Items->Add(School);
			}
			String^ DE;
			DE = ReadCMSProjectT->GetString("Department");
			comboBox2->Items->Add(DE);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
