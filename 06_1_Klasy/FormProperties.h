#pragma once
#include "KlasaZPropertisami.h"
#include "PierwiastkiD.h"

namespace My061Klasy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class FormProperties : public System::Windows::Forms::Form
	{
	public:
		FormProperties(void)
		{
			InitializeComponent();

			textBox4->DataBindings->Add("Text", pD, "A", false, DataSourceUpdateMode::OnPropertyChanged);
			textBox5->DataBindings->Add("Text", pD, "B", false, DataSourceUpdateMode::OnPropertyChanged);
			textBox6->DataBindings->Add("Text", pD, "C", false, DataSourceUpdateMode::OnPropertyChanged);
			label2->DataBindings->Add("Text", pD, "WynikAsString", false, DataSourceUpdateMode::OnPropertyChanged);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormProperties()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"klasa z props";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormProperties::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(26, 283);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 27;
			this->label1->Text = L"label1";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(31, 218);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(235, 31);
			this->textBox3->TabIndex = 26;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &FormProperties::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(31, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(235, 31);
			this->textBox2->TabIndex = 25;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &FormProperties::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(31, 112);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(235, 31);
			this->textBox1->TabIndex = 24;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormProperties::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(277, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 28;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormProperties::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(379, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 25);
			this->label2->TabIndex = 32;
			this->label2->Text = L"label2";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox4->Location = System::Drawing::Point(372, 112);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(255, 31);
			this->textBox4->TabIndex = 31;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox5->Location = System::Drawing::Point(372, 162);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(235, 31);
			this->textBox5->TabIndex = 30;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox6->Location = System::Drawing::Point(372, 218);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(235, 31);
			this->textBox6->TabIndex = 29;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(26, 430);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(225, 59);
			this->button3->TabIndex = 33;
			this->button3->Text = L"array 2D";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormProperties::button3_Click);
			// 
			// FormProperties
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 502);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"FormProperties";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FormProperties";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		KlasaZPropertisami^ ob = gcnew KlasaZPropertisami();

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ob->PropS = "Ala ma kota";
		MessageBox::Show(ob->PropS);

		int xyz = ob->PropInt;
		//ob->PropInt = 123; // setter jest niedostepny
	}

	private:

		PierwiastkiD^ pD = gcnew PierwiastkiD();

		System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			Double x;
			if (double::TryParse(textBox1->Text, x))
			{
				pD->A = x;
				label1->Text = pD->WynikAsString;
			}
		}

		System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			Double x;
			if (double::TryParse(textBox2->Text, x))
			{
				pD->B = x;
				label1->Text = pD->WynikAsString;
			}
		}

		System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			Double x;
			if (double::TryParse(textBox3->Text, x))
			{
				pD->C = x;
				label1->Text = pD->WynikAsString;
			}
		}

		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			pD->B = 123;
		}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		array<	array<double>^>^ tab2D;
		int nw = 5;
		int nk = 4;
		tab2D = gcnew array<array<double>^>(nw);
		for (int i = 0; i < nw; i++)
			tab2D[i] = gcnew array<double>(nk);

		array<double, 2>^ tab2D_b = gcnew array<double, 2>(nw, nk);

	}
	};
}
