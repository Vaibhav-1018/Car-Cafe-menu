FILE *fp;
struct cafe{

	int Flat,Ccappuccino,Mocha,Latte,Cappuccino;
    int Rocher ,Delight ,Tropping,coffee,milkshake;
	
};
typedef struct cafe  cafe;
 
/*
void openFileForWriting() {
    fp = fopen("cars_cafe.txt", "wb");
    if (fp == NULL) {
        printf("\nUnable to open file for writing");
        exit(1);
    }
}

void openFileForReading() {
    fp = fopen("cars_cafe.txt", "rb");
    if (fp == NULL) {
        printf("\nUnable to open file for reading");
        exit(1);
    }
}

void closeFile() {
    fclose(fp);
}
*/
void COFFEE(){
	
	cafe c;
	fp = fopen("cars_cafe.txt","ab");
	if (fp == NULL) {
        printf("\nUnable to open file for writing");
        return ;
    }
	printf("\n ^^       WELCOME TO COFFEE MENU      ^^");
	printf("\nFlat White              250:\t  ");
	scanf("%d",&c.Flat);
	printf("\nChocolate cappuccino    260:\t");
	scanf("%d",&c.Ccappuccino);
	printf("\nCaramal Mocha           230:\t");
	scanf("%d",&c.Mocha);
	printf("\nIced rock salted Latte  456:\t");
	scanf("%d",&c.Latte);
	printf("\nCappuccino              283:\t");
	scanf("%d",&c.Cappuccino);
	fflush(stdin);
	int Flatp=250,Ccappuccinop=260,Mochap=230,Lattep=456,Cappuccinop=283;	

	c.coffee =  250 * c.Flat + 260 * c.Ccappuccino + 230 * c.Mocha + 230 * c.Latte + 456 * c.Cappuccino + 283;
    printf("\n total is %d ," ,c.coffee);
	fwrite(&c,sizeof(cafe),1,fp);
	fclose(fp);
	printf(" Your order has been added  ");
	
	
}
void MILKSHAKE()
{
		cafe c;
	fp = fopen("cars_cafe.txt","ab");
	if (fp == NULL) {
        printf("\nUnable to open file for writing");
        return ;
    }
	printf("\n          WELCOME TO MILKSHAKE MENU        ");
	printf("\n Ferroro Rocher       149:\t");
	scanf("%d",&c.Rocher);
	printf("\n Fruit Delight        169:\t");
	scanf("%d",&c.Delight);
	printf("\n Ice Cream Tropping   299:\t");
	scanf("%d",&c.Tropping);
	fflush(stdin);  
    int Rocherp=149 ,Delightp=169 ,Troppingp=299;
    c.milkshake =  149 * c.Rocher + 169 * c.Delight + 299 * c.Tropping ;

        printf("\n total is %d ," , c.milkshake);

	fwrite(&c,sizeof(cafe),1,fp);
	fclose(fp);
	printf(" Your order has been added  ");
	

}
void checkbill() {
    cafe c;
    fp = fopen("cars_cafe.txt", "rb");  // Open file in read mode
    if (fp == NULL) {
        printf("\nUnable to open file for reading");
        return;
    }

    int total_coffee = 0, total_milkshake = 0;

    while (fread(&c, sizeof(cafe), 1, fp) == 1) {
        total_coffee += c.coffee;
        total_milkshake += c.milkshake;
    }

    fclose(fp);

    printf("\n\n********* Bill *********\n");
    printf("\nCOFFEE Total: %d", total_coffee);
    printf("\nMILKSHAKE Total: %d", total_milkshake);
    printf("\n------------------------");
    printf("\nGrand Total: %d", total_coffee + total_milkshake);
    printf("\n************************\n");

    printf("    THANK YOU FOR ORDER      \n  ");
    printf("\n  \\_____________________/ \n");
    printf("\n  _/_|_____________|_\\_   \n");
    printf("\n     /OO_________OO_\\      \n");
    printf("\n    |\\_\\______GTR_____/__|   \n");
    printf("\n  \\00__|_|_|___|_|_|__00/  \n");
}



/*


	printf("    THANK YOU FOR ORDER      \n  ");
	printf("\n  \_____________________/ \n");
	printf("\n  _/_|_____________|_\_   \n");
	printf("      /OO_________OO_\      \n");
	printf("    |_\______GTR_____/__|   \n");
	printf("  \00__|_|_|___|_|_|__00/  \n");
	scanf("%d", &menu);
};*/

