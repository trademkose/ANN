#pragma once
#pragma comment(lib, "user32.lib")
#define _WIN32_WINNT 0x0500 
#include <windows.h> 
#include <cstdlib>
#include <ctime>
#include <math.h>
#include<vector>
#include <list>
#include <process.h>
#using <system.drawing.dll>

class mypoints {

public:
	float X, Y, Z;
}noktalar;
std::list<mypoints> drawspoints;
std::list<mypoints> realpoints;
namespace RectangularGradient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  labelX1;
	private: System::Windows::Forms::Label^  labelX2;


	private: System::ComponentModel::IContainer^  components;




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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelX1 = (gcnew System::Windows::Forms::Label());
			this->labelX2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(412, 144);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(404, 297);
			this->richTextBox1->TabIndex = 43;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(412, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 44;
			this->button2->Text = L"Hesapla";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 400);
			this->pictureBox1->TabIndex = 45;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(412, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 46;
			this->button1->Text = L"1.Sýnýf (X1)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(412, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 47;
			this->button3->Text = L"2.Sýnýf (X2)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// labelX1
			// 
			this->labelX1->AutoSize = true;
			this->labelX1->Location = System::Drawing::Point(569, 29);
			this->labelX1->Name = L"labelX1";
			this->labelX1->Size = System::Drawing::Size(0, 13);
			this->labelX1->TabIndex = 48;
			// 
			// labelX2
			// 
			this->labelX2->AutoSize = true;
			this->labelX2->Location = System::Drawing::Point(710, 29);
			this->labelX2->Name = L"labelX2";
			this->labelX2->Size = System::Drawing::Size(0, 13);
			this->labelX2->TabIndex = 49;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 453);
			this->Controls->Add(this->labelX2);
			this->Controls->Add(this->labelX1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Form1";
			this->Text = L"Rectangular Gradient";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {









	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

	}
			 float x_r;
			 float y_r;
			 float c_r;

			 float **Xinputs;
			 int n = 0;
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


				 n = realpoints.size();

				 Xinputs = new float *[n];
				 for (int i = 0; i < n; i++)
					 Xinputs[i] = new float[4];


				 mypoints value;
				 int i = 0;
				 for (std::list<mypoints>::iterator it = realpoints.begin(); it != realpoints.end(); ++it)
				 {
					 value = *it;
					 Xinputs[i][0] = value.X;
					 Xinputs[i][1] = value.Y;
					 Xinputs[i][2] = 1;
					 Xinputs[i][3] = value.Z;//d
					 i++;

				 }








				 float  * durum;
				 durum = new float[n];
				 for (int i = 0; i < n; i++){
					 durum[i] = 1;

				 }

				 float  * Wmatrix;
				 Wmatrix = new float[3];

				
				 /*

				 Xinputs[0][0] = 1;
				 Xinputs[0][1] = 2;
				 Xinputs[0][2] = -1;
				 Xinputs[0][3] = 1;

				 Xinputs[2][0] = 1;
				 Xinputs[2][1] = 2;
				 Xinputs[2][2] = -1;
				 Xinputs[2][3] = 1;

				 Xinputs[1][0] = 2;
				 Xinputs[1][1] = 1;
				 Xinputs[1][2] = -1;
				 Xinputs[1][3] = -1;
				 */
				 /*
				 global_point1.X = Xinputs[0][0];
				 global_point1.Y = Xinputs[0][1];
				 global_point2.X = Xinputs[1][0];
				 global_point2.Y = Xinputs[1][1];
				 */
				 float c = 1;
				 Wmatrix[0] = 0.001;
				 Wmatrix[1] = 0.001;
				 Wmatrix[2] = 0.001;

				 //this->richTextBox1->Text += "Deger=" + fnet(Wmatrix, Xinputs, x_index);

				 //this->richTextBox1->Text += "\nfsgn=" + fsgn(fnet(Wmatrix, Xinputs, x_index));
				 int timeout = 0;

				 int dur = 1;
				 for (int x_index = 0; x_index < n; x_index++)
				 {
					
					 durum[x_index] = fwk_Plus(c, Xinputs[x_index][3], Wmatrix, Xinputs, x_index);

					 if (x_index == (n - 1)){
						 dur = 1;
						 for (int i = 0; i < n; i++)
						 {
							 if (durum[i] != 0){//her hangi birinde hata varsa
								 dur = 0;//bastan basla
							 }
						 }
						 if (dur == 1) break;
						 x_index = -1;//bastan basla
						 this->Refresh();

						 for (int i = 0; i < n; i++)
						 {
							 durum[i] = 1;//hepsini hatalý yapýyorum
						 }

					 }

					 x_r = Wmatrix[0];
					 y_r = Wmatrix[1];
					 c_r = Wmatrix[2];
					 //this->Refresh()

				 }

				 x_r = Wmatrix[0];
				 y_r = Wmatrix[1];
				 c_r = Wmatrix[2];
				 this->Refresh();

	}


			 int fwk_Plus(float c, float d, float * Wk, float ** X, int index)
			 {

				 float value = 0;

				/* this->richTextBox1->Text += "\n---------------------\nd=" + d;
				 this->richTextBox1->Text += "\nX=" + index + "{";
				 for (int i = 0; i < 3; i++)
				 {

					 this->richTextBox1->Text += X[index][i] + ",";
				 }*/
				 //this->richTextBox1->Text += "}\nfnet=" + fnet(Wk, X, index) + "\n";
				 //this->richTextBox1->Text += "fsgn=" + fsgn(fnet(Wk, X, index)) + "\n";

				 float fnetval = fnet(Wk, X, index);
				 int fsgnval = fsgn(fnetval);

				 value = 0.5*c*(d - fsgnval);/*
				 this->richTextBox1->Text += "}\nvalue=" + value + "\n";*/

				 if (value != 0){
					 Wk[0] = Wk[0] + value* X[index][0];
					 Wk[1] = Wk[1] + value* X[index][1];
					 Wk[2] = Wk[2] + value* X[index][2];
				 }

				 //this->richTextBox1->Text += "\nW{";
				 //for (int i = 0; i < 3; i++)
				 //{
					// this->richTextBox1->Text += Wk[i] + ",";
				 //}
				 //this->richTextBox1->Text += "}";
				 return value;


			 }

			 int fsgn(float value)
			 {
				 if (value > -1){
					 return 1;
				 }
				 else{

					 return -1;
				 }

			 }

			 float fnet(float *W, float **X, int index)
			 {
				 // this->richTextBox1->Text += "fnet\n";
				 float result = 0;
				 for (int i = 0; i < 3; i++){
					 result = result + W[i] * X[index][i];

					 // this->richTextBox1->Text += W[i] + "*" + X[index][i]+"\n";

				 }

				 return result;
			 }


	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {


				 mypoints* asd = new mypoints();
				 mypoints* real_asd = new mypoints();
				 POINT p; //pointer for position (global) 
				 GetCursorPos(&p);
				 this->Text = "X:" + Convert::ToString(MousePosition.X - this->Left - 11);
				 this->Text += "Y:" + Convert::ToString(MousePosition.Y - this->Top - 34);

				 if (x_class_x == 1){

					 //burda listeye doldur gelen pixel deðerlerini-200 çýkartýlmýþ deðeri real dünya bunu noktalar gerçel listesinde tutacaðýz					 
					 asd->X = MousePosition.X - this->Left - 11;
					 asd->Y = MousePosition.Y - this->Top - 34;
					 asd->Z = x_class_x;
					 drawspoints.push_back(*asd);

					 real_asd->X = (MousePosition.X - this->Left - 11) - 200;
					 real_asd->Y = 200 - (MousePosition.Y - this->Top - 34);
					 // MessageBox::Show(asd->X +":"+ asd->Y+"--->  "+real_asd->X + ":"+ real_asd->Y);
					 real_asd->Z = -1;
					 realpoints.push_back(*real_asd);
					 this->pictureBox1->Refresh();
				 }
				 else if (x_class_x == 2){


					 //burda listeye doldur gelen pixel deðerlerini-200 çýkartýlmýþ deðeri real dünya bunu noktalar gerçel listesinde tutacaðýz

					 asd->X = MousePosition.X - this->Left - 11;
					 asd->Y = (MousePosition.Y - this->Top - 34);
					 asd->Z = x_class_x;
					 drawspoints.push_back(*asd);

					 real_asd->X = (MousePosition.X - this->Left - 11) - 200;
					 real_asd->Y = 200 - (MousePosition.Y - this->Top - 34);
					 real_asd->Z = 1;
					 realpoints.push_back(*real_asd);

					 this->pictureBox1->Refresh();
				 }
				 else{

					 this->Text = "Class seçiniz örnek alýnýz!";
				 }



	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

				 Graphics^ g = e->Graphics;

				 Pen^ redPen = gcnew Pen(Color::Red);

				 redPen->Width = 1;

				 Pen^ blackPen = gcnew Pen(Color::Black);

				 blackPen->Width = 2;

				 Pen^ YellowPen = gcnew Pen(Color::Orange);

				 YellowPen->Width = 4;


				 Pen^ GreenPen = gcnew Pen(Color::ForestGreen);

				 GreenPen->Width = 4;


				 Point p1;
				 Point p2;
				 g->DrawLine(blackPen, 0, 200, 400, 200);//X koordinant
				 g->DrawLine(blackPen, 200, 0, 200, 400);//Y



				 if (x_r != 0.0 && y_r != 0.0){


					 g->DrawLine(blackPen, 0, 200, 400, 200);//X koordinant
					 g->DrawLine(blackPen, 200, 0, 200, 400);//Y
					 float x1_deger = 0;
					 float y1_deger = 0;
					 float x2_deger = 0;
					 float y2_deger = 0;
					 //y_r = y_r*-1;
					 y1_deger = -100;
					 x1_deger = (((-1)*c_r)-( y1_deger*y_r)) / x_r;
					
					 y2_deger = +100;
					 x2_deger =(((-1)*c_r) - (y2_deger*y_r))/ x_r;
					
					 p1.X = x1_deger + 200;
					 p1.Y = 200 - y1_deger;

					 p2.X = x2_deger + 200;
					 p2.Y = 200 - y2_deger;

					 g->DrawLine(redPen,  p1.X,  p1.Y, p2.X, p2.Y);

					 //burda listeden verileri oku ve nokta bas-bunlar tamami ile pixel deðerleri


					 mypoints value;

					 for (std::list<mypoints>::iterator it = drawspoints.begin(); it != drawspoints.end(); ++it)
					 {
						 value = *it;
						 if (value.Z == 1){

							 g->DrawLine(YellowPen, value.X, value.Y, value.X, value.Y - 1);

						 }
						 else if (value.Z == 2){


							 g->DrawLine(GreenPen, value.X, value.Y, value.X, value.Y - 1);

						 }
					 }


					 /*
					 this->richTextBox1->Text += "\n" + x_r + "X " + y_r + "Y " + c_r ;

					 this->richTextBox1->Text += "\nP1X=  " + p1.X + "     P1Y=  " + p1.Y;
					 this->richTextBox1->Text += "\nP2X=  " + p2.X + "     P2Y=  " + p2.Y;
					 this->richTextBox1->Text += "\nçizildi\n";
					 */



				 }
				 else{

					 //burda listeden verileri oku ve nokta bas
					 /*
					 g->DrawLine(YellowPen, global_draw_point1.X, global_draw_point1.Y, global_draw_point1.X, global_draw_point1.Y - 1);
					 g->DrawLine(GreenPen, global_draw_point2.X, global_draw_point2.Y, global_draw_point2.X, global_draw_point2.Y - 1);
					 */
					 mypoints value;

					 for (std::list<mypoints>::iterator it = drawspoints.begin(); it != drawspoints.end(); ++it)
					 {
						 value = *it;
						 if (value.Z == 1){

							 g->DrawLine(YellowPen, value.X, value.Y, value.X, value.Y - 1);

						 }
						 else if (value.Z == 2){


							 g->DrawLine(GreenPen, value.X, value.Y, value.X, value.Y - 1);

						 }
					 }
				 }


	}
			 int x_class_x = 0;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 x_class_x = 1;



	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 x_class_x = 2;

	}

	};
}

