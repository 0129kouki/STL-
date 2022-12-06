#include<list>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
	list <const char*>stations =
	{
		"Komagome",
		"Tabata",
		//"Nishinippori",
		"Nippori",
		"Uguisudani",
		"Ueno",
		"Okachimachi",
		"Akihabara",
		"Kanda",
		"Tokyo",
		"Yurakucho",
		"Shimbashi",
		"Hamamatsucho",
		"Tamachi",
		//"Takanawa Gateway",
		"Shinagawa",
		"Osaki",
		"Gotanda",
		"Meguro",
		"Ebisu",
		"Shibuya",
		"Harajuku",
		"Yoyogi",
		"Shinjuku",
		"Shin-Okubo",
		"Takadanobaba",
		"Mejiro",
		"Ikebukuro",
		"Otsuka",
		"Sugamo"
	};

	printf("---1970---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (strcmp(*itr, "Tabata") == 0)
		{
			itr = stations.insert(itr, "Nishi-Nippori");
			break;
		}
	}



	printf("---2019---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (strcmp(*itr, "Tamachi") == 0)
		{
			itr = stations.insert(itr, "Takanawa Gateway");
			break;
		}
	}



	printf("---2020---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}
}
