#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    //local variables
    string program_name = argv[0]; //name of the program
    string line;//dummy variable to read in lines
    string filename; //name of the file being read
    int count = 0; //number of lines

    cout << "program: " << program_name << endl; //print out the name of the program first

    for (int i = 1; i < argc; i++) //loop through all files
    {   
        filename = argv[i];
        ifstream file(filename);
        if (!getline(file, line)) {
            count = -1;
            cout << " " << filename << ": " << count << endl;
        }
        else {
            while (getline(file, line)) {
                count++;
            }
            count++;
            cout << " " << filename << ": " << count << endl;
        }
        count = 0;
    }
    exit(0); // this means that the program executed correctly!
}
