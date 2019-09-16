//
// Created by chr on 2019/9/16.
//

#include <iostream>
#include <cstring>
using namespace std;

/**
 * 不声明的话,方法在主函数后面, 主函数无法使用
 * @param book
 */
void printBook(struct Books book);

void printBook( struct Books *book );


//int main() {
//
//    char name[25];
//
//    cout << "请输入您的姓名: ";
//    cin >> name;
//    cout << "您的姓名是： " << name << endl;
//}

/**
 * C++的结构体
 */
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

//别名
typedef struct Books2 {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}books2;

int main7() {

    Books book1;
    Books book2;

    //别名也ok
    books2 book3, book4;

    strcpy(book1.title, "C++教程");
    strcpy(book1.author, "chr");
    strcpy(book1.subject, "编程语言");
    book1.book_id = 247;


    //book2 详述
    strcpy( book2.title, "CSS 教程");
    strcpy( book2.author, "Runoob");
    strcpy( book2.subject, "前端技术");
    book2.book_id = 12346;

    //输出 book1 信息
    cout << "第一本书标题 : " << book1.title <<endl;
    cout << "第一本书作者 : " << book1.author <<endl;
    cout << "第一本书类目 : " << book1.subject <<endl;
    cout << "第一本书 ID : " << book1.book_id <<endl << "\n";

    //输出 book2 信息
    printBook(book2);

    //结构指针的方式传递参数
    printBook(&book1);

    return 0;
}

/**
 * 结构体 参数的使用
 * @param book
 */
void printBook(struct Books book)
{
    cout << "书标题 : " << book.title <<endl;
    cout << "书作者 : " << book.author <<endl;
    cout << "书类目 : " << book.subject <<endl;
    cout << "书 ID : " << book.book_id <<endl << "\n";
}

//该函数以结构指针作为参数
void printBook(struct Books *book)
{
    cout << "书标题  : " << book->title <<endl;
    cout << "书作者 : " << book->author <<endl;
    cout << "书类目 : " << book->subject <<endl;
    cout << "书 ID : " << book->book_id <<endl;
}
