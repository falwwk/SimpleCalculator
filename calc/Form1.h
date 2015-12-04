#pragma once
#include "math.h"
#include <string>
#include <msclr\marshal_cppstd.h>

namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  back_button;
	protected: 

	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  c_button;

	private: System::Windows::Forms::Button^  ce_button;
	private: System::Windows::Forms::Button^  n7_button;
	private: System::Windows::Forms::Button^  n8_button;
	private: System::Windows::Forms::Button^  n9_button;
	private: System::Windows::Forms::Button^  division_button;
	private: System::Windows::Forms::Button^  sqrt_button;
	private: System::Windows::Forms::Button^  n5_button;







	private: System::Windows::Forms::Button^  n4_button;
	private: System::Windows::Forms::Button^  n6_button;
	private: System::Windows::Forms::Button^  plus_button;
	private: System::Windows::Forms::Button^  hp_button;
	private: System::Windows::Forms::Button^  n1_button;
	private: System::Windows::Forms::Button^  n2_button;
	private: System::Windows::Forms::Button^  n3_button;
	private: System::Windows::Forms::Button^  sub_button;








	private: System::Windows::Forms::Button^  dv1_button;
	private: System::Windows::Forms::Button^  n0_button;
	private: System::Windows::Forms::Button^  chgsign_button;
	private: System::Windows::Forms::Button^  dot_button;
	private: System::Windows::Forms::Button^  add_button;





	private: System::Windows::Forms::Button^  equ_button;




	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->c_button = (gcnew System::Windows::Forms::Button());
			this->ce_button = (gcnew System::Windows::Forms::Button());
			this->n7_button = (gcnew System::Windows::Forms::Button());
			this->n8_button = (gcnew System::Windows::Forms::Button());
			this->n9_button = (gcnew System::Windows::Forms::Button());
			this->division_button = (gcnew System::Windows::Forms::Button());
			this->sqrt_button = (gcnew System::Windows::Forms::Button());
			this->n5_button = (gcnew System::Windows::Forms::Button());
			this->n4_button = (gcnew System::Windows::Forms::Button());
			this->n6_button = (gcnew System::Windows::Forms::Button());
			this->plus_button = (gcnew System::Windows::Forms::Button());
			this->hp_button = (gcnew System::Windows::Forms::Button());
			this->n1_button = (gcnew System::Windows::Forms::Button());
			this->n2_button = (gcnew System::Windows::Forms::Button());
			this->n3_button = (gcnew System::Windows::Forms::Button());
			this->sub_button = (gcnew System::Windows::Forms::Button());
			this->dv1_button = (gcnew System::Windows::Forms::Button());
			this->n0_button = (gcnew System::Windows::Forms::Button());
			this->chgsign_button = (gcnew System::Windows::Forms::Button());
			this->dot_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->equ_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// back_button
			// 
			this->back_button->Location = System::Drawing::Point(26, 60);
			this->back_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(63, 33);
			this->back_button->TabIndex = 0;
			this->back_button->Text = L"Back";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &Form1::back_button_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 18);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(259, 23);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// c_button
			// 
			this->c_button->Location = System::Drawing::Point(188, 60);
			this->c_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->c_button->Name = L"c_button";
			this->c_button->Size = System::Drawing::Size(73, 33);
			this->c_button->TabIndex = 2;
			this->c_button->Text = L"C";
			this->c_button->UseVisualStyleBackColor = true;
			this->c_button->Click += gcnew System::EventHandler(this, &Form1::c_button_Click);
			// 
			// ce_button
			// 
			this->ce_button->Location = System::Drawing::Point(104, 60);
			this->ce_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ce_button->Name = L"ce_button";
			this->ce_button->Size = System::Drawing::Size(69, 33);
			this->ce_button->TabIndex = 3;
			this->ce_button->Text = L"CE";
			this->ce_button->UseVisualStyleBackColor = true;
			this->ce_button->Click += gcnew System::EventHandler(this, &Form1::ce_button_Click);
			// 
			// n7_button
			// 
			this->n7_button->Location = System::Drawing::Point(26, 101);
			this->n7_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n7_button->Name = L"n7_button";
			this->n7_button->Size = System::Drawing::Size(39, 33);
			this->n7_button->TabIndex = 4;
			this->n7_button->Text = L"7";
			this->n7_button->UseVisualStyleBackColor = true;
			this->n7_button->Click += gcnew System::EventHandler(this, &Form1::n7_button_Click);
			// 
			// n8_button
			// 
			this->n8_button->Location = System::Drawing::Point(71, 101);
			this->n8_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n8_button->Name = L"n8_button";
			this->n8_button->Size = System::Drawing::Size(39, 33);
			this->n8_button->TabIndex = 5;
			this->n8_button->Text = L"8";
			this->n8_button->UseVisualStyleBackColor = true;
			this->n8_button->Click += gcnew System::EventHandler(this, &Form1::n8_button_Click);
			// 
			// n9_button
			// 
			this->n9_button->Location = System::Drawing::Point(116, 101);
			this->n9_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n9_button->Name = L"n9_button";
			this->n9_button->Size = System::Drawing::Size(39, 33);
			this->n9_button->TabIndex = 6;
			this->n9_button->Text = L"9";
			this->n9_button->UseVisualStyleBackColor = true;
			this->n9_button->Click += gcnew System::EventHandler(this, &Form1::n9_button_Click);
			// 
			// division_button
			// 
			this->division_button->Location = System::Drawing::Point(161, 101);
			this->division_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->division_button->Name = L"division_button";
			this->division_button->Size = System::Drawing::Size(39, 33);
			this->division_button->TabIndex = 7;
			this->division_button->Text = L"/";
			this->division_button->UseVisualStyleBackColor = true;
			this->division_button->Click += gcnew System::EventHandler(this, &Form1::division_button_Click);
			// 
			// sqrt_button
			// 
			this->sqrt_button->Location = System::Drawing::Point(206, 101);
			this->sqrt_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->sqrt_button->Name = L"sqrt_button";
			this->sqrt_button->Size = System::Drawing::Size(55, 33);
			this->sqrt_button->TabIndex = 8;
			this->sqrt_button->Text = L"SQRT";
			this->sqrt_button->UseVisualStyleBackColor = true;
			this->sqrt_button->Click += gcnew System::EventHandler(this, &Form1::sqrt_button_Click);
			// 
			// n5_button
			// 
			this->n5_button->Location = System::Drawing::Point(71, 142);
			this->n5_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n5_button->Name = L"n5_button";
			this->n5_button->Size = System::Drawing::Size(39, 33);
			this->n5_button->TabIndex = 9;
			this->n5_button->Text = L"5";
			this->n5_button->UseVisualStyleBackColor = true;
			this->n5_button->Click += gcnew System::EventHandler(this, &Form1::n5_button_Click);
			// 
			// n4_button
			// 
			this->n4_button->Location = System::Drawing::Point(26, 143);
			this->n4_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n4_button->Name = L"n4_button";
			this->n4_button->Size = System::Drawing::Size(39, 33);
			this->n4_button->TabIndex = 10;
			this->n4_button->Text = L"4";
			this->n4_button->UseVisualStyleBackColor = true;
			this->n4_button->Click += gcnew System::EventHandler(this, &Form1::n4_button_Click);
			// 
			// n6_button
			// 
			this->n6_button->Location = System::Drawing::Point(116, 142);
			this->n6_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n6_button->Name = L"n6_button";
			this->n6_button->Size = System::Drawing::Size(39, 33);
			this->n6_button->TabIndex = 11;
			this->n6_button->Text = L"6";
			this->n6_button->UseVisualStyleBackColor = true;
			this->n6_button->Click += gcnew System::EventHandler(this, &Form1::n6_button_Click);
			// 
			// plus_button
			// 
			this->plus_button->Location = System::Drawing::Point(161, 143);
			this->plus_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->plus_button->Name = L"plus_button";
			this->plus_button->Size = System::Drawing::Size(39, 33);
			this->plus_button->TabIndex = 12;
			this->plus_button->Text = L"*";
			this->plus_button->UseVisualStyleBackColor = true;
			this->plus_button->Click += gcnew System::EventHandler(this, &Form1::plus_button_Click);
			// 
			// hp_button
			// 
			this->hp_button->Location = System::Drawing::Point(206, 143);
			this->hp_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->hp_button->Name = L"hp_button";
			this->hp_button->Size = System::Drawing::Size(55, 33);
			this->hp_button->TabIndex = 13;
			this->hp_button->Text = L"%";
			this->hp_button->UseVisualStyleBackColor = true;
			this->hp_button->Click += gcnew System::EventHandler(this, &Form1::hp_button_Click);
			// 
			// n1_button
			// 
			this->n1_button->Location = System::Drawing::Point(26, 183);
			this->n1_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n1_button->Name = L"n1_button";
			this->n1_button->Size = System::Drawing::Size(39, 33);
			this->n1_button->TabIndex = 14;
			this->n1_button->Text = L"1";
			this->n1_button->UseVisualStyleBackColor = true;
			this->n1_button->Click += gcnew System::EventHandler(this, &Form1::n1_button_Click);
			// 
			// n2_button
			// 
			this->n2_button->Location = System::Drawing::Point(71, 183);
			this->n2_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n2_button->Name = L"n2_button";
			this->n2_button->Size = System::Drawing::Size(39, 33);
			this->n2_button->TabIndex = 15;
			this->n2_button->Text = L"2";
			this->n2_button->UseVisualStyleBackColor = true;
			this->n2_button->Click += gcnew System::EventHandler(this, &Form1::n2_button_Click);
			// 
			// n3_button
			// 
			this->n3_button->Location = System::Drawing::Point(116, 183);
			this->n3_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n3_button->Name = L"n3_button";
			this->n3_button->Size = System::Drawing::Size(39, 33);
			this->n3_button->TabIndex = 16;
			this->n3_button->Text = L"3";
			this->n3_button->UseVisualStyleBackColor = true;
			this->n3_button->Click += gcnew System::EventHandler(this, &Form1::n3_button_Click);
			// 
			// sub_button
			// 
			this->sub_button->Location = System::Drawing::Point(161, 184);
			this->sub_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->sub_button->Name = L"sub_button";
			this->sub_button->Size = System::Drawing::Size(39, 33);
			this->sub_button->TabIndex = 17;
			this->sub_button->Text = L"-";
			this->sub_button->UseVisualStyleBackColor = true;
			this->sub_button->Click += gcnew System::EventHandler(this, &Form1::sub_button_Click);
			// 
			// dv1_button
			// 
			this->dv1_button->Location = System::Drawing::Point(206, 184);
			this->dv1_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dv1_button->Name = L"dv1_button";
			this->dv1_button->Size = System::Drawing::Size(55, 33);
			this->dv1_button->TabIndex = 18;
			this->dv1_button->Text = L"1/x";
			this->dv1_button->UseVisualStyleBackColor = true;
			this->dv1_button->Click += gcnew System::EventHandler(this, &Form1::dv1_button_Click);
			// 
			// n0_button
			// 
			this->n0_button->Location = System::Drawing::Point(26, 224);
			this->n0_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->n0_button->Name = L"n0_button";
			this->n0_button->Size = System::Drawing::Size(39, 33);
			this->n0_button->TabIndex = 19;
			this->n0_button->Text = L"0";
			this->n0_button->UseVisualStyleBackColor = true;
			this->n0_button->Click += gcnew System::EventHandler(this, &Form1::n0_button_Click);
			// 
			// chgsign_button
			// 
			this->chgsign_button->Location = System::Drawing::Point(71, 224);
			this->chgsign_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->chgsign_button->Name = L"chgsign_button";
			this->chgsign_button->Size = System::Drawing::Size(39, 33);
			this->chgsign_button->TabIndex = 20;
			this->chgsign_button->Text = L"+/-";
			this->chgsign_button->UseVisualStyleBackColor = true;
			this->chgsign_button->Click += gcnew System::EventHandler(this, &Form1::chgsign_button_Click);
			// 
			// dot_button
			// 
			this->dot_button->Location = System::Drawing::Point(116, 224);
			this->dot_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dot_button->Name = L"dot_button";
			this->dot_button->Size = System::Drawing::Size(39, 33);
			this->dot_button->TabIndex = 21;
			this->dot_button->Text = L".";
			this->dot_button->UseVisualStyleBackColor = true;
			this->dot_button->Click += gcnew System::EventHandler(this, &Form1::dot_button_Click);
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(161, 225);
			this->add_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(39, 33);
			this->add_button->TabIndex = 22;
			this->add_button->Text = L"+";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &Form1::add_button_Click);
			// 
			// equ_button
			// 
			this->equ_button->Location = System::Drawing::Point(206, 225);
			this->equ_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->equ_button->Name = L"equ_button";
			this->equ_button->Size = System::Drawing::Size(55, 33);
			this->equ_button->TabIndex = 23;
			this->equ_button->Text = L"=";
			this->equ_button->UseVisualStyleBackColor = true;
			this->equ_button->Click += gcnew System::EventHandler(this, &Form1::equ_button_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 271);
			this->Controls->Add(this->equ_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->dot_button);
			this->Controls->Add(this->chgsign_button);
			this->Controls->Add(this->n0_button);
			this->Controls->Add(this->dv1_button);
			this->Controls->Add(this->sub_button);
			this->Controls->Add(this->n3_button);
			this->Controls->Add(this->n2_button);
			this->Controls->Add(this->n1_button);
			this->Controls->Add(this->hp_button);
			this->Controls->Add(this->plus_button);
			this->Controls->Add(this->n6_button);
			this->Controls->Add(this->n4_button);
			this->Controls->Add(this->n5_button);
			this->Controls->Add(this->sqrt_button);
			this->Controls->Add(this->division_button);
			this->Controls->Add(this->n9_button);
			this->Controls->Add(this->n8_button);
			this->Controls->Add(this->n7_button);
			this->Controls->Add(this->ce_button);
			this->Controls->Add(this->c_button);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->back_button);
			this->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Form1";
			this->Text = L"Calculator Beta";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double value1,value2,result;
		int mode,len;
		
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void back_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					 std::string s;
					 s = marshal_as<std::string>(textBox1->Text);
					 len = textBox1->Text->Length;
					 s = s.substr(0,len-1);
					 textBox1->Text = marshal_as<String^>(s);
				 }
		 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
	private: System::Void n7_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="7";
		 }
	private: System::Void n8_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="8";
		 }
	private: System::Void n9_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="9";
		 }
	private: System::Void n4_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="4";
		 }
	private: System::Void n5_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="5";
		 }
	private: System::Void n6_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="6";
		 }
	private: System::Void n1_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="1";
		 }
	private: System::Void n2_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="2";
		 }
	private: System::Void n3_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="3";
		 }
	private: System::Void n0_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+="0";
		 }
	private: System::Void dot_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text+=".";
		 }
	private: System::Void chgsign_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					 if(mode){
						 value2 = double::Parse(textBox1->Text);
						 value2 = 0 - value2;
						 textBox1->Text=value2.ToString();
					 }
					 else{
						 value1 = double::Parse(textBox1->Text);
						 value1 = 0 - value1;
						 textBox1->Text=value1.ToString();
					 }
				 }
		 }
	private: System::Void add_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					value1 = double::Parse(textBox1->Text);
					mode = 1;
					textBox1->Text="";
				 }
		 }
	private: System::Void sub_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					 value1 = double::Parse(textBox1->Text);
					 mode = 2;
					 textBox1->Text="";
				 }
		 }
	private: System::Void plus_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					 value1 = double::Parse(textBox1->Text);
					 mode = 3;
					 textBox1->Text="";
				 }
		 }
	private: System::Void division_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					value1 = double::Parse(textBox1->Text);
					mode = 4;
					textBox1->Text="";
				 }
		 }
	private: System::Void equ_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="Please input number";
				 }
				 else{
					 value2 = double::Parse(textBox1->Text);
					 switch (mode)
					 {
						case 1: result = value1 + value2; break;
						case 2: result = value1 - value2; break;
						case 3: result = value1 * value2; break;
						case 4: result = value1 / value2; break;
						case 0: textBox1->Text="Wrong mode"; break;
					 }
					 textBox1->Text=result.ToString();
					 mode = 0;
				 }
		 }
	private: System::Void ce_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 value1 = 0.0;
				 value2 = 0.0;
				 result = 0.0;
				 mode = 0;
				 textBox1->Text="";
		 }
	private: System::Void c_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					 if(mode){
						 value2 = 0;
						 textBox1->Text="";
					 }
					 else{
						 value1 = 0;
						 textBox1->Text="";
					 }
				 }
		 }
	private: System::Void sqrt_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					value2 = 0;
					value1 = double::Parse(textBox1->Text);
					result = sqrt(value1);
					textBox1->Text=result.ToString();
					mode = 0;
				 }
		 }
	private: System::Void hp_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					value2 = 0;
					value1 = double::Parse(textBox1->Text);
					result = value1 / 100;
					textBox1->Text=result.ToString();
					mode = 0;
				 }
		 }
	private: System::Void dv1_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text==""){
					 textBox1->Text="";
				 }
				 else{
					value2 = 0;
					value1 = double::Parse(textBox1->Text);
					result = 1 / value1;
					textBox1->Text=result.ToString();
					mode = 0;
				 }
		 }
};
}

