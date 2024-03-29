#pragma once
using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Drawing;

ref class Sprite
{
public:
	float Angle;
	float DAngle;
	PointF^ Center;
	PointF^ Velocity;
	Bitmap^ Picture;
private:
	float Radius;
public:
	Sprite::Sprite(float angle, float dangle, PointF^ center, PointF^ velocity, Bitmap^ picture)
	{
		Angle = angle;
		DAngle = dangle;
		Center = center;
		Velocity = velocity;
		Picture = picture;
		Radius = Math::Min(picture->Width, picture->Height) / 2.0f;
	}
	void Move(Rectangle^ bounds, float elapsed)
	{
		//k¹t
		Angle += DAngle * elapsed;

		//w prawo
		Center->X += Velocity->X * elapsed;
		float right = Center->X + Radius;
		if (right > bounds->Right) {
			right = bounds->Right - (right - bounds->Right);
			Center->X = right - Radius;
			Velocity->X *= -1;
		}
		//w lewo
		float left = Center->X - Radius;
		if (left < 0) {
			left = -left;
			Center->X = left + Radius;
			Velocity->X = -Velocity->X;
		}
		//w dó³
		Center->Y += Velocity->Y * elapsed;
		float bottom = Center->Y + Radius;
		if (bottom > bounds->Bottom) {
			bottom = bounds->Bottom - (bottom - bounds->Bottom);
			Center->Y = bottom - Radius;
			Velocity->Y = -Velocity->Y;
		}
		//w górê
		float top = Center->Y - Radius;
		if (top < 0) {
			top = -top;
			Center->Y = top + Radius;
			Velocity->Y = -Velocity->Y;
		}
	}
	void Draw(Graphics^ gr)
	{
		GraphicsState^ state = gr->Save();
		gr->ResetTransform();
		gr->RotateTransform(Angle);
		gr->TranslateTransform(Center->X, Center->Y, MatrixOrder::Append);
		PointF point = PointF(-Radius, -Radius);
		gr->DrawImage(Picture, point);
		gr->Restore(state);
	}
};


