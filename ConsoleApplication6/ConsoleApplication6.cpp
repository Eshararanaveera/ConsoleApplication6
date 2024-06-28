// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class taxi {
 private:
    int taxid;
    string driver;
    int rateperkm;
    float distancetravelled;
public:
    void settaxidetails(int tax, string dri, int rate, float dis);
    void display();
    float calculate();

};
void taxi::settaxidetails(int tax, string dri, int rate, float dis) {
    taxid = tax;
    driver = dri;
    rateperkm = rate;
    distancetravelled = dis;
}

float taxi::calculate() {
    return rateperkm * distancetravelled;
}

void taxi::display(){
    cout << "taxiid=" << taxid << endl;
    cout << "driver name=" << driver << endl;

}
int main()
{
    taxi t1, t2, t3;

    t1.settaxidetails(1234, "ben", 150, 10);
    t1.display();
    cout << "billamount=" << t1.calculate() << endl;

    t2.settaxidetails(1234, "ben", 150, 10);
    t2.display();
    cout << "billamount=" << t2.calculate() << endl;
    
        t3.settaxidetails(4321, "nick",175,2);
    cout << "billamount=" << t3.calculate() << endl;
    t3.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
