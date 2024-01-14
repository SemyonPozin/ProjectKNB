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
        cout << "�������� ������� ������������� ���������." << endl;
        cout << "1-������" << endl;
        cout << "2-�����" << endl;
        cin >> userChoose;
        switch (userChoose)
        {
        case 1:
            cout << "�������� ������(1), �������(2) ��� ������(3)." << endl;
            cout << "����� ����� � ���� �������� 4." << endl;
            while (true) {
                compChooseKNB = rand() % 3 + 1;
                cin >> userChooseKNB;
                if ((userChooseKNB != 1) && (userChooseKNB != 2) && (userChooseKNB != 3) && (userChooseKNB != 4)) {
                    cout << "������������ �����!" << endl;
                    break;
                }
                if ((compChooseKNB == 1 && userChooseKNB == 2) || (compChooseKNB == 2 && userChooseKNB == 3) || (compChooseKNB == 3 && userChooseKNB == 1)) {
                    cout << "�� ���������!" << endl;
                }
                else
                    if ((userChooseKNB == 1 && compChooseKNB == 2) || (userChooseKNB == 2 && compChooseKNB == 3) || (userChooseKNB == 3 && compChooseKNB == 1)) {
                        cout << "�� ��������!" << endl;
                    }
                    else
                        if (userChooseKNB == compChooseKNB) {
                            cout << "�����!" << endl;
                        }
                        else
                            if (userChooseKNB == 4)
                                break;
            }
            break;
        case 2:
            return 0;
        default:
            cout << "������! �������� ������� �������������" << endl;
            break;
        }
    }
}