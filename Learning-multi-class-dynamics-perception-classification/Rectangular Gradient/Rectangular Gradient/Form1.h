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
//25.11 15:11
public class mypoints {

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

	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3class;
	private: System::Windows::Forms::Button^  button4class;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;






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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3class = (gcnew System::Windows::Forms::Button());
			this->button4class = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(412, 182);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 23);
			this->button2->TabIndex = 44;
			this->button2->Text = L"Calculate";
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
			this->button1->Location = System::Drawing::Point(412, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 23);
			this->button1->TabIndex = 46;
			this->button1->Text = L"Set";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button3class
			// 
			this->button3class->Location = System::Drawing::Point(0, 0);
			this->button3class->Name = L"button3class";
			this->button3class->Size = System::Drawing::Size(75, 23);
			this->button3class->TabIndex = 0;
			// 
			// button4class
			// 
			this->button4class->Location = System::Drawing::Point(0, 0);
			this->button4class->Name = L"button4class";
			this->button4class->Size = System::Drawing::Size(75, 23);
			this->button4class->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(412, 145);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(106, 20);
			this->textBox1->TabIndex = 47;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(412, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 20);
			this->textBox2->TabIndex = 48;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(409, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 49;
			this->label1->Text = L"Pattern Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(409, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Count of Class";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 419);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
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
			 float  ** Wmatrix_last;
			 bool cizdirme = false;
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


				 n = realpoints.size();
				 Xinputs = new float *[n];
				 for (int i = 0; i < n; i++){
					 Xinputs[i] = new float[3 + n_class_count];
				 }

				 mypoints value;
				 int i = 0;
				 for (std::list<mypoints>::iterator it = realpoints.begin(); it != realpoints.end(); ++it)
				 {
					 //LOAD INPUTS
					 value = *it;
					 Xinputs[i][0] = value.X;
					 Xinputs[i][1] = value.Y;
					 Xinputs[i][2] = 1;
					 //d
					 for (int k = 3; k < (n_class_count + 3); k++){
						 //d is setting here
						 if ((value.Z + 2) == k){
							 Xinputs[i][k] = 1;
						 }
						 else{
							 Xinputs[i][k] = -1;
						 }
					 }
					 i++;

				 }
				 float  ** durum;
				 durum = new float *[n];
				 for (int i = 0; i < n; i++)
					 durum[i] = new float[n_class_count];

				 for (int i = 0; i < n; i++){
					 for (int j = 0; j < n_class_count; j++){
						 durum[i][j] = 1;
					 }

				 }
				 float  ** Wmatrix;
				 Wmatrix = new float *[n_class_count];
				 for (int i = 0; i < n_class_count; i++){
					 Wmatrix[i] = new float[3];
				 }

				 float c = 1;
				 for (int i = 0; i < n_class_count; i++)
				 {
					 for (int j = 0; j < 3; j++)
					 {
						 Wmatrix[i][j] = 0.0001;
					 }
				 }

				 int dur = 1;
				 for (int x_index = 0; x_index < n; x_index++)
				 {
					 //For X input:
					 //öðrenmeyini bul ve öðret
					 for (int j = 0; j < n_class_count; j++)
					 {
						 // calculate w1,w2,w3,w4 for a X input
						 //w lar hesaplnýyor
						 durum[x_index][j] = fwk_Plus(c, Xinputs[x_index][3 + j], Wmatrix[j], Xinputs, x_index, j);
					 }
					 // search exit from the loop
					 if (x_index == (n - 1)){
						 dur = 1;
						 for (int i = 0; i < n; i++)
						 {
							 for (int k = 0; k < n_class_count; k++){

								 if (durum[i][k] != 0){
									 dur = 0;
									 break;
								 }
							 }
						 }
						 if (dur == 1) break;
						 x_index = -1;
						 Wmatrix_last = Wmatrix;
						 //cizdirme = true;
						 // this->Refresh();
						 //hepsini hatalý yapýyorum
						 for (int i = 0; i < n; i++){
							 for (int j = 0; j < n_class_count; j++){
								 durum[i][j] = 1;
							 }

						 }
					 }

				 }
				 Wmatrix_last = Wmatrix;
				 cizdirme = true;
				 this->Refresh();
	}
			 float fwk_Plus(float c, float d, float * Wk, float ** X, int index, int j)
			 {
				 float value = 0;
				 value = c*0.5*(d - fsgn(fnet(Wk, X, index)));
				 if (value != 0){
					 Wk[0] = Wk[0] + value* X[index][0];
					 Wk[1] = Wk[1] + value* X[index][1];
					 Wk[2] = Wk[2] + value* X[index][2];
				 }
				 return value;
			 }

			 float fsgn(float value)
			 {
				 if (value > 0){
					 return 1;
				 }
				 else{
					 return -1;
				 }
			 }

			 float fnet(float *W, float **X, int index)
			 {
				 float result = 0;
				 for (int i = 0; i < 3; i++){
					 result = result + W[i] * X[index][i];
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
				 if (x_class_x >= 1 && x_class_x <= n_class_count){

					 //burda listeye doldur gelen pixel deðerlerini-200 çýkartýlmýþ deðeri real dünya bunu noktalar gerçel listesinde tutacaðýz
					 asd->X = MousePosition.X - this->Left - 11;
					 asd->Y = (MousePosition.Y - this->Top - 34);
					 asd->Z = x_class_x;
					 drawspoints.push_back(*asd);
					 real_asd->X = (MousePosition.X - this->Left - 11) - 200;
					 real_asd->Y = 200 - (MousePosition.Y - this->Top - 34);
					 real_asd->Z = x_class_x;
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
				 blackPen->Width = 4;
				 Pen^ yellowPen = gcnew Pen(Color::Yellow);
				 yellowPen->Width = 1;
				 Pen^ BluePen = gcnew Pen(Color::DarkBlue);
				 BluePen->Width = 3;
				 Point p1;
				 Point p2;
				 g->DrawLine(blackPen, 0, 200, 400, 200);//X koordinant
				 g->DrawLine(blackPen, 200, 0, 200, 400);//Y
				 g->DrawEllipse(yellowPen, 50, 50, 300, 300);//ci
				 if (cizdirme == true){
					 for (int i = 0; i < n_class_count; i++)
					 {
						 x_r = Wmatrix_last[i][0];
						 y_r = Wmatrix_last[i][1];
						 c_r = Wmatrix_last[i][2];

						 
						 float x1_deger = 0;
						 float y1_deger = 0;
						 float x2_deger = 0;
						 float y2_deger = 0;

						 y1_deger = -80;
						 x1_deger = (((-1)*c_r) - (y1_deger*y_r)) / x_r;

						 y2_deger = +80;
						 x2_deger = (((-1)*c_r) - (y2_deger*y_r)) / x_r;

						 p1.X = x1_deger + 200;
						 p1.Y = 200 - y1_deger;

						 p2.X = x2_deger + 200;
						 p2.Y = 200 - y2_deger;

						 if (p1.X > 400 || p1.X < -400 || p1.Y > 400 || p1.Y < -400){
							 x1_deger = -80;
							 y1_deger = (((-1)*c_r) - (x1_deger*x_r)) / y_r;
							 p1.X = x1_deger + 200;
							 p1.Y = 200 - y1_deger;
						 }
						 if (p2.X > 400 || p2.X < -400 || p2.Y > 400 || p2.Y < -400){
							 x2_deger = +80;
							 y2_deger = (((-1)*c_r) - (x2_deger*x_r)) / y_r;
							 p2.X = x2_deger + 200;
							 p2.Y = 200 - y2_deger;
						 }
						 g->DrawLine(redPen, p1.X, p1.Y, p2.X, p2.Y);
					 }
					 //burda listeden verileri oku ve nokta bas-bunlar tamami ile pixel deðerleri
					 mypoints value;
					 for (std::list<mypoints>::iterator it = drawspoints.begin(); it != drawspoints.end(); ++it)
					 {
						 value = *it;
						 g->DrawLine(BluePen, value.X, value.Y, value.X, value.Y - 2);
					 }
					 cizdirme = false;
				 }
				 else{
					 //burda listeden verileri oku ve nokta bas					
					 mypoints value;
					 for (std::list<mypoints>::iterator it = drawspoints.begin(); it != drawspoints.end(); ++it)
					 {
						 value = *it;
						 g->DrawLine(BluePen, value.X, value.Y, value.X, value.Y - 2);
					 }
				 }

	}
			 int x_class_x = 0;
			 int n_class_count = 0;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 n_class_count = Convert::ToInt32(textBox2->Text);
				 MessageBox::Show("n:" + n_class_count);
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 try{

				 
				 x_class_x = Convert::ToInt32(textBox1->Text);
				 }
				 catch (...){

				 }
	}
	};
}

