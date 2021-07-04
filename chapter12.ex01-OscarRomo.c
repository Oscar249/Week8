#include <stdio.h>

int main()
{
	int size; 

	int personas; 

	struct list {
		char namexd[30];
		char lastname[30];
		char G[10];
		char GivemeEmail[40];
    char team[40];
    char Ab[40];
    char EC[40]; 
	};

	struct lista listareceptor[] = {
		{
			"Oscar",
			"Romo",
			"Man",
			"2009120@upy.edu.mx",
      "Lover of Chivas",
      "50% english speaker",
      "Single",

		},
		{
			"Diana",
			"Laura",
			"Woman",
			"2009151@upy.edu.mx",
      "She don´t have a favorite team",
      "Expert in conics",
      "Married",
		},
    {
			"Erubiel",
			"Tun",
			"Man",
			"2009137@upy.edu.mx",
      "America",
      "Expert in math",
      "Without comments", 

		},
	};

	size = sizeof(receptorlist) / sizeof 

  (receptorlist[0]);

	for (people = 0; people < size; ++people) {
		printf("** Person %d **\n", (people + 1));
		printf("Name: %s\n", receptorlist[people].namexd);
		printf("Last name: %s\n", receptorlist[people].lastname);
		printf("Man or woman: %s\n", receptorlist[people].G);
		printf("Email: %s\n", receptorlist[people].GivemeEmail);
    printf("Favorite teams: %s\n",receptorlist[people].team);
    printf("Central ability: %s\n",receptorlist[people].Ab);    
    printf("Civil state: %s\n",receptorlist[people].EC);    

		printf("\n");
	}

	return 0;
}
