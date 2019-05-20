#include<fstream>

void file_output(string fileName, string& to_write) {
	ofstream outputfile(fileName.c_str());
	outputfile << to_write;
}

void file_input(string fileName, string& to_read) {
	ifstream inputfile(fileName.c_str());
	getline(inputfile, to_read);
}