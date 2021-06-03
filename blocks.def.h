//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cpuTemp",														1,		5},
	{"", "bandwidth",													2,		4},
	{"", "memUsage",													5,		3},
	{"", "power",														2,		1},
	{"", "upgradeCount",												3600,   6},
	{"", "date '+%b %d (%a) %I:%M%p'",									30,		2},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
