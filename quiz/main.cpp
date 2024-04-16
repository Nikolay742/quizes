#include "Classes.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string username;
	cout << "Введите ваше имя: ";
	cin >> username;
	Quiz quiz(username);
	Question q1("Каким языком является С++?", { "Интерпритируемым", "Компилируемым", "Не компилируемым" }, 2);
	Question q2("Какой тип данных позволяет запоминать дробные числа?", { "float", "int", "string" }, 1);
	Question q3("Сколько раз выполнится цикл : for (int i = 0; i <= 4; i++)", { "1", "7", "5" }, 3);
	Question q4("Какой из предложенных алгоритмов поиска требует предварительной сортировки данных?", { "Линейный", "Бинарный", "Интерполяционный" }, 2);
	Question q5("Что такое enum?", { "Перечисление", "Целочисленный тип данных", "Такое не используется в С++" }, 1);
	Question q6("Что такое конъюнкция?", { "Логическое сложение", "Функция для обработки строк", "Логическое умножение" }, 3);
	Question q7("Как оставлять комментарии в С++", { "//", "#", "/*" }, 1);
	Question q8("Какой метод можно использовать для определения длины строки?", { "getSize()", "lenght()", "len()" }, 2);
	Question q9("Какой оператор используется для остановки цикла?", { "break", "return", "continue" }, 1);
	Question q10("Какой метод добавляет элемент в конец вектора?", { "append()", "extend()", "push_back()" }, 3);
	quiz.addQuestion(q1);
	quiz.addQuestion(q2);
	quiz.addQuestion(q3);
	quiz.addQuestion(q4);
	quiz.addQuestion(q5);
	quiz.addQuestion(q6);
	quiz.addQuestion(q7);
	quiz.addQuestion(q8);
	quiz.addQuestion(q9);
	quiz.addQuestion(q10);
	quiz.runQuiz();
	return 0;
}





 