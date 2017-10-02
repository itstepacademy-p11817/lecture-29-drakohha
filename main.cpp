#include <iostream>



int main() {

	int flag_menu = 0;
	do {
		std::cout << "\n" << "Vvedite nomer zadani9 " << "\n";
		std::cin >> flag_menu;
		int id;
		if (flag_menu == 1) {
			struct human {
				char name[50];
				char flag  ;
			};

			struct human my_st[10];
			int flag_1 = 1;
			int flag_2 = 2;
			int flag_3 = 4;
			int flag_4 = 8;
			int flag_id = 0;
			int ind = 1;
			my_st[0].flag = 0;
			
			std::cout << "\n" << "Vvedite informacui o human" << "\n";
			std::cout << "\n" << "Vvedite im9" <<"\n";
			while (getchar() != '\n');
			fflush(stdin);

			gets_s(my_st[0].name, 50);
			std::cout <<"\n"<< "Vvedite informaciu o pol (0-myhskoi,1-henslii)" << "\n";
			std::cin >> id;
			if (id == 1) {
				my_st[0].flag = my_st[0].flag | flag_1;
			}
			
			std::cout << "\n" << "Vvedite informaciu o obrazovanii (0-nety,1-est)" << "\n";
			std::cin >> id;
			if (id == 1) {
				my_st[0].flag = my_st[0].flag | flag_2;
			}
			
			std::cout << "\n" << "vvedite info o semeinom statuse (0-bez braka, 1- v brake)" << "\n";
			std::cin >> id;
			if (id == 1) {
				my_st[0].flag = my_st[0].flag | flag_3;
			}
			std::cout << "\n" << "vvedite info o rabote (0-ne rabotaet, 1- rabotaet)" << "\n";
			std::cin >> id;
			if (id == 1) {
				my_st[0].flag = my_st[0].flag | flag_4;
			}

			std::cout << "\n" << "Informaci9 o human : " << "\n";
			std::cout << my_st[0].name;
			
			if (my_st[0].flag & flag_1) {
				std::cout << "\n"<< "henskii" << "\n";
			}
			else {
				std::cout << "\n"<<"myskoi" << "\n";
			}
			if (my_st[0].flag & flag_2) {
				std::cout << "\n"<<"Obrazovanie est" << "\n";
			}
			else {
				std::cout << "\n"<< "Obrazovani9 net" << "\n";
			}
			if (my_st[0].flag & flag_3) {
				std::cout << "\n" << "V brake" << "\n";
			}
			else {
				std::cout << "\n" << "Bez braka" << "\n";
			}
			if (my_st[0].flag & flag_4) {
				std::cout << "\n" << "Rabotaet" << "\n";
			}
			else {
				std::cout << "\n" << "Ne rabotaet" << "\n";
			}

			do {
				std::cout << "\n" << "Vuberete distvie : 1- vvod info 2-vivud info po (bezrabotnim) 3-vvivod info o vseh 0-vuhod" << "\n";
				std::cin >>flag_id;
				if (flag_id == 1) {
					my_st[ind].flag = 0;

					std::cout << "\n" << "Vvedite informacui o human" << "\n";
					std::cout << "\n" << "Vvedite im9" << "\n";
					while (getchar() != '\n');
					fflush(stdin);

					gets_s(my_st[ind].name, 50);
					std::cout << "\n" << "Vvedite informaciu o pol (0-myhskoi,1-henslii)" << "\n";
					std::cin >> id;
					if (id == 1) {
						my_st[ind].flag = my_st[ind].flag | flag_1;
					}

					std::cout << "\n" << "Vvedite informaciu o obrazovanii (0-nety,1-est)" << "\n";
					std::cin >> id;
					if (id == 1) {
						my_st[ind].flag = my_st[ind].flag | flag_2;
					}

					std::cout << "\n" << "vvedite info o semeinom statuse (0-bez braka, 1- v brake)" << "\n";
					std::cin >> id;
					if (id == 1) {
						my_st[ind].flag = my_st[ind].flag | flag_3;
					}
					std::cout << "\n" << "vvedite info o rabote (0-ne rabotaet, 1- rabotaet)" << "\n";
					std::cin >> id;
					if (id == 1) {
						my_st[ind].flag = my_st[ind].flag | flag_4;
					}
					ind++;
				}
				if (flag_id == 2) {
					for (int i = 0; i <= ind; i++) {
						if (my_st[i].flag & flag_4) {
							continue;
						}
						else {
							std::cout << "\n" << "Informaci9 o human : " << "\n";
							std::cout << my_st[i].name;

							if (my_st[i].flag & flag_1) {
								std::cout << "\n" << "henskii" << "\n";
							}
							else {
								std::cout << "\n" << "myskoi" << "\n";
							}
							if (my_st[i].flag & flag_2) {
								std::cout << "\n" << "Obrazovanie est" << "\n";
							}
							else {
								std::cout << "\n" << "Obrazovani9 net" << "\n";
							}
							if (my_st[i].flag & flag_3) {
								std::cout << "\n" << "V brake" << "\n";
							}
							else {
								std::cout << "\n" << "Bez braka" << "\n";
							}
							if (my_st[i].flag & flag_4) {
								std::cout << "\n" << "Rabotaet" << "\n";
							}
							else {
								std::cout << "\n" << "Ne rabotaet" << "\n";
							}


						}
					}

				}
			
			} while (flag_id != 0);



		}




		if (flag_menu == 2) {
			std::cout << "\n" << "Zadaca nomer 2 :" << "\n";
			struct base {
				char name[50];
				int klass : 4;
				char bykfa : 3;
				int vozrast : 5;
				int sr_bal : 4;

			};

			struct base my_info[10];

			int flag_id = 0;
			int ind = 0;
			char s;
			
			do {
				std::cout << "\n" << "Vuberete distvie : 1- vvod info 2-vivud info v diapozone (c 4 po 7 klassa) 3-vvivod info o vseh 0-vuhod" << "\n";
				std::cin >> flag_id;
				if (flag_id == 1) {
					std::cout << "\n" << "Vvedite im9" << "\n";
					while (getchar() != '\n');
					fflush(stdin);

					gets_s(my_info[ind].name, 50);

					std::cout << "\n" << "Vvedite nomer klassa :" << "\n";
					std::cin >> id;
					my_info[ind].klass = id;
					std::cout << "\n" << "Vvedite bykby klassa" << "\n";
					std::cin >> s;
					my_info[ind].bykfa =s;
					std::cout << "\n" << "Vvedite Vozrasat : " << "\n";
					std::cin >> id;
					my_info[ind].vozrast = id;
					std::cout << "\n" << "Vvedite sredii ball : " << "\n";
					std::cin >> id;
					my_info[ind].sr_bal = id;
					ind++;
				}
				if (flag_id == 2) {
					std::cout << "\n" << "Vuvod info : " << "\n";
					for (int i = 0; i <= ind; i++) {
						if (my_info[i].klass >= 4 && my_info[i].klass <= 7) {
							std::cout << "\n" << "Im9 : " << "\n";
							std::cout << my_info[i].name;
							std::cout << "\n" << "Klass : ";
							std::cout << my_info[i].klass;
							std::cout << "\n" << "bykva : ";
							std::cout << my_info[i].bykfa;
							std::cout << "\n" << "vozrast : ";
							std::cout << my_info[i].vozrast;
							std::cout << "\n" << "sr_ball : ";
							std::cout << my_info[i].sr_bal;
						}
					}
				}


			} while (flag_id != 0);



		}

		if (flag_menu == 3) {
			std::cout << "\n" << "Zadaca nomer 3" << "\n";
			char s[50];
			typedef enum { int_t=0, double_t=1, float_t=2 }container_type_t;
			typedef struct {
				container_type_t type;
				union {
					int int_data;
					double double_data;
					float float_data;
					
				};
			}message_t;

			message_t* msg;

			std::cout << "\n" << "Vvedite info lubogo formata ";
			std::cin >> id;
			message_t msg_1;
			msg_1.int_data = id;
			msg_1.type = int_t;
			msg = &msg_1;
			
			switch (msg->type) {
			case int_t: {
				std::cout << "\n" << "Infa tipa int " << msg->int_data;
				break;
			}
			case double_t: {
				std::cout << "\n" << "Infa tipa double " << msg->double_data;
				break;
			}
			case float_t: {
				std::cout << "\n" << "Infa tipa float " << msg->float_data;
				break;
			}
			default: {
				std::cout << "\n" << "Ne zahlo" << "\n";
			}
			}


		}

		if (flag_menu == 4) {
			std::cout << "\n" << "Zadaca nomer 4";
			enum poroda_t{bars=1,kavs=2,levf=3};
			enum marka_t{bmv=1,audi=2,ferari=3};
			enum model_t{leck=1,gruz=2,t9g=3};
			struct my_st {
				union human_t {
					char name[50];
					int pol;
					int vozrast;
					int rost;
				};
				union cat_t {
					char name[50];
					int pol;
					poroda_t poroda;
					int vozrast;
				};
				union avto_t {
					marka_t marka;
					model_t model;
					int god;
				};
			};

		}
	
	
	
	} while (flag_menu != 0);
}