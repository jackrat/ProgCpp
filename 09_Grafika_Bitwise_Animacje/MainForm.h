#pragma once

namespace  _09_Grafika_Bitwise_Animacje {


#include "PictureBoxForm.h"
#include "AndXorForm.h"
#include "SceneForm.h"


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace  _09_Grafika_Bitwise_Animacje;


	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(639, 54);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(221, 107);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Scene";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(347, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(221, 107);
			this->button2->TabIndex = 4;
			this->button2->Text = L"And Xor";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(54, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 107);
			this->button1->TabIndex = 3;
			this->button1->Text = L"PictureBox";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(919, 218);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}

#pragma endregion


	private: static String^ imgDir = "D:\\Documents\\01____DYDAKTYKA\\___REPOZYTORIA\\Public\\ProgCpp\\09_Grafika_Bitwise_Animacje\\images";

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBoxForm^ f = gcnew PictureBoxForm();
		f->imgDir = imgDir;
		f->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		AndXorForm^ f = gcnew AndXorForm();
		f->imgDir = imgDir;
		f->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SceneForm^ f = gcnew SceneForm();
		f->imgDir = imgDir;
		f->Show();
	}
	};
}
