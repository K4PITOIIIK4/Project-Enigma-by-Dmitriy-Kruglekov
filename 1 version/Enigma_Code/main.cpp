#include <iostream>
#include "string"

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
string b;
int a;

int main()
{
    setlocale(LC_ALL,"Russian");
    int x_rotor, y_rotor, z_rotor, x_number, y_number, z_number;
    bool test = 0;
    string reflector;
    do
    {
    test = 0;
    cout << "??????? ?????? ?????????, ??????? ?????? ????????????." << endl << "????? ?????? ?????????, ??? ?? ????? ???????????." << endl;
    system("pause");
    system("cls");
    cout << "?????? ?????: ";
    cin >> x_number;
    system("cls");
    cout << "?????? ?????: ";
    cin >> y_number;
    system("cls");
    cout << "?????? ?????: ";
    cin >> z_number;
    system("cls");
    if(((x_number == y_number)||(y_number == z_number)||(x_number == z_number))||((x_number > 8)||(y_number > 8)||(z_number > 8)))
    {
        test = 1;
        cout << "?????? ????????? ?? ????? ?????????, ??????? ??????";
        system("pause");
        system("cls");
    }
    } while(test == 1);
    do
    {
    test = 0;
    cout << "??????? ????????? ????????? ???????." << endl << "????? 26 ????????? ??????? ( ?? 0 ?? 25 )." << endl;
    system("pause");
    system("cls");
    cout << "?????? ?????: ";
    cin >> x_rotor;
    system("cls");
    cout << "?????? ?????: ";
    cin >> y_rotor;
    system("cls");
    cout << "?????? ?????: ";
    cin >> z_rotor;
    system("cls");
    if((x_rotor >= 26)||(y_rotor >= 26)||(z_rotor >= 26))
    {
        test = 1;
        cout << "????? 26 ????????? ????????? ( ?? 0 ?? 25 )";
        system("pause");
        system("cls");
    }
    } while(test == 1);
    do
    {
        test = 0;
    cout << "??????? ?????????, ??????? ?? ?????? ???????????? (? ??? B)." << endl;
    cin >> reflector;
    if((reflector != "C")&&(reflector != "B"))
    {
        test = 1;
        cout << "?????? ?????????? ?? ??????????! ??????? ??????";
        system("pause");
        system("cls");
    }
    }while(test == 1);
    cout << "??????? ?????????? ????? ????? Enter." << endl;
    system("pause");
    system("cls");
    for(;;z_rotor++)
    {
        if(z_rotor == 26)
        {
            z_rotor = 0;
            y_rotor++;
        }
        if(y_rotor == 26)
        {
        z_rotor = 0;
        y_rotor = 0;
        x_rotor++;
        }
        if(x_rotor == 26)
        {
        z_rotor = 0;
        y_rotor = 0;
        x_rotor = 0;
        }
        cout << reflector << endl;
        cout << endl << "|" << x_number << "|" << y_number << "|" << z_number << "|" << endl;
        cout << endl << "|" << x_rotor << "|" << y_rotor << "|" << z_rotor << "|" << endl;
        cin >> b;
        alphago();
        a = z_rotor + a;
        if(a < 0)
            a = a + 26;
        if(a > 25)
            a = a - 26;
        if(z_number == 1)
            rotor1go();
        else
            if(z_number == 2)
                rotor2go();
            else
                if(z_number == 3)
                    rotor3go();
                else
                    if(z_number == 4)
                        rotor4go();
                    else
                        if(z_number == 5)
                            rotor5go();
                        else
                            if(z_number == 6)
                                rotor6go();
                            else
                                if(z_number == 7)
                                    rotor7go();
                                else
                                    if(z_number == 8)
                                        rotor8go();
        a = a + (y_rotor - z_rotor);
        if(a < 0)
            a = a + 26;
        if(a > 25)
            a = a - 26;
         if(y_number == 1)
             rotor1go();
         else
             if(y_number == 2)
                 rotor2go();
             else
                 if(y_number == 3)
                     rotor3go();
                 else
                     if(y_number == 4)
                         rotor4go();
                     else
                         if(y_number == 5)
                             rotor5go();
                         else
                             if(y_number == 6)
                                 rotor6go();
                             else
                                 if(y_number == 7)
                                     rotor7go();
                                 else
                                     if(y_number == 8)
                                         rotor8go();
        a = a + (x_rotor - y_rotor);
        if(a < 0)
            a = a + 26;
        if(a > 25)
            a = a - 26;
        if(x_number == 1)
            rotor1go();
        else
            if(x_number == 2)
                rotor2go();
            else
                if(x_number == 3)
                    rotor3go();
                else
                    if(x_number == 4)
                        rotor4go();
                    else
                        if(x_number == 5)
                            rotor5go();
                        else
                            if(x_number == 6)
                                rotor6go();
                            else
                                if(x_number == 7)
                                    rotor7go();
                                else
                                    if(x_number == 8)
                                        rotor8go();
       a = a - x_rotor;
       if(a < 0)
           a = a + 26;
       if(a > 25)
           a = a - 26;
       if(reflector == "B")
       reflectorB();
       else
           reflectorC();
       a = a + x_rotor;
        if(a > 25)
           a = a - 26;
        if(a < 0)
            a = a + 26;
        if(x_number == 1)
            rotor1back();
        else
            if(x_number == 2)
                rotor2back();
            else
                if(x_number == 3)
                    rotor3back();
                else
                    if(x_number == 4)
                        rotor4back();
                    else
                        if(x_number == 5)
                            rotor5back();
                        else
                            if(x_number == 6)
                                rotor6back();
                            else
                                if(x_number == 7)
                                    rotor7back();
                                else
                                    if(x_number == 8)
                                        rotor8back();
        a = a - (x_rotor - y_rotor);
        if(a > 25)
            a = a - 26;
        if(a < 0)
            a = a + 26;
        if(y_number == 1)
            rotor1back();
        else
            if(y_number == 2)
                rotor2back();
            else
                if(y_number == 3)
                    rotor3back();
                else
                    if(y_number == 4)
                        rotor4back();
                    else
                        if(y_number == 5)
                            rotor5back();
                        else
                            if(y_number == 6)
                                rotor6back();
                            else
                                if(y_number == 7)
                                    rotor7back();
                                else
                                    if(y_number == 8)
                                        rotor8back();
        a = a - (y_rotor - z_rotor);
         if(a > 25)
            a = a - 26;
         if(a < 0)
             a = a + 26;
        if(z_number == 1)
            rotor1back();
        else
            if(z_number == 2)
                rotor2back();
            else
                if(z_number == 3)
                    rotor3back();
                else
                    if(z_number == 4)
                        rotor4back();
                    else
                        if(z_number == 5)
                            rotor5back();
                        else
                            if(z_number == 6)
                                rotor6back();
                            else
                                if(z_number == 7)
                                    rotor7back();
                                else
                                    if(z_number == 8)
                                        rotor8back();

        a = a - z_rotor;
        if(a > 25)
            a = a - 26;
        if(a < 0)
            a = a + 26;
        alphaback();
        cout << b << endl;
        system("pause");
        system("cls");
    }
    return 0;
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
        b = "A";
                else
        if(a == 1)
            b = "B";
                    else
            if(a == 2)
                b = "C";
                        else
                if(a == 3)
                    b = "D";
                            else
                    if(a == 4)
                        b = "E";
                                else
                        if(a == 5)
                            b = "F";
                                    else
                            if(a == 6)
                                b = "G";
                                        else
                                if(a == 7)
                                    b = "H";
                                            else
                                    if(a == 8)
                                        b = "I";
                                                else
                                        if(a == 9)
                                            b = "J";
                                                    else
                                            if(a == 10)
                                                b = "K";
                                                        else
                                                if(a == 11)
                                                    b = "L";
                                                            else
                                                    if(a == 12)
                                                        b = "M";
                                                                else
                                                        if(a == 13)
                                                            b = "N";
                                                                    else
                                                            if(a == 14)
                                                                b = "O";
                                                                        else
                                                                if(a == 15)
                                                                    b = "P";
                                                                            else
                                                                    if(a == 16)
                                                                        b = "Q";
                                                                                else
                                                                        if(a == 17)
                                                                            b = "R";
                                                                                    else
                                                                            if(a == 18)
                                                                                b = "S";
                                                                                        else
                                                                                if(a == 19)
                                                                                    b = "T";
                                                                                            else
                                                                                    if(a == 20)
                                                                                        b = "U";
                                                                                                else
                                                                                        if(a == 21)
                                                                                            b = "V";
                                                                                                    else
                                                                                            if(a == 22)
                                                                                                b = "W";
                                                                                                        else
                                                                                                if(a == 23)
                                                                                                    b = "X";
                                                                                                            else
                                                                                                    if(a == 24)
                                                                                                        b = "Y";
                                                                                                                else
                                                                                                        if(a == 25)
                                                                                                            b = "Z";
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
