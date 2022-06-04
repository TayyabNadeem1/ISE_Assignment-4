//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//const int rows = 18;
//const int cols = 19;
//char table[rows][cols];
//string store[5];
//
//class Wordsearch {
//public:
//	void fill(fstream&fin);
//	void display();
//	void wordcheck(fstream &fin);
//	void check(fstream& fout);
//	void input();
//	void leftToright();
//	void notfound(void);
//};
//
//void Wordsearch::notfound(void) {
//	cout <<"not found!!";
//}
//
//void Wordsearch::fill(fstream&fin) {
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			fin >> table[i][j];
//			
//		}
//	}
//}
//
//void Wordsearch:: wordcheck(fstream &fin) {
//
//
//	for (int k = 0; k < 5; k++) {
//		fin >> table[18][19];
//	}
//
//}
//
//void Wordsearch::display(void) {
//	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "     WELCOME TO WORD SEARCH GAME " << endl << endl << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		cout << '\t' << '\t' << '\t' << '\t'<< '\t';
//		for (int j = 0; j < cols; j++)
//		{
//			cout << table[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout << endl << endl;
//}
//
//void Wordsearch::input(void) {
//	cout << '\t' << '\t' << '\t' << '\t' << "     Enter 5 words you wanna SEARCH in the PUZZEL" << endl << endl;
//	int i = 1;
//	while ( i<6)
//	{
//		cout << '\t' << '\t' << '\t' << '\t' << '\t' << i<<". ";
//		cin >> store[i];
//		i++;
//	}
//}
//
//void Wordsearch::check(fstream&fout) {
//
//	int m[8] = {};
//	int a = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			for (int k = 0; k < 5; k++)
//			{
//				int count = 0;
//				int z = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0;
//				if (table[i][j] == store[k][0]) {
//					//cout << store[k] << " found " << "at [" << i << "," << j << "]" << "and size is " << store[k].size() << endl;
//
//					int size = store[k].size();
//					for (int l = 0; l < size; l++)
//					{
//
//						if (table[i][j + q] == store[k][q] && i > !18 && j > !19) {	// LEFT TO RIGHT 
//							count++;
//							q++;
//							z++;
//							m[0] = store[k].size();
//							if (count == m[0] && table[i][j + l] == store[k][l] && table[i][j + 2] == store[k][2]) {
//								cout << store[k] << " found " << "with starting indices {" << i << "," << j << "} and ending indices {" << i << " , " << j + m[0] << "} " << endl;
//								a = 1;
//							}
//						}
//						else if (table[i][j - r] == store[k][r] && i > !18 && j > !19) {		// RIGHT TO LEFT
//							count++;
//							z++;
//							r++;
//							m[1] = store[k].size();
//							//cout << "what is R " << r << endl;
//							if (count == m[1] && table[i][j - l] == store[k][l] && table[i][j - 2] == store[k][2]) {
//								cout << store[k] << " found " << "with starting indices {" << i << "," << j << "} and ending indices {" << i << " , " << j - m[1] << "}" << endl;
//								a = 2;
//							}
//						}
//						else if (table[i + s][j] == store[k][s] && i > !18 && j > !19) {	// TOP TO BOTTOM
//							count++;
//							z++;
//							s++;
//							m[2] = store[k].size();
//							//cout << "What is S " << s << endl;
//							if (count == m[2] && table[i + l][j] == store[k][l] && table[i + 2][j] == store[k][2]) {
//								cout << store[k] << " found " << "with starting indices {" << i << "," << j << "} and ending indices {" << i + m[2] << " , " << j << "} " << endl;
//								a = 3;
//							}
//						}
//						else if (table[i - t][j] == store[k][t] && i > !18 && j > !19) {		// BOTTOM TO TOP
//							count++;
//							z++;
//							t++;
//							m[3] = store[k].size();
//							//cout << "What is T " << t << endl;
//							if (count == m[3] && table[i - l][j] == store[k][l] && table[i - 2][j] == store[k][2]) {
//								cout << store[k] << " found " << "with starting indices {" << i << "," << j << "} and ending indices {" << i - m[3] << " , " << j << "} " << endl;
//								a = 4;
//							}
//						}
//						else if (table[i + u][j + u] == store[k][u] && i > !18 && j > !19) {	// DIAGONAL TOP RIGHT TO BOTTOM LEFT 
//							count++;
//							z++;
//							u++;
//							m[4] = store[k].size();
//							//cout << "What is U " << u << endl;
//							if (count == m[4] && table[i + l][j + l] == store[k][l] && table[i + 2][j + 2] == store[k][2]) {
//								cout << store[k] << " found " << "with starting indices {" << i << "," << j << "} and ending indices {" << i + m[4] << " , " << j + m[4] << "}" << endl;
//								a = 5;
//							}
//						}
//						else if (table[i - v][j - v] == store[k][v] && i > !18 && j > !19) {	// DIAGONAL BOTTOM RIGHT TO TOP LEFT
//							count++;
//							z++;
//							v++;
//							m[5] = store[k].size();
//							//cout << "What is V " << endl;
//							if (count == m[5] && table[i - l][j - l] == store[k][l] && table[i - 2][j - 2] == store[k][2]) {
//								cout << store[k] << " found " << "with starting indices {" << i << "," << j << "} and ending indices {" << i - m[5] << " , " << j - m[5] << "} " << endl;
//								a = 6;
//							}
//						}
//						else if (table[i - w][j + w] == store[k][w] && i > !18 && j > !19) {	// DIAGONAL BOTTOM LEFT TO TOP RIGHT
//							count++;
//							z++;
//							w++;
//							m[6] = store[k].size();
//							//cout << "What is W " << w << endl;
//							if (count == m[6] && table[i - l][j + l] == store[k][l] && table[i - 2][j + 2] == store[k][2]) {
//								cout << store[k] << " found " << "with starting indices {" << i << "," << j << "} and ending indices {" << i - m[6] << " , " << j + m[6] << "}" << endl;
//								a = 7;
//							}
//						}
//						else if (table[i + x][j - x] == store[k][x] && i > !18 && j > !19) {	// DIAGONAL TOP RIGHT TO BOTTOM LEFT
//							count++;
//							z++;
//							x++;
//							m[7] = store[k].size();
//							//cout << "What is X " << x << endl;
//							if (count == m[7] && table[i + l][j - l] == store[k][l] && table[i + 2][j - 2] == store[k][2]) {
//								cout << store[k] << " found " << "with starting indices {" << i << "," << j << "} and ending indices {" << i + m[7] << " , " << j - m[7] << "} " << endl;
//								a = 8;
//							}
//						}
//					}
//
//				}
//				else if (a == 0) { notfound(); }
//			}
//		}
//	}
//}
//void Wordsearch::leftToright() {
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (store[i][0] == table[i][j]) {
//			
//			}
//		}
//	}
//}
//
//int main() {
//	fstream fin;
//	fstream fout;
//	fin.open("input.txt");
//	
//	Wordsearch word;
//	word.fill(fin);
//	word.display();
//	word.input();
//	word.wordcheck(fin);
//	word.check(fout);
//	system("pause");
//	return 0;
//}
