#include <stdio.h>

float DDN_Railway_Station[15][15] =
{
0.0, 306.8, 57.5, 254.0, 45.2, 5.7, 34.2, 53.2, 287.5, 242.0, 51.9, 177.7, 305.0, 87.1, 273.8,

306.8, 0.0, 284.1, 231.0, 262.8, 312.6, 315.2, 265.5, 286.7, 398.5, 291.7, 271.9, 457.2, 394.6, 287.7,

57.5, 284.1, 0.0, 238.0, 22.6, 63.1, 89.5, 22.2, 257.5, 280.8, 23.3, 147.7, 207.9, 145.4, 243.8,

254.0, 231.0, 238.0, 0.0, 216.0, 254.0, 260.0, 219.0, 295.0, 408.0, 122.0, 293.0, 187.0, 114.0, 154.0,

45.2, 262.8, 22.6, 216.0, 0.0, 50.7, 77.1, 11.1, 265.6, 263.9, 30.0, 155.8, 195.6, 133.0, 251.9,

5.7, 312.6, 63.1, 254.0, 50.7, 0.0, 35.0, 59.0, 293.3, 242.7, 57.7, 183.5, 145.8, 83.3, 279.5,

34.2, 315.2, 89.5, 260.0, 77.1, 35.0, 0.0, 83.9, 318.1, 213.7, 82.5, 208.3, 167.8, 81.1, 304.4,

53.2, 265.5, 22.2, 219.0, 11.1, 59.0, 83.9, 0.0, 267.0, 273.8, 32.4, 157.2, 203.5, 141.0, 253.3,

287.5, 286.7, 261.2, 295.0, 269.4, 296.9, 323.0, 270.7, 0.0, 526.6, 242.8, 77.5, 441.5, 378.9, 21.4,

242.0, 398.5, 281.0, 408.0, 264.2, 241.9, 214.1, 274.1, 523.1, 0.0, 287.5, 413.3, 313.8, 296.0, 509.4,

51.9, 291.7, 21.8, 122.0, 27.3, 54.8, 80.9, 29.7, 239.3, 284.5, 0.0, 129.5, 199.3, 136.8, 225.6,

177.7, 271.9, 151.4, 293.0, 159.6, 187.0, 213.2, 160.9, 48.5, 416.8, 133.0, 0.0, 331.6, 269.1, 63.7,

305.0, 457.2, 209.7, 186.0, 195.6, 145.8, 169.8, 203.6, 437.9, 313.8, 202.3, 344.0, 0.0, 97.9, 424.1,

87.1, 394.6, 145.3, 114.0, 133.0, 83.2, 84.9, 141.0, 375.3, 296.0, 139.7, 265.5, 97.9, 0.0, 361.6,

273.8, 287.7, 251.7, 154.0, 259.9, 287.4, 313.5, 261.2, 21.4, 517.1, 233.3, 68.0, 431.9, 369.4, 0.0
};

float DDN_Airport[15][15] =
{
0.0,284.3, 35.0, 254.0, 22.6, 32.2, 59.3, 30.7, 275.5, 265.4, 39.8, 165.6, 176.8, 114.3, 261.7,

284.3, 0.0, 284.1, 231.0, 262.8, 312.6, 315.2, 265.5, 286.7, 398.5, 291.7, 271.9, 457.2, 394.6, 287.7,

35.0, 284.1, 0.0, 238.0, 22.6, 63.1, 89.5, 22.2, 257.5, 280.8, 23.3, 147.7, 207.9, 145.4, 243.8,

254.0, 231.0, 238.0, 0.0, 216.0, 254.0, 260.0, 219.0, 295.0, 408.0, 122.0, 293.0, 187.0, 114.0, 154.0,

22.6, 262.8, 22.6, 216.0, 0.0, 50.7, 77.1, 11.1, 265.6, 263.9, 30.0, 155.8, 195.6, 133.0, 251.9,

32.2, 312.6, 63.1, 254.0, 50.7, 0.0, 35.0, 59.0, 293.3, 242.7, 57.7, 183.5, 145.8, 83.3, 279.5,

59.3, 315.2, 89.5, 260.0, 77.1, 35.0, 0.0, 83.9, 318.1, 213.7, 82.5, 208.3, 167.8, 81.1, 304.4,

30.7, 265.5, 22.2, 219.0, 11.1, 59.0, 83.9, 0.0, 267.0, 273.8, 32.4, 157.2, 203.5, 141.0, 253.3,

275.5, 286.7, 261.2, 295.0, 269.4, 296.9, 323.0, 270.7, 0.0, 526.6, 242.8, 77.5, 441.5, 378.9, 21.4,

265.4, 398.5, 281.0, 408.0, 264.2, 241.9, 214.1, 274.1, 523.1, 0.0, 287.5, 413.3, 313.8, 296.0, 509.4,

39.8, 291.7, 21.8, 122.0, 27.3, 54.8, 80.9, 29.7, 239.3, 284.5, 0.0, 129.5, 199.3, 136.8, 225.6,

165.6, 271.9, 151.4, 293.0, 159.6, 187.0, 213.2, 160.9, 48.5, 416.8, 133.0, 0.0, 331.6, 269.1, 63.7,

176.8, 457.2, 209.7, 186.0, 195.6, 145.8, 169.8, 203.6, 437.9, 313.8, 202.3, 344.0, 0.0, 97.9, 424.1,

114.3, 394.6, 145.3, 114.0, 133.0, 83.2, 84.9, 141.0, 375.3, 296.0, 139.7, 265.5, 97.9, 0.0, 361.6,

261.7, 287.7, 251.7, 154.0, 259.9, 287.4, 313.5, 261.2, 21.4, 517.1, 233.3, 68.0, 431.9, 369.4, 0.0
};

float DDN_ISBT[15][15] =
{
0.0, 309.4, 60.1, 254.0, 47.8, 8.2, 39.3, 55.8, 290.1, 247.1, 54.5, 180.3, 151.2, 88.7, 276.4,

309.4, 0.0, 284.1, 231.0, 262.8, 312.6, 315.2, 265.5, 286.7, 398.5, 291.7, 271.9, 457.2, 394.6, 287.7,

60.1, 284.1, 0.0, 238.0, 22.6, 63.1, 89.5, 22.2, 257.5, 280.8, 23.3, 147.7, 207.9, 145.4, 243.8,

254.0, 231.0, 238.0, 0.0, 216.0, 254.0, 260.0, 219.0, 295.0, 408.0, 122.0, 293.0, 187.0, 114.0, 154.0,

47.8, 262.8, 22.6, 216.0, 0.0, 50.7, 77.1, 11.1, 265.6, 263.9, 30.0, 155.8, 195.6, 133.0, 251.9,

8.2, 312.6, 63.1, 254.0, 50.7, 0.0, 35.0, 59.0, 293.3, 242.7, 57.7, 183.5, 145.8, 83.3, 279.5,

39.3, 315.2, 89.5, 260.0, 77.1, 35.0, 0.0, 83.9, 318.1, 213.7, 82.5, 208.3, 167.8, 81.1, 304.4,

55.8, 265.5, 22.2, 219.0, 11.1, 59.0, 83.9, 0.0, 267.0, 273.8, 32.4, 157.2, 203.5, 141.0, 253.3,

290.1, 286.7, 261.2, 295.0, 269.4, 296.9, 323.0, 270.7, 0.0, 526.6, 242.8, 77.5, 441.5, 378.9, 21.4,

247.1, 398.5, 281.0, 408.0, 264.2, 241.9, 214.1, 274.1, 523.1, 0.0, 287.5, 413.3, 313.8, 296.0, 509.4,

54.5, 291.7, 21.8, 122.0, 27.3, 54.8, 80.9, 29.7, 239.3, 284.5, 0.0, 129.5, 199.3, 136.8, 225.6,

180.3, 271.9, 151.4, 293.0, 159.6, 187.0, 213.2, 160.9, 48.5, 416.8, 133.0, 0.0, 331.6, 269.1, 63.7,

151.2, 457.2, 209.7, 186.0, 195.6, 145.8, 169.8, 203.6, 437.9, 313.8, 202.3, 344.0, 0.0, 97.9, 424.1,

88.7, 394.6, 145.3, 114.0, 133.0, 83.2, 84.9, 141.0, 375.3, 296.0, 139.7, 265.5, 97.9, 0.0, 361.6,

276.4, 287.7, 251.7, 154.0, 259.9, 287.4, 313.5, 261.2, 21.4, 517.1, 233.3, 68.0, 431.9, 369.4, 0.0
};

char* loc_index[] = {"", "Valley of Flowers", "Rajaji National Park", "Kedarnath", "Laxman Jhula", "FRI", "Mussoorie", "Beatles ashram", "Bhimtal Lake", "Gangotri", "Har Ki Pauri", "Jim Corbett", "Auli", "Chakrata", "Nainital Lake"};

int num_loc;
int loc[15];
char initial_pt;
float matloc[15][15];
int visit[] = {99,99,99,99,99,99,99,99,99,99,99,99,99,99,99};
float expenditure = 0;

void welcome()
{
    printf("\n************************************************************************************************Welcome User!!************************************************************************************************\n\n\n");
    printf("This is THE STATE EXCURSION PLANNER.\n\n\n");

}

void print_initial()
{
    if(initial_pt== 'a')
    {

		printf("%s", "DEHRADUN RAILWAY STATION");
    }

    if(initial_pt== 'b')
    {
        printf("%s", "DEHRADUN ISBT");
    }

    if(initial_pt== 'c')
    {
        printf("%s", "DEHRADUN AIRPORT");
    }
}


void initial_point()
{
    printf("Depending on what mode of transport you used to reach Dehradun, \nplease tell us what will be the starting point for your journey?\n\na. Dehradun Railway Station\nb. Dehradun ISBT\nc. Jolly Grant airport\n\nPlease enter 'a', 'b' or 'c' \n\n");
    scanf("%c",&initial_pt);
    switch (initial_pt)
    {
        case 'a': loc[0] = 15;
        printf("You chose: Dehradun Railway Station\n\n");
            break;
        case 'b': loc[0] = 16;
        printf("You chose: Dehradun ISBT\n\n");
            break;
        case 'c': loc[0] = 17;
        printf("You chose: Dehradun Airport\n\n");
            break;
        default: printf("Enter a valid choice Please!!!!\n\n");
    }
}

void menu_and_input()
{
    int i;
    printf("Now,\n");
    printf("The places you could visit during your stay in Dehradun are-\n\n");
    printf("1. Valley of Flowers\n2. Rajaji National Park\n3. Kedarnath\n4. Laxman Jhula\n5. FRI\n6. Mussoorie\n7. Beatles Ashram\n8. Bhimtal Lake\n9. Gangotri\n10. Har Ki Pauri\n11. Jim Corbett\n12. Auli\n13. Chakrata \n14. Nainital Lake");

    printf("\n\nA brief idea regarding the places --->\n");
    printf("\nVALLEY OF FLOWERS: It is an Indian national park, located in North Chamoli and Pithoragarh, and is known for its meadows of endemic alpine flowers and the variety of flora.\nThis richly diverse area is also home to rare and endangered animals. The park is open only during summer from June to October and it is covered by heavy snow for the rest of the year.\n");
    printf("\nRAJAJI NATIONAL PARK: It is a biodiversity park that attracts both nature lovers and wanderers of wildlife.\nRajaji National Park merged with Motichur, Chilla wildlife sanctuaries, and Rajaji National Park and was named as Rajaji National Park. It is named after a great freedom fighter, Late Shri C. Rajgopalachari Ji, also known as Rajaji.\n It is open from Mid-November to Mid-June, allowing the visitors to explore its picturesque beauty and it offers a wide range of natural beauty to its visitors.\n");
    printf("\nKEDARNATH: It is a town in Rudraprayag District and has gained importance because of the Kedarnath Temple.\nIt's Approx. 86 Kilometres from Rudraprayag, Kedarnath is the most remote of the four Chota Char Dham pilgrimage sites. It is located in the Himalayas, about 3,583 m (11,755 ft) above sea level near the Chorabari Glacier, which is the source of the Mandakini river.\nThe town is flanked by snow-capped peaks, most prominently the Kedarnath Mountain. The nearest road head is at Gaurikund about 16 km away.\n");
    printf("\nLAXMAN JHULA: It is a suspension bridge across the river Ganges, located 5 kilometres (3 mi) north-east of the city of Rishikesh.\nThe bridge connects the two villages of Tapovan in Tehri Garhwal district, on the west bank of the river, to Jonk in Pauri Garhwal district, on the east bank. it is one of the iconic landmarks of Rishikesh.\nIt is said that the Hindu deity Lakshmana crossed the Ganges on jute ropes where the bridge is built.\n");
    printf("\nFRI: It is a Natural Resource Service training institute of the Indian Council of Forestry Research and Education and is an institution in the field of forestry research in India for Indian Forest Service cadres and all State Forest Service cadres.\nIt is among the oldest institutions of its kind. In 1991, it was declared a deemed university by the University Grants Commission.\nThe museum is open from 9:30am to 5:00pm daily. There is an entry fee of ₹40 per person.\n");
    printf("\nMUSSOORIE: Mussoorie is also known as Queen of the Hills. The name Mussoorie is often attributed to a derivation of mansur, a shrub which is indigenous to the area. The town is often referred to as Mansuri by Indians.\nIt is about 35 kilometres (22 mi) from the state capital of Dehradun. The hill station is in the foothills of the Garhwal Himalayan range. In winter, rainfall is a little more frequent than in the pre-and post-monsoon seasons, and the general weather cool and partly cloudy.\nMussoorie usually receives a few spells of snowfall in December, January and February.\n");
    printf("\nBEATLES AASHRAM: also known as Chaurasi Kutia is an ashram close to the north Indian city of Rishikesh in the state of Uttarakhand.\nIt is located on the eastern bank of the Ganges river, opposite the Muni Ki Reti area of Rishikesh, in the foothills of the Himalayas. During the 1960s and 1970s, as the International Academy of Meditation, it was the training centre for students of Maharishi Mahesh Yogi, who devised the Transcendental Meditation technique.\nThe ashram gained international attention between February and April 1968 when the English rock band the Beatles studied meditation there, along with celebrities such as Donovan, Mia Farrow and Mike Love.\n");
    printf("\nBHIMTAL LAKE: Bhimtal is a lake in the town of Bhimtal, in Kumaon, with a masonry dam built in 1883 creating the storage facility.\nIt is the largest lake in Nainital district which is also known as the 'Lake district of India'. It is also the largest lake of Kumaon.\nThe lake provides drinking water supply and supports aquaculture with variety of fish species. There is an island at the centre of the lake which has been developed as a tourist attraction and has an aquarium. \n");
    printf("\nGANGOTRI: Gangotri is a town and a Nagar Panchayat (municipality) in Uttarkashi district in the state of Uttarakhand, India.\nIt is a Hindu pilgrim town on the banks of the river Bhagirathi and origin of river Ganges. It is on the Greater Himalayan Range, at a height of 3,100 metres (10,200 ft).\nAccording to popular Hindu legend, it was here that Goddess Ganga descended when Lord Shiva released the mighty river from the locks of his hair. It is one of the four sites in the Chota Char Dham pilgrimage circuit.\n");
    printf("\nHAR KI PAURI: Har Ki Pauri is a famous ghat on the banks of the Ganges in Haridwar in the Indian state of Uttarakhand. This revered place is the major landmark of the holy city of Haridwar.\nLiterally, 'Har' means 'God', 'Ki' means 's ' and 'Pauri' means 'steps'. Lord Vishnu is believed to have visited the Brahmakund in Har Ki Pauri in the Vedic times. It is believed that it is precise spot where the Ganges leaves the mountains and enters the plains.\nThe ghat is on the west bank of Ganges canal through which the Ganges is diverted just to the north. Har Ki Pauri is also the area where thousands of pilgrims converge and the festivities commence during the Kumbha Mela which takes place every twelve years, and the Ardh Kumbh Mela which takes place every six years.\n");
    printf("\nJIM CORBETT: Jim Corbett National Park is a national park in India located in the Nainital district. An ecotourism destination, the park contains 488 different species of plants and a diverse variety of fauna.\nThe increase in tourist activities, among other problems, continues to present a serious challenge to the park's ecological balance. Forest covers almost 73% of the park, while 10% of the area consists of grasslands.\nIt houses around 110 tree species, 50 species of mammals, 580 bird species and 25 reptile species.\n");
    printf("\nAULI: Auli is in Chamoli district in the Himalayan mountains of Uttarakhand, India. Auli, also known as Auli Bugyal, in Garhwali, which means 'meadow', is located at an elevation of 2,800 metres (9,200 ft) above sea level.\nBetween June to October, the valley has one of highest number of flower species found anywhere in the world.\nAuli is a hiking and ski destination and is marketed as a tourist destination.\n");
    printf("\nCHAKRATA: Chakrata is a cantonment town and also a sub district. It lies between the Tons and Yamuna rivers, at an elevation of 2118 m, 98 km from the state capital, Dehradun.\nChakrata was originally a cantonment of the British Indian Army.\nTo the west lies Himachal Pradesh, and to the east are Mussoorie and Tehri Garhwal.\n");
    printf("\nNAINITAL LAKE: Nainital, also known as Naini Lake, is a natural freshwater body, situated amidst the township of Nainital in Kumaon.\nIt is tectonic in origin and is kidney shaped or crescent shaped and has an outfall at the southeastern end. Nainital, along with other lakes of Kumaon, is integral to tourism and recreation in Kumaon.\nThe lake is also an integral part of Kumaoni folklore.\nIt is one of the four important lakes of Kumaon; the other three are Sattal Lake, Bhimtal Lake and Naukuchiyatal Lake.\n");

    printf("\n\nHow many loc do you want to visit from the above list?\n");
    scanf("%d",&num_loc);
    printf("\nEnter the loc..for instance if u want to visit Rajaji National Park, enter '2'\n");
    for (i=1; i<=num_loc; i++)
    {
        scanf("%d",&loc[i]);
    }
}

void chosen_loc()
{
	int i,j;
	if(loc[0]==15)
	{
		loc[0]=0;
		for(i=0;i<=num_loc;i++)
    	{
        	for(j=0;j<=num_loc;j++)
        	{
        		matloc[i][j]=DDN_Railway_Station[loc[i]][loc[j]];
			}
    	}

	}

	else if(loc[0]==16)
	{
		loc[0]=0;
		for(i=0;i<=num_loc;i++)
    	{
        	for(j=0;j<=num_loc;j++)
        	{
        		matloc[i][j]=DDN_ISBT[loc[i]][loc[j]];
			}
    	}
	}

	else if(loc[0]==17)
	{
		loc[0]=0;
		for(i=0;i<=num_loc;i++)
    	{
        	for(j=0;j<=num_loc;j++)
        	{
        		matloc[i][j]=DDN_Airport[loc[i]][loc[j]];
			}
    	}
	}
}

int check_vis(int i)
{
	int j,flag = 0;
	for(j=0;j<num_loc+1;j++)
	{
		if(i==visit[j])
		{
			flag = 1;
		}
	}
	return flag;
}

int min(int a)
{
	int i,temp;
	float min = 999;
	for(i = 0;i<num_loc+1;i++)
	{
		if(loc[i]==a)
		{
			continue;
		}
		else if(check_vis(loc[i]))
		{
			continue;
		}
		else
		{
			if(matloc[a][i]<min)
			{
				min = matloc[a][i];
				temp = loc[i];
			}
		}
	}
	expenditure = expenditure + min;
	return temp;
}

void exhibit_route()
{
	int i;
	for(i=0;i<num_loc+1;i++)
	{
		printf("%s ---> ",loc_index[visit[i]]);
	}

}

void optimized_route()
{
	int i;
	visit[0] = 0;
	for(i=0;i<num_loc+1;i++)
	{
		if((i+1) == num_loc+1)
		{
			expenditure = expenditure + matloc[visit[i]][visit[0]];
		}
		else
		{
			visit[i+1] = min(visit[i]);
		}
	}
	exhibit_route();
}

void selected_loc()
{
    printf("\nThe loc entered by you are -\n");
    int i;
    for(i=1;i<=num_loc;i++)
    {
        printf("%d\n",loc[i]);
    }
    printf("\n");
}

int main()
{
    welcome();

    initial_point();

    menu_and_input();

    selected_loc();

    chosen_loc();

    printf("The most optimal route for you would be:\n");

    print_initial();

    optimized_route();

    print_initial();

    printf("\n");

    return 0;
}

