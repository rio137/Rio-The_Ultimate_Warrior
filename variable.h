/*highscore*/
int arrayIndex = 0;
int numberArray[100];
char totalName[100][100];
int flag = 0;
char nameOfUser[100];
int length = 0;
FILE *fp;
bool isNamePlateActive = true;
bool activeAppending = false;


int stringIndex;

int score=0;
char point[20];
char bluefire[][8]={"bf1.bmp","bf2.bmp","bf3.bmp","bf4.bmp","bf5.bmp","bf6.bmp",
					"bf1.bmp","bf2.bmp","bf3.bmp","bf4.bmp","bf5.bmp","bf6.bmp",
					"bf1.bmp","bf2.bmp","bf3.bmp","bf4.bmp","bf5.bmp","bf6.bmp",
					"bf1.bmp","bf2.bmp","bf3.bmp","bf4.bmp","bf5.bmp","bf6.bmp",
					"bf1.bmp","bf2.bmp","bf3.bmp","bf4.bmp","bf5.bmp","bf6.bmp",
					"bf1.bmp","bf2.bmp","bf3.bmp","bf4.bmp","bf5.bmp","bf6.bmp"
};
char firering[][50]={"ring (1).bmp","ring (2).bmp","ring (3).bmp","ring (4).bmp","ring (5).bmp","ring (6).bmp",
					"ring (6).bmp","ring (5).bmp","ring (4).bmp","ring (3).bmp","ring (2).bmp","ring (1).bmp",
					"ring (1).bmp","ring (2).bmp","ring (3).bmp","ring (4).bmp","ring (5).bmp","ring (6).bmp",
					"ring (6).bmp","ring (5).bmp","ring (4).bmp","ring (3).bmp","ring (2).bmp","ring (1).bmp",
					"ring (1).bmp","ring (2).bmp","ring (3).bmp","ring (4).bmp","ring (5).bmp","ring (6).bmp",
					"ring (6).bmp","ring (5).bmp","ring (4).bmp","ring (3).bmp","ring (2).bmp","ring (1).bmp"					
};
char snake[][15]={"gorgila1.bmp","gorgila2.bmp","gorgila3.bmp","gorgila4.bmp","gorgila5.bmp","gorgila6.bmp","gorgila7.bmp","gorgila8.bmp",
					"gorgila1.bmp","gorgila2.bmp","gorgila3.bmp","gorgila4.bmp","gorgila5.bmp","gorgila6.bmp","gorgila7.bmp","gorgila8.bmp",
					"gorgila1.bmp","gorgila2.bmp","gorgila3.bmp","gorgila4.bmp","gorgila5.bmp","gorgila6.bmp","gorgila7.bmp","gorgila8.bmp",
					"gorgila1.bmp","gorgila2.bmp","gorgila3.bmp","gorgila4.bmp","gorgila5.bmp","gorgila6.bmp","gorgila7.bmp","gorgila8.bmp",
						"gorgila1.bmp","gorgila2.bmp","gorgila3.bmp","gorgila4.bmp"};

/*highscore*/


/*siham*/
////////eita shera///////


int smalltime=1;// eitak -4 kore dile level1 lekhagula asbe
int speedforsmallenemy=10;
bool smallbool=true;////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool notificationOn=false;
int notificationCounter=0;
//bat
int battime=0;
//বসের জীবন
int lifeofboss=10;



//pig
int pigtime=0;


char bg[][18]={"images\\bg2_01.bmp","images\\bg2_02.bmp","images\\bg2_03.bmp","images\\bg2_04.bmp","images\\bg2_05.bmp","images\\bg2_06.bmp"};
int enemy=-3;//////enemy=-3 dite hobe
int wayforenemy=1530;
int wayforbat=1530;
int wayforpig=1530;
int ycorofpig=20;
int speedforenemy1=10;
int ym;
bool agun=true;
int agunx=wayforenemy;
char pig[][21]={"images\\e1.bmp","images\\e2.bmp","images\\e3.bmp","images\\e4.bmp","images\\e5.bmp",
					"images\\e1.bmp","images\\e2.bmp","images\\e3.bmp","images\\e4.bmp","images\\e5.bmp",
					"images\\e1.bmp","images\\e2.bmp","images\\e3.bmp","images\\e4.bmp","images\\e5.bmp",
					"images\\e1.bmp","images\\e2.bmp","images\\e3.bmp","images\\e4.bmp","images\\e5.bmp",
					"images\\e1.bmp","images\\e2.bmp","images\\e3.bmp","images\\e4.bmp","images\\e5.bmp",
					"images\\e1.bmp","images\\e2.bmp","images\\e3.bmp","images\\e4.bmp","images\\e5.bmp",
					"images\\e1.bmp","images\\e2.bmp","images\\e3.bmp","images\\e4.bmp","images\\e5.bmp",
					"images\\e1.bmp"										
};
char bat[][16]={"images\\bat1.bmp","images\\bat2.bmp","images\\bat3.bmp","images\\bat4.bmp","images\\bat1.bmp","images\\bat2.bmp","images\\bat3.bmp","images\\bat4.bmp",
			"images\\bat1.bmp","images\\bat2.bmp","images\\bat3.bmp","images\\bat4.bmp","images\\bat1.bmp","images\\bat2.bmp","images\\bat3.bmp","images\\bat4.bmp",
			"images\\bat1.bmp","images\\bat2.bmp","images\\bat3.bmp","images\\bat4.bmp","images\\bat1.bmp","images\\bat2.bmp","images\\bat3.bmp","images\\bat4.bmp",
			"images\\bat1.bmp","images\\bat2.bmp","images\\bat3.bmp","images\\bat4.bmp","images\\bat1.bmp","images\\bat2.bmp","images\\bat3.bmp","images\\bat4.bmp",
			"images\\bat1.bmp","images\\bat2.bmp","images\\bat3.bmp","images\\bat4.bmp"
};
char smallen[][19]={"images\\small01.bmp","images\\small02.bmp","images\\small03.bmp","images\\small04.bmp",
				"images\\small01.bmp","images\\small02.bmp","images\\small03.bmp","images\\small04.bmp",
				"images\\small01.bmp","images\\small02.bmp","images\\small03.bmp","images\\small04.bmp",
				"images\\small01.bmp","images\\small02.bmp","images\\small03.bmp","images\\small04.bmp",
				"images\\small01.bmp","images\\small02.bmp","images\\small03.bmp","images\\small04.bmp",
				"images\\small01.bmp","images\\small02.bmp","images\\small03.bmp","images\\small04.bmp",
				"images\\small01.bmp","images\\small02.bmp","images\\small03.bmp","images\\small04.bmp",
				"images\\small01.bmp","images\\small02.bmp","images\\small03.bmp","images\\small04.bmp",
				"images\\small01.bmp","images\\small02.bmp","images\\small03.bmp","images\\small04.bmp"
};
char explosion[][22]={"images\\explosion.bmp","images\\explosion.bmp","images\\explosion2.bmp","images\\explosion2.bmp",
	"images\\explosion3.bmp","images\\explosion3.bmp","images\\explosion4.bmp","images\\explosion4.bmp"};


/*
 function iDraw() is called again and again by the system.
 */
//variable for  big enemy
float upperlimit=0;
bool biglafalafi=false;
bool bigenemyfireup=false;
bool bigenemyfiredown=false;
int uplength4fire=1400;
int downlength4fire=1400;



//variable for bomb
int wayforbomb=1530;
bool pakhiura=true;
int horizontalforbomb=600;
int bombarray[10]={500,300,200,300,400,200,200,300,200,400};
int bombarrayindex=0;


//level2 bg check
int bgcheck=1;

//variable for choto enemyr agun er collision
bool en=true;
int riorlife=5;





/*fuad*/
char frio[8][15] = { "11.bmp","12.bmp","13.bmp","14.bmp","15.bmp","16.bmp","17.bmp","18.bmp"};
char frioleft[8][15] = { "101.bmp","102.bmp","103.bmp","104.bmp","105.bmp","106.bmp","107.bmp","108.bmp"};
char fbg[3][15]={"bg1.bmp","bg2.bmp","bg3.bmp"};
char fduckimage[15]={"duck.bmp"};
int fbgindex=0;
int fcordinatex=0;
int fcordinatey=0;
int fjumpup=10;
int fcordinatejump=6;
int frioindex=0;
//variable for damage
bool damagebool=true;
char damagearray[][15]={"damage1.bmp","damage0.bmp","damage2.bmp","damage3.bmp","damage4.bmp"};
char getup[][15]={"getup1.bmp","getup2.bmp"};
int damageindex=0;
bool getupbool=true;
int getupindex=0;

//boss er cordinate
int cordinateofboss=1450;

bool frioleftposition = true;
bool fduckposition = true;
bool fstandposition = true;
bool fjumpposition = true;
int fstandcounter = 0;

/* variable for fire and collision*/
char firepic[][15]={"fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                      "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
					 "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                     "fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp","fire.bmp",
                         };
int fireindex=0;
int arr[1000];
bool fire = true;
int firecounter=1;

/*fuad*/

int fuadSettime=0;
int screenwidth=1530;
int screenheight=800;

int i=0;
int count;
int bgimage,loadimage;
int playbg;
int insbg;
int crimg;
int frstimg,frstimg1,frstimg2;
int hscimg;


int speedforbuulet1=10;
int speedforbuulet2=10;
int speedforbuulet3=10;
int speedforbuulet4=10;

int speedforbulletarr[]={
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10
};

int y123[5];
int homemenu=0;
char playarr[][17]={"images\\play1.bmp","images\\play2.bmp","images\\play3.bmp","images\\play4.bmp","images\\play1.bmp","images\\play2.bmp","images\\play3.bmp","images\\play4.bmp","images\\play1.bmp",
				"images\\play2.bmp","images\\play3.bmp","images\\play4.bmp","images\\play1.bmp","images\\play2.bmp","images\\play3.bmp","images\\play4.bmp","images\\play1.bmp","images\\play2.bmp",
				"images\\play3.bmp","images\\play4.bmp","images\\play1.bmp","images\\play2.bmp","images\\play3.bmp","images\\play4.bmp","images\\play1.bmp","images\\play2.bmp","images\\play3.bmp",
				"images\\play4.bmp","images\\play1.bmp","images\\play2.bmp","images\\play3.bmp","images\\play4.bmp","images\\play1.bmp","images\\play2.bmp","images\\play3.bmp","images\\play4.bmp"
};
char ins[][17]={"images\\ins1.bmp","images\\ins2.bmp","images\\ins3.bmp","images\\ins4.bmp","images\\ins5.bmp","images\\ins6.bmp","images\\ins7.bmp","images\\ins8.bmp","images\\ins9.bmp","images\\ins10.bmp","images\\ins11.bmp","images\\ins12.bmp",
				"images\\ins1.bmp","images\\ins2.bmp","images\\ins3.bmp","images\\ins4.bmp","images\\ins5.bmp","images\\ins6.bmp","images\\ins7.bmp","images\\ins8.bmp","images\\ins9.bmp","images\\ins10.bmp","images\\ins11.bmp","images\\ins12.bmp",
				"images\\ins1.bmp","images\\ins2.bmp","images\\ins3.bmp","images\\ins4.bmp","images\\ins5.bmp","images\\ins6.bmp","images\\ins7.bmp","images\\ins8.bmp","images\\ins9.bmp","images\\ins10.bmp","images\\ins11.bmp","images\\ins12.bmp"
};
char hs[][15]={"images\\hs1.bmp","images\\hs2.bmp","images\\hs3.bmp","images\\hs4.bmp","images\\hs5.bmp","images\\hs6.bmp","images\\hs7.bmp","images\\hs8.bmp","images\\hs9.bmp",
			"images\\hs1.bmp","images\\hs2.bmp","images\\hs3.bmp","images\\hs4.bmp","images\\hs5.bmp","images\\hs6.bmp","images\\hs7.bmp","images\\hs8.bmp","images\\hs9.bmp",
			"images\\hs1.bmp","images\\hs2.bmp","images\\hs3.bmp","images\\hs4.bmp","images\\hs5.bmp","images\\hs6.bmp","images\\hs7.bmp","images\\hs8.bmp","images\\hs9.bmp",
			"images\\hs1.bmp","images\\hs2.bmp","images\\hs3.bmp","images\\hs4.bmp","images\\hs5.bmp","images\\hs6.bmp","images\\hs7.bmp","images\\hs8.bmp","images\\hs9.bmp"
};
char cr[][19]={"images\\credit1.bmp","images\\credit2.bmp","images\\credit3.bmp","images\\credit4.bmp","images\\credit5.bmp","images\\credit6.bmp",
				"images\\credit1.bmp","images\\credit2.bmp","images\\credit3.bmp","images\\credit4.bmp","images\\credit5.bmp","images\\credit6.bmp",
				"images\\credit1.bmp","images\\credit2.bmp","images\\credit3.bmp","images\\credit4.bmp","images\\credit5.bmp","images\\credit6.bmp",
				"images\\credit1.bmp","images\\credit2.bmp","images\\credit3.bmp","images\\credit4.bmp","images\\credit5.bmp","images\\credit6.bmp",
				"images\\credit1.bmp","images\\credit2.bmp","images\\credit3.bmp","images\\credit4.bmp","images\\credit5.bmp","images\\credit6.bmp",
				"images\\credit1.bmp","images\\credit2.bmp","images\\credit3.bmp","images\\credit4.bmp","images\\credit5.bmp","images\\credit6.bmp",
};
char ex[][17]={"images\\exit1.bmp","images\\exit2.bmp","images\\exit3.bmp","images\\exit4.bmp","images\\exit1.bmp","images\\exit2.bmp","images\\exit3.bmp","images\\exit4.bmp",
			"images\\exit1.bmp","images\\exit2.bmp","images\\exit3.bmp","images\\exit4.bmp","images\\exit1.bmp","images\\exit2.bmp","images\\exit3.bmp","images\\exit4.bmp",
			"images\\exit1.bmp","images\\exit2.bmp","images\\exit3.bmp","images\\exit4.bmp","images\\exit1.bmp","images\\exit2.bmp","images\\exit3.bmp","images\\exit4.bmp",
			"images\\exit1.bmp","images\\exit2.bmp","images\\exit3.bmp","images\\exit4.bmp","images\\exit1.bmp","images\\exit2.bmp","images\\exit3.bmp","images\\exit4.bmp",
			"images\\exit1.bmp","images\\exit2.bmp","images\\exit3.bmp","images\\exit4.bmp"
};
// sob gular namer age space deya ache

bool menu=false;
bool play=true;
bool stopplay=true;
int ip;

bool instruction=true;
bool stopinstruction=true;
int is;

bool highScore=true;
bool stophighScore=true;
int ih;


bool credit=true;
bool stopcredit=true;
int ic;

bool exitmenu=true;
bool stopexit=true;
int ie;
int i1=0;

/*fuad 2nd*/
char frioattack[2][15] = {"attack1.bmp","attack2.bmp"};
int fattackindex=0;
bool fattack = true;




/*enemy++ er jonno j bool ta use korsi */


void button()
{
if(menu==true && instruction==true && highScore==true && credit==true && exitmenu==true  && play==true)
	{
	iShowImage(0,0,screenwidth,screenheight,bgimage);
	/*
	stopplay==true
	stopinstruction==true
	tophighScore==true
	stopcredit==true
	stopexit==true
	*/
	//play button running and stop
	if(menu==true && instruction==true && highScore==true && credit==true && exitmenu==true  && play==true && stopplay==true)
	{iShowBMP2(350,600,playarr[i],0);
	 ip=i;
	}
	else if(stopplay==false)
		iShowBMP2(350,600,playarr[ip],0);



	//instruction button running and stop
	if(menu==true && instruction==true && highScore==true && credit==true && exitmenu==true  && play==true && stopinstruction==true)
	{iShowBMP2(300,500,ins[i],0);
	 is=i;
	}
	else if(stopinstruction==false)
		iShowBMP2(300,500,ins[is],0);



	//highscore button running and stop
	if(menu==true && instruction==true && highScore==true && credit==true && exitmenu==true  && play==true && stophighScore==true)
	{iShowBMP2(300,400,hs[i],0);
	 ih=i;
	}
	else if(stophighScore==false)
		iShowBMP2(300,400,hs[ih],0);

	//credit button running and stop
	if(menu==true && instruction==true && highScore==true && credit==true && exitmenu==true  && play==true && stopcredit==true)
	{iShowBMP2(350,300,cr[i],0);
	 ic=i;
	}
	else if(stopcredit==false)
		iShowBMP2(350,300,cr[ic],0);


	 //exit button running and stop
	if(menu==true && instruction==true && highScore==true && credit==true && exitmenu==true  && play==true && stopexit==true)
	{iShowBMP2(350,200,ex[i],0);
	 ie=i;
	}
	else if(stopexit==false)
		iShowBMP2(350,200,ex[ie],0);

	}
}




void fuad()
{
	if(getupbool==false)
	{
		iShowBMP2(fcordinatex,fcordinatey,getup[getupindex],0);
		fstandcounter++;
		if(fstandcounter>=3)
		{
			fstandcounter=0;
			getupindex++;
			if(getupindex>1)
			{
				getupindex=0;
				getupbool=true;
			}
		}
	}


    else if(!damagebool)
	{
		iShowBMP2(fcordinatex,0,damagearray[damageindex],0);
		fstandcounter++;
	if(fstandcounter>=3)
	{
		fstandcounter = 0;
		if(damageindex<4)
		damageindex++;
		else if(damageindex==4)
			damageindex +=0;
		damagebool=false;
		if(damageindex>4){
			damageindex=4;
			//damagebool=true;
		}
	}
	}

	else if(!fstandposition){
	iShowBMP2(fcordinatex,fcordinatey,frio[frioindex],0);
	fstandcounter++;
	if(fstandcounter>=5)
	{
		fstandcounter = 0;
		//frioindex=0;
		fstandposition = true;
	}
	}

	else if(!frioleftposition){
	iShowBMP2(fcordinatex,fcordinatey,frioleft[frioindex],0);
	fstandcounter++;
	if(fstandcounter>=5)
	{
		fstandcounter = 0;
		//frioindex=0;
		frioleftposition = true;
	}
	}
	
	else if(!fjumpposition)
		iShowBMP2(fcordinatex,fcordinatey,"jump.bmp",255);
	else if(!fduckposition)
	{
		iShowBMP2(fcordinatex,fcordinatey,"duck.bmp",255);
		fstandcounter++;
	if(fstandcounter>=5)
	{
		fstandcounter = 0;
		//frioindex=0;
		fduckposition = true;
	}
	}
	else if(!fattack)
	{
		iShowBMP2(fcordinatex,fcordinatey,frioattack[fattackindex],0);

	}
	
	else
	{
		
			iShowBMP2(fcordinatex,fcordinatey,"10.bmp",0);
		
	}
	
	
	 if(!fire){
		{
if(fireindex>=1){
			iShowBMP2(arr[1],850,"fire.bmp",0);
			arr[1]+=speedforbulletarr[1];
			}if(fireindex>=2){
			iShowBMP2(arr[2],30,"fire.bmp",0);
			arr[2]+=speedforbulletarr[2];
			}if(fireindex>=3){
			iShowBMP2(arr[3],30,"fire.bmp",0);
			arr[3]+=speedforbulletarr[3];
			}if(fireindex>=4){
			iShowBMP2(arr[4],30,"fire.bmp",0);
			arr[4]+=speedforbulletarr[4];
			}if(fireindex>=5){
			iShowBMP2(arr[5],30,"fire.bmp",0);
			arr[5]+=speedforbulletarr[5];
			}if(fireindex>=6){
			iShowBMP2(arr[6],30,"fire.bmp",0);
			arr[6]+=speedforbulletarr[6];
			}if(fireindex>=7){
			iShowBMP2(arr[7],30,"fire.bmp",0);
			arr[7]+=speedforbulletarr[7];
			}if(fireindex>=8){
			iShowBMP2(arr[8],30,"fire.bmp",0);
			arr[8]+=speedforbulletarr[8];
			}if(fireindex>=9){
			iShowBMP2(arr[9],30,"fire.bmp",0);
			arr[9]+=speedforbulletarr[9];
			}if(fireindex>=10){
			iShowBMP2(arr[10],30,"fire.bmp",0);
			arr[10]+=speedforbulletarr[10];
			}if(fireindex>=11){
			iShowBMP2(arr[11],30,"fire.bmp",0);
			arr[11]+=speedforbulletarr[11];
			}if(fireindex>=12){
			iShowBMP2(arr[12],30,"fire.bmp",0);
			arr[12]+=speedforbulletarr[12];
			}if(fireindex>=13){
			iShowBMP2(arr[13],30,"fire.bmp",0);
			arr[13]+=speedforbulletarr[13];
			}if(fireindex>=14){
			iShowBMP2(arr[14],30,"fire.bmp",0);
			arr[14]+=speedforbulletarr[14];
			}if(fireindex>=15){
			iShowBMP2(arr[15],30,"fire.bmp",0);
			arr[15]+=speedforbulletarr[15];
			}if(fireindex>=16){
			iShowBMP2(arr[16],30,"fire.bmp",0);
			arr[16]+=speedforbulletarr[16];
			}if(fireindex>=17){
			iShowBMP2(arr[17],30,"fire.bmp",0);
			arr[17]+=speedforbulletarr[17];
			}if(fireindex>=18){
			iShowBMP2(arr[18],30,"fire.bmp",0);
			arr[18]+=speedforbulletarr[18];
			}if(fireindex>=19){
			iShowBMP2(arr[19],30,"fire.bmp",0);
			arr[19]+=speedforbulletarr[19];
			}if(fireindex>=20){
			iShowBMP2(arr[20],30,"fire.bmp",0);
			arr[20]+=speedforbulletarr[20];
			}if(fireindex>=21){
			iShowBMP2(arr[21],30,"fire.bmp",0);
			arr[21]+=speedforbulletarr[21];
			}if(fireindex>=22){
			iShowBMP2(arr[22],30,"fire.bmp",0);
			arr[22]+=speedforbulletarr[22];
			}if(fireindex>=23){
			iShowBMP2(arr[23],30,"fire.bmp",0);
			arr[23]+=speedforbulletarr[23];
			}if(fireindex>=24){
			iShowBMP2(arr[24],30,"fire.bmp",0);
			arr[24]+=speedforbulletarr[24];
			}if(fireindex>=25){
			iShowBMP2(arr[25],30,"fire.bmp",0);
			arr[25]+=speedforbulletarr[25];
			}if(fireindex>=26){
			iShowBMP2(arr[26],30,"fire.bmp",0);
			arr[26]+=speedforbulletarr[26];
			}if(fireindex>=27){
			iShowBMP2(arr[27],30,"fire.bmp",0);
			arr[27]+=speedforbulletarr[27];
			}if(fireindex>=28){
			iShowBMP2(arr[28],30,"fire.bmp",0);
			arr[28]+=speedforbulletarr[28];
			}if(fireindex>=29){
			iShowBMP2(arr[29],30,"fire.bmp",0);
			arr[29]+=speedforbulletarr[29];
			}if(fireindex>=30){
			iShowBMP2(arr[30],30,"fire.bmp",0);
			arr[30]+=speedforbulletarr[30];
			}if(fireindex>=31){
			iShowBMP2(arr[31],30,"fire.bmp",0);
			arr[31]+=speedforbulletarr[31];
			}if(fireindex>=32){
			iShowBMP2(arr[32],30,"fire.bmp",0);
			arr[32]+=speedforbulletarr[32];
			}if(fireindex>=33){
			iShowBMP2(arr[33],30,"fire.bmp",0);
			arr[33]+=speedforbulletarr[33];
			}if(fireindex>=34){
			iShowBMP2(arr[34],30,"fire.bmp",0);
			arr[34]+=speedforbulletarr[34];
			}if(fireindex>=35){
			iShowBMP2(arr[35],30,"fire.bmp",0);
			arr[35]+=speedforbulletarr[35];
			}if(fireindex>=36){
			iShowBMP2(arr[36],30,"fire.bmp",0);
			arr[36]+=speedforbulletarr[36];
			}if(fireindex>=37){
			iShowBMP2(arr[37],30,"fire.bmp",0);
			arr[37]+=speedforbulletarr[37];
			}if(fireindex>=38){
			iShowBMP2(arr[38],30,"fire.bmp",0);
			arr[38]+=speedforbulletarr[38];
			}if(fireindex>=39){
			iShowBMP2(arr[39],30,"fire.bmp",0);
			arr[39]+=speedforbulletarr[39];
			}if(fireindex>=40){
			iShowBMP2(arr[40],30,"fire.bmp",0);
			arr[40]+=speedforbulletarr[40];
			}if(fireindex>=41){
			iShowBMP2(arr[41],30,"fire.bmp",0);
			arr[41]+=speedforbulletarr[41];
			}if(fireindex>=42){
			iShowBMP2(arr[42],30,"fire.bmp",0);
			arr[42]+=speedforbulletarr[42];
			}if(fireindex>=43){
			iShowBMP2(arr[43],30,"fire.bmp",0);
			arr[43]+=speedforbulletarr[43];
			}if(fireindex>=44){
			iShowBMP2(arr[44],30,"fire.bmp",0);
			arr[44]+=speedforbulletarr[44];
			}if(fireindex>=45){
			iShowBMP2(arr[45],30,"fire.bmp",0);
			arr[45]+=speedforbulletarr[45];
			}if(fireindex>=46){
			iShowBMP2(arr[46],30,"fire.bmp",0);
			arr[46]+=speedforbulletarr[46];
			}if(fireindex>=47){
			iShowBMP2(arr[47],30,"fire.bmp",0);
			arr[47]+=speedforbulletarr[47];
			}if(fireindex>=48){
			iShowBMP2(arr[48],30,"fire.bmp",0);
			arr[48]+=speedforbulletarr[48];
			}if(fireindex>=49){
			iShowBMP2(arr[49],30,"fire.bmp",0);
			arr[49]+=speedforbulletarr[49];
			}if(fireindex>=50){
			iShowBMP2(arr[50],30,"fire.bmp",0);
			arr[50]+=speedforbulletarr[50];
			}if(fireindex>=51){
			iShowBMP2(arr[51],30,"fire.bmp",0);
			arr[51]+=speedforbulletarr[51];
			}if(fireindex>=52){
			iShowBMP2(arr[52],30,"fire.bmp",0);
			arr[52]+=speedforbulletarr[52];
			}if(fireindex>=53){
			iShowBMP2(arr[53],30,"fire.bmp",0);
			arr[53]+=speedforbulletarr[53];
			}if(fireindex>=54){
			iShowBMP2(arr[54],30,"fire.bmp",0);
			arr[54]+=speedforbulletarr[54];
			}if(fireindex>=55){
			iShowBMP2(arr[55],30,"fire.bmp",0);
			arr[55]+=speedforbulletarr[55];
			}if(fireindex>=56){
			iShowBMP2(arr[56],30,"fire.bmp",0);
			arr[56]+=speedforbulletarr[56];
			}if(fireindex>=57){
			iShowBMP2(arr[57],30,"fire.bmp",0);
			arr[57]+=speedforbulletarr[57];
			}if(fireindex>=58){
			iShowBMP2(arr[58],30,"fire.bmp",0);
			arr[58]+=speedforbulletarr[58];
			}if(fireindex>=59){
			iShowBMP2(arr[59],30,"fire.bmp",0);
			arr[59]+=speedforbulletarr[59];
			}if(fireindex>=60){
			iShowBMP2(arr[60],30,"fire.bmp",0);
			arr[60]+=speedforbulletarr[60];
			}if(fireindex>=61){
			iShowBMP2(arr[61],30,"fire.bmp",0);
			arr[61]+=speedforbulletarr[61];
			}if(fireindex>=62){
			iShowBMP2(arr[62],30,"fire.bmp",0);
			arr[62]+=speedforbulletarr[62];
			}if(fireindex>=63){
			iShowBMP2(arr[63],30,"fire.bmp",0);
			arr[63]+=speedforbulletarr[63];
			}if(fireindex>=64){
			iShowBMP2(arr[64],30,"fire.bmp",0);
			arr[64]+=speedforbulletarr[64];
			}if(fireindex>=65){
			iShowBMP2(arr[65],30,"fire.bmp",0);
			arr[65]+=speedforbulletarr[65];
			}if(fireindex>=66){
			iShowBMP2(arr[66],30,"fire.bmp",0);
			arr[66]+=speedforbulletarr[66];
			}if(fireindex>=67){
			iShowBMP2(arr[67],30,"fire.bmp",0);
			arr[67]+=speedforbulletarr[67];
			}if(fireindex>=68){
			iShowBMP2(arr[68],30,"fire.bmp",0);
			arr[68]+=speedforbulletarr[68];
			}if(fireindex>=69){
			iShowBMP2(arr[69],30,"fire.bmp",0);
			arr[69]+=speedforbulletarr[69];
			}if(fireindex>=70){
			iShowBMP2(arr[70],30,"fire.bmp",0);
			arr[70]+=speedforbulletarr[70];
			}if(fireindex>=71){
			iShowBMP2(arr[71],30,"fire.bmp",0);
			arr[71]+=speedforbulletarr[71];
			}if(fireindex>=72){
			iShowBMP2(arr[72],30,"fire.bmp",0);
			arr[72]+=speedforbulletarr[72];
			}if(fireindex>=73){
			iShowBMP2(arr[73],30,"fire.bmp",0);
			arr[73]+=speedforbulletarr[73];
			}if(fireindex>=74){
			iShowBMP2(arr[74],30,"fire.bmp",0);
			arr[74]+=speedforbulletarr[74];
			}if(fireindex>=75){
			iShowBMP2(arr[75],30,"fire.bmp",0);
			arr[75]+=speedforbulletarr[75];
			}if(fireindex>=76){
			iShowBMP2(arr[76],30,"fire.bmp",0);
			arr[76]+=speedforbulletarr[76];
			}if(fireindex>=77){
			iShowBMP2(arr[77],30,"fire.bmp",0);
			arr[77]+=speedforbulletarr[77];
			}if(fireindex>=78){
			iShowBMP2(arr[78],30,"fire.bmp",0);
			arr[78]+=speedforbulletarr[78];
			}if(fireindex>=79){
			iShowBMP2(arr[79],30,"fire.bmp",0);
			arr[79]+=speedforbulletarr[79];
			}if(fireindex>=80){
			iShowBMP2(arr[80],30,"fire.bmp",0);
			arr[80]+=speedforbulletarr[80];
			}if(fireindex>=81){
			iShowBMP2(arr[81],30,"fire.bmp",0);
			arr[81]+=speedforbulletarr[81];
			}if(fireindex>=82){
			iShowBMP2(arr[82],30,"fire.bmp",0);
			arr[82]+=speedforbulletarr[82];
			}if(fireindex>=83){
			iShowBMP2(arr[83],30,"fire.bmp",0);
			arr[83]+=speedforbulletarr[83];
			}if(fireindex>=84){
			iShowBMP2(arr[84],30,"fire.bmp",0);
			arr[84]+=speedforbulletarr[84];
			}if(fireindex>=85){
			iShowBMP2(arr[85],30,"fire.bmp",0);
			arr[85]+=speedforbulletarr[85];
			}if(fireindex>=86){
			iShowBMP2(arr[86],30,"fire.bmp",0);
			arr[86]+=speedforbulletarr[86];
			}if(fireindex>=87){
			iShowBMP2(arr[87],30,"fire.bmp",0);
			arr[87]+=speedforbulletarr[87];
			}if(fireindex>=88){
			iShowBMP2(arr[88],30,"fire.bmp",0);
			arr[88]+=speedforbulletarr[88];
			}if(fireindex>=89){
			iShowBMP2(arr[89],30,"fire.bmp",0);
			arr[89]+=speedforbulletarr[89];
			}if(fireindex>=90){
			iShowBMP2(arr[90],30,"fire.bmp",0);
			arr[90]+=speedforbulletarr[90];
			}if(fireindex>=91){
			iShowBMP2(arr[91],30,"fire.bmp",0);
			arr[91]+=speedforbulletarr[91];
			}if(fireindex>=92){
			iShowBMP2(arr[92],30,"fire.bmp",0);
			arr[92]+=speedforbulletarr[92];
			}if(fireindex>=93){
			iShowBMP2(arr[93],30,"fire.bmp",0);
			arr[93]+=speedforbulletarr[93];
			}if(fireindex>=94){
			iShowBMP2(arr[94],30,"fire.bmp",0);
			arr[94]+=speedforbulletarr[94];
			}if(fireindex>=95){
			iShowBMP2(arr[95],30,"fire.bmp",0);
			arr[95]+=speedforbulletarr[95];
			}if(fireindex>=96){
			iShowBMP2(arr[96],30,"fire.bmp",0);
			arr[96]+=speedforbulletarr[96];
			}if(fireindex>=97){
			iShowBMP2(arr[97],30,"fire.bmp",0);
			arr[97]+=speedforbulletarr[97];
			}if(fireindex>=98){
			iShowBMP2(arr[98],30,"fire.bmp",0);
			arr[98]+=speedforbulletarr[98];
			}if(fireindex>=99){
			iShowBMP2(arr[99],30,"fire.bmp",0);
			arr[99]+=speedforbulletarr[99];
			}if(fireindex>=100){
			iShowBMP2(arr[100],30,"fire.bmp",0);
			arr[100]+=speedforbulletarr[100];
			}if(fireindex>=101){
			iShowBMP2(arr[101],30,"fire.bmp",0);
			arr[101]+=speedforbulletarr[101];
			}if(fireindex>=102){
			iShowBMP2(arr[102],30,"fire.bmp",0);
			arr[102]+=speedforbulletarr[102];
			}if(fireindex>=103){
			iShowBMP2(arr[103],30,"fire.bmp",0);
			arr[103]+=speedforbulletarr[103];
			}if(fireindex>=104){
			iShowBMP2(arr[104],30,"fire.bmp",0);
			arr[104]+=speedforbulletarr[104];
			}if(fireindex>=105){
			iShowBMP2(arr[105],30,"fire.bmp",0);
			arr[105]+=speedforbulletarr[105];
			}if(fireindex>=106){
			iShowBMP2(arr[106],30,"fire.bmp",0);
			arr[106]+=speedforbulletarr[106];
			}if(fireindex>=107){
			iShowBMP2(arr[107],30,"fire.bmp",0);
			arr[107]+=speedforbulletarr[107];
			}if(fireindex>=108){
			iShowBMP2(arr[108],30,"fire.bmp",0);
			arr[108]+=speedforbulletarr[108];
			}if(fireindex>=109){
			iShowBMP2(arr[109],30,"fire.bmp",0);
			arr[109]+=speedforbulletarr[109];
			}if(fireindex>=110){
			iShowBMP2(arr[110],30,"fire.bmp",0);
			arr[110]+=speedforbulletarr[110];
			}if(fireindex>=111){
			iShowBMP2(arr[111],30,"fire.bmp",0);
			arr[111]+=speedforbulletarr[111];
			}if(fireindex>=112){
			iShowBMP2(arr[112],30,"fire.bmp",0);
			arr[112]+=speedforbulletarr[112];
			}if(fireindex>=113){
			iShowBMP2(arr[113],30,"fire.bmp",0);
			arr[113]+=speedforbulletarr[113];
			}if(fireindex>=114){
			iShowBMP2(arr[114],30,"fire.bmp",0);
			arr[114]+=speedforbulletarr[114];
			}if(fireindex>=115){
			iShowBMP2(arr[115],30,"fire.bmp",0);
			arr[115]+=speedforbulletarr[115];
			}if(fireindex>=116){
			iShowBMP2(arr[116],30,"fire.bmp",0);
			arr[116]+=speedforbulletarr[116];
			}if(fireindex>=117){
			iShowBMP2(arr[117],30,"fire.bmp",0);
			arr[117]+=speedforbulletarr[117];
			}if(fireindex>=118){
			iShowBMP2(arr[118],30,"fire.bmp",0);
			arr[118]+=speedforbulletarr[118];
			}if(fireindex>=119){
			iShowBMP2(arr[119],30,"fire.bmp",0);
			arr[119]+=speedforbulletarr[119];
			}if(fireindex>=120){
			iShowBMP2(arr[120],30,"fire.bmp",0);
			arr[120]+=speedforbulletarr[120];
			}if(fireindex>=121){
			iShowBMP2(arr[121],30,"fire.bmp",0);
			arr[121]+=speedforbulletarr[121];
			}if(fireindex>=122){
			iShowBMP2(arr[122],30,"fire.bmp",0);
			arr[122]+=speedforbulletarr[122];
			}if(fireindex>=123){
			iShowBMP2(arr[123],30,"fire.bmp",0);
			arr[123]+=speedforbulletarr[123];
			}if(fireindex>=124){
			iShowBMP2(arr[124],30,"fire.bmp",0);
			arr[124]+=speedforbulletarr[124];
			}if(fireindex>=125){
			iShowBMP2(arr[125],30,"fire.bmp",0);
			arr[125]+=speedforbulletarr[125];
			}if(fireindex>=126){
			iShowBMP2(arr[126],30,"fire.bmp",0);
			arr[126]+=speedforbulletarr[126];
			}if(fireindex>=127){
			iShowBMP2(arr[127],30,"fire.bmp",0);
			arr[127]+=speedforbulletarr[127];
			}if(fireindex>=128){
			iShowBMP2(arr[128],30,"fire.bmp",0);
			arr[128]+=speedforbulletarr[128];
			}if(fireindex>=129){
			iShowBMP2(arr[129],30,"fire.bmp",0);
			arr[129]+=speedforbulletarr[129];
			}if(fireindex>=130){
			iShowBMP2(arr[130],30,"fire.bmp",0);
			arr[130]+=speedforbulletarr[130];
			}if(fireindex>=131){
			iShowBMP2(arr[131],30,"fire.bmp",0);
			arr[131]+=speedforbulletarr[131];
			}if(fireindex>=132){
			iShowBMP2(arr[132],30,"fire.bmp",0);
			arr[132]+=speedforbulletarr[132];
			}if(fireindex>=133){
			iShowBMP2(arr[133],30,"fire.bmp",0);
			arr[133]+=speedforbulletarr[133];
			}if(fireindex>=134){
			iShowBMP2(arr[134],30,"fire.bmp",0);
			arr[134]+=speedforbulletarr[134];
			}if(fireindex>=135){
			iShowBMP2(arr[135],30,"fire.bmp",0);
			arr[135]+=speedforbulletarr[135];
			}if(fireindex>=136){
			iShowBMP2(arr[136],30,"fire.bmp",0);
			arr[136]+=speedforbulletarr[136];
			}if(fireindex>=137){
			iShowBMP2(arr[137],30,"fire.bmp",0);
			arr[137]+=speedforbulletarr[137];
			}if(fireindex>=138){
			iShowBMP2(arr[138],30,"fire.bmp",0);
			arr[138]+=speedforbulletarr[138];
			}if(fireindex>=139){
			iShowBMP2(arr[139],30,"fire.bmp",0);
			arr[139]+=speedforbulletarr[139];
			}if(fireindex>=140){
			iShowBMP2(arr[140],30,"fire.bmp",0);
			arr[140]+=speedforbulletarr[140];
			}if(fireindex>=141){
			iShowBMP2(arr[141],30,"fire.bmp",0);
			arr[141]+=speedforbulletarr[141];
			}if(fireindex>=142){
			iShowBMP2(arr[142],30,"fire.bmp",0);
			arr[142]+=speedforbulletarr[142];
			}if(fireindex>=143){
			iShowBMP2(arr[143],30,"fire.bmp",0);
			arr[143]+=speedforbulletarr[143];
			}if(fireindex>=144){
			iShowBMP2(arr[144],30,"fire.bmp",0);
			arr[144]+=speedforbulletarr[144];
			}if(fireindex>=145){
			iShowBMP2(arr[145],30,"fire.bmp",0);
			arr[145]+=speedforbulletarr[145];
			}if(fireindex>=146){
			iShowBMP2(arr[146],30,"fire.bmp",0);
			arr[146]+=speedforbulletarr[146];
			}if(fireindex>=147){
			iShowBMP2(arr[147],30,"fire.bmp",0);
			arr[147]+=speedforbulletarr[147];
			}if(fireindex>=148){
			iShowBMP2(arr[148],30,"fire.bmp",0);
			arr[148]+=speedforbulletarr[148];
			}if(fireindex>=149){
			iShowBMP2(arr[149],30,"fire.bmp",0);
			arr[149]+=speedforbulletarr[149];
			}if(fireindex>=150){
			iShowBMP2(arr[150],30,"fire.bmp",0);
			arr[150]+=speedforbulletarr[150];
			}if(fireindex>=151){
			iShowBMP2(arr[151],30,"fire.bmp",0);
			arr[151]+=speedforbulletarr[151];
			}if(fireindex>=152){
			iShowBMP2(arr[152],30,"fire.bmp",0);
			arr[152]+=speedforbulletarr[152];
			}if(fireindex>=153){
			iShowBMP2(arr[153],30,"fire.bmp",0);
			arr[153]+=speedforbulletarr[153];
			}if(fireindex>=154){
			iShowBMP2(arr[154],30,"fire.bmp",0);
			arr[154]+=speedforbulletarr[154];
			}if(fireindex>=155){
			iShowBMP2(arr[155],30,"fire.bmp",0);
			arr[155]+=speedforbulletarr[155];
			}if(fireindex>=156){
			iShowBMP2(arr[156],30,"fire.bmp",0);
			arr[156]+=speedforbulletarr[156];
			}if(fireindex>=157){
			iShowBMP2(arr[157],30,"fire.bmp",0);
			arr[157]+=speedforbulletarr[157];
			}if(fireindex>=158){
			iShowBMP2(arr[158],30,"fire.bmp",0);
			arr[158]+=speedforbulletarr[158];
			}if(fireindex>=159){
			iShowBMP2(arr[159],30,"fire.bmp",0);
			arr[159]+=speedforbulletarr[159];
			}if(fireindex>=160){
			iShowBMP2(arr[160],30,"fire.bmp",0);
			arr[160]+=speedforbulletarr[160];
			}if(fireindex>=161){
			iShowBMP2(arr[161],30,"fire.bmp",0);
			arr[161]+=speedforbulletarr[161];
			}if(fireindex>=162){
			iShowBMP2(arr[162],30,"fire.bmp",0);
			arr[162]+=speedforbulletarr[162];
			}if(fireindex>=163){
			iShowBMP2(arr[163],30,"fire.bmp",0);
			arr[163]+=speedforbulletarr[163];
			}if(fireindex>=164){
			iShowBMP2(arr[164],30,"fire.bmp",0);
			arr[164]+=speedforbulletarr[164];
			}if(fireindex>=165){
			iShowBMP2(arr[165],30,"fire.bmp",0);
			arr[165]+=speedforbulletarr[165];
			}if(fireindex>=166){
			iShowBMP2(arr[166],30,"fire.bmp",0);
			arr[166]+=speedforbulletarr[166];
			}if(fireindex>=167){
			iShowBMP2(arr[167],30,"fire.bmp",0);
			arr[167]+=speedforbulletarr[167];
			}if(fireindex>=168){
			iShowBMP2(arr[168],30,"fire.bmp",0);
			arr[168]+=speedforbulletarr[168];
			}if(fireindex>=169){
			iShowBMP2(arr[169],30,"fire.bmp",0);
			arr[169]+=speedforbulletarr[169];
			}if(fireindex>=170){
			iShowBMP2(arr[170],30,"fire.bmp",0);
			arr[170]+=speedforbulletarr[170];
			}if(fireindex>=171){
			iShowBMP2(arr[171],30,"fire.bmp",0);
			arr[171]+=speedforbulletarr[171];
			}if(fireindex>=172){
			iShowBMP2(arr[172],30,"fire.bmp",0);
			arr[172]+=speedforbulletarr[172];
			}if(fireindex>=173){
			iShowBMP2(arr[173],30,"fire.bmp",0);
			arr[173]+=speedforbulletarr[173];
			}if(fireindex>=174){
			iShowBMP2(arr[174],30,"fire.bmp",0);
			arr[174]+=speedforbulletarr[174];
			}if(fireindex>=175){
			iShowBMP2(arr[175],30,"fire.bmp",0);
			arr[175]+=speedforbulletarr[175];
			}if(fireindex>=176){
			iShowBMP2(arr[176],30,"fire.bmp",0);
			arr[176]+=speedforbulletarr[176];
			}if(fireindex>=177){
			iShowBMP2(arr[177],30,"fire.bmp",0);
			arr[177]+=speedforbulletarr[177];
			}if(fireindex>=178){
			iShowBMP2(arr[178],30,"fire.bmp",0);
			arr[178]+=speedforbulletarr[178];
			}if(fireindex>=179){
			iShowBMP2(arr[179],30,"fire.bmp",0);
			arr[179]+=speedforbulletarr[179];
			}if(fireindex>=180){
			iShowBMP2(arr[180],30,"fire.bmp",0);
			arr[180]+=speedforbulletarr[180];
			}if(fireindex>=181){
			iShowBMP2(arr[181],30,"fire.bmp",0);
			arr[181]+=speedforbulletarr[181];
			}if(fireindex>=182){
			iShowBMP2(arr[182],30,"fire.bmp",0);
			arr[182]+=speedforbulletarr[182];
			}if(fireindex>=183){
			iShowBMP2(arr[183],30,"fire.bmp",0);
			arr[183]+=speedforbulletarr[183];
			}if(fireindex>=184){
			iShowBMP2(arr[184],30,"fire.bmp",0);
			arr[184]+=speedforbulletarr[184];
			}if(fireindex>=185){
			iShowBMP2(arr[185],30,"fire.bmp",0);
			arr[185]+=speedforbulletarr[185];
			}if(fireindex>=186){
			iShowBMP2(arr[186],30,"fire.bmp",0);
			arr[186]+=speedforbulletarr[186];
			}if(fireindex>=187){
			iShowBMP2(arr[187],30,"fire.bmp",0);
			arr[187]+=speedforbulletarr[187];
			}if(fireindex>=188){
			iShowBMP2(arr[188],30,"fire.bmp",0);
			arr[188]+=speedforbulletarr[188];
			}if(fireindex>=189){
			iShowBMP2(arr[189],30,"fire.bmp",0);
			arr[189]+=speedforbulletarr[189];
			}if(fireindex>=190){
			iShowBMP2(arr[190],30,"fire.bmp",0);
			arr[190]+=speedforbulletarr[190];
			}if(fireindex>=191){
			iShowBMP2(arr[191],30,"fire.bmp",0);
			arr[191]+=speedforbulletarr[191];
			}if(fireindex>=192){
			iShowBMP2(arr[192],30,"fire.bmp",0);
			arr[192]+=speedforbulletarr[192];
			}if(fireindex>=193){
			iShowBMP2(arr[193],30,"fire.bmp",0);
			arr[193]+=speedforbulletarr[193];
			}if(fireindex>=194){
			iShowBMP2(arr[194],30,"fire.bmp",0);
			arr[194]+=speedforbulletarr[194];
			}if(fireindex>=195){
			iShowBMP2(arr[195],30,"fire.bmp",0);
			arr[195]+=speedforbulletarr[195];
			}if(fireindex>=196){
			iShowBMP2(arr[196],30,"fire.bmp",0);
			arr[196]+=speedforbulletarr[196];
			}if(fireindex>=197){
			iShowBMP2(arr[197],30,"fire.bmp",0);
			arr[197]+=speedforbulletarr[197];
			}if(fireindex>=198){
			iShowBMP2(arr[198],30,"fire.bmp",0);
			arr[198]+=speedforbulletarr[198];
			}if(fireindex>=199){
			iShowBMP2(arr[199],30,"fire.bmp",0);
			arr[199]+=speedforbulletarr[199];
			}if(fireindex>=200){
			iShowBMP2(arr[200],30,"fire.bmp",0);
			arr[200]+=speedforbulletarr[200];
			}if(fireindex>=201){
			iShowBMP2(arr[201],30,"fire.bmp",0);
			arr[201]+=speedforbulletarr[201];
			}if(fireindex>=202){
			iShowBMP2(arr[202],30,"fire.bmp",0);
			arr[202]+=speedforbulletarr[202];
			}if(fireindex>=203){
			iShowBMP2(arr[203],30,"fire.bmp",0);
			arr[203]+=speedforbulletarr[203];
			}if(fireindex>=204){
			iShowBMP2(arr[204],30,"fire.bmp",0);
			arr[204]+=speedforbulletarr[204];
			}if(fireindex>=205){
			iShowBMP2(arr[205],30,"fire.bmp",0);
			arr[205]+=speedforbulletarr[205];
			}if(fireindex>=206){
			iShowBMP2(arr[206],30,"fire.bmp",0);
			arr[206]+=speedforbulletarr[206];
			}if(fireindex>=207){
			iShowBMP2(arr[207],30,"fire.bmp",0);
			arr[207]+=speedforbulletarr[207];
			}if(fireindex>=208){
			iShowBMP2(arr[208],30,"fire.bmp",0);
			arr[208]+=speedforbulletarr[208];
			}if(fireindex>=209){
			iShowBMP2(arr[209],30,"fire.bmp",0);
			arr[209]+=speedforbulletarr[209];
			}if(fireindex>=210){
			iShowBMP2(arr[210],30,"fire.bmp",0);
			arr[210]+=speedforbulletarr[210];
			}if(fireindex>=211){
			iShowBMP2(arr[211],30,"fire.bmp",0);
			arr[211]+=speedforbulletarr[211];
			}if(fireindex>=212){
			iShowBMP2(arr[212],30,"fire.bmp",0);
			arr[212]+=speedforbulletarr[212];
			}if(fireindex>=213){
			iShowBMP2(arr[213],30,"fire.bmp",0);
			arr[213]+=speedforbulletarr[213];
			}if(fireindex>=214){
			iShowBMP2(arr[214],30,"fire.bmp",0);
			arr[214]+=speedforbulletarr[214];
			}if(fireindex>=215){
			iShowBMP2(arr[215],30,"fire.bmp",0);
			arr[215]+=speedforbulletarr[215];
			}if(fireindex>=216){
			iShowBMP2(arr[216],30,"fire.bmp",0);
			arr[216]+=speedforbulletarr[216];
			}if(fireindex>=217){
			iShowBMP2(arr[217],30,"fire.bmp",0);
			arr[217]+=speedforbulletarr[217];
			}if(fireindex>=218){
			iShowBMP2(arr[218],30,"fire.bmp",0);
			arr[218]+=speedforbulletarr[218];
			}if(fireindex>=219){
			iShowBMP2(arr[219],30,"fire.bmp",0);
			arr[219]+=speedforbulletarr[219];
			}if(fireindex>=220){
			iShowBMP2(arr[220],30,"fire.bmp",0);
			arr[220]+=speedforbulletarr[220];
			}if(fireindex>=221){
			iShowBMP2(arr[221],30,"fire.bmp",0);
			arr[221]+=speedforbulletarr[221];
			}if(fireindex>=222){
			iShowBMP2(arr[222],30,"fire.bmp",0);
			arr[222]+=speedforbulletarr[222];
			}if(fireindex>=223){
			iShowBMP2(arr[223],30,"fire.bmp",0);
			arr[223]+=speedforbulletarr[223];
			}if(fireindex>=224){
			iShowBMP2(arr[224],30,"fire.bmp",0);
			arr[224]+=speedforbulletarr[224];
			}if(fireindex>=225){
			iShowBMP2(arr[225],30,"fire.bmp",0);
			arr[225]+=speedforbulletarr[225];
			}if(fireindex>=226){
			iShowBMP2(arr[226],30,"fire.bmp",0);
			arr[226]+=speedforbulletarr[226];
			}if(fireindex>=227){
			iShowBMP2(arr[227],30,"fire.bmp",0);
			arr[227]+=speedforbulletarr[227];
			}if(fireindex>=228){
			iShowBMP2(arr[228],30,"fire.bmp",0);
			arr[228]+=speedforbulletarr[228];
			}if(fireindex>=229){
			iShowBMP2(arr[229],30,"fire.bmp",0);
			arr[229]+=speedforbulletarr[229];
			}if(fireindex>=230){
			iShowBMP2(arr[230],30,"fire.bmp",0);
			arr[230]+=speedforbulletarr[230];
			}if(fireindex>=231){
			iShowBMP2(arr[231],30,"fire.bmp",0);
			arr[231]+=speedforbulletarr[231];
			}if(fireindex>=232){
			iShowBMP2(arr[232],30,"fire.bmp",0);
			arr[232]+=speedforbulletarr[232];
			}if(fireindex>=233){
			iShowBMP2(arr[233],30,"fire.bmp",0);
			arr[233]+=speedforbulletarr[233];
			}if(fireindex>=234){
			iShowBMP2(arr[234],30,"fire.bmp",0);
			arr[234]+=speedforbulletarr[234];
			}if(fireindex>=235){
			iShowBMP2(arr[235],30,"fire.bmp",0);
			arr[235]+=speedforbulletarr[235];
			}if(fireindex>=236){
			iShowBMP2(arr[236],30,"fire.bmp",0);
			arr[236]+=speedforbulletarr[236];
			}if(fireindex>=237){
			iShowBMP2(arr[237],30,"fire.bmp",0);
			arr[237]+=speedforbulletarr[237];
			}if(fireindex>=238){
			iShowBMP2(arr[238],30,"fire.bmp",0);
			arr[238]+=speedforbulletarr[238];
			}if(fireindex>=239){
			iShowBMP2(arr[239],30,"fire.bmp",0);
			arr[239]+=speedforbulletarr[239];
			}if(fireindex>=240){
			iShowBMP2(arr[240],30,"fire.bmp",0);
			arr[240]+=speedforbulletarr[240];
			}if(fireindex>=241){
			iShowBMP2(arr[241],30,"fire.bmp",0);
			arr[241]+=speedforbulletarr[241];
			}if(fireindex>=242){
			iShowBMP2(arr[242],30,"fire.bmp",0);
			arr[242]+=speedforbulletarr[242];
			}if(fireindex>=243){
			iShowBMP2(arr[243],30,"fire.bmp",0);
			arr[243]+=speedforbulletarr[243];
			}if(fireindex>=244){
			iShowBMP2(arr[244],30,"fire.bmp",0);
			arr[244]+=speedforbulletarr[244];
			}if(fireindex>=245){
			iShowBMP2(arr[245],30,"fire.bmp",0);
			arr[245]+=speedforbulletarr[245];
			}if(fireindex>=246){
			iShowBMP2(arr[246],30,"fire.bmp",0);
			arr[246]+=speedforbulletarr[246];
			}if(fireindex>=247){
			iShowBMP2(arr[247],30,"fire.bmp",0);
			arr[247]+=speedforbulletarr[247];
			}if(fireindex>=248){
			iShowBMP2(arr[248],30,"fire.bmp",0);
			arr[248]+=speedforbulletarr[248];
			}if(fireindex>=249){
			iShowBMP2(arr[249],30,"fire.bmp",0);
			arr[249]+=speedforbulletarr[249];
			}if(fireindex>=250){
			iShowBMP2(arr[250],30,"fire.bmp",0);
			arr[250]+=speedforbulletarr[250];
			}if(fireindex>=251){
			iShowBMP2(arr[251],30,"fire.bmp",0);
			arr[251]+=speedforbulletarr[251];
			}if(fireindex>=252){
			iShowBMP2(arr[252],30,"fire.bmp",0);
			arr[252]+=speedforbulletarr[252];
			}if(fireindex>=253){
			iShowBMP2(arr[253],30,"fire.bmp",0);
			arr[253]+=speedforbulletarr[253];
			}if(fireindex>=254){
			iShowBMP2(arr[254],30,"fire.bmp",0);
			arr[254]+=speedforbulletarr[254];
			}if(fireindex>=255){
			iShowBMP2(arr[255],30,"fire.bmp",0);
			arr[255]+=speedforbulletarr[255];
			}if(fireindex>=256){
			iShowBMP2(arr[256],30,"fire.bmp",0);
			arr[256]+=speedforbulletarr[256];
			}if(fireindex>=257){
			iShowBMP2(arr[257],30,"fire.bmp",0);
			arr[257]+=speedforbulletarr[257];
			}if(fireindex>=258){
			iShowBMP2(arr[258],30,"fire.bmp",0);
			arr[258]+=speedforbulletarr[258];
			}if(fireindex>=259){
			iShowBMP2(arr[259],30,"fire.bmp",0);
			arr[259]+=speedforbulletarr[259];
			}if(fireindex>=260){
			iShowBMP2(arr[260],30,"fire.bmp",0);
			arr[260]+=speedforbulletarr[260];
			}if(fireindex>=261){
			iShowBMP2(arr[261],30,"fire.bmp",0);
			arr[261]+=speedforbulletarr[261];
			}if(fireindex>=262){
			iShowBMP2(arr[262],30,"fire.bmp",0);
			arr[262]+=speedforbulletarr[262];
			}if(fireindex>=263){
			iShowBMP2(arr[263],30,"fire.bmp",0);
			arr[263]+=speedforbulletarr[263];
			}if(fireindex>=264){
			iShowBMP2(arr[264],30,"fire.bmp",0);
			arr[264]+=speedforbulletarr[264];
			}if(fireindex>=265){
			iShowBMP2(arr[265],30,"fire.bmp",0);
			arr[265]+=speedforbulletarr[265];
			}if(fireindex>=266){
			iShowBMP2(arr[266],30,"fire.bmp",0);
			arr[266]+=speedforbulletarr[266];
			}if(fireindex>=267){
			iShowBMP2(arr[267],30,"fire.bmp",0);
			arr[267]+=speedforbulletarr[267];
			}if(fireindex>=268){
			iShowBMP2(arr[268],30,"fire.bmp",0);
			arr[268]+=speedforbulletarr[268];
			}if(fireindex>=269){
			iShowBMP2(arr[269],30,"fire.bmp",0);
			arr[269]+=speedforbulletarr[269];
			}if(fireindex>=270){
			iShowBMP2(arr[270],30,"fire.bmp",0);
			arr[270]+=speedforbulletarr[270];
			}if(fireindex>=271){
			iShowBMP2(arr[271],30,"fire.bmp",0);
			arr[271]+=speedforbulletarr[271];
			}if(fireindex>=272){
			iShowBMP2(arr[272],30,"fire.bmp",0);
			arr[272]+=speedforbulletarr[272];
			}if(fireindex>=273){
			iShowBMP2(arr[273],30,"fire.bmp",0);
			arr[273]+=speedforbulletarr[273];
			}if(fireindex>=274){
			iShowBMP2(arr[274],30,"fire.bmp",0);
			arr[274]+=speedforbulletarr[274];
			}if(fireindex>=275){
			iShowBMP2(arr[275],30,"fire.bmp",0);
			arr[275]+=speedforbulletarr[275];
			}if(fireindex>=276){
			iShowBMP2(arr[276],30,"fire.bmp",0);
			arr[276]+=speedforbulletarr[276];
			}if(fireindex>=277){
			iShowBMP2(arr[277],30,"fire.bmp",0);
			arr[277]+=speedforbulletarr[277];
			}if(fireindex>=278){
			iShowBMP2(arr[278],30,"fire.bmp",0);
			arr[278]+=speedforbulletarr[278];
			}if(fireindex>=279){
			iShowBMP2(arr[279],30,"fire.bmp",0);
			arr[279]+=speedforbulletarr[279];
			}if(fireindex>=280){
			iShowBMP2(arr[280],30,"fire.bmp",0);
			arr[280]+=speedforbulletarr[280];
			}if(fireindex>=281){
			iShowBMP2(arr[281],30,"fire.bmp",0);
			arr[281]+=speedforbulletarr[281];
			}if(fireindex>=282){
			iShowBMP2(arr[282],30,"fire.bmp",0);
			arr[282]+=speedforbulletarr[282];
			}if(fireindex>=283){
			iShowBMP2(arr[283],30,"fire.bmp",0);
			arr[283]+=speedforbulletarr[283];
			}if(fireindex>=284){
			iShowBMP2(arr[284],30,"fire.bmp",0);
			arr[284]+=speedforbulletarr[284];
			}if(fireindex>=285){
			iShowBMP2(arr[285],30,"fire.bmp",0);
			arr[285]+=speedforbulletarr[285];
			}if(fireindex>=286){
			iShowBMP2(arr[286],30,"fire.bmp",0);
			arr[286]+=speedforbulletarr[286];
			}if(fireindex>=287){
			iShowBMP2(arr[287],30,"fire.bmp",0);
			arr[287]+=speedforbulletarr[287];
			}if(fireindex>=288){
			iShowBMP2(arr[288],30,"fire.bmp",0);
			arr[288]+=speedforbulletarr[288];
			}if(fireindex>=289){
			iShowBMP2(arr[289],30,"fire.bmp",0);
			arr[289]+=speedforbulletarr[289];
			}if(fireindex>=290){
			iShowBMP2(arr[290],30,"fire.bmp",0);
			arr[290]+=speedforbulletarr[290];
			}if(fireindex>=291){
			iShowBMP2(arr[291],30,"fire.bmp",0);
			arr[291]+=speedforbulletarr[291];
			}if(fireindex>=292){
			iShowBMP2(arr[292],30,"fire.bmp",0);
			arr[292]+=speedforbulletarr[292];
			}if(fireindex>=293){
			iShowBMP2(arr[293],30,"fire.bmp",0);
			arr[293]+=speedforbulletarr[293];
			}if(fireindex>=294){
			iShowBMP2(arr[294],30,"fire.bmp",0);
			arr[294]+=speedforbulletarr[294];
			}if(fireindex>=295){
			iShowBMP2(arr[295],30,"fire.bmp",0);
			arr[295]+=speedforbulletarr[295];
			}if(fireindex>=296){
			iShowBMP2(arr[296],30,"fire.bmp",0);
			arr[296]+=speedforbulletarr[296];
			}if(fireindex>=297){
			iShowBMP2(arr[297],30,"fire.bmp",0);
			arr[297]+=speedforbulletarr[297];
			}if(fireindex>=298){
			iShowBMP2(arr[298],30,"fire.bmp",0);
			arr[298]+=speedforbulletarr[298];
			}if(fireindex>=299){
			iShowBMP2(arr[299],30,"fire.bmp",0);
			arr[299]+=speedforbulletarr[299];
			}if(fireindex>=300){
			iShowBMP2(arr[300],30,"fire.bmp",0);
			arr[300]+=speedforbulletarr[300];
			}if(fireindex>=301){
			iShowBMP2(arr[301],30,"fire.bmp",0);
			arr[301]+=speedforbulletarr[301];
			}if(fireindex>=302){
			iShowBMP2(arr[302],30,"fire.bmp",0);
			arr[302]+=speedforbulletarr[302];
			}if(fireindex>=303){
			iShowBMP2(arr[303],30,"fire.bmp",0);
			arr[303]+=speedforbulletarr[303];
			}if(fireindex>=304){
			iShowBMP2(arr[304],30,"fire.bmp",0);
			arr[304]+=speedforbulletarr[304];
			}if(fireindex>=305){
			iShowBMP2(arr[305],30,"fire.bmp",0);
			arr[305]+=speedforbulletarr[305];
			}if(fireindex>=306){
			iShowBMP2(arr[306],30,"fire.bmp",0);
			arr[306]+=speedforbulletarr[306];
			}if(fireindex>=307){
			iShowBMP2(arr[307],30,"fire.bmp",0);
			arr[307]+=speedforbulletarr[307];
			}if(fireindex>=308){
			iShowBMP2(arr[308],30,"fire.bmp",0);
			arr[308]+=speedforbulletarr[308];
			}if(fireindex>=309){
			iShowBMP2(arr[309],30,"fire.bmp",0);
			arr[309]+=speedforbulletarr[309];
			}if(fireindex>=310){
			iShowBMP2(arr[310],30,"fire.bmp",0);
			arr[310]+=speedforbulletarr[310];
			}if(fireindex>=311){
			iShowBMP2(arr[311],30,"fire.bmp",0);
			arr[311]+=speedforbulletarr[311];
			}if(fireindex>=312){
			iShowBMP2(arr[312],30,"fire.bmp",0);
			arr[312]+=speedforbulletarr[312];
			}if(fireindex>=313){
			iShowBMP2(arr[313],30,"fire.bmp",0);
			arr[313]+=speedforbulletarr[313];
			}if(fireindex>=314){
			iShowBMP2(arr[314],30,"fire.bmp",0);
			arr[314]+=speedforbulletarr[314];
			}if(fireindex>=315){
			iShowBMP2(arr[315],30,"fire.bmp",0);
			arr[315]+=speedforbulletarr[315];
			}if(fireindex>=316){
			iShowBMP2(arr[316],30,"fire.bmp",0);
			arr[316]+=speedforbulletarr[316];
			}if(fireindex>=317){
			iShowBMP2(arr[317],30,"fire.bmp",0);
			arr[317]+=speedforbulletarr[317];
			}if(fireindex>=318){
			iShowBMP2(arr[318],30,"fire.bmp",0);
			arr[318]+=speedforbulletarr[318];
			}if(fireindex>=319){
			iShowBMP2(arr[319],30,"fire.bmp",0);
			arr[319]+=speedforbulletarr[319];
			}if(fireindex>=320){
			iShowBMP2(arr[320],30,"fire.bmp",0);
			arr[320]+=speedforbulletarr[320];
			}if(fireindex>=321){
			iShowBMP2(arr[321],30,"fire.bmp",0);
			arr[321]+=speedforbulletarr[321];
			}if(fireindex>=322){
			iShowBMP2(arr[322],30,"fire.bmp",0);
			arr[322]+=speedforbulletarr[322];
			}if(fireindex>=323){
			iShowBMP2(arr[323],30,"fire.bmp",0);
			arr[323]+=speedforbulletarr[323];
			}if(fireindex>=324){
			iShowBMP2(arr[324],30,"fire.bmp",0);
			arr[324]+=speedforbulletarr[324];
			}if(fireindex>=325){
			iShowBMP2(arr[325],30,"fire.bmp",0);
			arr[325]+=speedforbulletarr[325];
			}if(fireindex>=326){
			iShowBMP2(arr[326],30,"fire.bmp",0);
			arr[326]+=speedforbulletarr[326];
			}if(fireindex>=327){
			iShowBMP2(arr[327],30,"fire.bmp",0);
			arr[327]+=speedforbulletarr[327];
			}if(fireindex>=328){
			iShowBMP2(arr[328],30,"fire.bmp",0);
			arr[328]+=speedforbulletarr[328];
			}if(fireindex>=329){
			iShowBMP2(arr[329],30,"fire.bmp",0);
			arr[329]+=speedforbulletarr[329];
			}if(fireindex>=330){
			iShowBMP2(arr[330],30,"fire.bmp",0);
			arr[330]+=speedforbulletarr[330];
			}if(fireindex>=331){
			iShowBMP2(arr[331],30,"fire.bmp",0);
			arr[331]+=speedforbulletarr[331];
			}if(fireindex>=332){
			iShowBMP2(arr[332],30,"fire.bmp",0);
			arr[332]+=speedforbulletarr[332];
			}if(fireindex>=333){
			iShowBMP2(arr[333],30,"fire.bmp",0);
			arr[333]+=speedforbulletarr[333];
			}if(fireindex>=334){
			iShowBMP2(arr[334],30,"fire.bmp",0);
			arr[334]+=speedforbulletarr[334];
			}if(fireindex>=335){
			iShowBMP2(arr[335],30,"fire.bmp",0);
			arr[335]+=speedforbulletarr[335];
			}if(fireindex>=336){
			iShowBMP2(arr[336],30,"fire.bmp",0);
			arr[336]+=speedforbulletarr[336];
			}if(fireindex>=337){
			iShowBMP2(arr[337],30,"fire.bmp",0);
			arr[337]+=speedforbulletarr[337];
			}if(fireindex>=338){
			iShowBMP2(arr[338],30,"fire.bmp",0);
			arr[338]+=speedforbulletarr[338];
			}if(fireindex>=339){
			iShowBMP2(arr[339],30,"fire.bmp",0);
			arr[339]+=speedforbulletarr[339];
			}if(fireindex>=340){
			iShowBMP2(arr[340],30,"fire.bmp",0);
			arr[340]+=speedforbulletarr[340];
			}if(fireindex>=341){
			iShowBMP2(arr[341],30,"fire.bmp",0);
			arr[341]+=speedforbulletarr[341];
			}if(fireindex>=342){
			iShowBMP2(arr[342],30,"fire.bmp",0);
			arr[342]+=speedforbulletarr[342];
			}if(fireindex>=343){
			iShowBMP2(arr[343],30,"fire.bmp",0);
			arr[343]+=speedforbulletarr[343];
			}if(fireindex>=344){
			iShowBMP2(arr[344],30,"fire.bmp",0);
			arr[344]+=speedforbulletarr[344];
			}if(fireindex>=345){
			iShowBMP2(arr[345],30,"fire.bmp",0);
			arr[345]+=speedforbulletarr[345];
			}if(fireindex>=346){
			iShowBMP2(arr[346],30,"fire.bmp",0);
			arr[346]+=speedforbulletarr[346];
			}if(fireindex>=347){
			iShowBMP2(arr[347],30,"fire.bmp",0);
			arr[347]+=speedforbulletarr[347];
			}if(fireindex>=348){
			iShowBMP2(arr[348],30,"fire.bmp",0);
			arr[348]+=speedforbulletarr[348];
			}if(fireindex>=349){
			iShowBMP2(arr[349],30,"fire.bmp",0);
			arr[349]+=speedforbulletarr[349];
			}if(fireindex>=350){
			iShowBMP2(arr[350],30,"fire.bmp",0);
			arr[350]+=speedforbulletarr[350];
			}if(fireindex>=351){
			iShowBMP2(arr[351],30,"fire.bmp",0);
			arr[351]+=speedforbulletarr[351];
			}if(fireindex>=352){
			iShowBMP2(arr[352],30,"fire.bmp",0);
			arr[352]+=speedforbulletarr[352];
			}if(fireindex>=353){
			iShowBMP2(arr[353],30,"fire.bmp",0);
			arr[353]+=speedforbulletarr[353];
			}if(fireindex>=354){
			iShowBMP2(arr[354],30,"fire.bmp",0);
			arr[354]+=speedforbulletarr[354];
			}if(fireindex>=355){
			iShowBMP2(arr[355],30,"fire.bmp",0);
			arr[355]+=speedforbulletarr[355];
			}if(fireindex>=356){
			iShowBMP2(arr[356],30,"fire.bmp",0);
			arr[356]+=speedforbulletarr[356];
			}if(fireindex>=357){
			iShowBMP2(arr[357],30,"fire.bmp",0);
			arr[357]+=speedforbulletarr[357];
			}if(fireindex>=358){
			iShowBMP2(arr[358],30,"fire.bmp",0);
			arr[358]+=speedforbulletarr[358];
			}if(fireindex>=359){
			iShowBMP2(arr[359],30,"fire.bmp",0);
			arr[359]+=speedforbulletarr[359];
			}if(fireindex>=360){
			iShowBMP2(arr[360],30,"fire.bmp",0);
			arr[360]+=speedforbulletarr[360];
			}if(fireindex>=361){
			iShowBMP2(arr[361],30,"fire.bmp",0);
			arr[361]+=speedforbulletarr[361];
			}if(fireindex>=362){
			iShowBMP2(arr[362],30,"fire.bmp",0);
			arr[362]+=speedforbulletarr[362];
			}if(fireindex>=363){
			iShowBMP2(arr[363],30,"fire.bmp",0);
			arr[363]+=speedforbulletarr[363];
			}if(fireindex>=364){
			iShowBMP2(arr[364],30,"fire.bmp",0);
			arr[364]+=speedforbulletarr[364];
			}if(fireindex>=365){
			iShowBMP2(arr[365],30,"fire.bmp",0);
			arr[365]+=speedforbulletarr[365];
			}if(fireindex>=366){
			iShowBMP2(arr[366],30,"fire.bmp",0);
			arr[366]+=speedforbulletarr[366];
			}if(fireindex>=367){
			iShowBMP2(arr[367],30,"fire.bmp",0);
			arr[367]+=speedforbulletarr[367];
			}if(fireindex>=368){
			iShowBMP2(arr[368],30,"fire.bmp",0);
			arr[368]+=speedforbulletarr[368];
			}if(fireindex>=369){
			iShowBMP2(arr[369],30,"fire.bmp",0);
			arr[369]+=speedforbulletarr[369];
			}if(fireindex>=370){
			iShowBMP2(arr[370],30,"fire.bmp",0);
			arr[370]+=speedforbulletarr[370];
			}if(fireindex>=371){
			iShowBMP2(arr[371],30,"fire.bmp",0);
			arr[371]+=speedforbulletarr[371];
			}if(fireindex>=372){
			iShowBMP2(arr[372],30,"fire.bmp",0);
			arr[372]+=speedforbulletarr[372];
			}if(fireindex>=373){
			iShowBMP2(arr[373],30,"fire.bmp",0);
			arr[373]+=speedforbulletarr[373];
			}if(fireindex>=374){
			iShowBMP2(arr[374],30,"fire.bmp",0);
			arr[374]+=speedforbulletarr[374];
			}if(fireindex>=375){
			iShowBMP2(arr[375],30,"fire.bmp",0);
			arr[375]+=speedforbulletarr[375];
			}if(fireindex>=376){
			iShowBMP2(arr[376],30,"fire.bmp",0);
			arr[376]+=speedforbulletarr[376];
			}if(fireindex>=377){
			iShowBMP2(arr[377],30,"fire.bmp",0);
			arr[377]+=speedforbulletarr[377];
			}if(fireindex>=378){
			iShowBMP2(arr[378],30,"fire.bmp",0);
			arr[378]+=speedforbulletarr[378];
			}if(fireindex>=379){
			iShowBMP2(arr[379],30,"fire.bmp",0);
			arr[379]+=speedforbulletarr[379];
			}if(fireindex>=380){
			iShowBMP2(arr[380],30,"fire.bmp",0);
			arr[380]+=speedforbulletarr[380];
			}if(fireindex>=381){
			iShowBMP2(arr[381],30,"fire.bmp",0);
			arr[381]+=speedforbulletarr[381];
			}if(fireindex>=382){
			iShowBMP2(arr[382],30,"fire.bmp",0);
			arr[382]+=speedforbulletarr[382];
			}if(fireindex>=383){
			iShowBMP2(arr[383],30,"fire.bmp",0);
			arr[383]+=speedforbulletarr[383];
			}if(fireindex>=384){
			iShowBMP2(arr[384],30,"fire.bmp",0);
			arr[384]+=speedforbulletarr[384];
			}if(fireindex>=385){
			iShowBMP2(arr[385],30,"fire.bmp",0);
			arr[385]+=speedforbulletarr[385];
			}if(fireindex>=386){
			iShowBMP2(arr[386],30,"fire.bmp",0);
			arr[386]+=speedforbulletarr[386];
			}if(fireindex>=387){
			iShowBMP2(arr[387],30,"fire.bmp",0);
			arr[387]+=speedforbulletarr[387];
			}if(fireindex>=388){
			iShowBMP2(arr[388],30,"fire.bmp",0);
			arr[388]+=speedforbulletarr[388];
			}if(fireindex>=389){
			iShowBMP2(arr[389],30,"fire.bmp",0);
			arr[389]+=speedforbulletarr[389];
			}if(fireindex>=390){
			iShowBMP2(arr[390],30,"fire.bmp",0);
			arr[390]+=speedforbulletarr[390];
			}if(fireindex>=391){
			iShowBMP2(arr[391],30,"fire.bmp",0);
			arr[391]+=speedforbulletarr[391];
			}if(fireindex>=392){
			iShowBMP2(arr[392],30,"fire.bmp",0);
			arr[392]+=speedforbulletarr[392];
			}if(fireindex>=393){
			iShowBMP2(arr[393],30,"fire.bmp",0);
			arr[393]+=speedforbulletarr[393];
			}if(fireindex>=394){
			iShowBMP2(arr[394],30,"fire.bmp",0);
			arr[394]+=speedforbulletarr[394];
			}if(fireindex>=395){
			iShowBMP2(arr[395],30,"fire.bmp",0);
			arr[395]+=speedforbulletarr[395];
			}if(fireindex>=396){
			iShowBMP2(arr[396],30,"fire.bmp",0);
			arr[396]+=speedforbulletarr[396];
			}if(fireindex>=397){
			iShowBMP2(arr[397],30,"fire.bmp",0);
			arr[397]+=speedforbulletarr[397];
			}if(fireindex>=398){
			iShowBMP2(arr[398],30,"fire.bmp",0);
			arr[398]+=speedforbulletarr[398];
			}if(fireindex>=399){
			iShowBMP2(arr[399],30,"fire.bmp",0);
			arr[399]+=speedforbulletarr[399];
			}if(fireindex>=400){
			iShowBMP2(arr[400],30,"fire.bmp",0);
			arr[400]+=speedforbulletarr[400];
			}if(fireindex>=401){
			iShowBMP2(arr[401],30,"fire.bmp",0);
			arr[401]+=speedforbulletarr[401];
			}if(fireindex>=402){
			iShowBMP2(arr[402],30,"fire.bmp",0);
			arr[402]+=speedforbulletarr[402];
			}if(fireindex>=403){
			iShowBMP2(arr[403],30,"fire.bmp",0);
			arr[403]+=speedforbulletarr[403];
			}if(fireindex>=404){
			iShowBMP2(arr[404],30,"fire.bmp",0);
			arr[404]+=speedforbulletarr[404];
			}if(fireindex>=405){
			iShowBMP2(arr[405],30,"fire.bmp",0);
			arr[405]+=speedforbulletarr[405];
			}if(fireindex>=406){
			iShowBMP2(arr[406],30,"fire.bmp",0);
			arr[406]+=speedforbulletarr[406];
			}if(fireindex>=407){
			iShowBMP2(arr[407],30,"fire.bmp",0);
			arr[407]+=speedforbulletarr[407];
			}if(fireindex>=408){
			iShowBMP2(arr[408],30,"fire.bmp",0);
			arr[408]+=speedforbulletarr[408];
			}if(fireindex>=409){
			iShowBMP2(arr[409],30,"fire.bmp",0);
			arr[409]+=speedforbulletarr[409];
			}if(fireindex>=410){
			iShowBMP2(arr[410],30,"fire.bmp",0);
			arr[410]+=speedforbulletarr[410];
			}if(fireindex>=411){
			iShowBMP2(arr[411],30,"fire.bmp",0);
			arr[411]+=speedforbulletarr[411];
			}if(fireindex>=412){
			iShowBMP2(arr[412],30,"fire.bmp",0);
			arr[412]+=speedforbulletarr[412];
			}if(fireindex>=413){
			iShowBMP2(arr[413],30,"fire.bmp",0);
			arr[413]+=speedforbulletarr[413];
			}if(fireindex>=414){
			iShowBMP2(arr[414],30,"fire.bmp",0);
			arr[414]+=speedforbulletarr[414];
			}if(fireindex>=415){
			iShowBMP2(arr[415],30,"fire.bmp",0);
			arr[415]+=speedforbulletarr[415];
			}if(fireindex>=416){
			iShowBMP2(arr[416],30,"fire.bmp",0);
			arr[416]+=speedforbulletarr[416];
			}if(fireindex>=417){
			iShowBMP2(arr[417],30,"fire.bmp",0);
			arr[417]+=speedforbulletarr[417];
			}if(fireindex>=418){
			iShowBMP2(arr[418],30,"fire.bmp",0);
			arr[418]+=speedforbulletarr[418];
			}if(fireindex>=419){
			iShowBMP2(arr[419],30,"fire.bmp",0);
			arr[419]+=speedforbulletarr[419];
			}if(fireindex>=420){
			iShowBMP2(arr[420],30,"fire.bmp",0);
			arr[420]+=speedforbulletarr[420];
			}if(fireindex>=421){
			iShowBMP2(arr[421],30,"fire.bmp",0);
			arr[421]+=speedforbulletarr[421];
			}if(fireindex>=422){
			iShowBMP2(arr[422],30,"fire.bmp",0);
			arr[422]+=speedforbulletarr[422];
			}if(fireindex>=423){
			iShowBMP2(arr[423],30,"fire.bmp",0);
			arr[423]+=speedforbulletarr[423];
			}if(fireindex>=424){
			iShowBMP2(arr[424],30,"fire.bmp",0);
			arr[424]+=speedforbulletarr[424];
			}if(fireindex>=425){
			iShowBMP2(arr[425],30,"fire.bmp",0);
			arr[425]+=speedforbulletarr[425];
			}if(fireindex>=426){
			iShowBMP2(arr[426],30,"fire.bmp",0);
			arr[426]+=speedforbulletarr[426];
			}if(fireindex>=427){
			iShowBMP2(arr[427],30,"fire.bmp",0);
			arr[427]+=speedforbulletarr[427];
			}if(fireindex>=428){
			iShowBMP2(arr[428],30,"fire.bmp",0);
			arr[428]+=speedforbulletarr[428];
			}if(fireindex>=429){
			iShowBMP2(arr[429],30,"fire.bmp",0);
			arr[429]+=speedforbulletarr[429];
			}if(fireindex>=430){
			iShowBMP2(arr[430],30,"fire.bmp",0);
			arr[430]+=speedforbulletarr[430];
			}if(fireindex>=431){
			iShowBMP2(arr[431],30,"fire.bmp",0);
			arr[431]+=speedforbulletarr[431];
			}if(fireindex>=432){
			iShowBMP2(arr[432],30,"fire.bmp",0);
			arr[432]+=speedforbulletarr[432];
			}if(fireindex>=433){
			iShowBMP2(arr[433],30,"fire.bmp",0);
			arr[433]+=speedforbulletarr[433];
			}if(fireindex>=434){
			iShowBMP2(arr[434],30,"fire.bmp",0);
			arr[434]+=speedforbulletarr[434];
			}if(fireindex>=435){
			iShowBMP2(arr[435],30,"fire.bmp",0);
			arr[435]+=speedforbulletarr[435];
			}if(fireindex>=436){
			iShowBMP2(arr[436],30,"fire.bmp",0);
			arr[436]+=speedforbulletarr[436];
			}if(fireindex>=437){
			iShowBMP2(arr[437],30,"fire.bmp",0);
			arr[437]+=speedforbulletarr[437];
			}if(fireindex>=438){
			iShowBMP2(arr[438],30,"fire.bmp",0);
			arr[438]+=speedforbulletarr[438];
			}if(fireindex>=439){
			iShowBMP2(arr[439],30,"fire.bmp",0);
			arr[439]+=speedforbulletarr[439];
			}if(fireindex>=440){
			iShowBMP2(arr[440],30,"fire.bmp",0);
			arr[440]+=speedforbulletarr[440];
			}if(fireindex>=441){
			iShowBMP2(arr[441],30,"fire.bmp",0);
			arr[441]+=speedforbulletarr[441];
			}if(fireindex>=442){
			iShowBMP2(arr[442],30,"fire.bmp",0);
			arr[442]+=speedforbulletarr[442];
			}if(fireindex>=443){
			iShowBMP2(arr[443],30,"fire.bmp",0);
			arr[443]+=speedforbulletarr[443];
			}if(fireindex>=444){
			iShowBMP2(arr[444],30,"fire.bmp",0);
			arr[444]+=speedforbulletarr[444];
			}if(fireindex>=445){
			iShowBMP2(arr[445],30,"fire.bmp",0);
			arr[445]+=speedforbulletarr[445];
			}if(fireindex>=446){
			iShowBMP2(arr[446],30,"fire.bmp",0);
			arr[446]+=speedforbulletarr[446];
			}if(fireindex>=447){
			iShowBMP2(arr[447],30,"fire.bmp",0);
			arr[447]+=speedforbulletarr[447];
			}if(fireindex>=448){
			iShowBMP2(arr[448],30,"fire.bmp",0);
			arr[448]+=speedforbulletarr[448];
			}if(fireindex>=449){
			iShowBMP2(arr[449],30,"fire.bmp",0);
			arr[449]+=speedforbulletarr[449];
			}if(fireindex>=450){
			iShowBMP2(arr[450],30,"fire.bmp",0);
			arr[450]+=speedforbulletarr[450];
			}if(fireindex>=451){
			iShowBMP2(arr[451],30,"fire.bmp",0);
			arr[451]+=speedforbulletarr[451];
			}if(fireindex>=452){
			iShowBMP2(arr[452],30,"fire.bmp",0);
			arr[452]+=speedforbulletarr[452];
			}if(fireindex>=453){
			iShowBMP2(arr[453],30,"fire.bmp",0);
			arr[453]+=speedforbulletarr[453];
			}if(fireindex>=454){
			iShowBMP2(arr[454],30,"fire.bmp",0);
			arr[454]+=speedforbulletarr[454];
			}if(fireindex>=455){
			iShowBMP2(arr[455],30,"fire.bmp",0);
			arr[455]+=speedforbulletarr[455];
			}if(fireindex>=456){
			iShowBMP2(arr[456],30,"fire.bmp",0);
			arr[456]+=speedforbulletarr[456];
			}if(fireindex>=457){
			iShowBMP2(arr[457],30,"fire.bmp",0);
			arr[457]+=speedforbulletarr[457];
			}if(fireindex>=458){
			iShowBMP2(arr[458],30,"fire.bmp",0);
			arr[458]+=speedforbulletarr[458];
			}if(fireindex>=459){
			iShowBMP2(arr[459],30,"fire.bmp",0);
			arr[459]+=speedforbulletarr[459];
			}if(fireindex>=460){
			iShowBMP2(arr[460],30,"fire.bmp",0);
			arr[460]+=speedforbulletarr[460];
			}if(fireindex>=461){
			iShowBMP2(arr[461],30,"fire.bmp",0);
			arr[461]+=speedforbulletarr[461];
			}if(fireindex>=462){
			iShowBMP2(arr[462],30,"fire.bmp",0);
			arr[462]+=speedforbulletarr[462];
			}if(fireindex>=463){
			iShowBMP2(arr[463],30,"fire.bmp",0);
			arr[463]+=speedforbulletarr[463];
			}if(fireindex>=464){
			iShowBMP2(arr[464],30,"fire.bmp",0);
			arr[464]+=speedforbulletarr[464];
			}if(fireindex>=465){
			iShowBMP2(arr[465],30,"fire.bmp",0);
			arr[465]+=speedforbulletarr[465];
			}if(fireindex>=466){
			iShowBMP2(arr[466],30,"fire.bmp",0);
			arr[466]+=speedforbulletarr[466];
			}if(fireindex>=467){
			iShowBMP2(arr[467],30,"fire.bmp",0);
			arr[467]+=speedforbulletarr[467];
			}if(fireindex>=468){
			iShowBMP2(arr[468],30,"fire.bmp",0);
			arr[468]+=speedforbulletarr[468];
			}if(fireindex>=469){
			iShowBMP2(arr[469],30,"fire.bmp",0);
			arr[469]+=speedforbulletarr[469];
			}if(fireindex>=470){
			iShowBMP2(arr[470],30,"fire.bmp",0);
			arr[470]+=speedforbulletarr[470];
			}if(fireindex>=471){
			iShowBMP2(arr[471],30,"fire.bmp",0);
			arr[471]+=speedforbulletarr[471];
			}if(fireindex>=472){
			iShowBMP2(arr[472],30,"fire.bmp",0);
			arr[472]+=speedforbulletarr[472];
			}if(fireindex>=473){
			iShowBMP2(arr[473],30,"fire.bmp",0);
			arr[473]+=speedforbulletarr[473];
			}if(fireindex>=474){
			iShowBMP2(arr[474],30,"fire.bmp",0);
			arr[474]+=speedforbulletarr[474];
			}if(fireindex>=475){
			iShowBMP2(arr[475],30,"fire.bmp",0);
			arr[475]+=speedforbulletarr[475];
			}if(fireindex>=476){
			iShowBMP2(arr[476],30,"fire.bmp",0);
			arr[476]+=speedforbulletarr[476];
			}if(fireindex>=477){
			iShowBMP2(arr[477],30,"fire.bmp",0);
			arr[477]+=speedforbulletarr[477];
			}if(fireindex>=478){
			iShowBMP2(arr[478],30,"fire.bmp",0);
			arr[478]+=speedforbulletarr[478];
			}if(fireindex>=479){
			iShowBMP2(arr[479],30,"fire.bmp",0);
			arr[479]+=speedforbulletarr[479];
			}if(fireindex>=480){
			iShowBMP2(arr[480],30,"fire.bmp",0);
			arr[480]+=speedforbulletarr[480];
			}if(fireindex>=481){
			iShowBMP2(arr[481],30,"fire.bmp",0);
			arr[481]+=speedforbulletarr[481];
			}if(fireindex>=482){
			iShowBMP2(arr[482],30,"fire.bmp",0);
			arr[482]+=speedforbulletarr[482];
			}if(fireindex>=483){
			iShowBMP2(arr[483],30,"fire.bmp",0);
			arr[483]+=speedforbulletarr[483];
			}if(fireindex>=484){
			iShowBMP2(arr[484],30,"fire.bmp",0);
			arr[484]+=speedforbulletarr[484];
			}if(fireindex>=485){
			iShowBMP2(arr[485],30,"fire.bmp",0);
			arr[485]+=speedforbulletarr[485];
			}if(fireindex>=486){
			iShowBMP2(arr[486],30,"fire.bmp",0);
			arr[486]+=speedforbulletarr[486];
			}if(fireindex>=487){
			iShowBMP2(arr[487],30,"fire.bmp",0);
			arr[487]+=speedforbulletarr[487];
			}if(fireindex>=488){
			iShowBMP2(arr[488],30,"fire.bmp",0);
			arr[488]+=speedforbulletarr[488];
			}if(fireindex>=489){
			iShowBMP2(arr[489],30,"fire.bmp",0);
			arr[489]+=speedforbulletarr[489];
			}if(fireindex>=490){
			iShowBMP2(arr[490],30,"fire.bmp",0);
			arr[490]+=speedforbulletarr[490];
			}if(fireindex>=491){
			iShowBMP2(arr[491],30,"fire.bmp",0);
			arr[491]+=speedforbulletarr[491];
			}if(fireindex>=492){
			iShowBMP2(arr[492],30,"fire.bmp",0);
			arr[492]+=speedforbulletarr[492];
			}if(fireindex>=493){
			iShowBMP2(arr[493],30,"fire.bmp",0);
			arr[493]+=speedforbulletarr[493];
			}if(fireindex>=494){
			iShowBMP2(arr[494],30,"fire.bmp",0);
			arr[494]+=speedforbulletarr[494];
			}if(fireindex>=495){
			iShowBMP2(arr[495],30,"fire.bmp",0);
			arr[495]+=speedforbulletarr[495];
			}if(fireindex>=496){
			iShowBMP2(arr[496],30,"fire.bmp",0);
			arr[496]+=speedforbulletarr[496];
			}if(fireindex>=497){
			iShowBMP2(arr[497],30,"fire.bmp",0);
			arr[497]+=speedforbulletarr[497];
			}if(fireindex>=498){
			iShowBMP2(arr[498],30,"fire.bmp",0);
			arr[498]+=speedforbulletarr[498];
			}if(fireindex>=499){
			iShowBMP2(arr[499],30,"fire.bmp",0);
			arr[499]+=speedforbulletarr[499];
			}if(fireindex>=500){
			iShowBMP2(arr[500],30,"fire.bmp",0);
			arr[500]+=speedforbulletarr[500];
			}

			if(firecounter>=501)
				{
					firecounter=1;
speedforbulletarr[1]=10;
speedforbulletarr[2]=10;
speedforbulletarr[3]=10;
speedforbulletarr[4]=10;
speedforbulletarr[5]=10;
speedforbulletarr[6]=10;
speedforbulletarr[7]=10;
speedforbulletarr[8]=10;
speedforbulletarr[9]=10;
speedforbulletarr[10]=10;
speedforbulletarr[11]=10;
speedforbulletarr[12]=10;
speedforbulletarr[13]=10;
speedforbulletarr[14]=10;
speedforbulletarr[15]=10;
speedforbulletarr[16]=10;
speedforbulletarr[17]=10;
speedforbulletarr[18]=10;
speedforbulletarr[19]=10;
speedforbulletarr[20]=10;
speedforbulletarr[21]=10;
speedforbulletarr[22]=10;
speedforbulletarr[23]=10;
speedforbulletarr[24]=10;
speedforbulletarr[25]=10;
speedforbulletarr[26]=10;
speedforbulletarr[27]=10;
speedforbulletarr[28]=10;
speedforbulletarr[29]=10;
speedforbulletarr[30]=10;
speedforbulletarr[31]=10;
speedforbulletarr[32]=10;
speedforbulletarr[33]=10;
speedforbulletarr[34]=10;
speedforbulletarr[35]=10;
speedforbulletarr[36]=10;
speedforbulletarr[37]=10;
speedforbulletarr[38]=10;
speedforbulletarr[39]=10;
speedforbulletarr[40]=10;
speedforbulletarr[41]=10;
speedforbulletarr[42]=10;
speedforbulletarr[43]=10;
speedforbulletarr[44]=10;
speedforbulletarr[45]=10;
speedforbulletarr[46]=10;
speedforbulletarr[47]=10;
speedforbulletarr[48]=10;
speedforbulletarr[49]=10;
speedforbulletarr[50]=10;
speedforbulletarr[51]=10;
speedforbulletarr[52]=10;
speedforbulletarr[53]=10;
speedforbulletarr[54]=10;
speedforbulletarr[55]=10;
speedforbulletarr[56]=10;
speedforbulletarr[57]=10;
speedforbulletarr[58]=10;
speedforbulletarr[59]=10;
speedforbulletarr[60]=10;
speedforbulletarr[61]=10;
speedforbulletarr[62]=10;
speedforbulletarr[63]=10;
speedforbulletarr[64]=10;
speedforbulletarr[65]=10;
speedforbulletarr[66]=10;
speedforbulletarr[67]=10;
speedforbulletarr[68]=10;
speedforbulletarr[69]=10;
speedforbulletarr[70]=10;
speedforbulletarr[71]=10;
speedforbulletarr[72]=10;
speedforbulletarr[73]=10;
speedforbulletarr[74]=10;
speedforbulletarr[75]=10;
speedforbulletarr[76]=10;
speedforbulletarr[77]=10;
speedforbulletarr[78]=10;
speedforbulletarr[79]=10;
speedforbulletarr[80]=10;
speedforbulletarr[81]=10;
speedforbulletarr[82]=10;
speedforbulletarr[83]=10;
speedforbulletarr[84]=10;
speedforbulletarr[85]=10;
speedforbulletarr[86]=10;
speedforbulletarr[87]=10;
speedforbulletarr[88]=10;
speedforbulletarr[89]=10;
speedforbulletarr[90]=10;
speedforbulletarr[91]=10;
speedforbulletarr[92]=10;
speedforbulletarr[93]=10;
speedforbulletarr[94]=10;
speedforbulletarr[95]=10;
speedforbulletarr[96]=10;
speedforbulletarr[97]=10;
speedforbulletarr[98]=10;
speedforbulletarr[99]=10;
speedforbulletarr[100]=10;
speedforbulletarr[101]=10;
speedforbulletarr[102]=10;
speedforbulletarr[103]=10;
speedforbulletarr[104]=10;
speedforbulletarr[105]=10;
speedforbulletarr[106]=10;
speedforbulletarr[107]=10;
speedforbulletarr[108]=10;
speedforbulletarr[109]=10;
speedforbulletarr[110]=10;
speedforbulletarr[111]=10;
speedforbulletarr[112]=10;
speedforbulletarr[113]=10;
speedforbulletarr[114]=10;
speedforbulletarr[115]=10;
speedforbulletarr[116]=10;
speedforbulletarr[117]=10;
speedforbulletarr[118]=10;
speedforbulletarr[119]=10;
speedforbulletarr[120]=10;
speedforbulletarr[121]=10;
speedforbulletarr[122]=10;
speedforbulletarr[123]=10;
speedforbulletarr[124]=10;
speedforbulletarr[125]=10;
speedforbulletarr[126]=10;
speedforbulletarr[127]=10;
speedforbulletarr[128]=10;
speedforbulletarr[129]=10;
speedforbulletarr[130]=10;
speedforbulletarr[131]=10;
speedforbulletarr[132]=10;
speedforbulletarr[133]=10;
speedforbulletarr[134]=10;
speedforbulletarr[135]=10;
speedforbulletarr[136]=10;
speedforbulletarr[137]=10;
speedforbulletarr[138]=10;
speedforbulletarr[139]=10;
speedforbulletarr[140]=10;
speedforbulletarr[141]=10;
speedforbulletarr[142]=10;
speedforbulletarr[143]=10;
speedforbulletarr[144]=10;
speedforbulletarr[145]=10;
speedforbulletarr[146]=10;
speedforbulletarr[147]=10;
speedforbulletarr[148]=10;
speedforbulletarr[149]=10;
speedforbulletarr[150]=10;
speedforbulletarr[151]=10;
speedforbulletarr[152]=10;
speedforbulletarr[153]=10;
speedforbulletarr[154]=10;
speedforbulletarr[155]=10;
speedforbulletarr[156]=10;
speedforbulletarr[157]=10;
speedforbulletarr[158]=10;
speedforbulletarr[159]=10;
speedforbulletarr[160]=10;
speedforbulletarr[161]=10;
speedforbulletarr[162]=10;
speedforbulletarr[163]=10;
speedforbulletarr[164]=10;
speedforbulletarr[165]=10;
speedforbulletarr[166]=10;
speedforbulletarr[167]=10;
speedforbulletarr[168]=10;
speedforbulletarr[169]=10;
speedforbulletarr[170]=10;
speedforbulletarr[171]=10;
speedforbulletarr[172]=10;
speedforbulletarr[173]=10;
speedforbulletarr[174]=10;
speedforbulletarr[175]=10;
speedforbulletarr[176]=10;
speedforbulletarr[177]=10;
speedforbulletarr[178]=10;
speedforbulletarr[179]=10;
speedforbulletarr[180]=10;
speedforbulletarr[181]=10;
speedforbulletarr[182]=10;
speedforbulletarr[183]=10;
speedforbulletarr[184]=10;
speedforbulletarr[185]=10;
speedforbulletarr[186]=10;
speedforbulletarr[187]=10;
speedforbulletarr[188]=10;
speedforbulletarr[189]=10;
speedforbulletarr[190]=10;
speedforbulletarr[191]=10;
speedforbulletarr[192]=10;
speedforbulletarr[193]=10;
speedforbulletarr[194]=10;
speedforbulletarr[195]=10;
speedforbulletarr[196]=10;
speedforbulletarr[197]=10;
speedforbulletarr[198]=10;
speedforbulletarr[199]=10;
speedforbulletarr[200]=10;
speedforbulletarr[201]=10;
speedforbulletarr[202]=10;
speedforbulletarr[203]=10;
speedforbulletarr[204]=10;
speedforbulletarr[205]=10;
speedforbulletarr[206]=10;
speedforbulletarr[207]=10;
speedforbulletarr[208]=10;
speedforbulletarr[209]=10;
speedforbulletarr[210]=10;
speedforbulletarr[211]=10;
speedforbulletarr[212]=10;
speedforbulletarr[213]=10;
speedforbulletarr[214]=10;
speedforbulletarr[215]=10;
speedforbulletarr[216]=10;
speedforbulletarr[217]=10;
speedforbulletarr[218]=10;
speedforbulletarr[219]=10;
speedforbulletarr[220]=10;
speedforbulletarr[221]=10;
speedforbulletarr[222]=10;
speedforbulletarr[223]=10;
speedforbulletarr[224]=10;
speedforbulletarr[225]=10;
speedforbulletarr[226]=10;
speedforbulletarr[227]=10;
speedforbulletarr[228]=10;
speedforbulletarr[229]=10;
speedforbulletarr[230]=10;
speedforbulletarr[231]=10;
speedforbulletarr[232]=10;
speedforbulletarr[233]=10;
speedforbulletarr[234]=10;
speedforbulletarr[235]=10;
speedforbulletarr[236]=10;
speedforbulletarr[237]=10;
speedforbulletarr[238]=10;
speedforbulletarr[239]=10;
speedforbulletarr[240]=10;
speedforbulletarr[241]=10;
speedforbulletarr[242]=10;
speedforbulletarr[243]=10;
speedforbulletarr[244]=10;
speedforbulletarr[245]=10;
speedforbulletarr[246]=10;
speedforbulletarr[247]=10;
speedforbulletarr[248]=10;
speedforbulletarr[249]=10;
speedforbulletarr[250]=10;
speedforbulletarr[251]=10;
speedforbulletarr[252]=10;
speedforbulletarr[253]=10;
speedforbulletarr[254]=10;
speedforbulletarr[255]=10;
speedforbulletarr[256]=10;
speedforbulletarr[257]=10;
speedforbulletarr[258]=10;
speedforbulletarr[259]=10;
speedforbulletarr[260]=10;
speedforbulletarr[261]=10;
speedforbulletarr[262]=10;
speedforbulletarr[263]=10;
speedforbulletarr[264]=10;
speedforbulletarr[265]=10;
speedforbulletarr[266]=10;
speedforbulletarr[267]=10;
speedforbulletarr[268]=10;
speedforbulletarr[269]=10;
speedforbulletarr[270]=10;
speedforbulletarr[271]=10;
speedforbulletarr[272]=10;
speedforbulletarr[273]=10;
speedforbulletarr[274]=10;
speedforbulletarr[275]=10;
speedforbulletarr[276]=10;
speedforbulletarr[277]=10;
speedforbulletarr[278]=10;
speedforbulletarr[279]=10;
speedforbulletarr[280]=10;
speedforbulletarr[281]=10;
speedforbulletarr[282]=10;
speedforbulletarr[283]=10;
speedforbulletarr[284]=10;
speedforbulletarr[285]=10;
speedforbulletarr[286]=10;
speedforbulletarr[287]=10;
speedforbulletarr[288]=10;
speedforbulletarr[289]=10;
speedforbulletarr[290]=10;
speedforbulletarr[291]=10;
speedforbulletarr[292]=10;
speedforbulletarr[293]=10;
speedforbulletarr[294]=10;
speedforbulletarr[295]=10;
speedforbulletarr[296]=10;
speedforbulletarr[297]=10;
speedforbulletarr[298]=10;
speedforbulletarr[299]=10;
speedforbulletarr[300]=10;
speedforbulletarr[301]=10;
speedforbulletarr[302]=10;
speedforbulletarr[303]=10;
speedforbulletarr[304]=10;
speedforbulletarr[305]=10;
speedforbulletarr[306]=10;
speedforbulletarr[307]=10;
speedforbulletarr[308]=10;
speedforbulletarr[309]=10;
speedforbulletarr[310]=10;
speedforbulletarr[311]=10;
speedforbulletarr[312]=10;
speedforbulletarr[313]=10;
speedforbulletarr[314]=10;
speedforbulletarr[315]=10;
speedforbulletarr[316]=10;
speedforbulletarr[317]=10;
speedforbulletarr[318]=10;
speedforbulletarr[319]=10;
speedforbulletarr[320]=10;
speedforbulletarr[321]=10;
speedforbulletarr[322]=10;
speedforbulletarr[323]=10;
speedforbulletarr[324]=10;
speedforbulletarr[325]=10;
speedforbulletarr[326]=10;
speedforbulletarr[327]=10;
speedforbulletarr[328]=10;
speedforbulletarr[329]=10;
speedforbulletarr[330]=10;
speedforbulletarr[331]=10;
speedforbulletarr[332]=10;
speedforbulletarr[333]=10;
speedforbulletarr[334]=10;
speedforbulletarr[335]=10;
speedforbulletarr[336]=10;
speedforbulletarr[337]=10;
speedforbulletarr[338]=10;
speedforbulletarr[339]=10;
speedforbulletarr[340]=10;
speedforbulletarr[341]=10;
speedforbulletarr[342]=10;
speedforbulletarr[343]=10;
speedforbulletarr[344]=10;
speedforbulletarr[345]=10;
speedforbulletarr[346]=10;
speedforbulletarr[347]=10;
speedforbulletarr[348]=10;
speedforbulletarr[349]=10;
speedforbulletarr[350]=10;
speedforbulletarr[351]=10;
speedforbulletarr[352]=10;
speedforbulletarr[353]=10;
speedforbulletarr[354]=10;
speedforbulletarr[355]=10;
speedforbulletarr[356]=10;
speedforbulletarr[357]=10;
speedforbulletarr[358]=10;
speedforbulletarr[359]=10;
speedforbulletarr[360]=10;
speedforbulletarr[361]=10;
speedforbulletarr[362]=10;
speedforbulletarr[363]=10;
speedforbulletarr[364]=10;
speedforbulletarr[365]=10;
speedforbulletarr[366]=10;
speedforbulletarr[367]=10;
speedforbulletarr[368]=10;
speedforbulletarr[369]=10;
speedforbulletarr[370]=10;
speedforbulletarr[371]=10;
speedforbulletarr[372]=10;
speedforbulletarr[373]=10;
speedforbulletarr[374]=10;
speedforbulletarr[375]=10;
speedforbulletarr[376]=10;
speedforbulletarr[377]=10;
speedforbulletarr[378]=10;
speedforbulletarr[379]=10;
speedforbulletarr[380]=10;
speedforbulletarr[381]=10;
speedforbulletarr[382]=10;
speedforbulletarr[383]=10;
speedforbulletarr[384]=10;
speedforbulletarr[385]=10;
speedforbulletarr[386]=10;
speedforbulletarr[387]=10;
speedforbulletarr[388]=10;
speedforbulletarr[389]=10;
speedforbulletarr[390]=10;
speedforbulletarr[391]=10;
speedforbulletarr[392]=10;
speedforbulletarr[393]=10;
speedforbulletarr[394]=10;
speedforbulletarr[395]=10;
speedforbulletarr[396]=10;
speedforbulletarr[397]=10;
speedforbulletarr[398]=10;
speedforbulletarr[399]=10;
speedforbulletarr[400]=10;
speedforbulletarr[401]=10;
speedforbulletarr[402]=10;
speedforbulletarr[403]=10;
speedforbulletarr[404]=10;
speedforbulletarr[405]=10;
speedforbulletarr[406]=10;
speedforbulletarr[407]=10;
speedforbulletarr[408]=10;
speedforbulletarr[409]=10;
speedforbulletarr[410]=10;
speedforbulletarr[411]=10;
speedforbulletarr[412]=10;
speedforbulletarr[413]=10;
speedforbulletarr[414]=10;
speedforbulletarr[415]=10;
speedforbulletarr[416]=10;
speedforbulletarr[417]=10;
speedforbulletarr[418]=10;
speedforbulletarr[419]=10;
speedforbulletarr[420]=10;
speedforbulletarr[421]=10;
speedforbulletarr[422]=10;
speedforbulletarr[423]=10;
speedforbulletarr[424]=10;
speedforbulletarr[425]=10;
speedforbulletarr[426]=10;
speedforbulletarr[427]=10;
speedforbulletarr[428]=10;
speedforbulletarr[429]=10;
speedforbulletarr[430]=10;
speedforbulletarr[431]=10;
speedforbulletarr[432]=10;
speedforbulletarr[433]=10;
speedforbulletarr[434]=10;
speedforbulletarr[435]=10;
speedforbulletarr[436]=10;
speedforbulletarr[437]=10;
speedforbulletarr[438]=10;
speedforbulletarr[439]=10;
speedforbulletarr[440]=10;
speedforbulletarr[441]=10;
speedforbulletarr[442]=10;
speedforbulletarr[443]=10;
speedforbulletarr[444]=10;
speedforbulletarr[445]=10;
speedforbulletarr[446]=10;
speedforbulletarr[447]=10;
speedforbulletarr[448]=10;
speedforbulletarr[449]=10;
speedforbulletarr[450]=10;
speedforbulletarr[451]=10;
speedforbulletarr[452]=10;
speedforbulletarr[453]=10;
speedforbulletarr[454]=10;
speedforbulletarr[455]=10;
speedforbulletarr[456]=10;
speedforbulletarr[457]=10;
speedforbulletarr[458]=10;
speedforbulletarr[459]=10;
speedforbulletarr[460]=10;
speedforbulletarr[461]=10;
speedforbulletarr[462]=10;
speedforbulletarr[463]=10;
speedforbulletarr[464]=10;
speedforbulletarr[465]=10;
speedforbulletarr[466]=10;
speedforbulletarr[467]=10;
speedforbulletarr[468]=10;
speedforbulletarr[469]=10;
speedforbulletarr[470]=10;
speedforbulletarr[471]=10;
speedforbulletarr[472]=10;
speedforbulletarr[473]=10;
speedforbulletarr[474]=10;
speedforbulletarr[475]=10;
speedforbulletarr[476]=10;
speedforbulletarr[477]=10;
speedforbulletarr[478]=10;
speedforbulletarr[479]=10;
speedforbulletarr[480]=10;
speedforbulletarr[481]=10;
speedforbulletarr[482]=10;
speedforbulletarr[483]=10;
speedforbulletarr[484]=10;
speedforbulletarr[485]=10;
speedforbulletarr[486]=10;
speedforbulletarr[487]=10;
speedforbulletarr[488]=10;
speedforbulletarr[489]=10;
speedforbulletarr[490]=10;
speedforbulletarr[491]=10;
speedforbulletarr[492]=10;
speedforbulletarr[493]=10;
speedforbulletarr[494]=10;
speedforbulletarr[495]=10;
speedforbulletarr[496]=10;
speedforbulletarr[497]=10;
speedforbulletarr[498]=10;
speedforbulletarr[499]=10;
speedforbulletarr[500]=10;
				}
		}


		fstandcounter++;
	if(fstandcounter>=5)
	{
		fstandcounter = 0;
		//fattackindex=0;
		fattack = true;
	}

	 }
}
void appendHighScore(char userName[], int points)
{
	FILE *fp = fopen("Score_COP.txt", "a"); 

	if (fp != NULL)
	{
		fprintf(fp, "%s\n", userName);
		fprintf(fp, "%d\n", points);
	}

	fclose(fp);
	activeAppending = false;
}
void sortingHighScore()
{
	int temp;
	char t[100];

	for (int i = 0; i < arrayIndex - 1; i++)
	{
		for (int j = 0; j < arrayIndex - 1; j++)
		{
			if (numberArray[j] < numberArray[j + 1])
			{
				temp = numberArray[j];
				numberArray[j] = numberArray[j + 1];
				numberArray[j + 1] = temp;
				strcpy(t, totalName[j]);
				strcpy(totalName[j], totalName[j + 1]);
				strcpy(totalName[j + 1], t);
			}
		}
	}
}

void highScoreShow()
{
	sortingHighScore();
	
	for (int k = 0, y = 600; k < 5; k++, y -= 130)
	{
		char str[100];

		if (numberArray[k]>0)
		{
			_itoa(numberArray[k], str, 10);
			iSetColor(0, 0, 0);
			//score
			iText(770, y, str, GLUT_BITMAP_HELVETICA_18);
			//name
			iText(100, y, totalName[k], GLUT_BITMAP_HELVETICA_18);
		}
	}
}
void userName()
{
	if (flag == 0)
	{
		iSetColor(255, 255, 255);
		iText(840, 580, "CLICK THE BOX",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 0, 0);
		iRectangle(800, 500, 306, 38);
		iText(804, 513, nameOfUser);

		iSetColor(255,255, 255);
		iFilledRectangle(800, 100, 100, 38);
		iText(800, 180, "YOUR SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 0, 0);
		iText(830, 113, point,GLUT_BITMAP_TIMES_ROMAN_24);
		
		//printf(nameOfUser);
	}
	if (flag == 1)
	{
		iSetColor(255,255, 255);
		iText(840, 580, "ENTER YOUR NAME",GLUT_BITMAP_TIMES_ROMAN_24);
		iFilledRectangle(800, 500, 306, 38);
		iSetColor(0, 0, 0);
		iText(804, 513, nameOfUser, GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(255,255, 255);
		iFilledRectangle(800, 100, 100, 38);
		iText(800, 180, "YOUR SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 0, 0);
		iText(830, 113, point,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 0, 0);
	}
}
void readHighScore()
{
	FILE *fp = fopen("Score_COP.txt", "r");
	char str[100];
	arrayIndex = 0, stringIndex = 0;

	if (fp != NULL)
	{
		while (fgets(str, 30, fp) != NULL)
		{
			
			strcpy(totalName[stringIndex++], str);
			fgets(str, 15, fp);
			numberArray[arrayIndex++] = atoi(str);	
		}
	}

	fclose(fp);
}
