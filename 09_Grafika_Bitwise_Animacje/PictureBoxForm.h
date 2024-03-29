#pragma once

namespace _09_Grafika_Bitwise_Animacje {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace  System::Runtime::InteropServices;

	/// <summary>
	/// Summary for PictureBoxForm
	/// </summary>
	public ref class PictureBoxForm : public System::Windows::Forms::Form
	{
	public:
		PictureBoxForm(void)
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
		~PictureBoxForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pb;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ bordersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fill2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fill3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ prnScrToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ puzzleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ miEnd;
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
			this->pb = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->bordersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fill2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fill3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->prnScrToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->puzzleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miEnd = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pb
			// 
			this->pb->BackColor = System::Drawing::Color::Lime;
			this->pb->Location = System::Drawing::Point(79, 41);
			this->pb->Name = L"pb";
			this->pb->Size = System::Drawing::Size(41, 42);
			this->pb->TabIndex = 3;
			this->pb->TabStop = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->bordersToolStripMenuItem,
					this->clearToolStripMenuItem, this->filujToolStripMenuItem, this->fill2ToolStripMenuItem, this->fill3ToolStripMenuItem, this->prnScrToolStripMenuItem,
					this->puzzleToolStripMenuItem, this->miEnd
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(115, 180);
			// 
			// bordersToolStripMenuItem
			// 
			this->bordersToolStripMenuItem->CheckOnClick = true;
			this->bordersToolStripMenuItem->Name = L"bordersToolStripMenuItem";
			this->bordersToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->bordersToolStripMenuItem->Text = L"Borders";
			this->bordersToolStripMenuItem->Click += gcnew System::EventHandler(this, &PictureBoxForm::bordersToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &PictureBoxForm::clearToolStripMenuItem_Click);
			// 
			// filujToolStripMenuItem
			// 
			this->filujToolStripMenuItem->Name = L"filujToolStripMenuItem";
			this->filujToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->filujToolStripMenuItem->Text = L"Fill1";
			this->filujToolStripMenuItem->Click += gcnew System::EventHandler(this, &PictureBoxForm::filujToolStripMenuItem_Click);
			// 
			// fill2ToolStripMenuItem
			// 
			this->fill2ToolStripMenuItem->Name = L"fill2ToolStripMenuItem";
			this->fill2ToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->fill2ToolStripMenuItem->Text = L"Fill2";
			this->fill2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &PictureBoxForm::fill2ToolStripMenuItem_Click);
			// 
			// fill3ToolStripMenuItem
			// 
			this->fill3ToolStripMenuItem->Name = L"fill3ToolStripMenuItem";
			this->fill3ToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->fill3ToolStripMenuItem->Text = L"Fill3";
			this->fill3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &PictureBoxForm::fill3ToolStripMenuItem_Click);
			// 
			// prnScrToolStripMenuItem
			// 
			this->prnScrToolStripMenuItem->Name = L"prnScrToolStripMenuItem";
			this->prnScrToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->prnScrToolStripMenuItem->Text = L"PrnScr";
			this->prnScrToolStripMenuItem->Click += gcnew System::EventHandler(this, &PictureBoxForm::prnScrToolStripMenuItem_Click);
			// 
			// puzzleToolStripMenuItem
			// 
			this->puzzleToolStripMenuItem->Name = L"puzzleToolStripMenuItem";
			this->puzzleToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->puzzleToolStripMenuItem->Text = L"Puzzle";
			this->puzzleToolStripMenuItem->Click += gcnew System::EventHandler(this, &PictureBoxForm::puzzleToolStripMenuItem_Click);
			// 
			// miEnd
			// 
			this->miEnd->Name = L"miEnd";
			this->miEnd->Size = System::Drawing::Size(114, 22);
			this->miEnd->Text = L"Koniec";
			this->miEnd->Click += gcnew System::EventHandler(this, &PictureBoxForm::miEnd_Click);
			// 
			// PictureBoxForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 288);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->pb);
			this->Name = L"PictureBoxForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PictureBoxForm";
			this->Load += gcnew System::EventHandler(this, &PictureBoxForm::PictureBoxForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		String^ imgDir;
	private:
		Graphics^ gScr;
		Random^ rnd = gcnew Random((int)DateTime::Now.Ticks);

		void PictureBoxForm_Load(System::Object^ sender, System::EventArgs^ e) {
			bordersToolStripMenuItem_Click(nullptr, nullptr);
			pb->Image = Image::FromFile(Path::Combine(imgDir, "tlo.bmp"));
			pb->AutoSize = true;
		}

		void bordersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (bordersToolStripMenuItem->Checked)
			{
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
				this->WindowState = System::Windows::Forms::FormWindowState::Normal;
			}
			else
			{
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			}
		}

		void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			Brush^ b = gcnew SolidBrush(Color::FromArgb(rnd->Next(256), rnd->Next(256), rnd->Next(256)));
			gScr = CreateGraphics();
			gScr->FillRectangle(b, 0, 0, Width, Height);
			for (int i = Controls->Count - 1; i >= 0; i--)
				if (Controls[i] != pb)
					Controls->RemoveAt(i);
		}

		void filujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			fill1();
		}

		void fill2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			fill2();
		}

		void fill3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			fill3();
		}

		void prnScrToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			PrintScreen();
		}

		void puzzleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			Puzzle();
		}

		void miEnd_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}





		void fill1()
		{
			gScr = this->CreateGraphics();
			int w = pb->Width;
			int h = pb->Height;
			int x = 0;
			int y = 0;
			while (y < this->Height) {
				while (x < this->Width)
				{
					gScr->DrawImage(pb->Image, x, y);
					x += w;
				}
				x = 0;
				y += h;
			}
		}


		void fill2()
		{
			gScr = this->CreateGraphics();
			int w = pb->Width;
			int h = pb->Height;
			int x = 0;
			int y = 0;
			Graphics^ g = Graphics::FromImage(pb->Image);
			Bitmap^ b = gcnew Bitmap(Width, Height, g);
			Graphics^ gb = Graphics::FromImage(b);
			while (y < this->Height) {
				while (x < this->Width)
				{
					gb->DrawImage(pb->Image, x, y);
					x += w;
				}
				x = 0;
				y += h;
			}
			gScr->DrawImage(b, 0, 0);
		}


		[DllImport("gdi32.dll")]
		static bool BitBlt(
			IntPtr   destHdc,
			int   destX,
			int   destY,
			int   destW,
			int   destH,
			IntPtr   srcHdc,
			int   srcX,
			int   srcY,
			int rop
		);


		void fill3()
		{
			gScr = this->CreateGraphics();
			Graphics^ gPB = pb->CreateGraphics();

			IntPtr hdcDest = gScr->GetHdc();
			IntPtr hdcSrc = gPB->GetHdc();

			int w = pb->Width;
			int h = pb->Height;
			int x = 0;
			int y = 0;

			while (y < this->Height) {
				while (x < this->Width)
				{
					BitBlt(hdcDest, x, y, w, h, hdcSrc, 0, 0, (int)CopyPixelOperation::SourceCopy);
					x += w;
				}
				x = 0;
				y += h;
			}

			gPB->ReleaseHdc(hdcSrc);
			gScr->ReleaseHdc(hdcDest);

		}


		void PrintScreen()
		{
			String^ path = Path::Combine(imgDir, "screen.png");
			Bitmap^ scr = gcnew Bitmap(Screen::PrimaryScreen->Bounds.Width, Screen::PrimaryScreen->Bounds.Height);
			Graphics^ g = Graphics::FromImage(scr);
			g->CopyFromScreen(Point(0, 0), Point(0, 0), System::Drawing::Size(scr->Width, scr->Height));
			scr->Save(path);
		}


		const int snap = 20;

		int r(int w, int d)
		{
			return snap * Math::Round((w - d) / (1.0 * snap));
		}



		int wx, wy;

		void Puzzle()
		{
			array<String^>^ files = Directory::GetFiles(imgDir);
			for each (String ^ fn in files)
			{
				Image^ img = Image::FromFile(fn);
				if (img->Width < (Width / 3))
				{
					PictureBox^ p = gcnew PictureBox();
					p->Image = img;
					//p->AutoSize = true;
					p->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

					this->Controls->Add(p);
					p->Left = rnd->Next(Width - p->Width);
					p->Top = rnd->Next(Height - p->Height);

					p->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PictureBoxForm::OnMouseDown);
					p->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PictureBoxForm::OnMouseMove);


					p->Left = r(p->Left, 0);
					p->Top = r(p->Top, 0);
					p->Width = 120;
					p->Height = 120;
				}
			}
		}


		void OnMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			wx = e->X;
			wy = e->Y;
			PictureBox^ p = (PictureBox^)sender;
			p->BringToFront();
		}
		void OnMouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				PictureBox^ p = (PictureBox^)sender;
				p->Left += r(e->X , wx);
				p->Top += r(e->Y , wy);
			}
		}
	};
}






