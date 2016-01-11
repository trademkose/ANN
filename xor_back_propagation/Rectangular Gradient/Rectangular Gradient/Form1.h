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
	private: System::Windows::Forms::PictureBox^  pictureBox2;




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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(3, 409);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(400, 297);
			this->richTextBox1->TabIndex = 43;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(431, 495);
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
			this->button1->Location = System::Drawing::Point(431, 409);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 46;
			this->button1->Text = L"1.Sýnýf (X1)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(431, 450);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 47;
			this->button3->Text = L"2.Sýnýf (X2)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(409, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(400, 400);
			this->pictureBox2->TabIndex = 48;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox2_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(820, 741);
			this->Controls->Add(this->pictureBox2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
			 float **Xinputs_output_layer;
			 int n = 0;
			 bool cizdirme = false;
			 float  * Wmatrix1;
			 float  * Wmatrix2;
			 float  * Wmatrix3o;
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


				 n = realpoints.size();
				
				 Xinputs = new float *[n];
				 for (int i = 0; i < n; i++)
					 Xinputs[i] = new float[4];

				 Xinputs_output_layer = new float *[1];
				 for (int i = 0; i < 1; i++)
					 Xinputs_output_layer[i] = new float[3];
				 float output_value;

				 mypoints value;
				 int i = 0;
				 for (std::list<mypoints>::iterator it = realpoints.begin(); it != realpoints.end(); ++it)
				 {
					 value = *it;
					 Xinputs[i][0] = value.X / 400;
					 Xinputs[i][1] = value.Y / 400;
					 Xinputs[i][2] = 1;
					 Xinputs[i][3] = value.Z;//d



					 i++;
				 }






				 float c = 1;

				 Wmatrix1 = new float[3];
				 Wmatrix2 = new float[3];
				 Wmatrix3o = new float[3];

				 float  * Wmatrix1_delta;
				 Wmatrix1_delta = new float[3];
				 float  * Wmatrix2_delta;
				 Wmatrix2_delta = new float[3];
				 float  * Wmatrix3o_delta;
				 Wmatrix3o_delta = new float[3];


				 //nabiyev's weights
				 /*s
				 mypoints asd;
				 asd.X = 200;
				 asd.Y = 200;
				 asd.Z = 0;
				 drawspoints.push_back(asd);
				 asd.X = 200;
				 asd.Y = 100;
				 asd.Z = 1;
				 drawspoints.push_back(asd);
				 asd.X = 300;
				 asd.Y = 200;
				 asd.Z = 1;
				 drawspoints.push_back(asd);
				 asd.X = 300;
				 asd.Y = 100;
				 asd.Z = 0;
				 drawspoints.push_back(asd);
				
				 Xinputs[0][0] = 0;
				 Xinputs[0][1] = 0;
				 Xinputs[0][2] = 1;
				 Xinputs[0][3] = 0;

				 Xinputs[1][0] = 0;
				 Xinputs[1][1] = 1;
				 Xinputs[1][2] = 1;
				 Xinputs[1][3] = 1;

				 Xinputs[2][0] = 1;
				 Xinputs[2][1] = 0;
				 Xinputs[2][2] = 1;
				 Xinputs[2][3] = 1;

				 Xinputs[3][0] = 1;
				 Xinputs[3][1] = 1;
				 Xinputs[3][2] = 1;
				 Xinputs[3][3] = 0;
				 */
				 Wmatrix1[0] = -0.1558;
				 Wmatrix1[1] = -0.5060;
				 Wmatrix1[2] = 0.8625;

				 Wmatrix2[0] = 0.2829;
				 Wmatrix2[1] = -0.8644;
				 Wmatrix2[2] = 0.8350;

				 Wmatrix3o[0] = -0.4304;
				 Wmatrix3o[1] = 0.4812;
				 Wmatrix3o[2] = 0.0365;




				 //Ercan's weights
				 /*
				 Xinputs[0][0] = 0;
				 Xinputs[0][1] = 0;
				 Xinputs[0][2] = 1;
				 Xinputs[0][3] = 0;

				 Xinputs[1][0] = 0;
				 Xinputs[1][1] = 1;
				 Xinputs[1][2] = 1;
				 Xinputs[1][3] = 1;

				 Xinputs[2][0] = 1;
				 Xinputs[2][1] = 0;
				 Xinputs[2][2] = 1;
				 Xinputs[2][3] = 1;

				 Xinputs[3][0] = 1;
				 Xinputs[3][1] = 1;
				 Xinputs[3][2] = 1;
				 Xinputs[3][3] = 0;

				 Wmatrix1[0] = 0.129952;
				 Wmatrix1[1] = -0.923123;
				 Wmatrix1[2] = 0.341232;

				 Wmatrix2[0] = 0.570345;
				 Wmatrix2[1] = 0.328932;
				 Wmatrix2[2] = -0.115223;

				 Wmatrix3o[0] = 0.164732;
				 Wmatrix3o[1] = 0.752621;
				 Wmatrix3o[2] = -0.993423;

				 */

				 Wmatrix1_delta[0] = 0;
				 Wmatrix1_delta[1] = 0;
				 Wmatrix1_delta[2] = 0;

				 Wmatrix2_delta[0] = 0;
				 Wmatrix2_delta[1] = 0;
				 Wmatrix2_delta[2] = 0;

				 Wmatrix3o_delta[0] = 0;
				 Wmatrix3o_delta[1] = 0;
				 Wmatrix3o_delta[2] = 0;

				 float epsilon_error = 0;
				 float sum_error = 0;
				 int dur = 1;
				 float s1 = 0, s2 = 0, s3 = 0;
				 int x_index = 0;
				 while (TRUE)
				 {
					 for (int i = 0; i < n; i++){
						 Xinputs_output_layer[0][0] = fsgn(fnet(Wmatrix1, Xinputs, i));
						 Xinputs_output_layer[0][1] = fsgn(fnet(Wmatrix2, Xinputs, i));
						 Xinputs_output_layer[0][2] = 1;
						 output_value = fsgn(fnet(Wmatrix3o, Xinputs_output_layer, 0));
						 epsilon_error = Xinputs[i][3] - output_value;
						 /* this->richTextBox1->Text += "Xinputs_output_layer : " + Xinputs_output_layer[0][0] + "\n";
						  this->richTextBox1->Text += "Xinputs_output_layer : " + Xinputs_output_layer[0][1] + "\n";

						  this->richTextBox1->Text += "output_value : " + output_value + "\n";
						  this->richTextBox1->Text += "epsilon_error : " + epsilon_error + "\n";*/


						 s3 = output_value*(1 - output_value)*epsilon_error;
						 s1 = Xinputs_output_layer[0][0] * (1 - Xinputs_output_layer[0][0])*s3*Wmatrix3o[0];

						 s2 = Xinputs_output_layer[0][1] * (1 - Xinputs_output_layer[0][1])*s3*Wmatrix3o[1];

						 /*this->richTextBox1->Text += "s3 : " + s3 + "\n";
						 this->richTextBox1->Text += "s1 : " + s1 + "\n";
						 this->richTextBox1->Text += "s2 : " + s2 + "\n";*/



						 calc_delta_w(s3, 0.5, 0.8, Wmatrix3o_delta, Xinputs_output_layer, 0);
						 /*this->richTextBox1->Text += "Wmatrix3o_delta : " + Wmatrix3o_delta[0] + "\n";
						  this->richTextBox1->Text += "Wmatrix3o_delta : " + Wmatrix3o_delta[1] + "\n";
						  this->richTextBox1->Text += "Wmatrix3o_delta : " + Wmatrix3o_delta[2] + "\n";

						  this->richTextBox1->Text += "Wmatrix3o : " + Wmatrix3o[0] + "\n";
						  this->richTextBox1->Text += "Wmatrix3o : " + Wmatrix3o[1] + "\n";
						  this->richTextBox1->Text += "Wmatrix3o : " + Wmatrix3o[2] + "\n";*/
						 update_w(Wmatrix3o, Wmatrix3o_delta);
						 /* this->richTextBox1->Text += "*Wmatrix3o : " + Wmatrix3o[0] + "\n";
						  this->richTextBox1->Text += "*Wmatrix3o : " + Wmatrix3o[1] + "\n";
						  this->richTextBox1->Text += "*Wmatrix3o : " + Wmatrix3o[2] + "\n";*/




						 calc_delta_w(s1, 0.5, 0.8, Wmatrix1_delta, Xinputs, i);

						 /*	this->richTextBox1->Text += "Wmatrix1_delta : " + Wmatrix1_delta[0] + "\n";
							  this->richTextBox1->Text += "Wmatrix1_delta : " + Wmatrix1_delta[1] + "\n";
							  this->richTextBox1->Text += "Wmatrix1_delta : " + Wmatrix1_delta[2] + "\n";

							  this->richTextBox1->Text += "Wmatrix1 : " + Wmatrix1[0] + "\n";
							  this->richTextBox1->Text += "Wmatrix1 : " + Wmatrix1[1] + "\n";
							  this->richTextBox1->Text += "Wmatrix1 : " + Wmatrix1[2] + "\n";*/
						 update_w(Wmatrix1, Wmatrix1_delta);
						 /*this->richTextBox1->Text += "*Wmatrix1 : " + Wmatrix1[0] + "\n";
						  this->richTextBox1->Text += "*Wmatrix1 : " + Wmatrix1[1] + "\n";
						  this->richTextBox1->Text += "*Wmatrix1 : " + Wmatrix1[2] + "\n";*/




						 calc_delta_w(s2, 0.5, 0.8, Wmatrix2_delta, Xinputs, i);

						 /*this->richTextBox1->Text += "Wmatrix2_delta : " + Wmatrix2_delta[0] + "\n";
						 this->richTextBox1->Text += "Wmatrix2_delta : " + Wmatrix2_delta[1] + "\n";
						 this->richTextBox1->Text += "Wmatrix2_delta : " + Wmatrix2_delta[2] + "\n";


						 this->richTextBox1->Text += "Wmatrix2 : " + Wmatrix2[0] + "\n";
						 this->richTextBox1->Text += "Wmatrix2 : " + Wmatrix2[1] + "\n";
						 this->richTextBox1->Text += "Wmatrix2 : " + Wmatrix2[2] + "\n";*/
						 update_w(Wmatrix2, Wmatrix2_delta);
						 /*	this->richTextBox1->Text += "*Wmatrix2 : " + Wmatrix2[0] + "\n";
							  this->richTextBox1->Text += "*Wmatrix2 : " + Wmatrix2[1] + "\n";
							  this->richTextBox1->Text += "*Wmatrix2 : " + Wmatrix2[2] + "\n";


							  this->richTextBox1->Text += "Error:" + epsilon_error + " \n";*/
						 sum_error += epsilon_error*epsilon_error;

						 /*this->richTextBox1->Text += "-----------sum_error-------------:" + sum_error + " \n";
						 this->richTextBox1->Text += "------------------------: \n";*/


					 }
					 sum_error = sqrt(sum_error);
					 if (sum_error < 0.012)break;
					 sum_error = 0;


				 }

				 for (int i = 0; i < n; i++){

					 /*
					 this->richTextBox1->Text += "Xinputs : " + i + "   " + +Xinputs[i][0] + "\n";
					 this->richTextBox1->Text += "Xinputs : " + i + "   " + Xinputs[i][1] + "\n";
					 this->richTextBox1->Text += "Xinputs : " + i + "   " + Xinputs[i][3] + "\n";
					 */
				 }

				 this->richTextBox1->Text += "*Wmatrix1 : " + Wmatrix1[0] + "\n";
				 this->richTextBox1->Text += "*Wmatrix1 : " + Wmatrix1[1] + "\n";
				 this->richTextBox1->Text += "*Wmatrix1 : " + Wmatrix1[2] + "\n";

				 this->richTextBox1->Text += "*Wmatrix2 : " + Wmatrix2[0] + "\n";
				 this->richTextBox1->Text += "*Wmatrix2 : " + Wmatrix2[1] + "\n";
				 this->richTextBox1->Text += "*Wmatrix2 : " + Wmatrix2[2] + "\n";



				 this->richTextBox1->Text += "*Wmatrix3o : " + Wmatrix3o[0] + "\n";
				 this->richTextBox1->Text += "*Wmatrix3o : " + Wmatrix3o[1] + "\n";
				 this->richTextBox1->Text += "*Wmatrix3o : " + Wmatrix3o[2] + "\n";

				 cizdirme = true;
				 this->Refresh();

	}
			 int calc_delta_w(float S, float L, float M, float * Wk_delta, float ** X, int index)
			 {
				 Wk_delta[0] = L*S*(X[index][0]) + M*(Wk_delta[0]);
				 Wk_delta[1] = L*S*(X[index][1]) + M*(Wk_delta[1]);
				 Wk_delta[2] = L*S*(X[index][2]) + M*(Wk_delta[2]);
				 return 1;

			 }
			 int update_w(float * Wk, float * Wk_delta)
			 {
				 Wk[0] = Wk[0] + Wk_delta[0];
				 Wk[1] = Wk[1] + Wk_delta[1];
				 Wk[2] = Wk[2] + Wk_delta[2];
				 return 1;

			 }

			 int fwk_Plus(float c, float d, float * Wk, float ** X, int index)
			 {

				 float value = 0;
				 float fnetval = fnet(Wk, X, index);
				 int fsgnval = fsgn(fnetval);

				 value = 0.5*c*(d - fsgnval);/*
				 this->richTextBox1->Text += "}\nvalue=" + value + "\n";*/

				 if (value != 0){
					 Wk[0] = Wk[0] + value* X[index][0];
					 Wk[1] = Wk[1] + value* X[index][1];
					 Wk[2] = Wk[2] + value* X[index][2];
				 }
				 return value;
			 }

			 float fnet(float *W, float **X, int index)
			 {

				 float result = 0;
				 for (int i = 0; i < 3; i++){
					 result = result + W[i] * X[index][i];
				 }

				 return result;
			 }

			 float fsgn(float value)
			 {
				 float exp_val;
				 float return_val;
				 exp_val = exp((double)-value);
				 return_val = 1 / (1 + exp_val);
				 return return_val;

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
					 // asd->Z = x_class_x;
					 asd->Z = 1;
					 drawspoints.push_back(*asd);

					 real_asd->X = (MousePosition.X - this->Left - 11) - 200;
					 real_asd->Y = 200 - (MousePosition.Y - this->Top - 34);
					 // MessageBox::Show(asd->X +":"+ asd->Y+"--->  "+real_asd->X + ":"+ real_asd->Y);
					 real_asd->Z = 1;
					 realpoints.push_back(*real_asd);
					 this->pictureBox1->Refresh();
				 }
				 else if (x_class_x == 0){


					 //burda listeye doldur gelen pixel deðerlerini-200 çýkartýlmýþ deðeri real dünya bunu noktalar gerçel listesinde tutacaðýz

					 asd->X = MousePosition.X - this->Left - 11;
					 asd->Y = (MousePosition.Y - this->Top - 34);
					 //asd->Z = x_class_x;
					 asd->Z = 0;
					 drawspoints.push_back(*asd);

					 real_asd->X = (MousePosition.X - this->Left - 11) - 200;
					 real_asd->Y = 200 - (MousePosition.Y - this->Top - 34);
					 real_asd->Z = 0;
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



				 if (cizdirme == true){
					

					 g->DrawLine(blackPen, 0, 200, 400, 200);//X koordinant
					 g->DrawLine(blackPen, 200, 0, 200, 400);//Y


					 for (int i = 0; i < 2; i++){
						 float x1_deger = 0;
						 float y1_deger = 0;
						 float x2_deger = 0;
						 float y2_deger = 0;
						 if (i == 0){
							 x_r = Wmatrix1[0];
							 y_r = Wmatrix1[1];
							 c_r = Wmatrix1[2];
						 }
						 else if (i == 1){

							 x_r = Wmatrix2[0];
							 y_r = Wmatrix2[1];
							 c_r = Wmatrix2[2];
							 redPen = GreenPen;
						 }

						 //y_r = y_r*-1;
						 //xr*x + yr*y +cr
						 y1_deger = 0;
						 x1_deger = (((-1)*c_r) - (y1_deger*y_r)) / x_r;

						 x2_deger = 0;
						 y2_deger = (((-1)*c_r) - (x2_deger*x_r)) / y_r;

						 x1_deger *= 400;
						 y2_deger *= 400;
						 p1.X = x1_deger + 200;
						 p1.Y = 200 - y1_deger;

						 p2.X = x2_deger + 200;
						 p2.Y = 200 - y2_deger;

						 g->DrawLine(redPen, p1.X, p1.Y, p2.X, p2.Y);
					 }
					 //burda listeden verileri oku ve nokta bas-bunlar tamami ile pixel deðerleri


					 mypoints value;

					 for (std::list<mypoints>::iterator it = drawspoints.begin(); it != drawspoints.end(); ++it)
					 {
						 value = *it;
						 if (value.Z == 1){

							 g->DrawLine(YellowPen, value.X, value.Y, value.X + 4, value.Y - 4);

						 }
						 else if (value.Z == 0){


							 g->DrawLine(GreenPen, value.X, value.Y, value.X + 4, value.Y - 4);

						 }
					 }


				 }
				 else{

					 //burda listeden verileri oku ve nokta bas

					 mypoints value;

					 for (std::list<mypoints>::iterator it = drawspoints.begin(); it != drawspoints.end(); ++it)
					 {
						 value = *it;
						 if (value.Z == 1){

							 g->DrawLine(YellowPen, value.X, value.Y, value.X + 4, value.Y - 4);

						 }
						 else if (value.Z == 0){


							 g->DrawLine(GreenPen, value.X, value.Y, value.X + 4, value.Y - 4);

						 }
					 }
				 }


	}
			 int x_class_x = 0;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 x_class_x = 1;



	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 x_class_x = 0;

	}



	private: System::Void pictureBox2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
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



				 if (cizdirme == true){
					 

					 g->DrawLine(blackPen, 0, 200, 400, 200);//X koordinant
					 g->DrawLine(blackPen, 200, 0, 200, 400);//Y


					 float x1_deger = 0;
					 float y1_deger = 0;
					 float x2_deger = 0;
					 float y2_deger = 0;


					 x_r = Wmatrix3o[0];
					 y_r = Wmatrix3o[1];
					 c_r = Wmatrix3o[2];


					 y1_deger = 0;
					 x1_deger = (((-1)*c_r) - (y1_deger*y_r)) / x_r;

					 x2_deger = 0;
					 y2_deger = (((-1)*c_r) - (x2_deger*x_r)) / y_r;

					 x1_deger *= 400;
					 y2_deger *= 400;
					 p1.X = x1_deger + 200;
					 p1.Y = 200 - y1_deger;

					 p2.X = x2_deger + 200;
					 p2.Y = 200 - y2_deger;

					 g->DrawLine(blackPen, p1.X, p1.Y, p2.X, p2.Y);

					 //burda listeden verileri oku ve nokta bas-bunlar tamami ile pixel deðerleri


					 mypoints value;
					 int i = 0;
					 for (std::list<mypoints>::iterator it = drawspoints.begin(); it != drawspoints.end(); ++it)
					 {
						 value = *it;
						 
						 int o1 = Xinputs[i][0] * Wmatrix1[0]
							 + Xinputs[i][1] * Wmatrix1[1] 
							 + Xinputs[i][2] * Wmatrix1[2] ;

						 int o2 = Xinputs[i][0] * Wmatrix2[0] 
							 + Xinputs[i][1] * Wmatrix2[1] 
							 + Xinputs[i][2] * Wmatrix2[2] ;
						 int x, y;
						 if (o1 < 0){
							 x = 50;
						 }
						 else{
							 x = 350;
						 }
						 if (o2 < 0){
							 y = 350;
						 }
						 else{
							 y = 50;

						 }
						 //********-----******
						 if (value.Z == 1){

							 g->DrawLine(YellowPen, x, y, x+ 4, y + 4);

						 }
						 else if (value.Z == 0){


							 g->DrawLine(GreenPen, x, y, x + 4, y + 4);

						 }
						 this->richTextBox1->Text += "sýnýf : " + value.Z + "\n";
						 this->richTextBox1->Text += "x : " + x + "\n"; 
						 this->richTextBox1->Text += "y : " + y + "\n";

						 i++;
					 }


				 }/*
				 else{

					 //burda listeden verileri oku ve nokta bas

					 mypoints value;

					 for (std::list<mypoints>::iterator it = drawspoints.begin(); it != drawspoints.end(); ++it)
					 {
						 value = *it;
						 if (value.Z == 1){

							 g->DrawLine(YellowPen, value.X, value.Y, value.X + 4, value.Y - 4);

						 }
						 else if (value.Z == 0){


							 g->DrawLine(GreenPen, value.X, value.Y, value.X + 4, value.Y - 4);

						 }
					 }
				 }*/

	}
	};
}

