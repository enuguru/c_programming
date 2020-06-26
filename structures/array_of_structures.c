
struct Book
{
     char bname[20];
     int pages;
     char author[20];
     float price;
};


int main()
{
	struct Book var1[3] = 
	{
        	{"Let us C",700,"YPK",500.00},
        	{"Wings of Fire",500,"Abdul Kalam",550.00},
        	{"Complete C",1200,"Herbt Schildt",250.00}
	};
return 0;
}
