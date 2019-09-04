#include <iostream>
#include<fstream>

using namespace std;

int main()
{
     ifstream ofs;
     ofs.open("My.txt");
     string str, str2;
     int a;

     ofs>>str;
     ofs>>a;
     ofs>>str2;

     cout<<str<<a<<str2;
     if(ofs.eof()) cout<<"End of file reached";

     ofs.close();
     return 0;
}