//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"", "cat ~/.pacupdate | sed /📦0/d",					0,		9}, */

	/* {"", "sensors | awk '/^temp1:/{print $2}'",				5,		0}, */
	/* {"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, */
    {"", "internet.sh", 5, 0},
    {"", "battery.sh", 10, 0},
    {"", "volume.sh", 0, 10},
    {"", "datetime.sh", 45, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
