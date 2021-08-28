//writes the questions and options into a file
#include<stdio.h>
struct question{
	int qno;
	char qstring[200];
	char qchoice[4][75];
	int qans;
};
int main()
{	
	struct question q[]={{1, "When did Canada leave the confederation to become their own nation?", {"  April 23rd, 1859", "  July 1st, 1867",	"  August 5th, 1845", "  May 14, 1874"}, 2},
{2, "Electronic music producer Kygo\'s popularity skyrocketed after a certain remix. Which song did he remix?", {"  Ed Sheeran - I See Fire", "  M83 - Wait", "  Coldplay - Midnight", "  Of Monsters and men - Dirty Paws"}, 1},
{3, "Which of the following languages does NOT use gender as a part of its grammar?", {"  Arabic", "  Turkish", "  Polish", "  Dutch"}, 2},
{4, "How many notes are there on a standard grand piano?", {"  76", "  95", "  72", "  88"},4},
{5, "Which of the following languages is written from left to right?", {"  Kurdish", "  Navajo", "  Hebrew", "  Aramaic"},2},
{6, "The ballpoint pen, an easy-to-use writing instrument, was invented by:", {"  Laszlo Biro",	"  Aelian",	"  Conrad Gessner",	"  Caspar Peucer"},1},
{7, "The first implantable cardiac pacemaker was developed by:", {"  Arne Larsson", 	"  Rune Elmqvist",	"  Wilson Greatbatch",	"  Gustav de Laval"},3},
{8, "Who invented the safety break, which stop the elevator from crashing?", {"  Thomas Edison",	"  Eli Whitney",	"  Henry Ford",	"  Elisha Otis"}, 4},
{9, "Who was the first person to suggest Daylight Savings Times?", {"  Abraham Lincoln",	"  Benjamin Franklin",	"  Charles Babbage",	"  Carl Linnaeus"},2},
{10, "Who was the first Indian woman to be elected as President of United Nations General Assembly?", {"  Rajkumari Amrit Kaur",		"  Vijay Lakshmi Pandit",		"  Indira Gandhi",	"  Sarojini Naidu"},2},
{11, "In Charles Dickens’s Oliver Twist, what food does Oliver famously ask for more of when he says: \"Please, Sir, I want some more\"?", {"  Gruel",	"  Bread",	"  Soup",		"  Cheese"},1},
{12, "Who wrote Anna Karenina?", {"  George Elliot",	"  Mark Twain",		"  Count Lev Nikolayevich Tolstoy",	"  Charles Dickens"},3},
{13, "Who sued JK Rowling for plagiarising his/her work into Harry Potter?", {"  John Kenswall",	"  Ferdinand \"Ferd\" Pinksi",	"  Karen Harris",		"  Nancy Stouffer"},4},
{14, "\"Mark Twain\" is whose pen name?", {"  Samuel Langhorne Clemens", 	"  William Faulkner",	"  George Orwell",	"  Howard Allen Frances O'Brien"},1},
{15, "How many lines does a sonnet have?", {"  12",		"  5",		"  14",		"  21"},3},
{16, "When was the first Nobel Prize awarded?", {"  1889",		"  1921",		"  1894",		"  1901"},4},
{17, "When was Romeo and Juliet published?", {"  1603",		"  1597", 	"  1594", 	"  1606"},2},
{18, "The character of Hamlet was the ruler of which country?", {"  Denmark",	"  Scotland",	"  Sweden",	"  England"},1},
{19, "For what movie did Tom Hanks score his first Academy Award nomination?", {"  Sleepless in Seattle",		"  Catch Me If You Can",		" Big",		"  Cast Away"},3},
{20, "When does the formal Nobel Prize ceremony take place every year?", {"  10 December",	"  10 October",	"  10 January",	"  10 November"},1},
{21, "Who won the Nobel Prize in Physics 2020?", {"  Arthur Ashkin and Donna Strickland", 	"  Rainer Weiss, Barry   Barish and Kip S. Thorne",	"  Roger Penrose, Reinhard Genzel and Andrea Ghez",	"  James Peebles, Michel Mayor and Didier Queloz"}, 3},
{22, "In which Olympics did Bollywood actor Amitabh Bachchan carry the Olympic torch?", {"  2012",		"  2014",		"  2016",		"  2018"},1},
{23, "When is the Navy Day celebrated in India?", {"  15th January",		"  8th October",		"  4th December",		"  7th December"},3},
{24, "Which is the first anime movie to win an Academy Award?", {"  A Silent Voice",	"  Grave of the Fireflies",	"  Your Name",		"  Spirited Away"},4},
/*{25, "To which fictional character is the quote 'It is a capital mistake to theorize before one has dat  Insensibly one begins to twist facts to suit theories, instead of theories to suit facts.'attributed to?", {"  Robert Langdon",	"  Sherlock Holmes",	"  Hercule Poirot",	"  Nancy Drew"},2}*/};

	FILE *f1;
	f1=fopen("quest.txt","w");
	for(int i=0;i<24;i++)
	fwrite(&q[i],sizeof(struct question),1,f1);
	fclose(f1);
	
struct question q1[]={{1, "Which of these countries isn't landlocked?", {"  Austria", "  Nepal", "  Turkey", "  Bhutan"}, 3},
{2, "What was the Turkish city of Istanbul called before 1923?", {"  Constantinople", "  Babylon", "  Hierapolis", "  Ephesus"}, 1},
{3, "What is the slang name for New York City, used by locals?", {"  The Big Apple", "  Gotham", "  Pasadena", "  NYC"}, 2},
{4, "What is the name of the coffee shop in the sitcom Friends?", {"  Café Du Monde", "  The Olive Gardens", "  Central Perk", "  Cafe Down The Alley"},3},
{5, "Which clothing company was originally called 'Blue Ribbon Sports'?", {"  Nike", "  Raymond", "  GAP", "  Allen Solly"},1},
{6, "Who wrote the popular Japanese light novel 'Your Name'?", {"  Eiichiro Oda",	"  Hirohiko Araki",	"  Haruki Murakami",	"  Makoto Shinkai"},4},
{7, "Fear of computers is known as?", {"  Cyberphobia", 	"  Technophobia",	"  Telephobia",	"  Cybernophobia"},2},
{8, "World's fastest high-speed train?", {"  Shanghai Maglev",	"  TGV POS",	"  CRH380A Hexie",	"  L0 Series Maglev"}, 4},
{9, "Who is known as 'the Father of Manga?", {"  Akira Toriyama",	"  Yoshihiro Togashi",	"  Osamu Tezuka",	"  Masashi Kishimoto"},3},
{10, "Who was the first Indian to win a Gold medal in Paralympics?", {"  Girisha N Gowda",		"  Devendra Jhajharia",		"  Rajinder Singh Rahelu",	"  Mariyappan Thangavelu"},2},
{11, "Who's the main protagonist of the Cars series?", {"  Chick Hicks",	"  Cruz Ramirez",	"  Lightning McQueen",  "  Doc Hudson"},3},
{12, "Who won the inaugral IPL season?", {"  Rajasthan Royals",	"  Mumbai Indians",	"  Chennai Super Kings",	"  Hyderabad Deccan Chargers"},1},
{13, "Which company's success kickstarted the founding of 'Silicon Valley'?", {"  Apple",	"  Microsoft",	"  HP",	"  Google"},3},
{14, "How many actors have played the role of James Bond?", {"  7",	"  6",	"  8",	"  4"},1},
{15, "What does GIF stand for?", {"  Graphical Interchange File",	"  Graphics Interchange Format", "  Graphics Incorporated File",	"  Graphics Incorporated Format"},2},
{16, "How many hearts does an octopus have?", {"  1",		"  2",		"  4",		"  3"},4},
{17, "What is the Italian word for 'pie'?", {"  Tart",	"  Pizza", 	"  Flan", 	"  Fondue"},2},
{18, "Name this stringless fictional character created by Carlo Collodi over one hundred years ago.", {"  Pinocchio",	"  Mickey Mouse",	"  Popeye",	"  Pied Piper of Hamelin"},1},
{19, "Which of the following newspaper was started by Annie Besant?", {"  The Hindu",		"  Indian Express",		" The Times of India",		"  New India"},4},
{20, "Which country won the most medals in the Olympics 2021?", {"  China",	"  Russia",	"  USA",	"  Japan"},3},
{21, "Who won the first Nobel Prize in Physics?", {"  Theodor Mommsen", 	"  Wilhelm Conrad Röntgen",	"  	Emil von Behring",	"  Emil Fischer"}, 2},
{22, "Which actor starred as his originally developed character 'Mr. Bean'?", {"  Tom Hardy",		"  Henry Cavill",		"  Richard Burton",	"  Rowan Atkinson"},4},
{23, "Which is the most brutal war in world history?", {"  WWII",	"  WWI",	"  Napoleonic Wars",		"  The Manchu Conquest of China"},1},
{24, "Who started the online non-profit encyclopedia 'Wikipedia'?", {"  Eric Schimidt",	"  Larry Page",	"  Angela Starling", "  Jimmy Wales"},4},
{25, "Which is the best-selling managa till date?", {"  Naruto", "  Detective Conan", "  Dragon Ball", "  One Piece"}, 4},
{26, "Which one among the following radiations carries maximum energy?", {"  Ultraviolet rays", "  Gamma rays", "  X-rays", "  Infra-red rays"},2},
{27, "Bokaro Steel Limited was established with the assistance of?", {"  Germany", "  Soviet Union", "  UK", "  USA"}, 2},
{28, "The head quarters of world trade organization is in:", {"  Montreal", "  Seattle", "  Geneva", "  the Hague"}, 3},
{29, "Which is the largest coffee producing state of India?", {"  Kerala", "  Tamil Nadu", "  Arunachal Pardesh", "  Karnataka"}, 4},
{30, "Who is the father of geometry?", {"  Aristotle", "  Euclid", "  Pythagoras", "  Kepler"}, 2},
{31, "The instrument useful for measuring curvature of surface is:", {"  Spherometer", "  Odometer", "  Tachometer", "  Speedometer"}, 1},
{32, "The metal whose salts are sensitive to light is ?", {"  Zinc", "  Copper", "  Aluminium", "  Silver"}, 4},
{33, "Who founded Taliban?", {"  Mohammad Omar", "  Mohammad Yaqoob", "  Abdul Ghani Baradar", "  Muhammad Hassan"},1},
{34, "Most-viewed website in 2020(exlusive of Google)?", {"  Facebook", "  Twitter", "  Amazon", "  Youtube"}, 4},
{35, "Which one of these smartphone brands isn't owned by BBK Group?", {"  Vivo", "  Oppo", "  Redmi", "  Realme"}, 3},
{36, "Which was the first trillion dollar company?", {"  Google", "  Microsoft", "  Amazon", "  Apple"}, 4},
{37, "The most abundant element in the human body is :", {"  Calcium", "  Iron", "  Sodium", "  Magnesium"}, 1},
{38, "Most expensive painting till date:", {"  Interchange", "  Salvator Mundi", "  Interchange", "  Number 17A"}, 2},
{39, "Which of these is a carnivorous plant?", {"  Venus fly trap", "  Pitcher", "  Bladderwort", "  Sundew"}, 4},
{40, "First Indian to pass ICS?", {"  Albion Rajkumar Banerjee", "  Atul Chandra Chatterjee", "  Satyendranath Tagore", "  Basanta Kumar Mullick"}, 3}};
FILE *f2;
	f2=fopen("quest2.txt","w");
	for(int i=0;i<40;i++)
	fwrite(&q1[i],sizeof(struct question),1,f2);
	fclose(f2);
	return 0;
}