#include "Classes.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string username;
	cout << "������� ���� ���: ";
	cin >> username;
	Quiz quiz(username);
	Question q1("����� ������ �������� �++?", { "����������������", "�������������", "�� �������������" }, 2);
	Question q2("����� ��� ������ ��������� ���������� ������� �����?", { "float", "int", "string" }, 1);
	Question q3("������� ��� ���������� ���� : for (int i = 0; i <= 4; i++)", { "1", "7", "5" }, 3);
	Question q4("����� �� ������������ ���������� ������ ������� ��������������� ���������� ������?", { "��������", "��������", "����������������" }, 2);
	Question q5("��� ����� enum?", { "������������", "������������� ��� ������", "����� �� ������������ � �++" }, 1);
	Question q6("��� ����� ����������?", { "���������� ��������", "������� ��� ��������� �����", "���������� ���������" }, 3);
	Question q7("��� ��������� ����������� � �++", { "//", "#", "/*" }, 1);
	Question q8("����� ����� ����� ������������ ��� ����������� ����� ������?", { "getSize()", "lenght()", "len()" }, 2);
	Question q9("����� �������� ������������ ��� ��������� �����?", { "break", "return", "continue" }, 1);
	Question q10("����� ����� ��������� ������� � ����� �������?", { "append()", "extend()", "push_back()" }, 3);
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





 