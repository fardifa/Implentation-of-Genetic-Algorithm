#include "Process.h"
#include <iostream>
#include<string>
#include<vector>
using namespace std;

char Process::mutated_genes()
{
	const string GENES = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOP"\
		"QRSTUVWXYZ 1234567890, .-;:_!\"#%&/()=?@${[]}";
	int len = GENES.size();
	int r = random_num(0, len - 1);
	return GENES[r];
}

string Process::create_gnome()
{
	string TARGET="Line Generator";
	int len = TARGET.size();
	string gnome = "";
	for (int i = 0; i < len; i++)
		gnome += mutated_genes();
	return gnome;
}