#include "SLL.h"
using namespace std;

int main()
{
    List MH;
    //test createList
    cout << "first(MH) sebelum createList: " << first(MH) << endl;
    createList(MH);
    cout << "first(MH) setelah createList: " << first(MH) << endl;
    cout << endl;

    //test newElement
    adr p;
    p = newElement('C');
    cout << "Info p: " << info(p) << endl;
    cout << "Next p: " << next(p) << endl;
    cout << endl;

    //test insertFirst
    cout << "first(MH) sebelum insertFirst: " << first(MH) << endl;
    insertFirst(MH, p);
    cout << "first(MH) setelah insertFirst: " << first(MH) << endl;
    cout << "info first(MH): " << info(first(MH)) << endl;

    p = newElement('T');
    insertFirst(MH, p);
    cout << "info first(MH): " << info(first(MH)) << endl;

    p = newElement('X');
    insertFirst(MH, p);
    cout << "info first(MH): " << info(first(MH)) << endl;

    p = newElement('S');
    insertFirst(MH, p);
    cout << "info first(MH): " << info(first(MH)) << endl;

    p = newElement('A');
    insertFirst(MH, p);
    cout << "info first(MH): " << info(first(MH)) << endl;

    p = newElement('B');
    insertFirst(MH, p);
    cout << "info first(MH): " << info(first(MH)) << endl;
    cout << endl;

    //test show
    cout << "Output list: " << endl;
    show(MH);
    cout << endl;

    //deleteLast
    p = deleteLast(MH);
    show(MH);
    cout << "Last element yang terhapus: " << info(p) << endl;
    cout << endl;

    p = deleteLast(MH);
    show(MH);
    cout << "Last element yang terhapus: " << info(p) << endl;
    cout << endl;

    p = deleteLast(MH);
    show(MH);
    cout << "Last element yang terhapus: " << info(p) << endl;
    cout << endl;

    //deleteFirst
    p = deleteFirst(MH);
    show(MH);
    cout << "First element yang terhapus: " << info(p) << endl;
    cout << endl;

    //insertAfter
    p = newElement('L');
    insertFirst(MH, p);
    show(MH);
    cout << "insert first element: " << info(p) << endl;
    cout << endl;

    adr q;
    q = newElement('G');
    insertAfter(MH, p, q);
    show(MH);
    cout << "insert after element: " << info(p) << endl;
    cout << "element yang terinsert: " << info(q) << endl;
    cout << endl;

    //deleteAfter
    deleteAfter(MH, p, q);
    show(MH);
    cout << "delete after element: " << info(p) << endl;
    cout << "element terhapusnya: " << info(q) << endl;

    return 0;
}



