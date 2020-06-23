#include "enigma.h"
#include "ui_enigma.h"
#include "information.h"
#include <iostream>
#include "string"
#include <QMessageBox>

using namespace std;

void rotor1go();
void rotor2go();
void rotor3go();
void rotor4go();
void rotor5go();
void rotor6go();
void rotor7go();
void rotor8go();
void rotor1back();
void rotor2back();
void rotor3back();
void rotor4back();
void rotor5back();
void rotor6back();
void rotor7back();
void rotor8back();
void alphago();
void alphaback();
void reflectorB();
void reflectorC();
void delimiter_x_rotor();
void delimiter_y_rotor();
void delimiter_z_rotor();
void delimiter_x_number();
void delimiter_y_number();
void delimiter_z_number();
void delimiter_x_rotor_back();
void delimiter_y_rotor_back();
void delimiter_z_rotor_back();

int a;
int number_x_number = 1, number_y_number = 2, number_z_number = 3, number_x_rotor = 0, number_y_rotor = 0, number_z_rotor = 0;
QString reflector, b, out, x_number, y_number, z_number, x_rotor, y_rotor, z_rotor;

Enigma::Enigma(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Enigma)
{
    ui->setupUi(this);

    connect(ui->pushButton_A, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_B, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_C, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_D, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_E, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_F, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_G, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_H, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_I, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_J, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_K, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_L, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_M, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_N, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_O, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_P, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_Q, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_R, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_S, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_T, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_U, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_V, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_W, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_X, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_Y, SIGNAL(clicked()),this,SLOT(digits_in()));
    connect(ui->pushButton_Z, SIGNAL(clicked()),this,SLOT(digits_in()));

}

Enigma::~Enigma()
{
    delete ui;
}

void Enigma::on_pushButton_clicked()
{
    x_number = ui->line_x_number->text();
    y_number = ui->line_y_number->text();
    z_number = ui->line_z_number->text();
    x_rotor = ui->line_x_rotor->text();
    y_rotor = ui->line_y_rotor->text();
    z_rotor = ui->line_z_rotor->text();
    reflector = ui->line_reflector->text();

    if(((x_number != "1")&&(x_number != "2")&&(x_number != "3")&&(x_number != "4")&&(x_number != "5")&&(x_number != "6")&&(x_number != "7")&&(x_number != "8"))||
        ((y_number != "1")&&(y_number != "2")&&(y_number != "3")&&(y_number != "4")&&(y_number != "5")&&(y_number != "6")&&(y_number != "7")&&(y_number != "8"))||
          ((z_number != "1")&&(z_number != "2")&&(z_number != "3")&&(z_number != "4")&&(z_number != "5")&&(z_number != "6")&&(z_number != "7")&&(z_number != "8"))||
           ((x_rotor != "0")&&(x_rotor != "1")&&(x_rotor != "2")&&(x_rotor != "3")&&(x_rotor != "4")&&(x_rotor != "5")&&(x_rotor != "6")&&(x_rotor != "7")&&(x_rotor != "8")&&(x_rotor != "9")&&(x_rotor != "10")&&(x_rotor != "11")&&(x_rotor != "12")&&(x_rotor != "13")&&(x_rotor != "14")&&(x_rotor != "15")&&(x_rotor != "16")&&(x_rotor != "17")&&(x_rotor != "18")&&(x_rotor != "19")&&(x_rotor != "20")&&(x_rotor != "21")&&(x_rotor != "22")&&(x_rotor != "23")&&(x_rotor != "24")&&(x_rotor != "25"))||
            ((y_rotor != "0")&&(y_rotor != "1")&&(y_rotor != "2")&&(y_rotor != "3")&&(y_rotor != "4")&&(y_rotor != "5")&&(y_rotor != "6")&&(y_rotor != "7")&&(y_rotor != "8")&&(y_rotor != "9")&&(y_rotor != "10")&&(y_rotor != "11")&&(y_rotor != "12")&&(y_rotor != "13")&&(y_rotor != "14")&&(y_rotor != "15")&&(y_rotor != "16")&&(y_rotor != "17")&&(y_rotor != "18")&&(y_rotor != "19")&&(y_rotor != "20")&&(y_rotor != "21")&&(y_rotor != "22")&&(y_rotor != "23")&&(y_rotor != "24")&&(y_rotor != "25"))||
              ((z_rotor != "0")&&(z_rotor != "1")&&(z_rotor != "2")&&(z_rotor != "3")&&(z_rotor != "4")&&(z_rotor != "5")&&(z_rotor != "6")&&(z_rotor != "7")&&(z_rotor != "8")&&(z_rotor != "9")&&(z_rotor != "10")&&(z_rotor != "11")&&(z_rotor != "12")&&(z_rotor != "13")&&(z_rotor != "14")&&(z_rotor != "15")&&(z_rotor != "16")&&(z_rotor != "17")&&(z_rotor != "18")&&(z_rotor != "19")&&(z_rotor != "20")&&(z_rotor != "21")&&(z_rotor != "22")&&(z_rotor != "23")&&(z_rotor != "24")&&(z_rotor != "25"))||
                ((reflector != "B")&&(reflector != "C"))||
                  ((x_number == y_number)||(y_number == z_number)||(z_number == x_number)))
    {
      QMessageBox::information(this, "Ошибка!", "Вы не ввели данные, или ввод некоректен!");
      x_number = "1";
      y_number = "2";
      z_number = "3";
      x_rotor = "0";
      y_rotor = "0";
      z_rotor = "0";
      reflector = "B";
      ui->label_x_number->setText(x_number);
      ui->label_y_number->setText(y_number);
      ui->label_z_number->setText(z_number);
      ui->label_x_rotor->setText(x_rotor);
      ui->label_y_rotor->setText(y_rotor);
      ui->label_z_rotor->setText(z_rotor);
      ui->label_reflector->setText(reflector);
    }
     else
    {
        ui->label_x_number->setText(x_number);
        ui->label_y_number->setText(y_number);
        ui->label_z_number->setText(z_number);
        ui->label_x_rotor->setText(x_rotor);
        ui->label_y_rotor->setText(y_rotor);
        ui->label_z_rotor->setText(z_rotor);
        ui->label_reflector->setText(reflector);
    }
}

void Enigma::digits_in()
{

   QPushButton *button = (QPushButton *)sender();

   ui->label_in->setText(button->text());

   delimiter_x_number();
   delimiter_y_number();
   delimiter_z_number();
   delimiter_x_rotor();
   delimiter_y_rotor();
   delimiter_z_rotor();

   b = (button->text());
   alphago();
   a = number_z_rotor + a;
   if(a < 0)
       a = a + 26;
   if(a > 25)
       a = a - 26;
   if(number_z_number == 1)
       rotor1go();
   else
       if(number_z_number == 2)
           rotor2go();
       else
           if(number_z_number == 3)
               rotor3go();
           else
               if(number_z_number == 4)
                   rotor4go();
               else
                   if(number_z_number == 5)
                       rotor5go();
                   else
                       if(number_z_number == 6)
                           rotor6go();
                       else
                           if(number_z_number == 7)
                               rotor7go();
                           else
                               if(number_z_number == 8)
                                   rotor8go();
   a = a + (number_y_rotor - number_z_rotor);
   if(a < 0)
       a = a + 26;
   if(a > 25)
       a = a - 26;
    if(number_y_number == 1)
        rotor1go();
    else
        if(number_y_number == 2)
            rotor2go();
        else
            if(number_y_number == 3)
                rotor3go();
            else
                if(number_y_number == 4)
                    rotor4go();
                else
                    if(number_y_number == 5)
                        rotor5go();
                    else
                        if(number_y_number == 6)
                            rotor6go();
                        else
                            if(number_y_number == 7)
                                rotor7go();
                            else
                                if(number_y_number == 8)
                                    rotor8go();
   a = a + (number_x_rotor - number_y_rotor);
   if(a < 0)
       a = a + 26;
   if(a > 25)
       a = a - 26;
   if(number_x_number == 1)
       rotor1go();
   else
       if(number_x_number == 2)
           rotor2go();
       else
           if(number_x_number == 3)
               rotor3go();
           else
               if(number_x_number == 4)
                   rotor4go();
               else
                   if(number_x_number == 5)
                       rotor5go();
                   else
                       if(number_x_number == 6)
                           rotor6go();
                       else
                           if(number_x_number == 7)
                               rotor7go();
                           else
                               if(number_x_number == 8)
                                   rotor8go();
  a = a - number_x_rotor;
  if(a < 0)
      a = a + 26;
  if(a > 25)
      a = a - 26;
  if(reflector == "B")
  reflectorB();
  else
      reflectorC();
  a = a + number_x_rotor;
   if(a > 25)
      a = a - 26;
   if(a < 0)
       a = a + 26;
   if(number_x_number == 1)
       rotor1back();
   else
       if(number_x_number == 2)
           rotor2back();
       else
           if(number_x_number == 3)
               rotor3back();
           else
               if(number_x_number == 4)
                   rotor4back();
               else
                   if(number_x_number == 5)
                       rotor5back();
                   else
                       if(number_x_number == 6)
                           rotor6back();
                       else
                           if(number_x_number == 7)
                               rotor7back();
                           else
                               if(number_x_number == 8)
                                   rotor8back();
   a = a - (number_x_rotor - number_y_rotor);
   if(a > 25)
       a = a - 26;
   if(a < 0)
       a = a + 26;
   if(number_y_number == 1)
       rotor1back();
   else
       if(number_y_number == 2)
           rotor2back();
       else
           if(number_y_number == 3)
               rotor3back();
           else
               if(number_y_number == 4)
                   rotor4back();
               else
                   if(number_y_number == 5)
                       rotor5back();
                   else
                       if(number_y_number == 6)
                           rotor6back();
                       else
                           if(number_y_number == 7)
                               rotor7back();
                           else
                               if(number_y_number == 8)
                                   rotor8back();
   a = a - (number_y_rotor - number_z_rotor);
    if(a > 25)
       a = a - 26;
    if(a < 0)
        a = a + 26;
   if(number_z_number == 1)
       rotor1back();
   else
       if(number_z_number == 2)
           rotor2back();
       else
           if(number_z_number == 3)
               rotor3back();
           else
               if(number_z_number == 4)
                   rotor4back();
               else
                   if(number_z_number == 5)
                       rotor5back();
                   else
                       if(number_z_number == 6)
                           rotor6back();
                       else
                           if(number_z_number == 7)
                               rotor7back();
                           else
                               if(number_z_number == 8)
                                   rotor8back();

   a = a - number_z_rotor;
   if(a > 25)
       a = a - 26;
   if(a < 0)
       a = a + 26;
   alphaback();
  ui->out->setText(out);
  number_z_rotor ++;
  if(number_z_rotor == 26)
  {
      number_z_rotor = 0;
      number_y_rotor++;
  }
  if(number_y_rotor == 26)
  {
  number_z_rotor = 0;
  number_y_rotor = 0;
  number_x_rotor++;
  }
  if(number_x_rotor == 26)
  {
  number_z_rotor = 0;
  number_y_rotor = 0;
  number_x_rotor = 0;
  }
  delimiter_x_rotor_back();
  delimiter_y_rotor_back();
  delimiter_z_rotor_back();
  ui->label_x_rotor->setText(x_rotor);
  ui->label_y_rotor->setText(y_rotor);
  ui->label_z_rotor->setText(z_rotor);
}

void Enigma::on_pushButton_2_clicked()
{
    Information window;
    window.setModal(true);
    window.exec();
}

void rotor1back()
{
    if(a == 4)
        a = 0;
                else
        if(a == 10)
            a = 1;
                    else
            if(a == 12)
                a = 2;
                        else
                if(a == 5)
                    a = 3;
                            else
                    if(a == 11)
                        a = 4;
                                else
                        if(a == 6)
                            a = 5;
                                    else
                            if(a == 3)
                                a = 6;
                                        else
                                if(a == 16)
                                    a = 7;
                                            else
                                    if(a == 21)
                                        a = 8;
                                                else
                                        if(a == 25)
                                            a = 9;
                                                    else
                                            if(a == 13)
                                                a = 10;
                                                        else
                                                if(a == 19)
                                                    a = 11;
                                                            else
                                                    if(a == 14)
                                                        a = 12;
                                                                else
                                                        if(a == 22)
                                                            a = 13;
                                                                    else
                                                            if(a == 24)
                                                                a = 14;
                                                                        else
                                                                if(a == 7)
                                                                    a = 15;
                                                                            else
                                                                    if(a == 23)
                                                                        a = 16;
                                                                                else
                                                                        if(a == 20)
                                                                            a = 17;
                                                                                    else
                                                                            if(a == 18)
                                                                                a = 18;
                                                                                        else
                                                                                if(a == 15)
                                                                                    a = 19;
                                                                                            else
                                                                                    if(a == 0)
                                                                                        a = 20;
                                                                                                else
                                                                                        if(a == 8)
                                                                                            a = 21;
                                                                                                    else
                                                                                            if(a == 1)
                                                                                                a = 22;
                                                                                                        else
                                                                                                if(a == 19)
                                                                                                    a = 23;
                                                                                                            else
                                                                                                    if(a == 2)
                                                                                                        a = 24;
                                                                                                                else
                                                                                                        if(a == 9)
                                                                                                            a = 25;
}
void rotor2back()
{
    if(a == 0)
        a = 0;
                else
        if(a == 9)
            a = 1;
                    else
            if(a == 3)
                a = 2;
                        else
                if(a == 10)
                    a = 3;
                            else
                    if(a == 18)
                        a = 4;
                                else
                        if(a == 8)
                            a = 5;
                                    else
                            if(a == 17)
                                a = 6;
                                        else
                                if(a == 20)
                                    a = 7;
                                            else
                                    if(a == 23)
                                        a = 8;
                                                else
                                        if(a == 1)
                                            a = 9;
                                                    else
                                            if(a == 11)
                                                a = 10;
                                                        else
                                                if(a == 7)
                                                    a = 11;
                                                            else
                                                    if(a == 22)
                                                        a = 12;
                                                                else
                                                        if(a == 19)
                                                            a = 13;
                                                                    else
                                                            if(a == 24)
                                                                a = 14;
                                                                        else
                                                                if(a == 2)
                                                                    a = 15;
                                                                            else
                                                                    if(a == 12)
                                                                        a = 16;
                                                                                else
                                                                        if(a == 6)
                                                                            a = 17;
                                                                                    else
                                                                            if(a == 25)
                                                                                a = 18;
                                                                                        else
                                                                                if(a == 13)
                                                                                    a = 19;
                                                                                            else
                                                                                    if(a == 15)
                                                                                        a = 20;
                                                                                                else
                                                                                        if(a == 24)
                                                                                            a = 21;
                                                                                                    else
                                                                                            if(a == 5)
                                                                                                a = 22;
                                                                                                        else
                                                                                                if(a == 21)
                                                                                                    a = 23;
                                                                                                            else
                                                                                                    if(a == 14)
                                                                                                        a = 24;
                                                                                                                else
                                                                                                        if(a == 4)
                                                                                                            a = 25;
}
void rotor3back()
{
    if(a == 1)
        a = 0;
                else
        if(a == 3)
            a = 1;
                    else
            if(a == 5)
                a = 2;
                        else
                if(a == 7)
                    a = 3;
                            else
                    if(a == 9)
                        a = 4;
                                else
                        if(a == 11)
                            a = 5;
                                    else
                            if(a == 2)
                                a = 6;
                                        else
                                if(a == 15)
                                    a = 7;
                                            else
                                    if(a == 17)
                                        a = 8;
                                                else
                                        if(a == 19)
                                            a = 9;
                                                    else
                                            if(a == 23)
                                                a = 10;
                                                        else
                                                if(a == 21)
                                                    a = 11;
                                                            else
                                                    if(a == 25)
                                                        a = 12;
                                                                else
                                                        if(a == 13)
                                                            a = 13;
                                                                    else
                                                            if(a == 24)
                                                                a = 14;
                                                                        else
                                                                if(a == 4)
                                                                    a = 15;
                                                                            else
                                                                    if(a == 8)
                                                                        a = 16;
                                                                                else
                                                                        if(a == 22)
                                                                            a = 17;
                                                                                    else
                                                                            if(a == 6)
                                                                                a = 18;
                                                                                        else
                                                                                if(a == 0)
                                                                                    a = 19;
                                                                                            else
                                                                                    if(a == 10)
                                                                                        a = 20;
                                                                                                else
                                                                                        if(a == 12)
                                                                                            a = 21;
                                                                                                    else
                                                                                            if(a == 20)
                                                                                                a = 22;
                                                                                                        else
                                                                                                if(a == 18)
                                                                                                    a = 23;
                                                                                                            else
                                                                                                    if(a == 16)
                                                                                                        a = 24;
                                                                                                                else
                                                                                                        if(a == 14)
                                                                                                            a = 25;
}
void rotor4back()
{
    if(a == 4)
        a = 0;
                else
        if(a == 18)
            a = 1;
                    else
            if(a == 14)
                a = 2;
                        else
                if(a == 21)
                    a = 3;
                            else
                    if(a == 15)
                        a = 4;
                                else
                        if(a == 25)
                            a = 5;
                                    else
                            if(a == 9)
                                a = 6;
                                        else
                                if(a == 0)
                                    a = 7;
                                            else
                                    if(a == 24)
                                        a = 8;
                                                else
                                        if(a == 16)
                                            a = 9;
                                                    else
                                            if(a == 20)
                                                a = 10;
                                                        else
                                                if(a == 8)
                                                    a = 11;
                                                            else
                                                    if(a == 17)
                                                        a = 12;
                                                                else
                                                        if(a == 7)
                                                            a = 13;
                                                                    else
                                                            if(a == 23)
                                                                a = 14;
                                                                        else
                                                                if(a == 11)
                                                                    a = 15;
                                                                            else
                                                                    if(a == 13)
                                                                        a = 16;
                                                                                else
                                                                        if(a == 5)
                                                                            a = 17;
                                                                                    else
                                                                            if(a == 19)
                                                                                a = 18;
                                                                                        else
                                                                                if(a == 6)
                                                                                    a = 19;
                                                                                            else
                                                                                    if(a == 10)
                                                                                        a = 20;
                                                                                                else
                                                                                        if(a == 3)
                                                                                            a = 21;
                                                                                                    else
                                                                                            if(a == 2)
                                                                                                a = 22;
                                                                                                        else
                                                                                                if(a == 12)
                                                                                                    a = 23;
                                                                                                            else
                                                                                                    if(a == 22)
                                                                                                        a = 24;
                                                                                                                else
                                                                                                        if(a == 1)
                                                                                                            a = 25;
}
void rotor5back()
{
    if(a == 21)
        a = 0;
                else
        if(a == 25)
            a = 1;
                    else
            if(a == 1)
                a = 2;
                        else
                if(a == 17)
                    a = 3;
                            else
                    if(a == 6)
                        a = 4;
                                else
                        if(a == 8)
                            a = 5;
                                    else
                            if(a == 19)
                                a = 6;
                                        else
                                if(a == 24)
                                    a = 7;
                                            else
                                    if(a == 20)
                                        a = 8;
                                                else
                                        if(a == 15)
                                            a = 9;
                                                    else
                                            if(a == 18)
                                                a = 10;
                                                        else
                                                if(a == 3)
                                                    a = 11;
                                                            else
                                                    if(a == 13)
                                                        a = 12;
                                                                else
                                                        if(a == 7)
                                                            a = 13;
                                                                    else
                                                            if(a == 11)
                                                                a = 14;
                                                                        else
                                                                if(a == 23)
                                                                    a = 15;
                                                                            else
                                                                    if(a == 0)
                                                                        a = 16;
                                                                                else
                                                                        if(a == 22)
                                                                            a = 17;
                                                                                    else
                                                                            if(a == 12)
                                                                                a = 18;
                                                                                        else
                                                                                if(a == 9)
                                                                                    a = 19;
                                                                                            else
                                                                                    if(a == 16)
                                                                                        a = 20;
                                                                                                else
                                                                                        if(a == 14)
                                                                                            a = 21;
                                                                                                    else
                                                                                            if(a == 5)
                                                                                                a = 22;
                                                                                                        else
                                                                                                if(a == 4)
                                                                                                    a = 23;
                                                                                                            else
                                                                                                    if(a == 2)
                                                                                                        a = 24;
                                                                                                                else
                                                                                                        if(a == 10)
                                                                                                            a = 25;
}
void rotor6back()
{
    if(a == 9)
        a = 0;
                else
        if(a == 15)
            a = 1;
                    else
            if(a == 6)
                a = 2;
                        else
                if(a == 21)
                    a = 3;
                            else
                    if(a == 9)
                        a = 4;
                                else
                        if(a == 20)
                            a = 5;
                                    else
                            if(a == 12)
                                a = 6;
                                        else
                                if(a == 5)
                                    a = 7;
                                            else
                                    if(a == 24)
                                        a = 8;
                                                else
                                        if(a == 16)
                                            a = 9;
                                                    else
                                            if(a == 1)
                                                a = 10;
                                                        else
                                                if(a == 4)
                                                    a = 11;
                                                            else
                                                    if(a == 13)
                                                        a = 12;
                                                                else
                                                        if(a == 7)
                                                            a = 13;
                                                                    else
                                                            if(a == 25)
                                                                a = 14;
                                                                        else
                                                                if(a == 17)
                                                                    a = 15;
                                                                            else
                                                                    if(a == 3)
                                                                        a = 16;
                                                                                else
                                                                        if(a == 10)
                                                                            a = 17;
                                                                                    else
                                                                            if(a == 0)
                                                                                a = 18;
                                                                                        else
                                                                                if(a == 18)
                                                                                    a = 19;
                                                                                            else
                                                                                    if(a == 23)
                                                                                        a = 20;
                                                                                                else
                                                                                        if(a == 11)
                                                                                            a = 21;
                                                                                                    else
                                                                                            if(a == 8)
                                                                                                a = 22;
                                                                                                        else
                                                                                                if(a == 2)
                                                                                                    a = 23;
                                                                                                            else
                                                                                                    if(a == 19)
                                                                                                        a = 24;
                                                                                                                else
                                                                                                        if(a == 22)
                                                                                                            a = 25;
}
void rotor7back()
{
    if(a == 13)
        a = 0;
                else
        if(a == 25)
            a = 1;
                    else
            if(a == 9)
                a = 2;
                        else
                if(a == 7)
                    a = 3;
                            else
                    if(a == 6)
                        a = 4;
                                else
                        if(a == 17)
                            a = 5;
                                    else
                            if(a == 2)
                                a = 6;
                                        else
                                if(a == 23)
                                    a = 7;
                                            else
                                    if(a == 12)
                                        a = 8;
                                                else
                                        if(a == 24)
                                            a = 9;
                                                    else
                                            if(a == 18)
                                                a = 10;
                                                        else
                                                if(a == 22)
                                                    a = 11;
                                                            else
                                                    if(a == 1)
                                                        a = 12;
                                                                else
                                                        if(a == 14)
                                                            a = 13;
                                                                    else
                                                            if(a == 20)
                                                                a = 14;
                                                                        else
                                                                if(a == 5)
                                                                    a = 15;
                                                                            else
                                                                    if(a == 0)
                                                                        a = 16;
                                                                                else
                                                                        if(a == 8)
                                                                            a = 17;
                                                                                    else
                                                                            if(a == 21)
                                                                                a = 18;
                                                                                        else
                                                                                if(a == 11)
                                                                                    a = 19;
                                                                                            else
                                                                                    if(a == 16)
                                                                                        a = 20;
                                                                                                else
                                                                                        if(a == 5)
                                                                                            a = 21;
                                                                                                    else
                                                                                            if(a == 10)
                                                                                                a = 22;
                                                                                                        else
                                                                                                if(a == 16)
                                                                                                    a = 23;
                                                                                                            else
                                                                                                    if(a == 3)
                                                                                                        a = 24;
                                                                                                                else
                                                                                                        if(a == 19)
                                                                                                            a = 25;
}
void rotor8back()
{
    if(a == 5)
        a = 0;
                else
        if(a == 10)
            a = 1;
                    else
            if(a == 16)
                a = 2;
                        else
                if(a == 7)
                    a = 3;
                            else
                    if(a == 19)
                        a = 4;
                                else
                        if(a == 11)
                            a = 5;
                                    else
                            if(a == 23)
                                a = 6;
                                        else
                                if(a == 14)
                                    a = 7;
                                            else
                                    if(a == 2)
                                        a = 8;
                                                else
                                        if(a == 1)
                                            a = 9;
                                                    else
                                            if(a == 9)
                                                a = 10;
                                                        else
                                                if(a == 18)
                                                    a = 11;
                                                            else
                                                    if(a == 15)
                                                        a = 12;
                                                                else
                                                        if(a == 3)
                                                            a = 13;
                                                                    else
                                                            if(a == 25)
                                                                a = 14;
                                                                        else
                                                                if(a == 17)
                                                                    a = 15;
                                                                            else
                                                                    if(a == 0)
                                                                        a = 16;
                                                                                else
                                                                        if(a == 12)
                                                                            a = 17;
                                                                                    else
                                                                            if(a == 4)
                                                                                a = 18;
                                                                                        else
                                                                                if(a == 22)
                                                                                    a = 19;
                                                                                            else
                                                                                    if(a == 13)
                                                                                        a = 20;
                                                                                                else
                                                                                        if(a == 8)
                                                                                            a = 21;
                                                                                                    else
                                                                                            if(a == 20)
                                                                                                a = 22;
                                                                                                        else
                                                                                                if(a == 24)
                                                                                                    a = 23;
                                                                                                            else
                                                                                                    if(a == 6)
                                                                                                        a = 24;
                                                                                                                else
                                                                                                        if(a == 21)
                                                                                                            a = 25;
}
void rotor1go()
{
    if(a == 0)
        a = 4;
                else
        if(a == 1)
            a = 10;
                    else
            if(a == 2)
                a = 12;
                        else
                if(a == 3)
                    a = 5;
                            else
                    if(a == 4)
                        a = 11;
                                else
                        if(a == 5)
                            a = 6;
                                    else
                            if(a == 6)
                                a = 3;
                                        else
                                if(a == 7)
                                    a = 16;
                                            else
                                    if(a == 8)
                                        a = 21;
                                                else
                                        if(a == 9)
                                            a = 25;
                                                    else
                                            if(a == 10)
                                                a = 13;
                                                        else
                                                if(a == 11)
                                                    a = 19;
                                                            else
                                                    if(a == 12)
                                                        a = 14;
                                                                else
                                                        if(a == 13)
                                                            a = 22;
                                                                    else
                                                            if(a == 14)
                                                                a = 24;
                                                                        else
                                                                if(a == 15)
                                                                    a = 7;
                                                                            else
                                                                    if(a == 16)
                                                                        a = 23;
                                                                                else
                                                                        if(a == 17)
                                                                            a = 20;
                                                                                    else
                                                                            if(a == 18)
                                                                                a = 18;
                                                                                        else
                                                                                if(a == 19)
                                                                                    a = 15;
                                                                                            else
                                                                                    if(a == 20)
                                                                                        a = 0;
                                                                                                else
                                                                                        if(a == 21)
                                                                                            a = 8;
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                a = 1;
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    a = 19;
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        a = 2;
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            a = 9;
}
void rotor2go()
{
    if(a == 0)
        a = 0;
                else
        if(a == 1)
            a = 9;
                    else
            if(a == 2)
                a = 3;
                        else
                if(a == 3)
                    a = 10;
                            else
                    if(a == 4)
                        a = 18;
                                else
                        if(a == 5)
                            a = 8;
                                    else
                            if(a == 6)
                                a = 17;
                                        else
                                if(a == 7)
                                    a = 20;
                                            else
                                    if(a == 8)
                                        a = 23;
                                                else
                                        if(a == 9)
                                            a = 1;
                                                    else
                                            if(a == 10)
                                                a = 11;
                                                        else
                                                if(a == 11)
                                                    a = 7;
                                                            else
                                                    if(a == 12)
                                                        a = 22;
                                                                else
                                                        if(a == 13)
                                                            a = 19;
                                                                    else
                                                            if(a == 14)
                                                                a = 24;
                                                                        else
                                                                if(a == 15)
                                                                    a = 2;
                                                                            else
                                                                    if(a == 16)
                                                                        a = 12;
                                                                                else
                                                                        if(a == 17)
                                                                            a = 6;
                                                                                    else
                                                                            if(a == 18)
                                                                                a = 25;
                                                                                        else
                                                                                if(a == 19)
                                                                                    a = 13;
                                                                                            else
                                                                                    if(a == 20)
                                                                                        a = 15;
                                                                                                else
                                                                                        if(a == 21)
                                                                                            a = 24;
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                a = 5;
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    a = 21;
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        a = 14;
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            a = 4;
}
void rotor3go()
{
    if(a == 0)
        a = 1;
                else
        if(a == 1)
            a = 3;
                    else
            if(a == 2)
                a = 5;
                        else
                if(a == 3)
                    a = 7;
                            else
                    if(a == 4)
                        a = 9;
                                else
                        if(a == 5)
                            a = 11;
                                    else
                            if(a == 6)
                                a = 2;
                                        else
                                if(a == 7)
                                    a = 15;
                                            else
                                    if(a == 8)
                                        a = 17;
                                                else
                                        if(a == 9)
                                            a = 19;
                                                    else
                                            if(a == 10)
                                                a = 23;
                                                        else
                                                if(a == 11)
                                                    a = 21;
                                                            else
                                                    if(a == 12)
                                                        a = 25;
                                                                else
                                                        if(a == 13)
                                                            a = 13;
                                                                    else
                                                            if(a == 14)
                                                                a = 24;
                                                                        else
                                                                if(a == 15)
                                                                    a = 4;
                                                                            else
                                                                    if(a == 16)
                                                                        a = 8;
                                                                                else
                                                                        if(a == 17)
                                                                            a = 22;
                                                                                    else
                                                                            if(a == 18)
                                                                                a = 6;
                                                                                        else
                                                                                if(a == 19)
                                                                                    a = 0;
                                                                                            else
                                                                                    if(a == 20)
                                                                                        a = 10;
                                                                                                else
                                                                                        if(a == 21)
                                                                                            a = 12;
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                a = 20;
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    a = 18;
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        a = 16;
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            a = 14;
}
void rotor4go()
{
    if(a == 0)
        a = 4;
                else
        if(a == 1)
            a = 18;
                    else
            if(a == 2)
                a = 14;
                        else
                if(a == 3)
                    a = 21;
                            else
                    if(a == 4)
                        a = 15;
                                else
                        if(a == 5)
                            a = 25;
                                    else
                            if(a == 6)
                                a = 9;
                                        else
                                if(a == 7)
                                    a = 0;
                                            else
                                    if(a == 8)
                                        a = 24;
                                                else
                                        if(a == 9)
                                            a = 16;
                                                    else
                                            if(a == 10)
                                                a = 20;
                                                        else
                                                if(a == 11)
                                                    a = 8;
                                                            else
                                                    if(a == 12)
                                                        a = 17;
                                                                else
                                                        if(a == 13)
                                                            a = 7;
                                                                    else
                                                            if(a == 14)
                                                                a = 23;
                                                                        else
                                                                if(a == 15)
                                                                    a = 11;
                                                                            else
                                                                    if(a == 16)
                                                                        a = 13;
                                                                                else
                                                                        if(a == 17)
                                                                            a = 5;
                                                                                    else
                                                                            if(a == 18)
                                                                                a = 19;
                                                                                        else
                                                                                if(a == 19)
                                                                                    a = 6;
                                                                                            else
                                                                                    if(a == 20)
                                                                                        a = 10;
                                                                                                else
                                                                                        if(a == 21)
                                                                                            a = 3;
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                a = 2;
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    a = 12;
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        a = 22;
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            a = 1;
}
void rotor5go()
{
    if(a == 0)
        a = 21;
                else
        if(a == 1)
            a = 25;
                    else
            if(a == 2)
                a = 1;
                        else
                if(a == 3)
                    a = 17;
                            else
                    if(a == 4)
                        a = 6;
                                else
                        if(a == 5)
                            a = 8;
                                    else
                            if(a == 6)
                                a = 19;
                                        else
                                if(a == 7)
                                    a = 24;
                                            else
                                    if(a == 8)
                                        a = 20;
                                                else
                                        if(a == 9)
                                            a = 15;
                                                    else
                                            if(a == 10)
                                                a = 18;
                                                        else
                                                if(a == 11)
                                                    a = 3;
                                                            else
                                                    if(a == 12)
                                                        a = 13;
                                                                else
                                                        if(a == 13)
                                                            a = 7;
                                                                    else
                                                            if(a == 14)
                                                                a = 11;
                                                                        else
                                                                if(a == 15)
                                                                    a = 23;
                                                                            else
                                                                    if(a == 16)
                                                                        a = 0;
                                                                                else
                                                                        if(a == 17)
                                                                            a = 22;
                                                                                    else
                                                                            if(a == 18)
                                                                                a = 12;
                                                                                        else
                                                                                if(a == 19)
                                                                                    a = 9;
                                                                                            else
                                                                                    if(a == 20)
                                                                                        a = 16;
                                                                                                else
                                                                                        if(a == 21)
                                                                                            a = 14;
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                a = 5;
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    a = 4;
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        a = 2;
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            a = 10;
}
void rotor6go()
{
    if(a == 0)
        a = 9;
                else
        if(a == 1)
            a = 15;
                    else
            if(a == 2)
                a = 6;
                        else
                if(a == 3)
                    a = 21;
                            else
                    if(a == 4)
                        a = 9;
                                else
                        if(a == 5)
                            a = 20;
                                    else
                            if(a == 6)
                                a = 12;
                                        else
                                if(a == 7)
                                    a = 5;
                                            else
                                    if(a == 8)
                                        a = 24;
                                                else
                                        if(a == 9)
                                            a = 16;
                                                    else
                                            if(a == 10)
                                                a = 1;
                                                        else
                                                if(a == 11)
                                                    a = 4;
                                                            else
                                                    if(a == 12)
                                                        a = 13;
                                                                else
                                                        if(a == 13)
                                                            a = 7;
                                                                    else
                                                            if(a == 14)
                                                                a = 25;
                                                                        else
                                                                if(a == 15)
                                                                    a = 17;
                                                                            else
                                                                    if(a == 16)
                                                                        a = 3;
                                                                                else
                                                                        if(a == 17)
                                                                            a = 10;
                                                                                    else
                                                                            if(a == 18)
                                                                                a = 0;
                                                                                        else
                                                                                if(a == 19)
                                                                                    a = 18;
                                                                                            else
                                                                                    if(a == 20)
                                                                                        a = 23;
                                                                                                else
                                                                                        if(a == 21)
                                                                                            a = 11;
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                a = 8;
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    a = 2;
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        a = 19;
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            a = 22;
}
void rotor7go()
{
    if(a == 0)
        a = 13;
                else
        if(a == 1)
            a = 25;
                    else
            if(a == 2)
                a = 9;
                        else
                if(a == 3)
                    a = 7;
                            else
                    if(a == 4)
                        a = 6;
                                else
                        if(a == 5)
                            a = 17;
                                    else
                            if(a == 6)
                                a = 2;
                                        else
                                if(a == 7)
                                    a = 23;
                                            else
                                    if(a == 8)
                                        a = 12;
                                                else
                                        if(a == 9)
                                            a = 24;
                                                    else
                                            if(a == 10)
                                                a = 18;
                                                        else
                                                if(a == 11)
                                                    a = 22;
                                                            else
                                                    if(a == 12)
                                                        a = 1;
                                                                else
                                                        if(a == 13)
                                                            a = 14;
                                                                    else
                                                            if(a == 14)
                                                                a = 20;
                                                                        else
                                                                if(a == 15)
                                                                    a = 5;
                                                                            else
                                                                    if(a == 16)
                                                                        a = 0;
                                                                                else
                                                                        if(a == 17)
                                                                            a = 8;
                                                                                    else
                                                                            if(a == 18)
                                                                                a = 21;
                                                                                        else
                                                                                if(a == 19)
                                                                                    a = 11;
                                                                                            else
                                                                                    if(a == 20)
                                                                                        a = 16;
                                                                                                else
                                                                                        if(a == 21)
                                                                                            a = 5;
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                a = 10;
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    a = 16;
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        a = 3;
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            a = 19;
}
void rotor8go()
{
    if(a == 0)
        a = 5;
                else
        if(a == 1)
            a = 10;
                    else
            if(a == 2)
                a = 16;
                        else
                if(a == 3)
                    a = 7;
                            else
                    if(a == 4)
                        a = 19;
                                else
                        if(a == 5)
                            a = 11;
                                    else
                            if(a == 6)
                                a = 23;
                                        else
                                if(a == 7)
                                    a = 14;
                                            else
                                    if(a == 8)
                                        a = 2;
                                                else
                                        if(a == 9)
                                            a = 1;
                                                    else
                                            if(a == 10)
                                                a = 9;
                                                        else
                                                if(a == 11)
                                                    a = 18;
                                                            else
                                                    if(a == 12)
                                                        a = 15;
                                                                else
                                                        if(a == 13)
                                                            a = 3;
                                                                    else
                                                            if(a == 14)
                                                                a = 25;
                                                                        else
                                                                if(a == 15)
                                                                    a = 17;
                                                                            else
                                                                    if(a == 16)
                                                                        a = 0;
                                                                                else
                                                                        if(a == 17)
                                                                            a = 12;
                                                                                    else
                                                                            if(a == 18)
                                                                                a = 4;
                                                                                        else
                                                                                if(a == 19)
                                                                                    a = 22;
                                                                                            else
                                                                                    if(a == 20)
                                                                                        a = 13;
                                                                                                else
                                                                                        if(a == 21)
                                                                                            a = 8;
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                a = 20;
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    a = 24;
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        a = 6;
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            a = 21;
}
void alphago()
{
    if(b == "A")
        a = 0;
                else
        if(b == "B")
            a = 1;
                    else
            if(b == "C")
                a = 2;
                        else
                if(b == "D")
                    a = 3;
                            else
                    if(b == "E")
                        a = 4;
                                else
                        if(b == "F")
                            a = 5;
                                    else
                            if(b == "G")
                                a = 6;
                                        else
                                if(b == "H")
                                    a = 7;
                                            else
                                    if(b == "I")
                                        a = 8;
                                                else
                                        if(b == "J")
                                            a = 9;
                                                    else
                                            if(b == "K")
                                                a = 10;
                                                        else
                                                if(b == "L")
                                                    a = 11;
                                                            else
                                                    if(b == "M")
                                                        a = 12;
                                                                else
                                                        if(b == "N")
                                                            a = 13;
                                                                    else
                                                            if(b == "O")
                                                                a = 14;
                                                                        else
                                                                if(b == "P")
                                                                    a = 15;
                                                                            else
                                                                    if(b == "Q")
                                                                        a = 16;
                                                                                else
                                                                        if(b == "R")
                                                                            a = 17;
                                                                                    else
                                                                            if(b == "S")
                                                                                a = 18;
                                                                                        else
                                                                                if(b == "T")
                                                                                    a = 19;
                                                                                            else
                                                                                    if(b == "U")
                                                                                        a = 20;
                                                                                                else
                                                                                        if(b == "V")
                                                                                            a = 21;
                                                                                                    else
                                                                                            if(b == "W")
                                                                                                a = 22;
                                                                                                        else
                                                                                                if(b == "X")
                                                                                                    a = 23;
                                                                                                            else
                                                                                                    if(b == "Y")
                                                                                                        a = 24;
                                                                                                                else
                                                                                                        if(b == "Z")
                                                                                                            a = 25;
}
void alphaback()
{
    if(a == 0)
        out = "A";
                else
        if(a == 1)
            out = "B";
                    else
            if(a == 2)
                out = "C";
                        else
                if(a == 3)
                    out = "D";
                            else
                    if(a == 4)
                        out = "E";
                                else
                        if(a == 5)
                            out = "F";
                                    else
                            if(a == 6)
                                out = "G";
                                        else
                                if(a == 7)
                                    out = "H";
                                            else
                                    if(a == 8)
                                        out = "I";
                                                else
                                        if(a == 9)
                                            out = "J";
                                                    else
                                            if(a == 10)
                                                out = "K";
                                                        else
                                                if(a == 11)
                                                    out = "L";
                                                            else
                                                    if(a == 12)
                                                        out = "M";
                                                                else
                                                        if(a == 13)
                                                            out = "N";
                                                                    else
                                                            if(a == 14)
                                                                out = "O";
                                                                        else
                                                                if(a == 15)
                                                                    out = "P";
                                                                            else
                                                                    if(a == 16)
                                                                        out = "Q";
                                                                                else
                                                                        if(a == 17)
                                                                            out = "R";
                                                                                    else
                                                                            if(a == 18)
                                                                                out = "S";
                                                                                        else
                                                                                if(a == 19)
                                                                                    out = "T";
                                                                                            else
                                                                                    if(a == 20)
                                                                                        out = "U";
                                                                                                else
                                                                                        if(a == 21)
                                                                                            out = "V";
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                out = "W";
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    out = "X";
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        out = "Y";
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            out = "Z";
}
void reflectorB()
{
    if(a == 0)
        a = 24;
    else
        if(a == 1)
            a = 17;
        else
            if(a == 2)
                a = 20;
            else
                if(a == 3)
                    a = 7;
                else
                    if(a == 4)
                        a = 16;
                    else
                        if(a == 5)
                            a = 18;
                        else
                            if(a == 6)
                                a = 11;
                            else
                                if(a == 8)
                                    a = 15;
                                else
                                    if(a == 9)
                                        a = 23;
                                    else
                                        if(a == 10)
                                            a = 13;
                                        else
                                            if(a == 12)
                                                a = 14;
                                            else
                                                if(a == 19)
                                                    a = 25;
                                                else
                                                    if(a == 21)
                                                        a = 22;
                                                    else
                                                        if(a == 24)
                                                            a = 0;
                                                        else
                                                            if(a == 17)
                                                                a = 1;
                                                            else
                                                                if(a == 20)
                                                                    a = 2;
                                                                else
                                                                    if(a == 7)
                                                                        a = 3;
                                                                    else
                                                                        if(a == 16)
                                                                            a = 4;
                                                                        else
                                                                            if(a == 18)
                                                                                a = 5;
                                                                            else
                                                                                if(a == 11)
                                                                                    a = 6;
                                                                                else
                                                                                    if(a == 15)
                                                                                        a = 8;
                                                                                    else
                                                                                        if(a == 23)
                                                                                            a = 10;
                                                                                        else
                                                                                            if(a == 13)
                                                                                                a = 10;
                                                                                            else
                                                                                                if(a == 14)
                                                                                                    a = 12;
                                                                                                else
                                                                                                    if(a == 25)
                                                                                                        a = 19;
                                                                                                    else
                                                                                                        if(a == 22)
                                                                                                            a = 21;
}
void reflectorC()
{
    if(a == 0)
        a = 6;
    else
        if(a == 1)
            a = 21;
        else
            if(a == 2)
                a = 15;
            else
                if(a == 3)
                    a = 9;
                else
                    if(a == 4)
                        a = 8;
                    else
                        if(a == 6)
                            a = 14;
                        else
                            if(a == 7)
                                a = 24;
                            else
                                if(a == 10)
                                    a = 17;
                                else
                                    if(a == 11)
                                        a = 25;
                                    else
                                        if(a == 12)
                                            a = 23;
                                        else
                                            if(a == 14)
                                                a = 22;
                                            else
                                                if(a == 19)
                                                    a = 16;
                                                else
                                                    if(a == 18)
                                                        a = 20;
                                                    else
                                                        if(a == 6)
                                                            a = 0;
                                                        else
                                                            if(a == 21)
                                                                a = 1;
                                                            else
                                                                if(a == 15)
                                                                    a = 2;
                                                                else
                                                                    if(a == 9)
                                                                        a = 3;
                                                                    else
                                                                        if(a == 8)
                                                                            a = 4;
                                                                        else
                                                                            if(a == 14)
                                                                                a = 6;
                                                                            else
                                                                                if(a == 24)
                                                                                    a = 7;
                                                                                else
                                                                                    if(a == 17)
                                                                                        a = 10;
                                                                                    else
                                                                                        if(a == 25)
                                                                                            a = 11;
                                                                                        else
                                                                                            if(a == 23)
                                                                                                a = 12;
                                                                                            else
                                                                                                if(a == 22)
                                                                                                    a = 14;
                                                                                                else
                                                                                                    if(a == 16)
                                                                                                        a = 19;
                                                                                                    else
                                                                                                        if(a == 20)
                                                                                                            a = 18;
}

void delimiter_x_number()
{
    if(x_number == "1")
        number_x_number = 1;
                else
                if(x_number == "2")
                    number_x_number = 2;
                            else
                            if(x_number == "3")
                                number_x_number = 3;
                                        else
                                        if(x_number == "4")
                                            number_x_number = 4;
                                                    else
                                                    if(x_number == "5")
                                                        number_x_number = 5;
                                                                else
                                                                if(x_number == "6")
                                                                    number_x_number = 6;
                                                                    else
                                                                    if(x_number == "7")
                                                                        number_x_number = 7;
                                                                            else
                                                                            if(x_number == "8")
                                                                                number_x_number = 8;
}
void delimiter_y_number()
{
    if(y_number == "1")
        number_y_number = 1;
                else
                if(y_number == "2")
                    number_y_number = 2;
                            else
                            if(y_number == "3")
                                number_y_number = 3;
                                        else
                                        if(y_number == "4")
                                            number_y_number = 4;
                                                    else
                                                    if(y_number == "5")
                                                        number_y_number = 5;
                                                                else
                                                                if(y_number == "6")
                                                                    number_y_number = 6;
                                                                    else
                                                                    if(y_number == "7")
                                                                        number_y_number = 7;
                                                                            else
                                                                            if(y_number == "8")
                                                                                number_y_number = 8;
}
void delimiter_z_number()
{
    if(z_number == "1")
        number_z_number = 1;
                else
                if(z_number == "2")
                    number_z_number = 2;
                            else
                            if(z_number == "3")
                                number_z_number = 3;
                                        else
                                        if(z_number == "4")
                                            number_z_number = 4;
                                                    else
                                                    if(z_number == "5")
                                                        number_z_number = 5;
                                                                else
                                                                if(z_number == "6")
                                                                    number_z_number = 6;
                                                                        else
                                                                        if(z_number == "7")
                                                                            number_z_number = 7;
                                                                            else
                                                                            if(z_number == "8")
                                                                                number_z_number = 8;
}
void delimiter_x_rotor()
{
    if(x_rotor == "0")
        number_x_rotor = 0;
                else
                if(x_rotor == "1")
                    number_x_rotor = 1;
                            else
                            if(x_rotor == "2")
                                number_x_rotor = 2;
                                        else
                                        if(x_rotor == "3")
                                            number_x_rotor = 3;
                                                    else
                                                    if(x_rotor == "4")
                                                        number_x_rotor = 4;
                                                                else
                                                                if(x_rotor == "5")
                                                                    number_x_rotor = 5;
                                                                            else
                                                                            if(x_rotor == "6")
                                                                                number_x_rotor = 6;
                                                                                else
                                                                                if(x_rotor == "7")
                                                                                    number_x_rotor = 7;
                                                                                            else
                                                                                            if(x_rotor == "8")
                                                                                                number_x_rotor = 8;
                                                                                                        else
                                                                                                        if(x_rotor == "9")
                                                                                                            number_x_rotor = 9;
                                                                                                                    else
                                                                                                                    if(x_rotor == "10")
                                                                                                                        number_x_rotor = 10;
                                                                                                                                else
                                                                                                                                if(x_rotor == "11")
                                                                                                                                    number_x_rotor = 11;
                                                                                                                                            else
                                                                                                                                            if(x_rotor == "12")
                                                                                                                                                number_x_rotor = 12;
                                                                                                                                                        else
                                                                                                                                                        if(x_rotor == "13")
                                                                                                                                                            number_x_rotor = 13;
                                                                                                                                                            else
                                                                                                                                                            if(x_rotor == "14")
                                                                                                                                                                number_x_rotor = 14;
                                                                                                                                                                        else
                                                                                                                                                                        if(x_rotor == "15")
                                                                                                                                                                            number_x_rotor = 15;
                                                                                                                                                                        else
                                                                                                                                                                        if(x_rotor == "16")
                                                                                                                                                                            number_x_rotor = 16;
                                                                                                                                                                                    else
                                                                                                                                                                                    if(x_rotor == "17")
                                                                                                                                                                                        number_x_rotor = 17;
                                                                                                                                                                                                else
                                                                                                                                                                                                if(x_rotor == "18")
                                                                                                                                                                                                    number_x_rotor = 18;
                                                                                                                                                                                                            else
                                                                                                                                                                                                            if(x_rotor == "19")
                                                                                                                                                                                                                number_x_rotor = 19;
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        if(x_rotor == "20")
                                                                                                                                                                                                                            number_x_rotor = 20;
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                    if(x_rotor == "21")
                                                                                                                                                                                                                                        number_x_rotor = 21;
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                        if(x_rotor == "22")
                                                                                                                                                                                                                                            number_x_rotor = 22;
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(x_rotor == "23")
                                                                                                                                                                                                                                                        number_x_rotor = 23;
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(x_rotor == "24")
                                                                                                                                                                                                                                                        number_x_rotor = 24;
                                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                                if(x_rotor == "25")
                                                                                                                                                                                                                                                                    number_x_rotor = 25;
}

void delimiter_y_rotor()
{
    if(y_rotor == "0")
        number_y_rotor = 0;
                else
                if(y_rotor == "1")
                    number_y_rotor = 1;
                            else
                            if(y_rotor == "2")
                                number_y_rotor = 2;
                                        else
                                        if(y_rotor == "3")
                                            number_y_rotor = 3;
                                                    else
                                                    if(y_rotor == "4")
                                                        number_y_rotor = 4;
                                                                else
                                                                if(y_rotor == "5")
                                                                    number_y_rotor = 5;
                                                                            else
                                                                            if(y_rotor == "6")
                                                                                number_y_rotor = 6;
                                                                                else
                                                                                if(y_rotor == "7")
                                                                                    number_y_rotor = 7;
                                                                                            else
                                                                                            if(y_rotor == "8")
                                                                                                number_y_rotor = 8;
                                                                                                        else
                                                                                                        if(y_rotor == "9")
                                                                                                            number_y_rotor = 9;
                                                                                                                    else
                                                                                                                    if(y_rotor == "10")
                                                                                                                        number_y_rotor = 10;
                                                                                                                                else
                                                                                                                                if(y_rotor == "11")
                                                                                                                                    number_y_rotor = 11;
                                                                                                                                            else
                                                                                                                                            if(y_rotor == "12")
                                                                                                                                                number_y_rotor = 12;
                                                                                                                                                        else
                                                                                                                                                        if(y_rotor == "13")
                                                                                                                                                            number_y_rotor = 13;
                                                                                                                                                            else
                                                                                                                                                            if(y_rotor == "14")
                                                                                                                                                                number_y_rotor = 14;
                                                                                                                                                                        else
                                                                                                                                                                        if(y_rotor == "15")
                                                                                                                                                                            number_y_rotor = 15;
                                                                                                                                                                        else
                                                                                                                                                                        if(y_rotor == "16")
                                                                                                                                                                            number_y_rotor = 16;
                                                                                                                                                                                    else
                                                                                                                                                                                    if(y_rotor == "17")
                                                                                                                                                                                        number_y_rotor = 17;
                                                                                                                                                                                                else
                                                                                                                                                                                                if(y_rotor == "18")
                                                                                                                                                                                                    number_y_rotor = 18;
                                                                                                                                                                                                            else
                                                                                                                                                                                                            if(y_rotor == "19")
                                                                                                                                                                                                                number_y_rotor = 19;
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        if(y_rotor == "20")
                                                                                                                                                                                                                            number_y_rotor = 20;
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                    if(y_rotor == "21")
                                                                                                                                                                                                                                        number_y_rotor = 21;
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                        if(y_rotor == "22")
                                                                                                                                                                                                                                            number_y_rotor = 22;
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(y_rotor == "23")
                                                                                                                                                                                                                                                        number_y_rotor = 23;
                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                            if(y_rotor == "24")
                                                                                                                                                                                                                                                                number_y_rotor = 24;
                                                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                                                        if(y_rotor == "25")
                                                                                                                                                                                                                                                                            number_y_rotor = 25;
}

void delimiter_z_rotor()
{
    if(z_rotor == "0")
        number_z_rotor = 0;
                else
                if(z_rotor == "1")
                    number_z_rotor = 1;
                            else
                            if(z_rotor == "2")
                                number_z_rotor = 2;
                                        else
                                        if(z_rotor == "3")
                                            number_z_rotor = 3;
                                                    else
                                                    if(z_rotor == "4")
                                                        number_z_rotor = 4;
                                                                else
                                                                if(z_rotor == "5")
                                                                    number_z_rotor = 5;
                                                                            else
                                                                            if(z_rotor == "6")
                                                                                number_z_rotor = 6;
                                                                                else
                                                                                if(z_rotor == "7")
                                                                                    number_z_rotor = 7;
                                                                                            else
                                                                                            if(z_rotor == "8")
                                                                                                number_z_rotor = 8;
                                                                                                        else
                                                                                                        if(z_rotor == "9")
                                                                                                            number_z_rotor = 9;
                                                                                                                    else
                                                                                                                    if(z_rotor == "10")
                                                                                                                        number_z_rotor = 10;
                                                                                                                                else
                                                                                                                                if(z_rotor == "11")
                                                                                                                                    number_z_rotor = 11;
                                                                                                                                            else
                                                                                                                                            if(z_rotor == "12")
                                                                                                                                                number_z_rotor = 12;
                                                                                                                                                        else
                                                                                                                                                        if(z_rotor == "13")
                                                                                                                                                            number_z_rotor = 13;
                                                                                                                                                            else
                                                                                                                                                            if(z_rotor == "14")
                                                                                                                                                                number_z_rotor = 14;
                                                                                                                                                                        else
                                                                                                                                                                        if(z_rotor == "15")
                                                                                                                                                                            number_z_rotor = 15;
                                                                                                                                                                        else
                                                                                                                                                                        if(z_rotor == "16")
                                                                                                                                                                            number_z_rotor = 16;
                                                                                                                                                                                    else
                                                                                                                                                                                    if(z_rotor == "17")
                                                                                                                                                                                        number_z_rotor = 17;
                                                                                                                                                                                                else
                                                                                                                                                                                                if(z_rotor == "18")
                                                                                                                                                                                                    number_z_rotor = 18;
                                                                                                                                                                                                            else
                                                                                                                                                                                                            if(z_rotor == "19")
                                                                                                                                                                                                                number_z_rotor = 19;
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        if(z_rotor == "20")
                                                                                                                                                                                                                            number_z_rotor = 20;
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                    if(z_rotor == "21")
                                                                                                                                                                                                                                        number_z_rotor = 21;
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                        if(z_rotor == "22")
                                                                                                                                                                                                                                            number_z_rotor = 22;
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(z_rotor == "23")
                                                                                                                                                                                                                                                        number_z_rotor = 23;
                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                            if(z_rotor == "24")
                                                                                                                                                                                                                                                                number_z_rotor = 24;
                                                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                                                        if(z_rotor == "25")
                                                                                                                                                                                                                                                                            number_z_rotor = 25;
}
void delimiter_x_rotor_back()
{
    if(number_x_rotor == 0)
        x_rotor = "0";
                else
                if(number_x_rotor == 1)
                    x_rotor = "1";
                            else
                            if(number_x_rotor == 2)
                                x_rotor = "2";
                                        else
                                        if(number_x_rotor == 3)
                                            x_rotor = "3";
                                                    else
                                                    if(number_x_rotor == 4)
                                                        x_rotor = "4";
                                                                else
                                                                if(number_x_rotor == 5)
                                                                    x_rotor = "5";
                                                                            else
                                                                            if(number_x_rotor == 6)
                                                                                x_rotor = "6";
                                                                                else
                                                                                if(number_x_rotor == 7)
                                                                                    x_rotor = "7";
                                                                                            else
                                                                                            if(number_x_rotor == 8)
                                                                                                x_rotor = "8";
                                                                                                        else
                                                                                                        if(number_x_rotor == 9)
                                                                                                            x_rotor = "9";
                                                                                                                    else
                                                                                                                    if(number_x_rotor == 10)
                                                                                                                        x_rotor = "10";
                                                                                                                                else
                                                                                                                                if(number_x_rotor == 11)
                                                                                                                                    x_rotor = "11";
                                                                                                                                            else
                                                                                                                                            if(number_x_rotor == 12)
                                                                                                                                                x_rotor = "12";
                                                                                                                                                        else
                                                                                                                                                        if(number_x_rotor == 13)
                                                                                                                                                            x_rotor = "13";
                                                                                                                                                            else
                                                                                                                                                            if(number_x_rotor == 14)
                                                                                                                                                                x_rotor = "14";
                                                                                                                                                                        else
                                                                                                                                                                        if(number_x_rotor == 15)
                                                                                                                                                                            x_rotor = "15";
                                                                                                                                                                        else
                                                                                                                                                                        if(number_x_rotor == 16)
                                                                                                                                                                            x_rotor = "16";
                                                                                                                                                                                    else
                                                                                                                                                                                    if(number_x_rotor == 17)
                                                                                                                                                                                        x_rotor = "17";
                                                                                                                                                                                                else
                                                                                                                                                                                                if(number_x_rotor == 18)
                                                                                                                                                                                                    x_rotor = "18";
                                                                                                                                                                                                            else
                                                                                                                                                                                                            if(number_x_rotor == 19)
                                                                                                                                                                                                                x_rotor = "19";
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        if(number_x_rotor == 20)
                                                                                                                                                                                                                            x_rotor = "20";
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                    if(number_x_rotor == 21)
                                                                                                                                                                                                                                        x_rotor = "21";
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                        if(number_x_rotor == 22)
                                                                                                                                                                                                                                            x_rotor = "22";
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(number_x_rotor == 23)
                                                                                                                                                                                                                                                        x_rotor = "23";
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(number_x_rotor == 24)
                                                                                                                                                                                                                                                        x_rotor = "24";
                                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                                if(number_x_rotor == 25)
                                                                                                                                                                                                                                                                    x_rotor = "25";
}

void delimiter_y_rotor_back()
{
    if(number_y_rotor == 0)
        y_rotor = "0";
                else
                if(number_y_rotor == 1)
                    y_rotor = "1";
                            else
                            if(number_y_rotor == 2)
                                y_rotor = "2";
                                        else
                                        if(number_y_rotor == 3)
                                            y_rotor = "3";
                                                    else
                                                    if(number_y_rotor == 4)
                                                        y_rotor = "4";
                                                                else
                                                                if(number_y_rotor == 5)
                                                                    y_rotor = "5";
                                                                            else
                                                                            if(number_y_rotor == 6)
                                                                                y_rotor = "6";
                                                                                else
                                                                                if(number_y_rotor == 7)
                                                                                    y_rotor = "7";
                                                                                            else
                                                                                            if(number_y_rotor == 8)
                                                                                                y_rotor = "8";
                                                                                                        else
                                                                                                        if(number_y_rotor == 9)
                                                                                                            y_rotor = "9";
                                                                                                                    else
                                                                                                                    if(number_y_rotor == 10)
                                                                                                                        y_rotor = "10";
                                                                                                                                else
                                                                                                                                if(number_y_rotor == 11)
                                                                                                                                    y_rotor = "11";
                                                                                                                                            else
                                                                                                                                            if(number_y_rotor == 12)
                                                                                                                                                y_rotor = "12";
                                                                                                                                                        else
                                                                                                                                                        if(number_y_rotor == 13)
                                                                                                                                                            y_rotor = "13";
                                                                                                                                                            else
                                                                                                                                                            if(number_y_rotor == 14)
                                                                                                                                                                y_rotor = "14";
                                                                                                                                                                        else
                                                                                                                                                                        if(number_y_rotor == 15)
                                                                                                                                                                            y_rotor = "15";
                                                                                                                                                                        else
                                                                                                                                                                        if(number_y_rotor == 16)
                                                                                                                                                                            y_rotor = "16";
                                                                                                                                                                                    else
                                                                                                                                                                                    if(number_y_rotor == 17)
                                                                                                                                                                                        y_rotor = "17";
                                                                                                                                                                                                else
                                                                                                                                                                                                if(number_y_rotor == 18)
                                                                                                                                                                                                    y_rotor = "18";
                                                                                                                                                                                                            else
                                                                                                                                                                                                            if(number_y_rotor == 19)
                                                                                                                                                                                                                y_rotor = "19";
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        if(number_y_rotor == 20)
                                                                                                                                                                                                                            y_rotor = "20";
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                    if(number_y_rotor == 21)
                                                                                                                                                                                                                                        y_rotor = "21";
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                        if(number_y_rotor == 22)
                                                                                                                                                                                                                                            y_rotor = "22";
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(number_y_rotor == 23)
                                                                                                                                                                                                                                                        y_rotor = "23";
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(number_y_rotor == 24)
                                                                                                                                                                                                                                                        y_rotor = "24";
                                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                                if(number_y_rotor == 25)
                                                                                                                                                                                                                                                                    y_rotor = "25";
}

void delimiter_z_rotor_back()
{
    if(number_z_rotor == 0)
        z_rotor = "0";
                else
                if(number_z_rotor == 1)
                    z_rotor = "1";
                            else
                            if(number_z_rotor == 2)
                                z_rotor = "2";
                                        else
                                        if(number_z_rotor == 3)
                                            z_rotor = "3";
                                                    else
                                                    if(number_z_rotor == 4)
                                                        z_rotor = "4";
                                                                else
                                                                if(number_z_rotor == 5)
                                                                    z_rotor = "5";
                                                                            else
                                                                            if(number_z_rotor == 6)
                                                                                z_rotor = "6";
                                                                                else
                                                                                if(number_z_rotor == 7)
                                                                                    z_rotor = "7";
                                                                                            else
                                                                                            if(number_z_rotor == 8)
                                                                                                z_rotor = "8";
                                                                                                        else
                                                                                                        if(number_z_rotor == 9)
                                                                                                            z_rotor = "9";
                                                                                                                    else
                                                                                                                    if(number_z_rotor == 10)
                                                                                                                        z_rotor = "10";
                                                                                                                                else
                                                                                                                                if(number_z_rotor == 11)
                                                                                                                                    z_rotor = "11";
                                                                                                                                            else
                                                                                                                                            if(number_z_rotor == 12)
                                                                                                                                                z_rotor = "12";
                                                                                                                                                        else
                                                                                                                                                        if(number_z_rotor == 13)
                                                                                                                                                            z_rotor = "13";
                                                                                                                                                            else
                                                                                                                                                            if(number_z_rotor == 14)
                                                                                                                                                                z_rotor = "14";
                                                                                                                                                                        else
                                                                                                                                                                        if(number_z_rotor == 15)
                                                                                                                                                                            z_rotor = "15";
                                                                                                                                                                        else
                                                                                                                                                                        if(number_z_rotor == 16)
                                                                                                                                                                            z_rotor = "16";
                                                                                                                                                                                    else
                                                                                                                                                                                    if(number_z_rotor == 17)
                                                                                                                                                                                        z_rotor = "17";
                                                                                                                                                                                                else
                                                                                                                                                                                                if(number_z_rotor == 18)
                                                                                                                                                                                                    z_rotor = "18";
                                                                                                                                                                                                            else
                                                                                                                                                                                                            if(number_z_rotor == 19)
                                                                                                                                                                                                                z_rotor = "19";
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        if(number_z_rotor == 20)
                                                                                                                                                                                                                            z_rotor = "20";
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                    if(number_z_rotor == 21)
                                                                                                                                                                                                                                        z_rotor = "21";
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                        if(number_z_rotor == 22)
                                                                                                                                                                                                                                            z_rotor = "22";
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(number_z_rotor == 23)
                                                                                                                                                                                                                                                        z_rotor = "23";
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                    if(number_z_rotor == 24)
                                                                                                                                                                                                                                                        z_rotor = "24";
                                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                                if(number_z_rotor == 25)
                                                                                                                                                                                                                                                                    z_rotor = "25";
}

