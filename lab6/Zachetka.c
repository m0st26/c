#include <stdio.h>
#include <locale.h>
enum Mark { two = 2, three = 3, four = 4, five = 5 };
struct Exam_Mark {
	_Bool mark_credit;
	enum Mark exam_mark;
};
struct Subject{
	char *name_subject;
	char *exam_date;
	char *teacher_surname;
	struct Exam_Mark mark;
};
struct Term{
	int number;
	char *year;
	struct Subject subjectInfo[10];
};
struct Zachetka {
	char *Name;
	char *Surname;
	char *Middle_name;
	int Number_book;
	struct Term termsInfo[3];
};
void main() {
	setlocale(LC_ALL, "Russian");
	struct Zachetka My_book;
	My_book.Name = "Илья";
	My_book.Surname = "Нагорный";
	My_book.Middle_name = "Андреевич";
	My_book.Number_book = 17137;
	My_book.termsInfo[0].number = 1;
	My_book.termsInfo[1].number = 2;
	My_book.termsInfo[2].number = 3;
	My_book.termsInfo[0].year = "2017-2018";
	My_book.termsInfo[1].year = "2017-2018";
	My_book.termsInfo[2].year = "2018-2019";

	My_book.termsInfo[0].subjectInfo[0].name_subject = "Философия";
	My_book.termsInfo[0].subjectInfo[0].mark.exam_mark = five;
	My_book.termsInfo[0].subjectInfo[0].exam_date = "16.01.18";
	My_book.termsInfo[0].subjectInfo[0].teacher_surname = "Музыченко";

	My_book.termsInfo[0].subjectInfo[1].name_subject = "Аналитическая геометрия и линейная алгебра";
	My_book.termsInfo[0].subjectInfo[1].mark.exam_mark = five;
	My_book.termsInfo[0].subjectInfo[1].exam_date = "24.01.18";
	My_book.termsInfo[0].subjectInfo[1].teacher_surname = "Куприн";

	My_book.termsInfo[0].subjectInfo[2].name_subject = "Высшая математика";
	My_book.termsInfo[0].subjectInfo[2].mark.exam_mark = four;
	My_book.termsInfo[0].subjectInfo[2].exam_date = "29.01.18";
	My_book.termsInfo[0].subjectInfo[2].teacher_surname = "Александров";\

	My_book.termsInfo[0].subjectInfo[3].name_subject = "Теоретические основы создания информационного общества";
	My_book.termsInfo[0].subjectInfo[3].mark.mark_credit = 1;
	My_book.termsInfo[0].subjectInfo[3].exam_date = "26.12.17";
	My_book.termsInfo[0].subjectInfo[3].teacher_surname = "Музыченко";

	My_book.termsInfo[0].subjectInfo[4].name_subject = "Русский язык и культура речи";
	My_book.termsInfo[0].subjectInfo[4].mark.mark_credit = 1;
	My_book.termsInfo[0].subjectInfo[4].exam_date = "26.12.17";
	My_book.termsInfo[0].subjectInfo[4].teacher_surname = "Невзорова";

	My_book.termsInfo[0].subjectInfo[5].name_subject = "Информатика";
	My_book.termsInfo[0].subjectInfo[5].mark.mark_credit = 1;
	My_book.termsInfo[0].subjectInfo[5].exam_date = "27.12.17";
	My_book.termsInfo[0].subjectInfo[5].teacher_surname = "Мацкевич";

	My_book.termsInfo[0].subjectInfo[6].name_subject = "Английский язык";
	My_book.termsInfo[0].subjectInfo[6].mark.mark_credit = 1;
	My_book.termsInfo[0].subjectInfo[6].exam_date = "28.12.17";
	My_book.termsInfo[0].subjectInfo[6].teacher_surname = "Шамшина";

	My_book.termsInfo[0].subjectInfo[7].name_subject = "Введение в профессию";
	My_book.termsInfo[0].subjectInfo[7].mark.mark_credit = 1;
	My_book.termsInfo[0].subjectInfo[7].exam_date = "29.12.17";
	My_book.termsInfo[0].subjectInfo[7].teacher_surname = "Шавтин";

	My_book.termsInfo[1].subjectInfo[0].name_subject = "Английский язык";
	My_book.termsInfo[1].subjectInfo[0].mark.exam_mark = four;
	My_book.termsInfo[1].subjectInfo[0].exam_date = "15.06.18";
	My_book.termsInfo[1].subjectInfo[0].teacher_surname = "Мальцева";

	My_book.termsInfo[1].subjectInfo[1].name_subject = "Информатика";
	My_book.termsInfo[1].subjectInfo[1].mark.exam_mark = four;
	My_book.termsInfo[1].subjectInfo[1].exam_date = "19.06.18";
	My_book.termsInfo[1].subjectInfo[1].teacher_surname = "Загвоздкина";

	My_book.termsInfo[1].subjectInfo[2].name_subject = "История";
	My_book.termsInfo[1].subjectInfo[2].mark.exam_mark = four;
	My_book.termsInfo[1].subjectInfo[2].exam_date = "25.06.18";
	My_book.termsInfo[1].subjectInfo[2].teacher_surname = "Кузнецова"; 

	My_book.termsInfo[1].subjectInfo[3].name_subject = "Высшая математика";
	My_book.termsInfo[1].subjectInfo[2].mark.exam_mark = five;
	My_book.termsInfo[1].subjectInfo[3].exam_date = "26.12.17";
	My_book.termsInfo[1].subjectInfo[3].teacher_surname = "Александров";

	My_book.termsInfo[1].subjectInfo[4].name_subject = "Компьютерная графика";
	My_book.termsInfo[1].subjectInfo[4].mark.mark_credit = 1;
	My_book.termsInfo[1].subjectInfo[4].exam_date = "15.05.18";
	My_book.termsInfo[1].subjectInfo[4].teacher_surname = "Рывлина";

	My_book.termsInfo[1].subjectInfo[5].name_subject = "Теоретические основы экономики";
	My_book.termsInfo[1].subjectInfo[5].mark.mark_credit = 1;
	My_book.termsInfo[1].subjectInfo[5].exam_date = "30.05.18";
	My_book.termsInfo[1].subjectInfo[5].teacher_surname = "Орлова";

	My_book.termsInfo[1].subjectInfo[6].name_subject = "Элективные дисциплины по физической культуре";
	My_book.termsInfo[1].subjectInfo[6].mark.mark_credit = 1;
	My_book.termsInfo[1].subjectInfo[6].exam_date = "31.05.18";
	My_book.termsInfo[1].subjectInfo[6].teacher_surname = "Горячева";

	My_book.termsInfo[1].subjectInfo[7].name_subject = "Управление качеством";
	My_book.termsInfo[1].subjectInfo[7].mark.mark_credit = 1;
	My_book.termsInfo[1].subjectInfo[7].exam_date = "06.06.18";
	My_book.termsInfo[1].subjectInfo[7].teacher_surname = "Ерёменко";

	My_book.termsInfo[1].subjectInfo[8].name_subject = "Физика";
	My_book.termsInfo[1].subjectInfo[8].mark.mark_credit = 1;
	My_book.termsInfo[1].subjectInfo[8].exam_date = "07.06.18";
	My_book.termsInfo[1].subjectInfo[8].teacher_surname = "Байков";

	My_book.termsInfo[2].subjectInfo[0].name_subject = "Дискретная математика";
	My_book.termsInfo[2].subjectInfo[0].mark.exam_mark = four;
	My_book.termsInfo[2].subjectInfo[0].exam_date = "16.02.19";
	My_book.termsInfo[2].subjectInfo[0].teacher_surname = "Александров";

	My_book.termsInfo[2].subjectInfo[1].name_subject = "Теория вероятностей и математическая статистика";
	My_book.termsInfo[2].subjectInfo[1].mark.exam_mark = three;
	My_book.termsInfo[2].subjectInfo[1].exam_date = "25.02.19";
	My_book.termsInfo[2].subjectInfo[1].teacher_surname = "Крысанов";

	My_book.termsInfo[2].subjectInfo[2].name_subject = "Физика";
	My_book.termsInfo[2].subjectInfo[2].mark.exam_mark = three;
	My_book.termsInfo[2].subjectInfo[2].exam_date = "12.03.19";
	My_book.termsInfo[2].subjectInfo[2].teacher_surname = "Жилинский";

	My_book.termsInfo[2].subjectInfo[3].name_subject = "Вычислительные модели";
	My_book.termsInfo[2].subjectInfo[2].mark.exam_mark = three;
	My_book.termsInfo[2].subjectInfo[3].exam_date = "19.03.19";
	My_book.termsInfo[2].subjectInfo[3].teacher_surname = "Гловацкая";

	My_book.termsInfo[2].subjectInfo[4].name_subject = "Теория функций комплексных переменных";
	My_book.termsInfo[2].subjectInfo[4].mark.mark_credit = 1;
	My_book.termsInfo[2].subjectInfo[4].exam_date = "25.12.18";
	My_book.termsInfo[2].subjectInfo[4].teacher_surname = "Гудкова";

	My_book.termsInfo[2].subjectInfo[5].name_subject = "История радиосвязи и систем защиты связи";
	My_book.termsInfo[2].subjectInfo[5].mark.mark_credit = 1;
	My_book.termsInfo[2].subjectInfo[5].exam_date = "26.12.18";
	My_book.termsInfo[2].subjectInfo[5].teacher_surname = "Ванюшина";

	My_book.termsInfo[2].subjectInfo[6].name_subject = "Введение в математические пакеты прикладных программ";
	My_book.termsInfo[2].subjectInfo[6].mark.mark_credit = 1;
	My_book.termsInfo[2].subjectInfo[6].exam_date = "12.03.19";
	My_book.termsInfo[2].subjectInfo[6].teacher_surname = "Юсков";

	My_book.termsInfo[2].subjectInfo[7].name_subject = "Теория электрических цепей";
	My_book.termsInfo[2].subjectInfo[7].mark.mark_credit = 1;
	My_book.termsInfo[2].subjectInfo[7].exam_date = "08.04.19";
	My_book.termsInfo[2].subjectInfo[7].teacher_surname = "Смирнов";

	My_book.termsInfo[2].subjectInfo[8].name_subject = "Физические основы электроники";
	My_book.termsInfo[2].subjectInfo[8].mark.mark_credit = 1;
	My_book.termsInfo[2].subjectInfo[8].exam_date = "16.04.19";
	My_book.termsInfo[2].subjectInfo[8].teacher_surname = "Сретенская";


	_Bool Menu = 1;
	while(Menu == 1) {
		system("cls");
		int number;
		printf("Студент группы БИН1707\nФакультет ОТФ-2\nФамилия: %s\nИмя: %s\nОтчество: %s\nНомер зачетной книжки: 1БИН%d\n", My_book.Surname, My_book.Name, My_book.Middle_name,My_book.Number_book);
		printf("1 Семестр\n2 Семестр\n3 Семестр\nДля выхода из программы нажмите 4\nВыберите семестр: ");
		scanf("%d", &number);
		switch (number)
		{
		case 1: {
			_Bool subject_list = 1;
			while (subject_list == 1) {
				system("cls");
				int exam_subject;
				printf("1 Семестр\nПериод обучения: %s\nПредметы:\n", My_book.termsInfo[0].year);
				for (int i = 0; i < 8; i++) {
					printf("%d. %s\n", i + 1, My_book.termsInfo[0].subjectInfo[i].name_subject);
				}
				printf("Нажмите 9 чтобы вернуться к меню семестров\n");
				printf("Выберите предмет: ");
				scanf("%d", &exam_subject);
				switch (exam_subject)
				{
				case 1: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[0].name_subject, My_book.termsInfo[0].subjectInfo[0].mark.exam_mark, My_book.termsInfo[0].subjectInfo[0].exam_date,My_book.termsInfo[0].subjectInfo[0].teacher_surname);
					getch();
					break;
				}
				case 2: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[1].name_subject, My_book.termsInfo[0].subjectInfo[1].mark.exam_mark, My_book.termsInfo[0].subjectInfo[1].exam_date, My_book.termsInfo[0].subjectInfo[1].teacher_surname);
					getch();
					break;
				}
				case 3: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[2].name_subject, My_book.termsInfo[0].subjectInfo[2].mark.exam_mark, My_book.termsInfo[0].subjectInfo[2].exam_date, My_book.termsInfo[0].subjectInfo[2].teacher_surname);
					getch();
					break;
				}
				case 4: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[3].name_subject, My_book.termsInfo[0].subjectInfo[3].mark.mark_credit, My_book.termsInfo[0].subjectInfo[3].exam_date, My_book.termsInfo[0].subjectInfo[3].teacher_surname);
					getch();
					break;
				}
				case 5: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[4].name_subject, My_book.termsInfo[0].subjectInfo[4].mark.mark_credit, My_book.termsInfo[0].subjectInfo[4].exam_date, My_book.termsInfo[0].subjectInfo[4].teacher_surname);
					getch();
					break;
				}
				case 6: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[5].name_subject, My_book.termsInfo[0].subjectInfo[5].mark.mark_credit, My_book.termsInfo[0].subjectInfo[5].exam_date, My_book.termsInfo[0].subjectInfo[5].teacher_surname);
					getch();
					break;
				}
				case 7: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[6].name_subject, My_book.termsInfo[0].subjectInfo[6].mark.mark_credit, My_book.termsInfo[0].subjectInfo[6].exam_date, My_book.termsInfo[0].subjectInfo[6].teacher_surname);
					getch();
					break;
				}
				case 8: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[7].name_subject, My_book.termsInfo[0].subjectInfo[7].mark.mark_credit, My_book.termsInfo[0].subjectInfo[7].exam_date, My_book.termsInfo[0].subjectInfo[7].teacher_surname);
					getch();
					break;
				}
				case 9:
					subject_list = 0;
					break;
				default:
					break;
				}
			}
			break;
		}		
		case 2: {
			_Bool subject_list = 1;
			while (subject_list == 1) {
				system("cls");
				int exam_subject;
				printf("1 Семестр\nПериод обучения: %s\nПредметы:\n", My_book.termsInfo[1].year);
				for (int i = 0; i < 9; i++) {
					printf("%d. %s\n", i + 1, My_book.termsInfo[1].subjectInfo[i].name_subject);
				}
				printf("Нажмите 10 чтобы вернуться к меню семестров\n");
				printf("Выберите предмет: ");
				scanf("%d", &exam_subject);
				switch (exam_subject)
				{
				case 1: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[1].subjectInfo[0].name_subject, My_book.termsInfo[1].subjectInfo[0].mark.exam_mark, My_book.termsInfo[1].subjectInfo[0].exam_date,My_book.termsInfo[1].subjectInfo[0].teacher_surname);
					getch();
					break;
				}
				case 2: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[1].subjectInfo[1].name_subject, My_book.termsInfo[1].subjectInfo[1].mark.exam_mark, My_book.termsInfo[1].subjectInfo[1].exam_date, My_book.termsInfo[1].subjectInfo[1].teacher_surname);					
					getch();
					break;
				}
				case 3: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[1].subjectInfo[2].name_subject, My_book.termsInfo[1].subjectInfo[2].mark.exam_mark, My_book.termsInfo[1].subjectInfo[2].exam_date, My_book.termsInfo[1].subjectInfo[2].teacher_surname);					
					getch();
					break;
				}
				case 4: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[1].subjectInfo[3].name_subject, My_book.termsInfo[1].subjectInfo[3].mark.exam_mark, My_book.termsInfo[1].subjectInfo[3].exam_date, My_book.termsInfo[1].subjectInfo[3].teacher_surname);					
					getch();
					break;
				}
				case 5: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[1].subjectInfo[4].name_subject, My_book.termsInfo[1].subjectInfo[4].mark.mark_credit, My_book.termsInfo[1].subjectInfo[4].exam_date, My_book.termsInfo[1].subjectInfo[4].teacher_surname);					
					getch();
					break;
				}
				case 6: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[1].subjectInfo[5].name_subject, My_book.termsInfo[1].subjectInfo[5].mark.mark_credit, My_book.termsInfo[1].subjectInfo[5].exam_date, My_book.termsInfo[1].subjectInfo[5].teacher_surname);					
					getch();
					break;
				}
				case 7: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[1].subjectInfo[6].name_subject, My_book.termsInfo[1].subjectInfo[6].mark.mark_credit, My_book.termsInfo[1].subjectInfo[6].exam_date, My_book.termsInfo[1].subjectInfo[6].teacher_surname);		
					getch();
					break;
				}
				case 8: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[1].subjectInfo[7].name_subject, My_book.termsInfo[1].subjectInfo[7].mark.mark_credit, My_book.termsInfo[1].subjectInfo[7].exam_date, My_book.termsInfo[1].subjectInfo[7].teacher_surname);
					getch();
					break;
				}
				case 9: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[1].subjectInfo[8].name_subject, My_book.termsInfo[1].subjectInfo[8].mark.mark_credit, My_book.termsInfo[1].subjectInfo[8].exam_date, My_book.termsInfo[1].subjectInfo[8].teacher_surname);
					getch();
					break;
				}
				case 10:
					subject_list = 0;
					break;
				default:
					break;
				}
			}
			break;
		}
		case 3: {
			_Bool subject_list = 1;
			while (subject_list == 1) {
				system("cls");
				int exam_subject;
				printf("1 Семестр\nПериод обучения: %s\nПредметы:\n", My_book.termsInfo[1].year);
				for (int i = 0; i < 9; i++) {
					printf("%d. %s\n", i + 1, My_book.termsInfo[2].subjectInfo[i].name_subject);
				}
				printf("Нажмите 10 чтобы вернуться к меню семестров\n");
				printf("Выберите предмет: ");
				scanf("%d", &exam_subject);
				switch (exam_subject)
				{
				case 1: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[2].subjectInfo[0].name_subject, My_book.termsInfo[2].subjectInfo[0].mark.exam_mark, My_book.termsInfo[2].subjectInfo[0].exam_date, My_book.termsInfo[2].subjectInfo[0].teacher_surname);
					getch();
					break;
				}
				case 2: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[2].subjectInfo[1].name_subject, My_book.termsInfo[2].subjectInfo[1].mark.exam_mark, My_book.termsInfo[2].subjectInfo[1].exam_date, My_book.termsInfo[2].subjectInfo[1].teacher_surname);
					getch();
					break;
				}
				case 3: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[2].subjectInfo[2].name_subject, My_book.termsInfo[2].subjectInfo[2].mark.exam_mark, My_book.termsInfo[2].subjectInfo[2].exam_date, My_book.termsInfo[2].subjectInfo[2].teacher_surname);
					getch();
					break;
				}
				case 4: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[2].subjectInfo[3].name_subject, My_book.termsInfo[2].subjectInfo[3].mark.exam_mark, My_book.termsInfo[2].subjectInfo[3].exam_date, My_book.termsInfo[2].subjectInfo[3].teacher_surname);
					getch();
					break;
				}
				case 5: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[2].subjectInfo[4].name_subject, My_book.termsInfo[2].subjectInfo[4].mark.mark_credit, My_book.termsInfo[2].subjectInfo[4].exam_date, My_book.termsInfo[2].subjectInfo[4].teacher_surname);
					getch();
					break;
				}
				case 6: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[2].subjectInfo[5].name_subject, My_book.termsInfo[2].subjectInfo[5].mark.mark_credit, My_book.termsInfo[2].subjectInfo[5].exam_date, My_book.termsInfo[2].subjectInfo[5].teacher_surname);
					getch();
					break;
				}
				case 7: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[2].subjectInfo[6].name_subject, My_book.termsInfo[2].subjectInfo[6].mark.mark_credit, My_book.termsInfo[2].subjectInfo[6].exam_date, My_book.termsInfo[2].subjectInfo[6].teacher_surname);
					getch();
					break;
				}
				case 8: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[2].subjectInfo[7].name_subject, My_book.termsInfo[2].subjectInfo[7].mark.mark_credit, My_book.termsInfo[2].subjectInfo[7].exam_date, My_book.termsInfo[2].subjectInfo[7].teacher_surname);
					getch();
					break;
				}
				case 9: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nДата: %s\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[2].subjectInfo[8].name_subject, My_book.termsInfo[2].subjectInfo[8].mark.mark_credit, My_book.termsInfo[2].subjectInfo[8].exam_date, My_book.termsInfo[2].subjectInfo[8].teacher_surname);
					getch();
					break;
				}
				case 10:
					subject_list = 0;
					break;
				default:
					break;
				}
			}
			break;
		}
		case 4: {
			Menu = 0;
			break;
		}
		default:
			break;
		}
	}
	system("pause");
}