#include <iostream>
#include "string"
#include <sstream>
using namespace std;
void rotor1go();
void rotor2go();
void rotor3go();
void rotor4go();
void rotor5go();
void rotor6go();
void rotor7go();
void rotor8go();
void rotor1back();
void rotor2back();
void rotor3back();
void rotor4back();
void rotor5back();
void rotor6back();
void rotor7back();
void rotor8back();
void alphago();
void alphaback();
void reflectorB();
void reflectorC();
string b_string, c;
int a;
int myint[10];
int main(int ardc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	for (int i = 1; i <= 6; i++)
	{
		stringstream convert(argv[i]);
		if (!(convert >> myint[i]))
			myint[i] = 0;
	}
	int x_rotor = myint[4], y_rotor = myint[5], z_rotor = myint[6], x_number = myint[1], y_number = myint[2], z_number = myint[3];
	string reflector = argv[7];
	b_string = argv[8];
	if ((x_rotor > 25) || (x_rotor < 0) || (y_rotor > 25) || (y_rotor < 0) || (z_rotor > 25) || (z_rotor < 0) || (x_number > 8) || (x_number < 1) || (y_number > 8) || (y_number < 1) || (z_number > 8) || (z_number < 1) || (x_number == y_number) || (y_number == z_number) || (x_number == z_number) || ((reflector != "B") && (reflector != "C")))
	{
		c = "Error";
		cout << c << endl;
		exit(1);
	}
	alphago();
	a = z_rotor + a;
	if (a < 0)
		a = a + 26;
	if (a > 25)
		a = a - 26;
	if (z_number == 1)
		rotor1go();
	else
		if (z_number == 2)
			rotor2go();
		else
			if (z_number == 3)
				rotor3go();
			else
				if (z_number == 4)
					rotor4go();
				else
					if (z_number == 5)
						rotor5go();
					else
						if (z_number == 6)
							rotor6go();
						else
							if (z_number == 7)
								rotor7go();
							else
								if (z_number == 8)
									rotor8go();
	a = a + (y_rotor - z_rotor);
	if (a < 0)
		a = a + 26;
	if (a > 25)
		a = a - 26;
	if (y_number == 1)
		rotor1go();
	else
		if (y_number == 2)
			rotor2go();
		else
			if (y_number == 3)
				rotor3go();
			else
				if (y_number == 4)
					rotor4go();
				else
					if (y_number == 5)
						rotor5go();
					else
						if (y_number == 6)
							rotor6go();
						else
							if (y_number == 7)
								rotor7go();
							else
								if (y_number == 8)
									rotor8go();
	a = a + (x_rotor - y_rotor);
	if (a < 0)
		a = a + 26;
	if (a > 25)
		a = a - 26;
	if (x_number == 1)
		rotor1go();
	else
		if (x_number == 2)
			rotor2go();
		else
			if (x_number == 3)
				rotor3go();
			else
				if (x_number == 4)
					rotor4go();
				else
					if (x_number == 5)
						rotor5go();
					else
						if (x_number == 6)
							rotor6go();
						else
							if (x_number == 7)
								rotor7go();
							else
								if (x_number == 8)
									rotor8go();
	a = a - x_rotor;
	if (a < 0)
		a = a + 26;
	if (a > 25)
		a = a - 26;
	if (reflector == "B")
		reflectorB();
	else
		reflectorC();
	a = a + x_rotor;
	if (a > 25)
		a = a - 26;
	if (a < 0)
		a = a + 26;
	if (x_number == 1)
		rotor1back();
	else
		if (x_number == 2)
			rotor2back();
		else
			if (x_number == 3)
				rotor3back();
			else
				if (x_number == 4)
					rotor4back();
				else
					if (x_number == 5)
						rotor5back();
					else
						if (x_number == 6)
							rotor6back();
						else
							if (x_number == 7)
								rotor7back();
							else
								if (x_number == 8)
									rotor8back();
	a = a - (x_rotor - y_rotor);
	if (a > 25)
		a = a - 26;
	if (a < 0)
		a = a + 26;
	if (y_number == 1)
		rotor1back();
	else
		if (y_number == 2)
			rotor2back();
		else
			if (y_number == 3)
				rotor3back();
			else
				if (y_number == 4)
					rotor4back();
				else
					if (y_number == 5)
						rotor5back();
					else
						if (y_number == 6)
							rotor6back();
						else
							if (y_number == 7)
								rotor7back();
							else
								if (y_number == 8)
									rotor8back();
	a = a - (y_rotor - z_rotor);
	if (a > 25)
		a = a - 26;
	if (a < 0)
		a = a + 26;
	if (z_number == 1)
		rotor1back();
	else
		if (z_number == 2)
			rotor2back();
		else
			if (z_number == 3)
				rotor3back();
			else
				if (z_number == 4)
					rotor4back();
				else
					if (z_number == 5)
						rotor5back();
					else
						if (z_number == 6)
							rotor6back();
						else
							if (z_number == 7)
								rotor7back();
							else
								if (z_number == 8)
									rotor8back();

	a = a - z_rotor;
	if (a > 25)
		a = a - 26;
	if (a < 0)
		a = a + 26;
	alphaback();
	cout << c << endl;
	return 0;
}
void rotor1back()
{
	if (a == 4)
		a = 0;
	else
		if (a == 10)
			a = 1;
		else
			if (a == 12)
				a = 2;
			else
				if (a == 5)
					a = 3;
				else
					if (a == 11)
						a = 4;
					else
						if (a == 6)
							a = 5;
						else
							if (a == 3)
								a = 6;
							else
								if (a == 16)
									a = 7;
								else
									if (a == 21)
										a = 8;
									else
										if (a == 25)
											a = 9;
										else
											if (a == 13)
												a = 10;
											else
												if (a == 19)
													a = 11;
												else
													if (a == 14)
														a = 12;
													else
														if (a == 22)
															a = 13;
														else
															if (a == 24)
																a = 14;
															else
																if (a == 7)
																	a = 15;
																else
																	if (a == 23)
																		a = 16;
																	else
																		if (a == 20)
																			a = 17;
																		else
																			if (a == 18)
																				a = 18;
																			else
																				if (a == 15)
																					a = 19;
																				else
																					if (a == 0)
																						a = 20;
																					else
																						if (a == 8)
																							a = 21;
																						else
																							if (a == 1)
																								a = 22;
																							else
																								if (a == 19)
																									a = 23;
																								else
																									if (a == 2)
																										a = 24;
																									else
																										if (a == 9)
																											a = 25;
}
void rotor2back()
{
	if (a == 0)
		a = 0;
	else
		if (a == 9)
			a = 1;
		else
			if (a == 3)
				a = 2;
			else
				if (a == 10)
					a = 3;
				else
					if (a == 18)
						a = 4;
					else
						if (a == 8)
							a = 5;
						else
							if (a == 17)
								a = 6;
							else
								if (a == 20)
									a = 7;
								else
									if (a == 23)
										a = 8;
									else
										if (a == 1)
											a = 9;
										else
											if (a == 11)
												a = 10;
											else
												if (a == 7)
													a = 11;
												else
													if (a == 22)
														a = 12;
													else
														if (a == 19)
															a = 13;
														else
															if (a == 24)
																a = 14;
															else
																if (a == 2)
																	a = 15;
																else
																	if (a == 12)
																		a = 16;
																	else
																		if (a == 6)
																			a = 17;
																		else
																			if (a == 25)
																				a = 18;
																			else
																				if (a == 13)
																					a = 19;
																				else
																					if (a == 15)
																						a = 20;
																					else
																						if (a == 24)
																							a = 21;
																						else
																							if (a == 5)
																								a = 22;
																							else
																								if (a == 21)
																									a = 23;
																								else
																									if (a == 14)
																										a = 24;
																									else
																										if (a == 4)
																											a = 25;
}
void rotor3back()
{
	if (a == 1)
		a = 0;
	else
		if (a == 3)
			a = 1;
		else
			if (a == 5)
				a = 2;
			else
				if (a == 7)
					a = 3;
				else
					if (a == 9)
						a = 4;
					else
						if (a == 11)
							a = 5;
						else
							if (a == 2)
								a = 6;
							else
								if (a == 15)
									a = 7;
								else
									if (a == 17)
										a = 8;
									else
										if (a == 19)
											a = 9;
										else
											if (a == 23)
												a = 10;
											else
												if (a == 21)
													a = 11;
												else
													if (a == 25)
														a = 12;
													else
														if (a == 13)
															a = 13;
														else
															if (a == 24)
																a = 14;
															else
																if (a == 4)
																	a = 15;
																else
																	if (a == 8)
																		a = 16;
																	else
																		if (a == 22)
																			a = 17;
																		else
																			if (a == 6)
																				a = 18;
																			else
																				if (a == 0)
																					a = 19;
																				else
																					if (a == 10)
																						a = 20;
																					else
																						if (a == 12)
																							a = 21;
																						else
																							if (a == 20)
																								a = 22;
																							else
																								if (a == 18)
																									a = 23;
																								else
																									if (a == 16)
																										a = 24;
																									else
																										if (a == 14)
																											a = 25;
}
void rotor4back()
{
	if (a == 4)
		a = 0;
	else
		if (a == 18)
			a = 1;
		else
			if (a == 14)
				a = 2;
			else
				if (a == 21)
					a = 3;
				else
					if (a == 15)
						a = 4;
					else
						if (a == 25)
							a = 5;
						else
							if (a == 9)
								a = 6;
							else
								if (a == 0)
									a = 7;
								else
									if (a == 24)
										a = 8;
									else
										if (a == 16)
											a = 9;
										else
											if (a == 20)
												a = 10;
											else
												if (a == 8)
													a = 11;
												else
													if (a == 17)
														a = 12;
													else
														if (a == 7)
															a = 13;
														else
															if (a == 23)
																a = 14;
															else
																if (a == 11)
																	a = 15;
																else
																	if (a == 13)
																		a = 16;
																	else
																		if (a == 5)
																			a = 17;
																		else
																			if (a == 19)
																				a = 18;
																			else
																				if (a == 6)
																					a = 19;
																				else
																					if (a == 10)
																						a = 20;
																					else
																						if (a == 3)
																							a = 21;
																						else
																							if (a == 2)
																								a = 22;
																							else
																								if (a == 12)
																									a = 23;
																								else
																									if (a == 22)
																										a = 24;
																									else
																										if (a == 1)
																											a = 25;
}
void rotor5back()
{
	if (a == 21)
		a = 0;
	else
		if (a == 25)
			a = 1;
		else
			if (a == 1)
				a = 2;
			else
				if (a == 17)
					a = 3;
				else
					if (a == 6)
						a = 4;
					else
						if (a == 8)
							a = 5;
						else
							if (a == 19)
								a = 6;
							else
								if (a == 24)
									a = 7;
								else
									if (a == 20)
										a = 8;
									else
										if (a == 15)
											a = 9;
										else
											if (a == 18)
												a = 10;
											else
												if (a == 3)
													a = 11;
												else
													if (a == 13)
														a = 12;
													else
														if (a == 7)
															a = 13;
														else
															if (a == 11)
																a = 14;
															else
																if (a == 23)
																	a = 15;
																else
																	if (a == 0)
																		a = 16;
																	else
																		if (a == 22)
																			a = 17;
																		else
																			if (a == 12)
																				a = 18;
																			else
																				if (a == 9)
																					a = 19;
																				else
																					if (a == 16)
																						a = 20;
																					else
																						if (a == 14)
																							a = 21;
																						else
																							if (a == 5)
																								a = 22;
																							else
																								if (a == 4)
																									a = 23;
																								else
																									if (a == 2)
																										a = 24;
																									else
																										if (a == 10)
																											a = 25;
}
void rotor6back()
{
	if (a == 9)
		a = 0;
	else
		if (a == 15)
			a = 1;
		else
			if (a == 6)
				a = 2;
			else
				if (a == 21)
					a = 3;
				else
					if (a == 9)
						a = 4;
					else
						if (a == 20)
							a = 5;
						else
							if (a == 12)
								a = 6;
							else
								if (a == 5)
									a = 7;
								else
									if (a == 24)
										a = 8;
									else
										if (a == 16)
											a = 9;
										else
											if (a == 1)
												a = 10;
											else
												if (a == 4)
													a = 11;
												else
													if (a == 13)
														a = 12;
													else
														if (a == 7)
															a = 13;
														else
															if (a == 25)
																a = 14;
															else
																if (a == 17)
																	a = 15;
																else
																	if (a == 3)
																		a = 16;
																	else
																		if (a == 10)
																			a = 17;
																		else
																			if (a == 0)
																				a = 18;
																			else
																				if (a == 18)
																					a = 19;
																				else
																					if (a == 23)
																						a = 20;
																					else
																						if (a == 11)
																							a = 21;
																						else
																							if (a == 8)
																								a = 22;
																							else
																								if (a == 2)
																									a = 23;
																								else
																									if (a == 19)
																										a = 24;
																									else
																										if (a == 22)
																											a = 25;
}
void rotor7back()
{
	if (a == 13)
		a = 0;
	else
		if (a == 25)
			a = 1;
		else
			if (a == 9)
				a = 2;
			else
				if (a == 7)
					a = 3;
				else
					if (a == 6)
						a = 4;
					else
						if (a == 17)
							a = 5;
						else
							if (a == 2)
								a = 6;
							else
								if (a == 23)
									a = 7;
								else
									if (a == 12)
										a = 8;
									else
										if (a == 24)
											a = 9;
										else
											if (a == 18)
												a = 10;
											else
												if (a == 22)
													a = 11;
												else
													if (a == 1)
														a = 12;
													else
														if (a == 14)
															a = 13;
														else
															if (a == 20)
																a = 14;
															else
																if (a == 5)
																	a = 15;
																else
																	if (a == 0)
																		a = 16;
																	else
																		if (a == 8)
																			a = 17;
																		else
																			if (a == 21)
																				a = 18;
																			else
																				if (a == 11)
																					a = 19;
																				else
																					if (a == 16)
																						a = 20;
																					else
																						if (a == 5)
																							a = 21;
																						else
																							if (a == 10)
																								a = 22;
																							else
																								if (a == 16)
																									a = 23;
																								else
																									if (a == 3)
																										a = 24;
																									else
																										if (a == 19)
																											a = 25;
}
void rotor8back()
{
	if (a == 5)
		a = 0;
	else
		if (a == 10)
			a = 1;
		else
			if (a == 16)
				a = 2;
			else
				if (a == 7)
					a = 3;
				else
					if (a == 19)
						a = 4;
					else
						if (a == 11)
							a = 5;
						else
							if (a == 23)
								a = 6;
							else
								if (a == 14)
									a = 7;
								else
									if (a == 2)
										a = 8;
									else
										if (a == 1)
											a = 9;
										else
											if (a == 9)
												a = 10;
											else
												if (a == 18)
													a = 11;
												else
													if (a == 15)
														a = 12;
													else
														if (a == 3)
															a = 13;
														else
															if (a == 25)
																a = 14;
															else
																if (a == 17)
																	a = 15;
																else
																	if (a == 0)
																		a = 16;
																	else
																		if (a == 12)
																			a = 17;
																		else
																			if (a == 4)
																				a = 18;
																			else
																				if (a == 22)
																					a = 19;
																				else
																					if (a == 13)
																						a = 20;
																					else
																						if (a == 8)
																							a = 21;
																						else
																							if (a == 20)
																								a = 22;
																							else
																								if (a == 24)
																									a = 23;
																								else
																									if (a == 6)
																										a = 24;
																									else
																										if (a == 21)
																											a = 25;
}
void rotor1go()
{
	if (a == 0)
		a = 4;
	else
		if (a == 1)
			a = 10;
		else
			if (a == 2)
				a = 12;
			else
				if (a == 3)
					a = 5;
				else
					if (a == 4)
						a = 11;
					else
						if (a == 5)
							a = 6;
						else
							if (a == 6)
								a = 3;
							else
								if (a == 7)
									a = 16;
								else
									if (a == 8)
										a = 21;
									else
										if (a == 9)
											a = 25;
										else
											if (a == 10)
												a = 13;
											else
												if (a == 11)
													a = 19;
												else
													if (a == 12)
														a = 14;
													else
														if (a == 13)
															a = 22;
														else
															if (a == 14)
																a = 24;
															else
																if (a == 15)
																	a = 7;
																else
																	if (a == 16)
																		a = 23;
																	else
																		if (a == 17)
																			a = 20;
																		else
																			if (a == 18)
																				a = 18;
																			else
																				if (a == 19)
																					a = 15;
																				else
																					if (a == 20)
																						a = 0;
																					else
																						if (a == 21)
																							a = 8;
																						else
																							if (a == 22)
																								a = 1;
																							else
																								if (a == 23)
																									a = 19;
																								else
																									if (a == 24)
																										a = 2;
																									else
																										if (a == 25)
																											a = 9;
}
void rotor2go()
{
	if (a == 0)
		a = 0;
	else
		if (a == 1)
			a = 9;
		else
			if (a == 2)
				a = 3;
			else
				if (a == 3)
					a = 10;
				else
					if (a == 4)
						a = 18;
					else
						if (a == 5)
							a = 8;
						else
							if (a == 6)
								a = 17;
							else
								if (a == 7)
									a = 20;
								else
									if (a == 8)
										a = 23;
									else
										if (a == 9)
											a = 1;
										else
											if (a == 10)
												a = 11;
											else
												if (a == 11)
													a = 7;
												else
													if (a == 12)
														a = 22;
													else
														if (a == 13)
															a = 19;
														else
															if (a == 14)
																a = 24;
															else
																if (a == 15)
																	a = 2;
																else
																	if (a == 16)
																		a = 12;
																	else
																		if (a == 17)
																			a = 6;
																		else
																			if (a == 18)
																				a = 25;
																			else
																				if (a == 19)
																					a = 13;
																				else
																					if (a == 20)
																						a = 15;
																					else
																						if (a == 21)
																							a = 24;
																						else
																							if (a == 22)
																								a = 5;
																							else
																								if (a == 23)
																									a = 21;
																								else
																									if (a == 24)
																										a = 14;
																									else
																										if (a == 25)
																											a = 4;
}
void rotor3go()
{
	if (a == 0)
		a = 1;
	else
		if (a == 1)
			a = 3;
		else
			if (a == 2)
				a = 5;
			else
				if (a == 3)
					a = 7;
				else
					if (a == 4)
						a = 9;
					else
						if (a == 5)
							a = 11;
						else
							if (a == 6)
								a = 2;
							else
								if (a == 7)
									a = 15;
								else
									if (a == 8)
										a = 17;
									else
										if (a == 9)
											a = 19;
										else
											if (a == 10)
												a = 23;
											else
												if (a == 11)
													a = 21;
												else
													if (a == 12)
														a = 25;
													else
														if (a == 13)
															a = 13;
														else
															if (a == 14)
																a = 24;
															else
																if (a == 15)
																	a = 4;
																else
																	if (a == 16)
																		a = 8;
																	else
																		if (a == 17)
																			a = 22;
																		else
																			if (a == 18)
																				a = 6;
																			else
																				if (a == 19)
																					a = 0;
																				else
																					if (a == 20)
																						a = 10;
																					else
																						if (a == 21)
																							a = 12;
																						else
																							if (a == 22)
																								a = 20;
																							else
																								if (a == 23)
																									a = 18;
																								else
																									if (a == 24)
																										a = 16;
																									else
																										if (a == 25)
																											a = 14;
}
void rotor4go()
{
	if (a == 0)
		a = 4;
	else
		if (a == 1)
			a = 18;
		else
			if (a == 2)
				a = 14;
			else
				if (a == 3)
					a = 21;
				else
					if (a == 4)
						a = 15;
					else
						if (a == 5)
							a = 25;
						else
							if (a == 6)
								a = 9;
							else
								if (a == 7)
									a = 0;
								else
									if (a == 8)
										a = 24;
									else
										if (a == 9)
											a = 16;
										else
											if (a == 10)
												a = 20;
											else
												if (a == 11)
													a = 8;
												else
													if (a == 12)
														a = 17;
													else
														if (a == 13)
															a = 7;
														else
															if (a == 14)
																a = 23;
															else
																if (a == 15)
																	a = 11;
																else
																	if (a == 16)
																		a = 13;
																	else
																		if (a == 17)
																			a = 5;
																		else
																			if (a == 18)
																				a = 19;
																			else
																				if (a == 19)
																					a = 6;
																				else
																					if (a == 20)
																						a = 10;
																					else
																						if (a == 21)
																							a = 3;
																						else
																							if (a == 22)
																								a = 2;
																							else
																								if (a == 23)
																									a = 12;
																								else
																									if (a == 24)
																										a = 22;
																									else
																										if (a == 25)
																											a = 1;
}
void rotor5go()
{
	if (a == 0)
		a = 21;
	else
		if (a == 1)
			a = 25;
		else
			if (a == 2)
				a = 1;
			else
				if (a == 3)
					a = 17;
				else
					if (a == 4)
						a = 6;
					else
						if (a == 5)
							a = 8;
						else
							if (a == 6)
								a = 19;
							else
								if (a == 7)
									a = 24;
								else
									if (a == 8)
										a = 20;
									else
										if (a == 9)
											a = 15;
										else
											if (a == 10)
												a = 18;
											else
												if (a == 11)
													a = 3;
												else
													if (a == 12)
														a = 13;
													else
														if (a == 13)
															a = 7;
														else
															if (a == 14)
																a = 11;
															else
																if (a == 15)
																	a = 23;
																else
																	if (a == 16)
																		a = 0;
																	else
																		if (a == 17)
																			a = 22;
																		else
																			if (a == 18)
																				a = 12;
																			else
																				if (a == 19)
																					a = 9;
																				else
																					if (a == 20)
																						a = 16;
																					else
																						if (a == 21)
																							a = 14;
																						else
																							if (a == 22)
																								a = 5;
																							else
																								if (a == 23)
																									a = 4;
																								else
																									if (a == 24)
																										a = 2;
																									else
																										if (a == 25)
																											a = 10;
}
void rotor6go()
{
	if (a == 0)
		a = 9;
	else
		if (a == 1)
			a = 15;
		else
			if (a == 2)
				a = 6;
			else
				if (a == 3)
					a = 21;
				else
					if (a == 4)
						a = 9;
					else
						if (a == 5)
							a = 20;
						else
							if (a == 6)
								a = 12;
							else
								if (a == 7)
									a = 5;
								else
									if (a == 8)
										a = 24;
									else
										if (a == 9)
											a = 16;
										else
											if (a == 10)
												a = 1;
											else
												if (a == 11)
													a = 4;
												else
													if (a == 12)
														a = 13;
													else
														if (a == 13)
															a = 7;
														else
															if (a == 14)
																a = 25;
															else
																if (a == 15)
																	a = 17;
																else
																	if (a == 16)
																		a = 3;
																	else
																		if (a == 17)
																			a = 10;
																		else
																			if (a == 18)
																				a = 0;
																			else
																				if (a == 19)
																					a = 18;
																				else
																					if (a == 20)
																						a = 23;
																					else
																						if (a == 21)
																							a = 11;
																						else
																							if (a == 22)
																								a = 8;
																							else
																								if (a == 23)
																									a = 2;
																								else
																									if (a == 24)
																										a = 19;
																									else
																										if (a == 25)
																											a = 22;
}
void rotor7go()
{
	if (a == 0)
		a = 13;
	else
		if (a == 1)
			a = 25;
		else
			if (a == 2)
				a = 9;
			else
				if (a == 3)
					a = 7;
				else
					if (a == 4)
						a = 6;
					else
						if (a == 5)
							a = 17;
						else
							if (a == 6)
								a = 2;
							else
								if (a == 7)
									a = 23;
								else
									if (a == 8)
										a = 12;
									else
										if (a == 9)
											a = 24;
										else
											if (a == 10)
												a = 18;
											else
												if (a == 11)
													a = 22;
												else
													if (a == 12)
														a = 1;
													else
														if (a == 13)
															a = 14;
														else
															if (a == 14)
																a = 20;
															else
																if (a == 15)
																	a = 5;
																else
																	if (a == 16)
																		a = 0;
																	else
																		if (a == 17)
																			a = 8;
																		else
																			if (a == 18)
																				a = 21;
																			else
																				if (a == 19)
																					a = 11;
																				else
																					if (a == 20)
																						a = 16;
																					else
																						if (a == 21)
																							a = 5;
																						else
																							if (a == 22)
																								a = 10;
																							else
																								if (a == 23)
																									a = 16;
																								else
																									if (a == 24)
																										a = 3;
																									else
																										if (a == 25)
																											a = 19;
}
void rotor8go()
{
	if (a == 0)
		a = 5;
	else
		if (a == 1)
			a = 10;
		else
			if (a == 2)
				a = 16;
			else
				if (a == 3)
					a = 7;
				else
					if (a == 4)
						a = 19;
					else
						if (a == 5)
							a = 11;
						else
							if (a == 6)
								a = 23;
							else
								if (a == 7)
									a = 14;
								else
									if (a == 8)
										a = 2;
									else
										if (a == 9)
											a = 1;
										else
											if (a == 10)
												a = 9;
											else
												if (a == 11)
													a = 18;
												else
													if (a == 12)
														a = 15;
													else
														if (a == 13)
															a = 3;
														else
															if (a == 14)
																a = 25;
															else
																if (a == 15)
																	a = 17;
																else
																	if (a == 16)
																		a = 0;
																	else
																		if (a == 17)
																			a = 12;
																		else
																			if (a == 18)
																				a = 4;
																			else
																				if (a == 19)
																					a = 22;
																				else
																					if (a == 20)
																						a = 13;
																					else
																						if (a == 21)
																							a = 8;
																						else
																							if (a == 22)
																								a = 20;
																							else
																								if (a == 23)
																									a = 24;
																								else
																									if (a == 24)
																										a = 6;
																									else
																										if (a == 25)
																											a = 21;
}
void alphago()
{
	if (b_string == "A")
		a = 0;
	else
		if (b_string == "B")
			a = 1;
		else
			if (b_string == "C")
				a = 2;
			else
				if (b_string == "D")
					a = 3;
				else
					if (b_string == "E")
						a = 4;
					else
						if (b_string == "F")
							a = 5;
						else
							if (b_string == "G")
								a = 6;
							else
								if (b_string == "H")
									a = 7;
								else
									if (b_string == "I")
										a = 8;
									else
										if (b_string == "J")
											a = 9;
										else
											if (b_string == "K")
												a = 10;
											else
												if (b_string == "L")
													a = 11;
												else
													if (b_string == "M")
														a = 12;
													else
														if (b_string == "N")
															a = 13;
														else
															if (b_string == "O")
																a = 14;
															else
																if (b_string == "P")
																	a = 15;
																else
																	if (b_string == "Q")
																		a = 16;
																	else
																		if (b_string == "R")
																			a = 17;
																		else
																			if (b_string == "S")
																				a = 18;
																			else
																				if (b_string == "T")
																					a = 19;
																				else
																					if (b_string == "U")
																						a = 20;
																					else
																						if (b_string == "V")
																							a = 21;
																						else
																							if (b_string == "W")
																								a = 22;
																							else
																								if (b_string == "X")
																									a = 23;
																								else
																									if (b_string == "Y")
																										a = 24;
																									else
																										if (b_string == "Z")
																											a = 25;
}
void alphaback()
{
	if (a == 0)
		c = "A";
	else
		if (a == 1)
			c = "B";
		else
			if (a == 2)
				c = "C";
			else
				if (a == 3)
					c = "D";
				else
					if (a == 4)
						c = "E";
					else
						if (a == 5)
							c = "F";
						else
							if (a == 6)
								c = "G";
							else
								if (a == 7)
									c = "H";
								else
									if (a == 8)
										c = "I";
									else
										if (a == 9)
											c = "J";
										else
											if (a == 10)
												c = "K";
											else
												if (a == 11)
													c = "L";
												else
													if (a == 12)
														c = "M";
													else
														if (a == 13)
															c = "N";
														else
															if (a == 14)
																c = "O";
															else
																if (a == 15)
																	c = "P";
																else
																	if (a == 16)
																		c = "Q";
																	else
																		if (a == 17)
																			c = "R";
																		else
																			if (a == 18)
																				c = "S";
																			else
																				if (a == 19)
																					c = "T";
																				else
																					if (a == 20)
																						c = "U";
																					else
																						if (a == 21)
																							c = "V";
																						else
																							if (a == 22)
																								c = "W";
																							else
																								if (a == 23)
																									c = "X";
																								else
																									if (a == 24)
																										c = "Y";
																									else
																										if (a == 25)
																											c = "Z";
}
void reflectorB()
{
	if (a == 0)
		a = 24;
	else
		if (a == 1)
			a = 17;
		else
			if (a == 2)
				a = 20;
			else
				if (a == 3)
					a = 7;
				else
					if (a == 4)
						a = 16;
					else
						if (a == 5)
							a = 18;
						else
							if (a == 6)
								a = 11;
							else
								if (a == 8)
									a = 15;
								else
									if (a == 9)
										a = 23;
									else
										if (a == 10)
											a = 13;
										else
											if (a == 12)
												a = 14;
											else
												if (a == 19)
													a = 25;
												else
													if (a == 21)
														a = 22;
													else
														if (a == 24)
															a = 0;
														else
															if (a == 17)
																a = 1;
															else
																if (a == 20)
																	a = 2;
																else
																	if (a == 7)
																		a = 3;
																	else
																		if (a == 16)
																			a = 4;
																		else
																			if (a == 18)
																				a = 5;
																			else
																				if (a == 11)
																					a = 6;
																				else
																					if (a == 15)
																						a = 8;
																					else
																						if (a == 23)
																							a = 10;
																						else
																							if (a == 13)
																								a = 10;
																							else
																								if (a == 14)
																									a = 12;
																								else
																									if (a == 25)
																										a = 19;
																									else
																										if (a == 22)
																											a = 21;
}
void reflectorC()
{
	if (a == 0)
		a = 6;
	else
		if (a == 1)
			a = 21;
		else
			if (a == 2)
				a = 15;
			else
				if (a == 3)
					a = 9;
				else
					if (a == 4)
						a = 8;
					else
						if (a == 6)
							a = 14;
						else
							if (a == 7)
								a = 24;
							else
								if (a == 10)
									a = 17;
								else
									if (a == 11)
										a = 25;
									else
										if (a == 12)
											a = 23;
										else
											if (a == 14)
												a = 22;
											else
												if (a == 19)
													a = 16;
												else
													if (a == 18)
														a = 20;
													else
														if (a == 6)
															a = 0;
														else
															if (a == 21)
																a = 1;
															else
																if (a == 15)
																	a = 2;
																else
																	if (a == 9)
																		a = 3;
																	else
																		if (a == 8)
																			a = 4;
																		else
																			if (a == 14)
																				a = 6;
																			else
																				if (a == 24)
																					a = 7;
																				else
																					if (a == 17)
																						a = 10;
																					else
																						if (a == 25)
																							a = 11;
																						else
																							if (a == 23)
																								a = 12;
																							else
																								if (a == 22)
																									a = 14;
																								else
																									if (a == 16)
																										a = 19;
																									else
																										if (a == 20)
																											a = 18;
}