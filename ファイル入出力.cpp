int main() {
	ofstream outputfile("memo.txt");
	outputfile << "書きたいこと";
	outputfile.close();
}