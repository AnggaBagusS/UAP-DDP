#include <curses.h>
#include <unistd.h>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

// Hiasan Bagian Atas
void head(){
	printw("======================================= \n");
	printw("           Game LCT Komputer            \n");
	printw("======================================= \n\n");
}

// Fungsi Loading 
void load(){
	
	initscr();
	
	mvprintw(12,58,"Sabar");
	
	mvprintw(13,50,"[]");
	refresh();
	Sleep(500);
	
	mvprintw(13,52,"[]");
	refresh();
	Sleep(500);
	
	mvprintw(13,54,"[]");
	refresh();
	Sleep(500);
	
	mvprintw(13,56,"[]");
	refresh();
	Sleep(500);
	
	mvprintw(13,58,"[]");
	refresh();
	sleep(2);
	
	mvprintw(13,60,"[]");
	refresh();
	Sleep(200);
	
	mvprintw(13,62,"[]");
	refresh();
	Sleep(200);
	
	mvprintw(13,64,"[]");
	refresh();
	Sleep(200);
	
	mvprintw(13,66,"[]");
	refresh();
	Sleep(200);
	
	mvprintw(13,68,"[]");
	refresh();
	Sleep(200);
	
	mvprintw(13,70,"[]");
	refresh();
	Sleep(200);
	clear();
	endwin();
}

int main(){
	// Deklarasi seluruh variabel
	int a, b, c, Nilai_Akhir, poin_1, poin_2, poin_3, poin_4, poin_5, poin_6, poin_7, poin_8, poin_9, poin_10;
	char mulai, jawaban, ulang;
	int Nilai = 0;
	int Poin_Jawaban[10];
	
	initscr();
	load();
	do{
		
		
		// Halaman Awal
		printw("=============================================== \n");
		printw("       Selamat Datang di Game Queasyz        \n");
		printw("=============================================== \n\n");
		printw("\tREADY PLAYER ONE\n\n");
		printw("Game ini dibuat oleh : \n");
		printw("Rafli Daffa Pratama\n");
		printw("Angga Bagus Susilo\n");
		printw("Intan Maghfirah\n\n");
		
		printw("Kalau udah siap klik y untuk mulai atau klik n kalau mau keluar : ");scanw("%c",&mulai);
		clear();
		if (mulai == 'y'|| mulai == 'Y'){
			head();
			printw("PERINGATAN!\n\n");
			printw("Game ini akan membuat anda bingung atau emosi sendiri\n\n");
			printw(" \t - Press any key to continue -");
			getch();
			clear();
			// Soal Nomor 1
			head();
			printw("Soal 1\n");
			printw("Matahari tenggelam disebelah...\n");
			printw("a. Barat \n");
			printw("b. Gawat \n");
			printw("c. Utara \n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'b' || jawaban == 'B'){
				printw("Hebat kamu benar\n");
				getch();
				poin_1 = 3;
			} else{
				printw("Salah, jawabannya adalah gawat\n");
				printw("Gawat kalau matahari tenggelam disebelah kita :)");
				getch();
				poin_1 = 0;
			}

			Poin_Jawaban[0] = poin_1;
			clear();
			
			//Soal Nomor 2
			head();
			printw("Soal 2\n");
			printw("Galang menyimpan buku di...\n");
			printw("a. lemari \n");
			printw("b. tas \n");
			printw("c. mas \n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'c' || jawaban == 'C'){
				printw("Hebat kamu benar\n");
				getch();
				poin_2 = 4;
			} else{
				printw("Salah, jawabannya adalah mas\n");
				printw("Bukunya dimas dipinjam galang kemarin sore :)");
				getch();
				poin_2 = 0;
			}

			Poin_Jawaban[1] = poin_2;
			clear();
	
			//Soal Nomor 3
			head();
			printw("Soal 3\n");
			printw("Bersatu kita teguh bercerai kita...\n");
			printw("a. Runtuh \n");
			printw("b. Sedih \n");
			printw("c. Berantakan \n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'b' || jawaban == 'B'){
				printw("Hebat kamu benar\n");
				getch();
				poin_3 = 10;
			} else{
				printw("Salah, jawabannya adalah sedih\n");
				printw("Siapa yang gak sedih cerai sama istri?");
				getch();
				poin_3 = 0;
			}

			Poin_Jawaban[2] = poin_3;
			clear();
			
			//Soal Nomor 4
			head();
			printw("Soal 4\n");
			printw("Makanan yang dibungkus daun pisang?\n");
			printw("a. Lontong \n");
			printw("b. Ketupat \n");
			printw("c. Dadar Gulung\n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'a' || jawaban == 'A'){
				printw("Hebat kamu benar\n");
				getch();
				poin_4 = 8;
			} else{
				printw("Salah, jawabannya adalah Lontong\n");
				printw("Gampang kan? suka ga sama lontong?");
				getch();
				poin_4 = 0;
			}

			Poin_Jawaban[3] = poin_4;
			clear();
			
			//Soal Nomor 5
			head();
			printw("Soal 5\n");
			printw("Apabila mengendarai mobil wajib bawa...\n");
			printw("a. SIM\n");
			printw("b. Kunci \n");
			printw("c. Satu \n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'c' || jawaban == 'C'){
				printw("Hebat kamu benar\n");
				getch();
				poin_5 = 7;
			} else{
				printw("Salah, jawabannya adalah satu\n");
				printw("Kalo bawa 2 gimana ngendarainnya '-' ?");
				getch();
				poin_5 = 0;
			}

			Poin_Jawaban[4] = poin_5;
			clear();
			
			//Soal Nomor 6
			head();
			printw("Soal 6\n");
			printw("Mawar melati semuanya…\n");
			printw("a. Indah\n");
			printw("b. Bunga \n");
			printw("c. Dua \n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'b' || jawaban == 'B'){
				printw("Hebat kamu benar\n");
				getch();
				poin_6 = 5;
			} else{
				printw("Salah, jawabannya adalah bunga\n");
				printw("Kalo bukan bunga apa coba, hewan?");
				getch();
				poin_6 = 0;
			}

			Poin_Jawaban[5] = poin_6;
			clear();
			
			//Soal Nomor 7
			head();
			printw("Soal 7\n");
			printw("Jangan membuang tisu di…\n");
			printw("a. Tempatnya \n");
			printw("b. Tempat Sampah \n");
			printw("c. Sembarang Tempat \n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'a' || jawaban == 'A'){
				printw("Hebat kamu benar\n");
				getch();
				poin_7 = 2;
			} else{
				printw("Salah, jawabannya adalah tempatnya\n");
				printw("Masih di tempatnya kok di buang.");
				getch();
				poin_7 = 0;
			}

			Poin_Jawaban[6] = poin_7;
			clear();
			
			//Soal Nomor 8
			head();
			printw("Soal 8\n");
			printw("Ketika _____ orang biasanya makan.\n");
			printw("a. Lapar\n");
			printw("b. Marah \n");
			printw("c. Di Warteg \n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'b' || jawaban == 'B'){
				printw("Hebat kamu benar\n");
				getch();
				poin_8 = 6;
			} else{
				printw("Salah, jawabannya adalah Marah\n");
				printw("Orang marah apa enggak ya pasti makan, gimana sehh..");
				getch();
				poin_8 = 0;
			}
			
			Poin_Jawaban[7] = poin_8;
			clear();
			
			//Soal Nomor 9
			head();
			printw("Soal 9\n");
			printw("Burung adalah hewan yang bisa..\n");
			printw("a. Terbang \n");
			printw("b. Berkicau \n");
			printw("c. Temenan \n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'c' || jawaban == 'C'){
				printw("Hebat kamu benar\n");
				getch();
				poin_9 = 2;
			} else{
				printw("Salah, jawabannya adalah Temenan\n");
				printw("Kan kalo terbang rame-rame kan sama temennya.");
				getch();
				poin_9 = 0;
			}
			
			Poin_Jawaban[8] = poin_9;
			clear();
			
			//Soal Nomor 10
			head();
			printw("Soal 10\n");
			printw("Mamalia yang suka buka mulut lebar.\n");
			printw("a. Kudanil \n");
			printw("b. Kenaflu \n");
			printw("c. Kamu, iya kamu \n");
			printw("Jawab : ");
			scanw("%c",&jawaban);
			printw("\n");
			if (jawaban == 'b' || jawaban == 'B'){
				printw("Hebat kamu benar\n");
				getch();
				poin_10 = 3;
			} else{
				printw("Salah, jawabannya adalah Kenaflu\n");
				printw("Itu karena ga bisa napas idungnya mampet.");
				getch();
				poin_10 = 0;
			}
			
			Poin_Jawaban[9] = poin_10;
			clear();
			
			//Penjumlahan total nilai akhir
    		
    		for(int i = 0; i < 10; i++) {
        		Nilai += Poin_Jawaban[i];
    		}

			Nilai_Akhir = Nilai * 2;
    		
    		//Output Nilai
    		
			head();

			if (Nilai_Akhir == 100){
				printw("Nilai kamu adalah : %d",Nilai_Akhir);printw("\n");
				printw("GG Gaming Kedua Orang Tua Mu Pasti Bangga");printw("\n");
			}
			else if (Nilai_Akhir < 100 && Nilai_Akhir > 50){
				printw("Nilai kamu adalah : %d",Nilai_Akhir);printw("\n");
				printw("Coba Lagi");printw("\n");
			}
			else {
				printw("Nilai kamu adalah : %d",Nilai_Akhir);printw("\n");
				printw("Kamu Terlalu Serius Jawabnya.");printw("\n");
			}
    		getch();
			clear();
			
			// Opsi mengulangi program atau tidak
			head();
	        printw("Apakah Anda ingin menggunakan program ini kembali? \n");
			printw("(Input 'Y' atau 'y' jika ingin menggunakan kembali) :  ");
	        scanw("%c",&ulang);
	        clear();
	        
		}else{
			clear();
			printw("Terima kasih telah menggunakan program ini! \n\n");
			printw("- Press any key to exit -");
			getch();
			clear();
			// Kode penghentian program
			exit(0);
		}

	}while (ulang == 'y' || ulang == 'Y');

	clear();
	printw("\n Terima kasih telah menggunakan program ini! \n\n");
	printw("- Press any key to exit -");
	getch();
	clear();
	endwin();
}
