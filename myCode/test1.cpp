#include <iostream>
#include <cstring>
using namespace std;

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main() {
	Books book1;
	Books book2;
	strcpy_s(book1.title,"titile1");
	strcpy_s(book1.author, "autohr1");
	strcpy_s(book1.subject, "subject1");
	book1.book_id = 1;

	strcpy_s(book2.title, "titile2");
	strcpy_s(book2.author, "autohr2");
	strcpy_s(book2.subject, "subject2");
	book2.book_id = 2;

	cout << "book1.title:" << book1.title<< endl;
	cout << "book1.author" << book1.author << endl;
	cout << "book1.subject" << book1.subject << endl;
	cout << "book1.book_id" << book1.book_id << endl;

	cout << "book2.title:" << book2.title << endl;
	cout << "book2.author" << book2.author << endl;
	cout << "book2.subject" << book2.subject << endl;
	cout << "book2.book_id" << book2.book_id << endl;

	return 1;
}