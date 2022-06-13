#include <iostream>
#include <string>
using namespace std;

string g1;
string g2;
string g3;

int bbb = 0;
int jjj = 0;
int ooo = 0;
int ttt = 0;


class People {

public:
    string name;
    string fname;
    string club;
    int rost = 0;
    int ves = 0;
    int skor = 0;
    int gols = 0;
    
    

    People() {
        name = "";
        fname = "";
        club = " ";
        rost = 0;
        ves = 0;
        skor = 0;
        gols = 0;
    }
    

    void names();
    void names2();
    void fnames();
    void fnames2();
    void clubs();
    void clubs2();

    void vosota(int n);
    void vosota2();
    
    void vesov(int s);
    void vesov2();

    void skorost(int v);
    void skorost2();
    
    void gools(int k);
    void gools2();
};


void People::names() {
    cout << "Имя футболиста: " << People::name << "\n" << endl;
}

void People::names2() {
    cout << "" << People::name << endl;
}

void People::fnames() {
    cout << "Фамилия футболиста: " << People::fname << "\n" << endl;
}

void People::fnames2() {
    cout << "" << People::fname << endl;
}

void People::clubs() {
    cout << "Клуб футболиста: " << People::club << "\n" << endl;
}

void People::clubs2() {
    cout << "Клуб: " << People::club << endl;
}

/*--------------------------------------------------------*/

void People::vosota(int n1) {

    if (n1 >= 200) {
        cout << n1 << "см. Высокий футболист" << endl;
    }
    if (n1 >= 165 && n1 < 200) {
        cout << n1 << "см. Средней высоты футболист" << endl;
    }
    if (n1 < 165) {
        cout << n1 << "см. Низкий футболист" << endl;
    }
}

void People::vosota2() {
    cout << "Рост футболиста " << People::rost << "\n" << endl;
}

/*--------------------------------------------------------*/
void People::vesov(int n2) {

    if (n2 >= 100) {
        cout  << n2 << "кг. Тяжёлый футболист" << endl;
    }
    if (n2 >= 75 && n2 < 100) {
        cout  << n2 << "кг. Средней тяжести футболист" << endl;
    }
    if (n2 < 75) {
        cout  << n2 << "кг. Лёгкий футболист" << endl;
    }
}

void People::vesov2() {
    cout << "Вес футболиста " << People::ves << "\n" << endl;
}

/*--------------------------------------------------------*/

void People::skorost(int n3) {

    if (n3 >= 30) {
        cout << n3 << "км. Быстрый футболист" << endl;
    }
    if (n3 >= 20 && n3 < 30) {
        cout << n3 << "км. Средней скорости футболист" << endl;
    }
    if (n3 < 20) {
        cout << n3 << "км. Медленный футболист" << endl;
    }
}

void People::skorost2() {
    cout << "Скорость футболиста " << People::skor << "\n" << endl;
}

/*--------------------------------------------------------*/

void People::gools(int n4) {

    if (n4 >= 40) {
        cout << n4 << "г. Много голов" << endl;
    }
    if (n4 >= 20 && n4 < 40) {
        cout << n4 << "г. Среднее кол-во голов" << endl;
    }
    if (n4 < 20) {
        cout << n4 << "г. Мало голов" << endl;
    }
}

void People::gools2() {
    cout << "Голы данного футболиста " << People::gols << "\n" << endl;
}



int main() {

    setlocale(LC_ALL, "Russian");
    People a = People();
    
    cout << "СОЗДАНИЕ ФУТБОЛИСТА" << "\n";
    cout << "-----------------------" << "\n";
    cout << "Введите имя футболиста: ";
    cin >> g1;
    a.name = g1;
    a.names();
    
    cout << "Введите фамилию футболиста: ";
    cin >> g2;
    a.fname = g2;
    a.fnames();
    
    cout << "Введите клуб футболиста: ";
    cin >> g3;
    a.club = g3;
    a.clubs();

    cout << "Введите рост футболиста в см. : ";
    cin >> bbb;
    a.rost = bbb;
    a.vosota2();
    
    cout << "Введите вес футболиста в кг. : ";
    cin >> jjj;
    a.ves = jjj;
    a.vesov2();
    
    cout << "Введите скорость футболиста в км/ч. : ";
    cin >> ooo;
    a.skor = ooo;
    a.skorost2();
    
    cout << "Введите кол-во голов футболиста : ";
    cin >> ttt;
    a.gols = ttt;
    a.gools2();
    
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    a.names2();
    a.fnames2();
    a.clubs2();
    
    a.vosota(bbb);
    a.vesov(jjj);
    a.skorost(ooo);
    a.gools(ttt);

}