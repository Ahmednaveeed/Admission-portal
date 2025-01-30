//22i-1132
//ahmed naveed
//cs-C
//question 7

#include<iostream>
using namespace std;
int main()
{

	int option;
	float A_per, O_per, M_per, F_per, A_M, internal_marks, external_marks, final_marks, fm, score;

	cout << "WELCOME TO FAST NUCES HELP CENTRE\n\n";
	cout << "do you want to enquire about eligibility criteria of admission test or scholarsip\n\n ";
	cout << "press 1 for eligibility criteria of admission and ";
	cout << "press 2 for scholarship\n";
	cin >> option;

	switch (option)
	{

		case 1:
			cout << "which educational system was opted? ";
			cout << "press 1 for O/A levels and press 2 for Matric/FSC\n";
			cin >> option;

			switch (option)
			{

				case 1:
					cout << "enter your O-level percentage\n";
					cin >> A_per;
					cout << "enter your A level percentage\n";
					cin >> O_per;

					cout << endl;

					cout << "what is your background?\n";
					cout << "press 1 for pre medical and press 2 for pre engineering\n";
					cin >> option;

					switch (option)
					{

						case 1:
							cout << "what was your percentage in add maths exam? ";
							cin >> A_M;

							if (A_M > 50)
							{
								cout << "what degree you want to choose from below?\n";
								cout << "[1] BS software engineering\n";
								cout << "[2]BS computer science\n";
								cout << "[3]BS artificial intellegence\n";
								cout << "[4]BS data science\n";
								cout << "[5]electrical engineering\n";
								cin >> option;

								switch (option)
								{

									case 1:

										internal_marks = (0.15 * O_per) + (0.35 * A_per);
										final_marks = 79 - internal_marks;
										fm = final_marks * 2;
										score = (fm / 100) * 250;
										cout << "you need " << score << " marks to score in admission test to secure your admission in SE\n";

										break;

									case 2:

										internal_marks = (0.15 * O_per) + (0.35 * A_per);
										final_marks = 80 - internal_marks;
										fm = final_marks * 2;
										score = (fm / 100) * 250;
										cout << "you need " << score << " marks to score in admission test to secure your admission in CS\n";
										
										break;

									case 3:

										internal_marks = (0.15 * O_per) + (0.35 * A_per);
										final_marks = 75 - internal_marks;
										fm = final_marks * 2;
										score = (fm / 100) * 250;
										cout << "you need " << score << " marks to score in admission test to secure your admission in AI\n";

										break;

									case 4:

										internal_marks = (0.15 * O_per) + (0.35 * A_per);
										final_marks = 76 - internal_marks;
										fm = final_marks * 2;
										score = (fm / 100) * 250;
										cout << "you need " << score << " marks to score in admission test to secure your admission in DS\n";

										break;

									case 5:
										internal_marks = (0.15 * O_per) + (0.35 * A_per);
										final_marks = 77 - internal_marks;
										fm = final_marks * 2;
										score = (fm / 100) * 250;
										cout << "you need " << score << " marks to score in admission test to secure your admission in CY\n";

										break;

									case 6:

										internal_marks = (0.15 * O_per) + (0.35 * A_per);
										final_marks = 76 - internal_marks;
										fm = final_marks * 2;
										score = (fm / 100) * 250;
										cout << "you need " << score << " marks to score in admission test to secure your admission in EE\n";

										break;

									default:
										cout << "enter valid imput\n";



								}

							}

							else
								cout << "you are not eligible\n";

							break;



						case 2:
							cout << "what degree you want to choose from below?\n";
							cout << "[1] BS software engineering\n";
							cout << "[2] BS computer science\n";
							cout << "[3] BS artificial intellegence\n";
							cout << "[4] BS data science\n";
							cout << "[5] BS cyber security\n";
							cout << "[6] BS electrical engineering\n";
							cin >> option;

							switch (option)
							{

								case 1:
									
									internal_marks = (0.15 * O_per) + (0.35 * A_per);
									final_marks = 79 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in SE\n";

									break;

								case 2:

									internal_marks = (0.15 * O_per) + (0.35 * A_per);
									final_marks = 80 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in CS\n";

									break;

								case 3:

									internal_marks = (0.15 * O_per) + (0.35 * A_per);
									final_marks = 75 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in AI\n";

									break;

								case 4:

									internal_marks = (0.15 * O_per) + (0.35 * A_per);
									final_marks = 76 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in DS\n";

									break;

								case 5:
									internal_marks = (0.15 * O_per) + (0.35 * A_per);
									final_marks = 77 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in CY\n";

									break;

								case 6:

									internal_marks = (0.15 * O_per) + (0.35 * A_per);
									final_marks = 76 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in EE\n";

									break;

								default:
									cout << "enter valid imput\n";



							}


					}

					break;


				case 2:
					cout << "enter your Matric percentage\n";
					cin >> M_per;
					cout << "enter your FSC percentage\n";
					cin >> F_per;

					cout << endl;

					cout << "what is your background?\n";
					cout << "press 1 for pre medical and press 2 for pre engineering\n";
					cin >> option;

					switch (option)
					{

					case 1:
						cout << "what was your percentage in add maths exam? ";
						cin >> A_M;

						if (A_M > 50)
						{
							cout << "what degree you want to choose from below?\n";
							cout << "[1] BS software engineering\n";
							cout << "[2]BS computer science\n";
							cout << "[3]BS artificial intellegence\n";
							cout << "[4]BS data science\n";
							cout << "[5]electrical engineering\n";
							cin >> option;

							switch (option)
							{

								case 1:

									internal_marks = (0.15 * M_per) + (0.35 * F_per);
									final_marks = 79 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in SE\n";

									break;

								case 2:

									internal_marks = (0.15 * M_per) + (0.35 * F_per);
									final_marks = 80 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in CS\n";

									break;

								case 3:

									internal_marks = (0.15 * M_per) + (0.35 * F_per);
									final_marks = 75 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in AI\n";

									break;

								case 4:

									internal_marks = (0.15 * M_per) + (0.35 * F_per);
									final_marks = 76 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in DS\n";

									break;

								case 5:
									internal_marks = (0.15 * M_per) + (0.35 * F_per);
									final_marks = 77 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in CY\n";

									break;

								case 6:

									internal_marks = (0.15 * M_per) + (0.35 * F_per);
									final_marks = 76 - internal_marks;
									fm = final_marks * 2;
									score = (fm / 100) * 250;
									cout << "you need " << score << " marks to score in admission test to secure your admission in EE\n";

									break;

								default:
									cout << "enter valid imput\n";


							}

						}

						else
							cout << "you are not eligible\n";

						break;


					case 2:

						cout << "what degree you want to choose from below?\n";
						cout << "[1] BS software engineering\n";
						cout << "[2] BS computer science\n";
						cout << "[3] BS artificial intellegence\n";
						cout << "[4] BS data science\n";
						cout << "[5] BS cyber security\n";
						cout << "[6] BS electrical engineering\n";
						cin >> option;

						switch (option)
						{

							case 1:

								internal_marks = (0.15 * M_per) + (0.35 * F_per);
								final_marks = 79 - internal_marks;
								fm = final_marks * 2;
								score = (fm / 100) * 250;
								cout << "you need " << score << " marks to score in admission test to secure your admission in SE\n";

								break;

							case 2:

								internal_marks = (0.15 * M_per) + (0.35 * F_per);
								final_marks = 80 - internal_marks;
								fm = final_marks * 2;
								score = (fm / 100) * 250;
								cout << "you need " << score << " marks to score in admission test to secure your admission in CS\n";

								break;

							case 3:

								internal_marks = (0.15 * M_per) + (0.35 * F_per);
								final_marks = 75 - internal_marks;
								fm = final_marks * 2;
								score = (fm / 100) * 250;
								cout << "you need " << score << " marks to score in admission test to secure your admission in AI\n";

								break;

							case 4:

								internal_marks = (0.15 * M_per) + (0.35 * F_per);
								final_marks = 76 - internal_marks;
								fm = final_marks * 2;
								score = (fm / 100) * 250;
								cout << "you need " << score << " marks to score in admission test to secure your admission in DS\n";

								break;

							case 5:
								internal_marks = (0.15 * M_per) + (0.35 * F_per);
								final_marks = 77 - internal_marks;
								fm = final_marks * 2;
								score = (fm / 100) * 250;
								cout << "you need " << score << " marks to score in admission test to secure your admission in CY\n";

								break;

							case 6:

								internal_marks = (0.15 * M_per) + (0.35 * F_per);
								final_marks = 76 - internal_marks;
								fm = final_marks * 2;
								score = (fm / 100) * 250;
								cout << "you need " << score << " marks to score in admission test to secure your admission in EE\n";

								break;

							default:
								cout << "enter valid imput\n";

							



						}


					}


					
			}

			break;


		case 2:
			cout << "which educational system was opted? ";
			cout << "press 1 for O/A levels, press 2 for Matric/FSC and press 3 if you have fast nuces alumunus in family\n";
			cin >> option;

			switch (option)
			{

				case 1:

					cout << "enter your O level percentage\n";
					cin >> O_per;
					cout << "enter your A level percentage\n";
					cin >> A_per;

					if (O_per >= 90 && A_per<90)
					{
						cout << "you'll be given 10% scholarship\n";
					}

					else if (A_per >= 90 && O_per<90)
					{
						cout << "you'll be given 30% scholarship\n";
					}

					else if (A_per < 90 && O_per < 90)
					{
						cout << "you're not eligible for scholarship\n";
					}

					else if (O_per >= 90 && A_per >= 90)
					{
						cout << "you'll be given 30% scholarship\n";
					}

					break;

				case 2:

					cout << "enter your Matric percentage\n";
					cin >> M_per;
					cout << "enter your FSC percentage\n";
					cin >> F_per;

					if (M_per >= 90 && F_per<90)
					{
						cout << "you'll be given 10% scholarship\n";
					}

					else if (F_per >= 90 && M_per<90)
					{
						cout << "you'll be given 30% scholarship\n";
					}

					else if (F_per < 90 && M_per < 90)
					{
						cout << "you're not eligible for scholarship\n";
					}

					else if (M_per >= 90 && F_per >= 90)
					{
						cout << "you'll be given 30% scholarship\n";
					}

					break;


				case 3:

					cout << "what is your relation with with FAST NUCES aluminous\n";
					cout << "[1] blood relation\n";
					cout << "[2] maternal or parental cousin\n";
					cin >> option;

					switch (option)
					{

						case 1:
							cout << "you'll be given 20% scholarship\n";

							break;

						case 2:
							cout << "you'll be given 10% scholarship\n";

							break;

						default:
							cout << "enter valid imput\n";


					}

					



			}

	}

	return 0;
}