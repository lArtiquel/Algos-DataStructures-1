#include <iostream> 
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int score = 0, num;
	string s = "doge", ss;
	bool stop = false, flag = false;
	ifstream f_in("num.txt");
	ofstream f_out("num_rez.txt");
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
		{
			f_in >> num;

			if ((score > num) && (stop != false))
			{
				f_out << num << " ";
				f_in >> ss;
				f_out << ss;
				if (i != 18) f_out << endl;
				++i;
				continue;
			}

			if ((score > num) && (stop == false))
			{
				flag = true;
				stop = true;
				f_out << score << " " << s;
				if (i != 18)
				{
					f_out << endl;
					i += 2;
					f_out << num << " ";
				}
				else break;
			}
			else f_out << num << " ";
		}

		if (i % 2 != 0)
		{
			f_in >> ss;
			f_out << ss;
			if (i != 19) f_out << endl;
		}
	}
	f_in.close();
	f_out.close();

	if (flag == true)
	{
		ifstream f_in("num_rez.txt");
		ofstream f_out("num.txt");
		for (int i = 0; i < 20; i++)
		{
			if (i % 2 == 0)
			{
				f_in >> num;
				f_out << num << " ";
			}
			if (i % 2 != 0)
			{
				f_in >> ss;
				f_out << ss;
				if (i != 19) f_out << endl;
			}
		}
	}
	f_in.close();
	f_out.close();
	return 0;
}