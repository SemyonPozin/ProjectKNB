#include <iostream>
#include "writeScissors.h"
#include "writePaper.h"
#include "writeStone.h"
#include "writePaperStone.h";
#include "writePaperScissors.h"
#include "writeStoneScissors.h"
#include "writePaperPaper.h"
#include "writeStoneStone.h"
#include "writeScissorsScissors.h"
using namespace std;

int main()
{
    srand(time(NULL));
    writePaper();
    writeStone();
    writeScissors();
    writePaperStone();
    writePaperScissors();
    writeStoneScissors();
    writePaperPaper();
    writeStoneStone();
    writeScissorsScissors();
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