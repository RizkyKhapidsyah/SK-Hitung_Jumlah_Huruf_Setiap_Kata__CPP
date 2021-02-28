#include <iostream>
#include <conio.h>

#define MAX_WORDS	10

using namespace std;

/* Created by Rizky Khapidsyah */

struct st {
	char text[100]; // untuk menyimpan string
	int cnt[MAX_WORDS]; //untuk menyimpan panjang kata
};

struct st obj;
void cetakHuruf();

int main()
{
	//membaca string
	cout << "Masukkan kalimat apapun : ";
	fgets(obj.text, 100, stdin);
	cetakHuruf();

	_getch();
	return 0;
}

void cetakHuruf() {
	int len = 0, i = 0, j = 0;

	while (1) {
		if (obj.text[i] == ' ' || obj.text[i] == '\0') {
			//periksa NULL
			if (obj.text[i] == '\0') {
				if (len > 0) {
					obj.cnt[j++] = len;
					len = 0;
				}
				
				break; //hentikan perulangan
			}

			obj.cnt[j++] = len;
			len = 0;
		} else {
			len++;
		}
		
		i++;
	}

	cout << "\n Banyaknya huruf dalam masing-masing kata  : \n";

	for (i = 0; i < j; i++) {
		cout << " " << obj.cnt[i];
	}
}
