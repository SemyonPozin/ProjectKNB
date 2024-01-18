#include <iostream>
#include "writeScissorsLeft.h"
#include "writePaperLeft.h"
#include "writeStone.h"
#include "writeScissorsRight.h"
#include "writePaperRight.h"
#include "writeStoneLeft.h"
#include "writeStoneRight.h"
using namespace std;

int main()
{
    srand(time(NULL));

    writeScissorsLeft();
    writeScissorsRight();
    writePaperLeft();
    writePaperRight();
    writeStoneLeft();
    writeStoneRight();
        
    while (true) {
        setlocale(LC_CTYPE, "Russian");
        int userChoose, compChooseKNB, userChooseKNB;
        cout << "Выберите вариант использования программы." << endl;
        cout << "1-Играть" << endl;
        cout << "2-Выйти" << endl;
        cin >> userChoose;
        switch (userChoose)
        {
        case 1:
            cout << "Выберите камень(1), ножницы(2) или бумагу(3)." << endl;
            cout << "Чтобы выйти в меню выберите 4." << endl;
            while (true) {
                compChooseKNB = rand() % 3 + 1;
                cin >> userChooseKNB;
                if ((userChooseKNB != 1) && (userChooseKNB != 2) && (userChooseKNB != 3) && (userChooseKNB != 4)) {
                    cout << "Неправильный выбор!" << endl;
                    break;
                }
                if ((compChooseKNB == 1 && userChooseKNB == 2) || (compChooseKNB == 2 && userChooseKNB == 3) || (compChooseKNB == 3 && userChooseKNB == 1)) {
                    cout << "Вы проиграли!" << endl;
                }
                else
                    if ((userChooseKNB == 1 && compChooseKNB == 2) || (userChooseKNB == 2 && compChooseKNB == 3) || (userChooseKNB == 3 && compChooseKNB == 1)) {
                        cout << "Вы выиграли!" << endl;
                    }
                    else
                        if (userChooseKNB == compChooseKNB) {
                            cout << "Ничья!" << endl;
                        }
                        else
                            if (userChooseKNB == 4)
                                break;
            }
            break;
        case 2:
            return 0;
        default:
            cout << "Ошибка! Неверный вариант использования" << endl;
            break;
        }
    }
}