#include <Windows.h>
#include <iostream>
using namespace std;

const char* ArrayRegions[200] = { ArrayRegions[0] = "��������� ����", ArrayRegions[1] = "",  ArrayRegions[2] = "", ArrayRegions[3] = "������������� ����", ArrayRegions[4] = "������������ ����", ArrayRegions[5] = "���������� ����",  ArrayRegions[6] = "", ArrayRegions[7] = "�������������� ����",ArrayRegions[8] = "����������� ����",ArrayRegions[9] = "",ArrayRegions[10] = "�������� �������",ArrayRegions[11] = "������������� �������",ArrayRegions[12] = "������������ �������", ArrayRegions[13] = "",ArrayRegions[14] = "������������ �������",ArrayRegions[15] = "�������� �������",  ArrayRegions[16] = "",ArrayRegions[17] = "������������ �������",ArrayRegions[18] = "������������� �������",ArrayRegions[19] = "����������� �������",ArrayRegions[20] = "����������� �������",ArrayRegions[21] = "",ArrayRegions[22] = "������������� �������",ArrayRegions[23] = "",ArrayRegions[24] = "���������� �������",ArrayRegions[25] = "��������� �������",ArrayRegions[26] = "���������� ���������",ArrayRegions[27] = "��������������� �������",ArrayRegions[28] = "�������� �������",ArrayRegions[29] = "��������� �������",ArrayRegions[30] = "���������� ����",ArrayRegions[31] = "",ArrayRegions[32] = "����������� ������� - �������",ArrayRegions[33] = "��������� �������",ArrayRegions[34] = "����������� �������",ArrayRegions[35] = "���������� ����",ArrayRegions[36] = "��������� �������",ArrayRegions[37] = "���������� �������",ArrayRegions[38] = "������� �������",ArrayRegions[39] = "",ArrayRegions[40] = "����� �����-���������",ArrayRegions[41] = "������������� �������",ArrayRegions[42] = "�������� �������",ArrayRegions[43] = "",ArrayRegions[44] = "����������� �������",ArrayRegions[45] = "����� ������ ������� ��",ArrayRegions[46] = "���������� �������",ArrayRegions[47] = "���������� �������",ArrayRegions[48] = "",ArrayRegions[49] = "������������ �������",ArrayRegions[50] = "������������� �������",ArrayRegions[51] = "",ArrayRegions[52] = "������ �������",ArrayRegions[53] = "������������ �������",ArrayRegions[54] = "��������� �������",ArrayRegions[55] = "",ArrayRegions[56] = "���������� �������",ArrayRegions[57] = "�������� ����",ArrayRegions[58] = "��������� �������",ArrayRegions[59] = "",ArrayRegions[60] = "���������� �������",ArrayRegions[61] = "��������� �������",ArrayRegions[62] = "",ArrayRegions[63] = "����������� �������",ArrayRegions[64] = "����������� �������",ArrayRegions[65] = "������������ �������",ArrayRegions[66] = "���������� �������",ArrayRegions[67] = "�����������",ArrayRegions[68] = "���������� �������",ArrayRegions[69] = "������� �������",ArrayRegions[70] = "�������� �������",ArrayRegions[71] = "��������� �������",ArrayRegions[72] = "",ArrayRegions[73] = "����������� �������",  ArrayRegions[74] = "",ArrayRegions[75] = "����������� �������",ArrayRegions[76] = "������������� ����",ArrayRegions[77] = "��������� ���������� �����",ArrayRegions[78] = "����������� �������",ArrayRegions[79] = "���������� ������",ArrayRegions[80] = "���������� ������������",ArrayRegions[81] = "���������� ������������",ArrayRegions[82] = "���������� ��������",ArrayRegions[83] = "���������-���������� ����������",ArrayRegions[84] = "���������� �����",ArrayRegions[85] = "���������� ��������",ArrayRegions[86] = "���������� �������",ArrayRegions[87] = "���������� ����",ArrayRegions[88] = "���������� ����� ��",ArrayRegions[89] = "���������� ��������",ArrayRegions[90] = "���������� �������� ������-������",ArrayRegions[91] = "���������-���������� ����������",ArrayRegions[92] = "���������� ���������",ArrayRegions[93] = "���������� ����",ArrayRegions[94] = "���������� ����������",ArrayRegions[95] = "���������� �������",ArrayRegions[96] = "��������� ����������",ArrayRegions[97] = "��������� ����������",ArrayRegions[98] = "���������� ����",ArrayRegions[99] = "��������� ���������� �������"};
const char* ArrayCode[4] = { ArrayCode[0] = "����", ArrayCode[1] = "���/���", ArrayCode[2] = "��� �/�", ArrayCode[3] = "���������� �������" };

string logo = R"(
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
^  _____ ______  _____          __         ______                          _             ^
^ |  __ \| ___ \|_   _|        / _|        | ___ \                        | |            ^
^ | |  \/| |_/ /  | |   _ __  | |_   ___   | |_/ /  ___  _ __ ___    __ _ | | __  ___    ^
^ | | __ |  __/   | |  | '_ \ |  _| / _ \  |    /  / _ \| '_ ` _ \  / _` || |/ / / _ \   ^
^ | |_\ \| |     _| |_ | | | || |  | (_) | | |\ \ |  __/| | | | | || (_| ||   < |  __/   ^
^  \____/\_|     \___/ |_| |_||_|   \___/  \_| \_| \___||_| |_| |_| \__,_||_|\_\ \___|   ^
^                                                                                        ^
^                                  Author: ThisUselessness                               ^
^                                  Data: 25.10.2022                                      ^
^                                  Site: BlastHack                                       ^
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

)";

int main() {
	int Number;
	int Region, Data, Series, Code, None1, None2;

	system("color 5");
	setlocale(LC_ALL, "rus");
	SetConsoleTitle(L"GPI Remake");
	cout << logo;
	cout << "������� ����� 1 ��� �� �������� ���������� � ��������\n������� ����� 2 ��� �� ������� �� ���� ������\n";
	cin >> Number;
	switch (Number) {
	case 1:
		system("cls"); cout << logo;
		cout << "������� ����� ������� ��������� ����� ��������, ������ [XX XX XXXXXX]\n����� - ������� �������� ��������� ������� ENTER\n";
		cin >> Region >> Data >> Series;
		cout << "������� ������ ��� ����� ������� ��������� � ���� �������������\n����� - ����� ������ ����� ��������� ������� ENTER\n";
		cin >> None1 >> None2 >> Code;
		system("cls"); cout << logo;
		if (Region == 1) { Region--; }
		cout << "=============================================================================================\n";
		cout << "������ ������ ��������: "<< ArrayRegions[Region] <<" | ����� ����: "<< Data <<" | �����: "<< Series <<"\n�������������: "<< ArrayCode[Code] <<"\n";
		cout << "=============================================================================================\n";
		break;
	case 2:
		ShellExecute(0, L"open", L"https://www.blast.hk/members/493623/", NULL, NULL, SW_SHOWDEFAULT);
		cout << "������������� ��������� ��� �� ������ ������\n";
		break;
	default:
		cout << "Incorrent params!\n";
		break;
	}
	while (true);
}