#include <stdio.h>

/* run this program */
/*use the console pauser*/
/*you may aslo add your own getch*/
/*use system("pause") or input loop */

/*created by Mike Owino*/


int main(int argc, char *argv[]) {
		int choice;
	printf("self care\n 0.flex\n1.my account\n2.buy data bundles\n3.products and  services\n4.Mpesa\n5.My subscriptions\n6.platinum plans\n7.Advantage plus\n8.Stori ibambe\n98.More\n");
	scanf("%d",&choice);
	switch (choice){
		case 0 :
    printf("you chose flex\n1.sh.999:1100 Flex for 30 days\n2.sh.1499:1700 Flex for 30 days\n3.sh.2499:3500 Flex for 30 day\n4.Daily bundles\n0.Back\n00.Home\n98.More\n");
  		scanf("%d",&choice);
  		switch(choice)
  		{
  			case 00 :
  					printf("self care\n 0.flex\n1.my account\n2.buy data bundles\n3.products and  services\n4.Mpesa\n5.My subscriptions\n6.platinum plans\n7.Advantage plus\n8.Stori ibambe\n98.More\n");
  					scanf ("%d", & choice);
  					break;
  			case 1:
		  	printf("\n1.Buy once\n2.Auto-Renew :");
		  	scanf("%d", & choice);
		  	switch (choice)
		  	{
		  		case 1 :
		  			printf("pay with either\n1. Airtime\n2.M-PESA\n3. Bonga Points\n0.BACK\n00.HOME\n");
		  			scanf("%d", & choice);
		  			
		  			switch (choice)
		  			{
		  				case 1 :
		  					printf(" confirm your purchase \n1.Accept\n2.Decline\n00.Home  ");
		  					
		  					scanf ("%d", & choice);
		  					case 00 :
		  							printf("self care\n 0.flex\n1.my account\n2.buy data bundles\n3.products and  services\n4.Mpesa\n5.My subscriptions\n6.platinum plans\n7.Advantage plus\n8.Stori ibambe\n98.More\n");
		  							scanf ("%d", & choice);
		  							break;
		  					
		  					break;
					  }
					  break;		  			
					  }
			  }
		  	break;
		  
		  
		  
		 	break; 
	case 1 :
		printf("you chose MY Account\n1.My Balance\n2. Too UP\n3.Top Up Other\n4. Sambaza\n5. My Number\n6.SIM Swap\n7.Tariff Migration :%d", & choice);
		break;
		case 2 :
			printf("Buy data\n1.sh2000 Monthly (12GB + 400 Mins + Unlimited SMS + WhatsApp\n2.Daily Bundles\n3.7Day Bundle\n4.30Day Bundle\n5.Platinum\n6.Tunukiwa\n7.Okoa Data\n8.Storo Data\n98.MOre:%d",& choice);
			break;
			case 3 :
				printf("you chose product and services\n1.International Calling Bundles\n2.Safaricom Roaming\n3.Okoa Jahazi\n4.Bonga Points\n5.SMS More for Less\n6.Skiza\n7. Safaricom Guarantee\n0.Back\n00.HOME\n98.MORE:%d", & choice);
				break;
				case 4:
					printf("USSD Service\n0.M-PESA Me\n1.M-PESA Products\n2.My M-PESA Information\n3.M_PESA Agent Services\n4.Merchant Services :%d",& choice);
					break;
					case 5:
						printf("Check My Subscriptions\n1.Data Bundles\n2.SMS Bundles\n3.Skiza\n4.Premium Services and Games\n5.Promotional Messages\n6.USSD Tariff Query\n98. MORE :%d",& choice);
						break;
						case 6:
							printf("Select your preferred Plan\n1.Ksh 3000 (20GB,600 Mins,Unlimited SMS,WhatsApp)\n2.Ksh 2000 (12 GB, 400Mins , Unlimited SMS , WhatsApp)\n0.BACK\n00.HOME\n98.MORE :%d", & choice);
							break;
							case 7 :
								printf(" Select your preferred plan\n1. Ksh 1999 (900 MIns, 500 MB, 500SMS)\n2.Ksh 1499 (600 Mins , 300 MB, 300 SMS)\n3. Ksh 1249 (400 Mins,200MB, 200 SMS)\n0.BACK\n00.HOME\n98.MORE :%d", & choice);
								break;
								case 8 :
									printf ("\n1. Check my Target\n2.Check my STORO Bonus Balance\n3. Unsubscribe\n4.Subscribe\n5.Check my Daily spend\n6. storo Data Bundle : %d", choice);
									break;
									case 98 :
										printf ("\n9. Get your PUK Number\n10. Safaricom Home\n11. Find a Shop\n0. BACK : %d", choice);
										break;
	
	
	}
		
	return 0;
}

