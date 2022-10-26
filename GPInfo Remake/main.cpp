#include <Windows.h>
#include <iostream>
using namespace std;

const char* ArrayRegions[200] = { ArrayRegions[0] = "Алтайский край", ArrayRegions[1] = "",  ArrayRegions[2] = "", ArrayRegions[3] = "Краснодарский край", ArrayRegions[4] = "Красноярский край", ArrayRegions[5] = "Приморский край",  ArrayRegions[6] = "", ArrayRegions[7] = "Ставропольский край",ArrayRegions[8] = "Хабаровский край",ArrayRegions[9] = "",ArrayRegions[10] = "Амурская область",ArrayRegions[11] = "Архангельская область",ArrayRegions[12] = "Астраханская область", ArrayRegions[13] = "",ArrayRegions[14] = "Белгородская область",ArrayRegions[15] = "Брянская область",  ArrayRegions[16] = "",ArrayRegions[17] = "Владимирская область",ArrayRegions[18] = "Волгоградская область",ArrayRegions[19] = "Вологодская область",ArrayRegions[20] = "Воронежская область",ArrayRegions[21] = "",ArrayRegions[22] = "Нижегородская область",ArrayRegions[23] = "",ArrayRegions[24] = "Ивановская область",ArrayRegions[25] = "Иркутская область",ArrayRegions[26] = "Республика Ингушетия",ArrayRegions[27] = "Калининградская область",ArrayRegions[28] = "Тверская область",ArrayRegions[29] = "Калужская область",ArrayRegions[30] = "Камчатский край",ArrayRegions[31] = "",ArrayRegions[32] = "Кемеровская область - Кузбасс",ArrayRegions[33] = "Кировская область",ArrayRegions[34] = "Костромская область",ArrayRegions[35] = "Республика Крым",ArrayRegions[36] = "Самарская область",ArrayRegions[37] = "Курганская область",ArrayRegions[38] = "Курская область",ArrayRegions[39] = "",ArrayRegions[40] = "Город Санкт-Петербург",ArrayRegions[41] = "Ленинградская область",ArrayRegions[42] = "Липецкая область",ArrayRegions[43] = "",ArrayRegions[44] = "Магаданская область",ArrayRegions[45] = "Город Москва столица РФ",ArrayRegions[46] = "Московская область",ArrayRegions[47] = "Мурманская область",ArrayRegions[48] = "",ArrayRegions[49] = "Новгородская область",ArrayRegions[50] = "Новосибирская область",ArrayRegions[51] = "",ArrayRegions[52] = "Омская область",ArrayRegions[53] = "Оренбургская область",ArrayRegions[54] = "Орловская область",ArrayRegions[55] = "",ArrayRegions[56] = "Пензенская область",ArrayRegions[57] = "Пермский край",ArrayRegions[58] = "Псковская область",ArrayRegions[59] = "",ArrayRegions[60] = "Ростовская область",ArrayRegions[61] = "Рязанская область",ArrayRegions[62] = "",ArrayRegions[63] = "Саратовская область",ArrayRegions[64] = "Сахалинская область",ArrayRegions[65] = "Свердловская область",ArrayRegions[66] = "Смоленская область",ArrayRegions[67] = "Севастополь",ArrayRegions[68] = "Тамбовская область",ArrayRegions[69] = "Томская область",ArrayRegions[70] = "Тульская область",ArrayRegions[71] = "Тюменская область",ArrayRegions[72] = "",ArrayRegions[73] = "Ульяновская область",  ArrayRegions[74] = "",ArrayRegions[75] = "Челябинская область",ArrayRegions[76] = "Забайкальский край",ArrayRegions[77] = "Чукотский автономный округ",ArrayRegions[78] = "Ярославская область",ArrayRegions[79] = "Республика Адыгея",ArrayRegions[80] = "Республика Башкортостан",ArrayRegions[81] = "Республика Башкортостан",ArrayRegions[82] = "Республика Дагестан",ArrayRegions[83] = "Кабардино-Балкарская Республика",ArrayRegions[84] = "Республика Алтай",ArrayRegions[85] = "Республика Калмыкия",ArrayRegions[86] = "Республика Карелия",ArrayRegions[87] = "Республика Коми",ArrayRegions[88] = "Республика Марий Эл",ArrayRegions[89] = "Республика Мордовия",ArrayRegions[90] = "Республика Северная Осетия-Алания",ArrayRegions[91] = "Карачаево-Черкесская Республика",ArrayRegions[92] = "Республика Татарстан",ArrayRegions[93] = "Республика Тыва",ArrayRegions[94] = "Удмуртская Республика",ArrayRegions[95] = "Республика Хакасия",ArrayRegions[96] = "Чеченская Республика",ArrayRegions[97] = "Чувашская Республика",ArrayRegions[98] = "Республика Саха",ArrayRegions[99] = "Еврейская автономная область"};
const char* ArrayCode[4] = { ArrayCode[0] = "УФМС", ArrayCode[1] = "МВД/УВД", ArrayCode[2] = "ОВД Р/Г", ArrayCode[3] = "Отделением Полиции" };

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
	cout << "Введите цифру 1 что бы получить информацию о паспорте\nВведите цифру 2 что бы перейти на сайт автора\n";
	cin >> Number;
	switch (Number) {
	case 1:
		system("cls"); cout << logo;
		cout << "Введите цифры которые находятся сбоку паспорта, пример [XX XX XXXXXX]\nважно - заместо пробелов нажимайте клавишу ENTER\n";
		cin >> Region >> Data >> Series;
		cout << "Введите первые три цифры которые находятся у кода подразделения\nважно - через каждую цифру нажимайте клавишу ENTER\n";
		cin >> None1 >> None2 >> Code;
		system("cls"); cout << logo;
		if (Region == 1) { Region--; }
		cout << "=============================================================================================\n";
		cout << "Регион выдачи паспорта: "<< ArrayRegions[Region] <<" | Цифра года: "<< Data <<" | Серия: "<< Series <<"\nПодразделение: "<< ArrayCode[Code] <<"\n";
		cout << "=============================================================================================\n";
		break;
	case 2:
		ShellExecute(0, L"open", L"https://www.blast.hk/members/493623/", NULL, NULL, SW_SHOWDEFAULT);
		cout << "перезапустите программу что бы начать заного\n";
		break;
	default:
		cout << "Incorrent params!\n";
		break;
	}
	while (true);
}