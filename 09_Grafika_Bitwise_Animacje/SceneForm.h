#pragma once
#include "Sprite.h"

namespace _09_Grafika_Bitwise_Animacje {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for SceneForm
	/// </summary>
	public ref class SceneForm : public System::Windows::Forms::Form
	{
	public:
		SceneForm(void)
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
		~SceneForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 269);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SceneForm::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &SceneForm::timer1_Tick);
			// 
			// SceneForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 486);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"SceneForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SceneForm";
			this->Load += gcnew System::EventHandler(this, &SceneForm::SceneForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		String^ imgDir;
	private:
		List<Sprite^>^ Sprites = gcnew List<Sprite^>();
		Bitmap^ img0;
		DateTime^ LastTime;
		Random^ rand = gcnew Random((int)(DateTime::Now.Ticks));

		void SceneForm_Load(System::Object^ sender, System::EventArgs^ e) {
			pictureBox1->Image = Image::FromFile(Path::Combine(imgDir, "stars.png"));
			pictureBox1->AutoSize = true;
			this->AutoSize = true;
			img0 = gcnew Bitmap(Image::FromFile(Path::Combine(imgDir, "logo.png")));


			for (int i = 0; i < 5; i++)
			{
				float angle = rand->Next(-360, 360);
				float dangle = rand->Next(-180, 180);
				float scale = rand->Next(2, 10) / 10.0f;
				Bitmap^ bm = ResizeImage(img0, scale);
				float rx = bm->Width / 2.0f;
				float ry = bm->Height / 2.0f;
				PointF^ center = gcnew PointF(
					rand->Next((int)rx, pictureBox1->ClientSize.Width - (int)rx),
					rand->Next((int)ry, pictureBox1->ClientSize.Height - (int)ry));
				float vx = rand->Next(50, 450);
				float vy = rand->Next(50, 450);
				if (rand->Next(0, 2) == 1) vx = -vx;
				if (rand->Next(0, 2) == 1) vy = -vy;
				PointF^ velocity = gcnew PointF(vx, vy);

				Sprites->Add(gcnew Sprite(angle, dangle, center, velocity, bm));
			}



			LastTime = DateTime::Now;
			timer1->Enabled = true;
		}



		void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			DateTime now = DateTime::Now;
			TimeSpan^ elapsedSpan = gcnew TimeSpan(now.Ticks - LastTime->Ticks);
			float elapsed = (float)elapsedSpan->TotalSeconds;
			for each (Sprite ^ sprite in Sprites)
			{
				sprite->Move(pictureBox1->Bounds, elapsed);
			}
			LastTime = now;
			pictureBox1->Refresh();
		}

		void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			e->Graphics->InterpolationMode = InterpolationMode::High;
			for each (Sprite ^ sprite in Sprites)
			{
				sprite->Draw(e->Graphics);
			}
		}


		Bitmap^ ResizeImage(Bitmap^ bm, float scale)
		{
			int width = (int)(bm->Width * scale);
			int height = (int)(bm->Height * scale);
			Bitmap^ result_bm = gcnew Bitmap(width, height);
			Graphics^ gr = Graphics::FromImage(result_bm);

			RectangleF src_rect;
			src_rect.X = 0;
			src_rect.Y = 0;
			src_rect.Width = img0->Width;
			src_rect.Height = img0->Height;

			PointF p1; p1.X = 0; p1.Y = 0;
			PointF p2; p2.X = width; p2.Y = 0;
			PointF p3; p3.X = 0; p3.Y = height;
			array<PointF>^ dest_points = { p1,p2,p3 };

			gr->DrawImage(img0, dest_points, src_rect, GraphicsUnit::Pixel);
			return result_bm;
		}

	};
}
