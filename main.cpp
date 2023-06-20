#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;
    struct STUDENT {
        string last_name;
        string num;
        int mass[5];
    };
STUDENT people[100];

int find_name(int i){

    string b ;
    cin>>b;
    string z;
    for (int index = 0; index < i; ++index) {

        z=people[index].last_name;

            if(z.find(b,0)==0) {
                cout << people[index].last_name << endl;
            }

    }
}
    int main() {

    const char *SEPARATORS = "!?.,;/*-+\n\t ";

        char S[100];
        char *ptr;       //Указатель

        string line;
        ifstream fin("D:\\Students_info\\Students.txt"); // открыли файл для чтения
        int i = 0;
        if (fin.is_open()) {
            while (getline(fin, line)) {
                int k = 0;

                strcpy(S, line.c_str());

                ptr = strtok(S, SEPARATORS);
                while (ptr != nullptr) {
                    if (k == 0) {

                        people[i].last_name = ptr;

                    } else if (k == 1) {
                        people[i].num = ptr;
                    } else {
                        people[i].mass[k - 2] = atoi(ptr) ;
                    }
                    ptr = strtok(nullptr, " ");
                    k++;
                }
                i++;
            }
        }
        for (int startIndex = 0; startIndex < i; ++startIndex) {
            int smallestIndex = startIndex;
            for (int currentIndex = startIndex + 1; currentIndex < i; ++currentIndex) {
                if (people[currentIndex].num < people[smallestIndex].num)
                    smallestIndex = currentIndex;
            }
            swap(people[startIndex], people[smallestIndex]);
        }

        cout<<"============================="<<endl;

        for (int index = 0; index < i; ++index) {
            cout << people[index].last_name << " " << people[index].num << " ";
            for (int d = 0; d < 5; d++) {
                cout << people[index].mass[d];
            }
            cout << endl;
        }
        cout<<"============================="<<endl;

        int exist = 0;
        for (int index = 0; index < i; ++index) {
            float sum = 0;

            for(int d=0;d<5;d++){
              sum = sum + people[index].mass[d];
            }

            float srznach = sum/5;

            if(srznach>4.0){
                cout<<people[index].last_name<<" "<<people[index].num<<" "<<endl;
                exist = 1;
            }
            fin.close(); // закрываем файl
        }
        if (exist == 0) {
            cout<<"STUDENT NOT FOUND"<<endl;
        }
        cout<<"============================="<<endl;
        find_name(i);
    }


