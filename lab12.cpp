#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Q3
// class Person{
//     public:
//     string name;
//     int age;
//     Person(string n,int a):name(n),age(a){}
//     void show(){
//        cout<<"Name: "<<name<<endl;
//        cout<<"Age: "<<age<<endl;
//     }

// };

// Q4
// class participants{
//     public:
//     int id,score;
//     string name;
//        void input(){
//        cout<<"Enter ID: ";
//        cin>>id;
//        cin.ignore();
//        cout<<"Enter name: ";
//        getline(cin, name);
//        cout<<"Enter score: ";
//        cin>>score;
//    ofstream outFile("participant.dat", ios::binary | ios::app);
//    int namelen = name.length();
//    outFile.write((char*)&id, sizeof(id));
//    outFile.write((char*)&namelen, sizeof(namelen));
//    outFile.write(name.c_str(), namelen);
//    outFile.write((char*)&score, sizeof(score));
//    outFile.close();
//    }
//    void output(){
//        int searchID;
//        cout<<"Enter ID to search: ";
//        cin>>searchID;
//        ifstream inFile("participant.dat", ios::binary);
//        bool found=false;
//        while (inFile.read((char*)&id, sizeof(id))){
//        int nameLen;
//        inFile.read((char*)&nameLen, sizeof(nameLen));
//        char* buffer = new char[nameLen + 1];
//        inFile.read(buffer, nameLen);
//        buffer[nameLen] = '\0';
//        name = buffer;
//        delete[] buffer;
//        inFile.read((char*)&score, sizeof(score));
//        if (id==searchID) {
//            cout<<"ID: "<<id<<endl<<" Name: "<<name<<endl<<" Score: "<<score<<endl;
//            found=true;
//            break;
//            }
//        }
//        inFile.close();
//        if(!found)cout<<"Participant not found";
//    }
//    void max() {
//        ifstream inFile("participant.dat", ios::binary);
//        float maxscore = -1;
//        int maxID;
//        string maxname;
//        while (inFile.read((char*)&id, sizeof(id))){
//            int namelen;
//            inFile.read((char*)&namelen, sizeof(namelen));
//            char* buffer=new char[namelen + 1];
//            inFile.read(buffer, namelen);
//            buffer[namelen] = '\0';
//            name=buffer;
//            delete[] buffer;
//            inFile.read((char*)&score, sizeof(score));
//            if(score>maxscore){
//                maxscore = score;
//                maxID = id;
//                maxname = name;
//            }
//        }
//        inFile.close();
//        if(maxscore==-1){
//            cout<<"No participants found"<<endl;
//        }
//        else{
//            cout<<"Highest score:"<<endl;
//            cout<<"ID: "<<maxID<<endl;
//            cout<<"name: "<<maxname<<endl;
//            cout<<"score: "<<maxscore<<endl;
//        }
//    }
// };

// Q5
void createstoryfile() {
    ofstream file("STORY.TXT");
    if (!file) {
        cerr << "Error: Could not create STORY.TXT"<<endl;
        return;
    }
    file << "The rose is red." << endl;
    file << "A girl is playing there." << endl;
    file << "There is a playground." << endl;
    file << "An airplane is in the sky." << endl;
    file << "Numbers are not allowed in the password"<<endl;

    file.close();
    cout << "STORY.TXT created successfully"<<endl;
}
void linesnotstartingwithA() {
    ifstream file("STORY.TXT");
    if (!file) {
        cerr << "Error: Could not open STORY.TXT"<<endl;
        return;
    }
    string line;
    int count = 0;
    while (getline(file, line)) {
        if (!line.empty()) {
            char firstChar = line[0];
            if (firstChar != 'A' && firstChar != 'a') {
                count++;
            }
        }
    }
    file.close();
    cout <<"Number of lines not starting with 'A': "<<count<<endl;
}

int main() {

    // Q5
    createstoryfile();
    linesnotstartingwithA();


    // Q4
    //        participants p;
    //    int choice;
    //    while(true){
    //        cout << "1. Add Participant" << endl;
    //        cout << "2. Show Participant ID" << endl;
    //        cout << "3. Show Highest Score" << endl;
    //        cout << "4. Exit" << endl;
    //        cout << "Enter choice: ";
    //        cin>>choice;
    //        switch(choice){
    //            case 1: p.input(); break;
    //            case 2: p.output(); break;
    //            case 3: p.max(); break;
    //            case 4: 
    // 			break;
    //            default: cout<<"Error in choice"<<endl;
    //        }
    //    }


    // Q3
    //     Person p("Kashan",20);
    //      ofstream outFile("person.bin", ios::binary);
    //    int nameLength = p.name.size();
    //    outFile.write((char*)&nameLength, sizeof(nameLength));
    //    outFile.write(p.name.c_str(), nameLength);
    //    outFile.write((char*)&p.age, sizeof(p.age));
    //    outFile.close();
    //    ifstream inFile("Person.bin", ios::binary);
    //    int len;
    //    inFile.read((char*)&len, sizeof(len));
    //    char* nameBuffer = new char[len+1];
    //    inFile.read(nameBuffer, len);
    //    nameBuffer[len] = '\0';
    //    int age;
    //    inFile.read((char*)&age, sizeof(age));
    //    inFile.close();
    //    Person read(nameBuffer, age);
    //    delete[] nameBuffer;
    //    cout<<"Data from file: "<<endl;
    //    read.show();


    // Q2
    // ifstream srcfile("src.txt");
    // ofstream desfile("desfile.txt");

    // if (!srcfile || !desfile) {
    //     cout << "Error opening files!" << endl;
    //     return 1;
    // }
    //  string line;
    // while (getline(srcfile, line)) {
    //     desfile << line << endl;
    // }

    // srcfile.close();
    // desfile.close();

    // cout << "File copied successfully." << endl;



    // Q1
    //  string s;
    //  cout<<"Enter name in file to copy to other file: "<<endl;
    //  getline(cin,s);
    // ofstream myfile;
    // myfile.open("file1.txt", ios::out);
    // if (!myfile){
    // cout << "File not created!";
    // }
    // else{
    // myfile<<"Lenght of string is: "<<s.size()<<endl;
    // myfile.close();
    // }
    // ifstream infile("file1.txt");
    // string line;
    // while (getline(infile, line)) {
    //     cout << line << endl;
    // }
    // infile.close();
return 0;
}
