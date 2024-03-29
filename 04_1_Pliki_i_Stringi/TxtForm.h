#pragma once

namespace My041Pliki {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for TxtForm
	/// </summary>
	public ref class TxtForm : public System::Windows::Forms::Form
	{
	public:
		TxtForm(void)
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
		~TxtForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszJakoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ koniecToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stringiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ koniecToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ zawjanieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ replaceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ indexOfToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ subStringToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeToolStripMenuItem;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszJakoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->koniecToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zawjanieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stringiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->replaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->indexOfToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->subStringToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->koniecToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::Color::Yellow;
			this->textBox1->Location = System::Drawing::Point(0, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(1043, 555);
			this->textBox1->TabIndex = 1;
			this->textBox1->WordWrap = false;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &TxtForm::textBox1_KeyDown);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->stringiToolStripMenuItem, this->koniecToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1043, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->zapiszToolStripMenuItem,
					this->zapiszJakoToolStripMenuItem, this->koniecToolStripMenuItem1
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &TxtForm::zapiszToolStripMenuItem_Click);
			// 
			// zapiszJakoToolStripMenuItem
			// 
			this->zapiszJakoToolStripMenuItem->Name = L"zapiszJakoToolStripMenuItem";
			this->zapiszJakoToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->zapiszJakoToolStripMenuItem->Text = L"Zapisz jako";
			this->zapiszJakoToolStripMenuItem->Click += gcnew System::EventHandler(this, &TxtForm::zapiszJakoToolStripMenuItem_Click);
			// 
			// koniecToolStripMenuItem1
			// 
			this->koniecToolStripMenuItem1->Name = L"koniecToolStripMenuItem1";
			this->koniecToolStripMenuItem1->Size = System::Drawing::Size(132, 22);
			this->koniecToolStripMenuItem1->Text = L"Koniec";
			this->koniecToolStripMenuItem1->Click += gcnew System::EventHandler(this, &TxtForm::koniecToolStripMenuItem1_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->zawjanieToolStripMenuItem });
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// zawjanieToolStripMenuItem
			// 
			this->zawjanieToolStripMenuItem->CheckOnClick = true;
			this->zawjanieToolStripMenuItem->Name = L"zawjanieToolStripMenuItem";
			this->zawjanieToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->zawjanieToolStripMenuItem->Text = L"Zawjanie";
			this->zawjanieToolStripMenuItem->Click += gcnew System::EventHandler(this, &TxtForm::zawjanieToolStripMenuItem_Click);
			// 
			// stringiToolStripMenuItem
			// 
			this->stringiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->replaceToolStripMenuItem,
					this->indexOfToolStripMenuItem, this->subStringToolStripMenuItem, this->insertToolStripMenuItem, this->removeToolStripMenuItem
			});
			this->stringiToolStripMenuItem->Name = L"stringiToolStripMenuItem";
			this->stringiToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->stringiToolStripMenuItem->Text = L"Stringi";
			// 
			// replaceToolStripMenuItem
			// 
			this->replaceToolStripMenuItem->Name = L"replaceToolStripMenuItem";
			this->replaceToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->replaceToolStripMenuItem->Text = L"Replace";
			this->replaceToolStripMenuItem->Click += gcnew System::EventHandler(this, &TxtForm::replaceToolStripMenuItem_Click);
			// 
			// indexOfToolStripMenuItem
			// 
			this->indexOfToolStripMenuItem->Name = L"indexOfToolStripMenuItem";
			this->indexOfToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F3;
			this->indexOfToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->indexOfToolStripMenuItem->Text = L"IndexOf";
			this->indexOfToolStripMenuItem->Click += gcnew System::EventHandler(this, &TxtForm::indexOfToolStripMenuItem_Click);
			// 
			// subStringToolStripMenuItem
			// 
			this->subStringToolStripMenuItem->Name = L"subStringToolStripMenuItem";
			this->subStringToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->subStringToolStripMenuItem->Text = L"SubString";
			this->subStringToolStripMenuItem->Click += gcnew System::EventHandler(this, &TxtForm::subStringToolStripMenuItem_Click);
			// 
			// insertToolStripMenuItem
			// 
			this->insertToolStripMenuItem->Name = L"insertToolStripMenuItem";
			this->insertToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->insertToolStripMenuItem->Text = L"Insert";
			this->insertToolStripMenuItem->Click += gcnew System::EventHandler(this, &TxtForm::insertToolStripMenuItem_Click);
			// 
			// koniecToolStripMenuItem
			// 
			this->koniecToolStripMenuItem->Name = L"koniecToolStripMenuItem";
			this->koniecToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->koniecToolStripMenuItem->Text = L"Koniec";
			this->koniecToolStripMenuItem->Click += gcnew System::EventHandler(this, &TxtForm::koniecToolStripMenuItem1_Click);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &TxtForm::removeToolStripMenuItem_Click);
			// 
			// TxtForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1043, 579);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"TxtForm";
			this->Text = L"TxtForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	public:


		static Void ShowEditor(String^ aFileName)
		{
			TxtForm^ wnd = gcnew TxtForm();
			wnd->textBox1->Text = File::ReadAllText(aFileName);
			wnd->FileName = aFileName;
			wnd->ShowDialog();
		}


		static Void ShowEditor_AsStrings(String^ aFileName)
		{
			TxtForm^ wnd = gcnew TxtForm();
			array<String^>^ lines = File::ReadAllLines(aFileName);
			for each (String ^ line in lines)
				wnd->textBox1->AppendText(line + "\r\n");
			wnd->FileName = aFileName;
			wnd->ShowDialog();
		}

		static Void ShowEditor_AsBytes(String^ aFileName)
		{
			TxtForm^ wnd = gcnew TxtForm();
			array<Byte>^ bytes = File::ReadAllBytes(aFileName);
			int i = 0;
			for each (Byte b in bytes) {
				i++;
				wnd->textBox1->AppendText(String::Format("{0,5}) {1,3}   {2}\r\n", i, b, (Char)b));
			}
			wnd->FileName = aFileName;
			wnd->ShowDialog();
		}

		String^ FileName;

	private: System::Void zapiszToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		File::WriteAllText(FileName, textBox1->Text);
	}
	private: System::Void zapiszJakoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			File::WriteAllText(saveFileDialog1->FileName, textBox1->Text);
		}
	}
	private: System::Void koniecToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void zawjanieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->WordWrap = zawjanieToolStripMenuItem->Checked;
	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Up && e->Modifiers == Keys::Control)
		{
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->FontFamily, textBox1->Font->Size + 1);
		}
		else if (e->KeyCode == Keys::Down && e->Modifiers == Keys::Control)
		{
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->FontFamily, textBox1->Font->Size - 1);
		}
	}
	private: System::Void replaceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text->Replace("String", "xxxXXXxx");
	}
	private: System::Void indexOfToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fs = "String";
		int pos = textBox1->Text->IndexOf(fs, textBox1->SelectionStart + 1, StringComparison::CurrentCultureIgnoreCase);
		if (pos >= 0)
		{
			textBox1->SelectionStart = pos;
			textBox1->SelectionLength = fs->Length;
			textBox1->ScrollToCaret();
		}
	}
	private: System::Void subStringToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int pos = textBox1->Text->IndexOf("wskaŸ");
		textBox1->Text = textBox1->Text->Substring(pos, 8);
	}
	private: System::Void insertToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int pos = textBox1->Text->IndexOf("wskaŸ");
		//textBox1->Text = textBox1->Text->Insert(pos, "Ala Ma Kota-");
		String^ s = gcnew String('#', 100);
		textBox1->Text = textBox1->Text->Insert(pos, s);		
	}
	private: System::Void removeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text->Remove(100, 10);
	}
};
}
