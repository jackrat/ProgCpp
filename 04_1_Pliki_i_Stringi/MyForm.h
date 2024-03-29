#pragma once
#include "TxtForm.h"


namespace _04_1_Pliki_i_Stringi {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Xml;
	using namespace System::Collections::Generic;
	using namespace My041Pliki;


	public enum foMode { asOneString, asLines, asBytes };



	public ref class MyForm : public Form
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
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ asOneString;
	private: System::Windows::Forms::ToolStripMenuItem^ asLines;
	private: System::Windows::Forms::ToolStripMenuItem^ asBytes;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	protected:





	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->asOneString = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asLines = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asBytes = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->treeView1->Location = System::Drawing::Point(89, 33);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(322, 420);
			this->treeView1->TabIndex = 0;
			this->treeView1->BeforeSelect += gcnew System::Windows::Forms::TreeViewCancelEventHandler(this, &MyForm::treeView1_BeforeSelect);
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(85, 463);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(831, 73);
			this->textBox1->TabIndex = 1;
			this->textBox1->WordWrap = false;
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(417, 33);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(499, 420);
			this->listBox1->TabIndex = 2;
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::listBox1_DoubleClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->asOneString,
					this->asLines, this->asBytes
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(141, 70);
			// 
			// asOneString
			// 
			this->asOneString->Name = L"asOneString";
			this->asOneString->Size = System::Drawing::Size(140, 22);
			this->asOneString->Text = L"AsOneString";
			this->asOneString->Click += gcnew System::EventHandler(this, &MyForm::asOneString_Click);
			// 
			// asLines
			// 
			this->asLines->Name = L"asLines";
			this->asLines->Size = System::Drawing::Size(140, 22);
			this->asLines->Text = L"AsLines";
			this->asLines->Click += gcnew System::EventHandler(this, &MyForm::asLines_Click);
			// 
			// asBytes
			// 
			this->asBytes->Name = L"asBytes";
			this->asBytes->Size = System::Drawing::Size(140, 22);
			this->asBytes->Text = L"AsBytes";
			this->asBytes->Click += gcnew System::EventHandler(this, &MyForm::asBytes_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"XML";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(5, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Streaming";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 542);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->treeView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




		void Drives()
		{
			treeView1->Nodes->Clear();
			array<String^>^ drives = Directory::GetLogicalDrives();
			for each (String ^ drv in drives)
			{
				TreeNode^ dr = gcnew TreeNode(drv);
				treeView1->Nodes->Add(dr);
			}
		}


		void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			Drives();
		}


		void treeView1_BeforeSelect(System::Object^ sender, System::Windows::Forms::TreeViewCancelEventArgs^ e) {
			if (e->Node->Tag == nullptr)
			{
				String^ dir = e->Node->FullPath;
				try {
					array<String^>^ dirs = Directory::GetDirectories(e->Node->FullPath);
					for each (String ^ dir in dirs)
					{
						TreeNode^ dr = gcnew TreeNode(Path::GetFileName(dir));
						e->Node->Nodes->Add(dr);
					}
					e->Node->Tag = 1;
				}
				catch (Exception^ exc)
				{
					textBox1->AppendText(String::Format("{0:HH:mm:ss}: {1} - {2}\r\n", dir, DateTime::Now, exc->Message));

				}
			}
		}

		void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
			String^ dir = e->Node->FullPath;
			try {
				listBox1->Items->Clear();
				array<String^>^ files = Directory::GetFiles(dir);
				for each (String ^ ffn in files)
				{
					listBox1->Items->Add(Path::GetFileName(ffn));
				}
			}
			catch (Exception^ exc)
			{
				textBox1->AppendText(String::Format("{0:HH:mm:ss}: {1} - {2}\r\n", dir, DateTime::Now, exc->Message));
			}
		}




		String^ GetFullFileName()
		{
			String^ res = nullptr;
			if (treeView1->SelectedNode != nullptr && listBox1->SelectedItem != nullptr)
			{
				String^ folder = treeView1->SelectedNode->FullPath;
				String^ fn = (String^)listBox1->SelectedItem;
				res = Path::Combine(folder, fn);
			}
			return res;
		}


		void OpenFile(foMode mode)
		{
			String^ fullfilename = GetFullFileName();
			if (fullfilename != nullptr)
			{
				switch (mode)
				{
				case foMode::asOneString:
					TxtForm::ShowEditor(fullfilename);
					break;
				case foMode::asLines:
					TxtForm::ShowEditor_AsStrings(fullfilename);
					break;
				case foMode::asBytes:
					TxtForm::ShowEditor_AsBytes(fullfilename);
					break;
				default:
					break;
				}
			}
		}


		void listBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			OpenFile(foMode::asOneString);
		}




		void asOneString_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFile(foMode::asOneString);
		}

		void asLines_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFile(foMode::asLines);
		}

		void asBytes_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFile(foMode::asBytes);
		}



		void firstborned(XmlElement^ el)
		{
			Dictionary<String^, int>^ dic = gcnew Dictionary<String^, int>();
			XmlNodeList^ nodes = el->ChildNodes;
			for each (XmlNode ^ node in nodes)
			{
				if (dic->ContainsKey(node->Name))
					dic[node->Name] ++;
				else
					dic->Add(node->Name, 1);
			}
			for (int i = nodes->Count - 1; i >= 0; i--)
			{
				String^ key = nodes[i]->Name;
				if (dic[key] > 1)
				{
					dic[key] --;
					el->RemoveChild(nodes[i]);
				}
			}
			dic->Clear();
			nodes = el->ChildNodes;
			for each (XmlNode ^ node in nodes)
				if (dynamic_cast<XmlElement^>(node) != nullptr)
					firstborned((XmlElement^)node);
		}

		void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			XmlDocument^ doc = gcnew XmlDocument();
			doc->Load("e:\\Import optima.xml");
			XmlElement^ el = doc->DocumentElement;
			firstborned(el);
			doc->Save("e:\\Import optima_OnechildInNode.xml");
		}


		void stramingA(String^ fn)
		{
			/*String^ d = Path::GetDirectoryName(fn);
			String^ f = Path::GetFileName(fn);
			String^ f2 = Path::GetFileNameWithoutExtension(fn);
			String^ ex = Path::GetExtension(fn);*/

			String^ fn2 = Path::Combine(Path::GetDirectoryName(fn),
				Path::GetFileNameWithoutExtension(fn) + "_A" + Path::GetExtension(fn));

			FileStream^ fstr = File::OpenRead(fn);
			FileStream^ fstr2 = File::OpenWrite(fn2);
			if (fstr->CanRead && fstr2->CanWrite)
			{
				array<Byte>^ buff = gcnew array<Byte>(1024);
				int readed;
				do {
					readed = fstr->Read(buff, 0, buff->Length);
					if (readed > 0)
						fstr2->Write(buff, 0, readed);
				} while (readed == buff->Length);
			}
			fstr->Flush();
			fstr->Close();
			fstr2->Flush();
			fstr2->Close();
		}


		void stramingB(String^ fn)
		{
			String^ fn2 = Path::Combine(Path::GetDirectoryName(fn), Path::GetFileNameWithoutExtension(fn)
				+ "_B" + Path::GetExtension(fn));
			FileStream^ fstr = File::OpenRead(fn);
			FileStream^ fstr2 = File::OpenWrite(fn2);
			if (fstr->CanRead && fstr2->CanWrite)
			{
				fstr->Position = 90;
				fstr->CopyTo(fstr2);
			}
			fstr->Flush();//!
			fstr->Close();
			fstr2->Flush();//!
			fstr2->Close();
		}


		void stramingC(String^ fn) {
			String^ fn2 = Path::Combine(Path::GetDirectoryName(fn), Path::GetFileNameWithoutExtension(fn) + "_C"
				+ Path::GetExtension(fn));
			FileStream^ fstr = File::OpenRead(fn);

			MemoryStream^ mstr = gcnew MemoryStream();
			if (fstr->CanRead)
			{
				fstr->Position = 90;
				fstr->CopyTo(mstr);
			}
			fstr->Flush();//!
			fstr->Close();
			array<Byte>^ tabl = mstr->ToArray(); //System::Byte === unsigned char
			String^ s = Convert::ToBase64String(tabl);
			File::WriteAllText(fn2, s);
		}


		void stramingD(String^ fn) {
			String^ fn1 = Path::Combine(Path::GetDirectoryName(fn), Path::GetFileNameWithoutExtension(fn) 
				+ "_C" + Path::GetExtension(fn));
			String^ fn2 = Path::Combine(Path::GetDirectoryName(fn), Path::GetFileNameWithoutExtension(fn)
				+ "_D" + Path::GetExtension(fn));
			String^ sb64 = File::ReadAllText(fn1);
			array<Byte>^ tabl = Convert::FromBase64String(sb64);
			File::WriteAllBytes(fn2, tabl);
		}



		Void stramingE(String^ fn) {
			String^ fn2 = Path::Combine(Path::GetDirectoryName(fn), Path::GetFileNameWithoutExtension(fn) 
				+ "_E" + Path::GetExtension(fn));
			StreamReader^ strR = File::OpenText(fn);
			StreamWriter^ strW = gcnew StreamWriter(fn2);
			String^ s;
			int i = 0;
			do
			{
				s = strR->ReadLine();
				if (s != nullptr)
				{
					s = String::Format("/*{0,3}*/ {1} //{2}", ++i, s->ToLower(), i);
					strW->WriteLine(s);
				}

			} while (s != nullptr);
			strR->Close();
			strW->Close();
		}

		void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			stramingA("E:\\exp\\csv\\z_plik.txt");
			stramingB("E:\\exp\\csv\\z_plik.txt");
			stramingC("E:\\exp\\csv\\z_plik.txt");
			stramingD("E:\\exp\\csv\\z_plik.txt");
			stramingE("E:\\exp\\csv\\z_plik.txt");
		}
	};



}
