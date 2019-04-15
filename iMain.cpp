#include "iGraphics.h"
#include "bitmap_loader.h"
#include "variable.h"


bool gameover=false;
bool hbg=true;

bool enternamebool=false;

int numberofbullet=0;
bool reload=true;

char bossdeatharray[][20]={"die01.bmp","die02.bmp","die03.bmp","die04.bmp","die05.bmp","die06.bmp","die07.bmp","die08.bmp","die09.bmp","die10.bmp","die11.bmp",
							"die12.bmp","die13.bmp","die14.bmp"};
int bossdeathcon=0;
bool bossbool=true;

struct pigstrct{
	int wayforpig;
	int ycorofpig;

	void pigwayincre()
	{
	if(wayforpig+112>=0)
	{
		wayforpig-=10;
	}
	}
};
pigstrct pigstr[100];





void picchanger()
{
if(notificationOn==true)
{
 notificationCounter++;
}
if(lifeofboss<=0 && bossbool==true)
{
bossdeathcon++;
if(bossdeathcon>=13)
	bossbool=false;
}
}
void Menu ()
{
i++;
if(i==35)
	i=0;

}

void timerforbat()
{
	battime++;
wayforbat=1530;
horizontalforbomb=600;
wayforbomb=1530;
bombarrayindex++;
if(bombarrayindex>=10)
	bombarrayindex=0;
}
void timerforpig()
{
	pigtime++;
	pigstr[pigtime].wayforpig=1680;
}

//FILE OPERATION

char bg2[][11]={"bg2_01.bmp","bg2_02.bmp","bg2_03.bmp","bg2_04.bmp","bg2_05.bmp","bg2_06.bmp"};//cut piece of background

void iDraw()
{
	//place your drawing codes here
	iClear();
	if(i1==0)//Title picture animation(picture1)
	          {  if(i<3)
				  iShowImage(0,0,screenwidth,screenheight,frstimg);
	else if(i>=3 && i<5)
	iShowImage(0,0,screenwidth,screenheight,frstimg1);//Title picture animation(picture2)
	else if(i>=5 && i<=12)
	iShowImage(0,0,screenwidth,screenheight,frstimg2);//Title picture animation(picture3)
				  if(i==12)
				 i1=1;
			  }
	if(menu==false && i1==1 )
	{	
		iShowImage(0,0,screenwidth,screenheight,loadimage);
		if(i%2==0)
		iShowBMP(350,100,"images\\loadText.bmp");
	}              	
button();
             /*work of PLAY button*/
	if(play==false && gameover==false)
	{
		if(bgcheck==1)
	iShowBMP(0,0,"images\\bg1.bmp");

	else if(bgcheck==2)   //bg of level 2
		iShowBMP(0,0,"bg2.bmp");
	notificationOn=true;
	if(notificationCounter<=11)
	iShowBMP2(300,300,"images\\level_1.bmp",0);
	if(notificationCounter>11 && notificationCounter<=22)
	iShowBMP2(500,300,"images\\1.bmp",0);
	if(notificationCounter>22 && notificationCounter<=33)
	iShowBMP2(500,300,"images\\2.bmp",0); 
	if(notificationCounter>33&& notificationCounter<=43)
	iShowBMP2(500,300,"images\\3.bmp",0);
	if(notificationCounter>=44)
	notificationOn=false;

	if(smalltime>0 && smalltime<40 && smallbool==true && notificationCounter>=44 ) // && notificationCounter>=44  এইটা দিসি কজ লেখাগুলা আসার পর জাতে শত্রুগুলা আসা শুরু করে
	{
	iShowBMP2(wayforenemy,20,smallen[i],0);
	if(wayforenemy+112>=0)/*112 chilo*/
	{wayforenemy-=speedforsmallenemy;
	if(wayforenemy==900)
	{
		iShowBMP2(wayforenemy,20,"images\\small05.bmp",0);
		agun=false;
		agunx=900;
	}
	if(agun==false){
	iShowBMP2(agunx,25,"images\\efire.bmp",0);
	agunx-=30;
	if(agunx==0)
		agun=true;
	}
	}
	if(wayforenemy<=-120)/*==*/
	{
	smalltime++; 
	 wayforenemy=1560;
	 /**//**//**/
	//printf("smalltime = %d\n",smalltime);
	}
	if(smalltime==40)
		smallbool=false;
	}//0 thke 40 er bracket eita



	if(smallbool==true && notificationCounter>=44)//smalltimejotokhn 40 er choto thakbe
	{
	if(battime<20)
	{

	iShowBMP2(wayforbomb+10,horizontalforbomb,"images\\bomb.bmp",0);
	//horizontalforbomb  bombarray[bombarrayindex]
	iShowBMP2(wayforbat,600,bat[i],0);
	if(wayforbat+112>=0)
	{
		wayforbat-=15;
	}
	if(wayforbomb>= bombarray[bombarrayindex])
	{
	wayforbomb-=15;
	}
	if( wayforbomb<=bombarray[bombarrayindex])
	{
	horizontalforbomb-=15;
	}
	if(horizontalforbomb<=0){
	{
	iShowBMP2(bombarray[bombarrayindex]-50,0,explosion[2],0);
	}
	}
	}
	//pig
	if(pigtime<40 && pigtime>=1)
	{
	if(bgcheck==1)///////////////////////////////////
		iShowBMP2(pigstr[pigtime].wayforpig,pigstr[pigtime].ycorofpig,pig[i],0);
		if(bgcheck==2) /////////////////////////////////////
     iShowBMP2(pigstr[pigtime].wayforpig,pigstr[pigtime].ycorofpig,snake[i],0); ///////////////////////////////////////////
	pigstr[pigtime].pigwayincre();
	}

	}//small eneimir limit 40 er bracket eita

	//বস ের গোলাগুলি
	if(smallbool==false && lifeofboss>0)
	{	
		if(bgcheck==1) ///////////////////////////
		iShowBMP2(cordinateofboss,upperlimit,"images\\bigenemyL1.bmp",0);


		if(bgcheck==2)  ///////////////////////////
         iShowBMP2(cordinateofboss,upperlimit,"dragon1.bmp",0);//////////////////////////////
		if(biglafalafi==false)
		{if(upperlimit>=0 && upperlimit<=85 )
		{
		upperlimit+=1;
		if(upperlimit==85)
		{
			biglafalafi=true;
			bigenemyfireup=true;
		}
		}}
		if(biglafalafi==true)
	{if(upperlimit>=0 && upperlimit<=85 )
	{
	upperlimit-=1;
		if(upperlimit==0)
			{biglafalafi=false;
		bigenemyfiredown=true;}
		}}
	if(bigenemyfireup==true)
	{
	iShowBMP2(uplength4fire,120,bluefire[i],0);
	uplength4fire-=10;
	if(uplength4fire==0)
	{bigenemyfireup=false;
	uplength4fire=1400;
	}
	}

	if(bigenemyfiredown==true)
	{
	iShowBMP2(downlength4fire,20,bluefire[i],0);
	downlength4fire-=10;
	if(downlength4fire==0)
	{bigenemyfiredown=false;
	downlength4fire=1400;
	}
	}
	}
	fuad();
	//collision start
	if((arr[firecounter]+20>agunx) && (arr[firecounter]<agunx+30)  ) //agun agun collision
			{ 
				agunx=-30;
				arr[firecounter]=1560;
			//	speedforbulletarr[firecounter]=0;
				firecounter++;
				//fireindex++;
			}

	//rio small enemy collision
	if(fcordinatex+20<=wayforenemy && fcordinatex+20>=wayforenemy && fcordinatey<=50 )
	{
		damagebool=false;
		riorlife--;

		//printf("%d\n",riorlife);
	}

	//for level 01
	if(wayforenemy==120 && bgcheck==1)
	{
	fireindex++;
	arr[fireindex]=1560;
	printf(" collision na hoile = %d   %d\n",firecounter,fireindex);
	}
	//for level 02
	if(wayforenemy==120 && bgcheck==2)
	{
	fireindex++;
	firecounter++;
	arr[fireindex]=1560;
	printf(" collision na hoile = %d   %d\n",firecounter,fireindex);
	}


	if((arr[firecounter]+5>wayforenemy) && (arr[firecounter]<wayforenemy+30) && wayforenemy>=120 && wayforenemy<=1530) //agun small enemy collision
		 {
			wayforenemy=-120;
			arr[firecounter]=1560;
			//speedforbulletarr[firecounter]=0;
			//speedforbulletarr[firecounter-1]=10;
			firecounter++;
			printf(" collision  hoile = %d   %d\n",firecounter,fireindex);
			score+=5;
			itoa(score,point,10);
		}

	
	if( agunx==(fcordinatex+120) && fcordinatey<=50) // agun rio collision
	{
		damagebool=false;
		riorlife--;
		score-=2;
		itoa(score,point,10);
		//printf("%d",riorlife);
		//(agunx+20>=fcordinatex) && ((agunx)<=fcordinatex-20) 
	}

	//pig er collision

	if( (pigstr[pigtime].wayforpig==(fcordinatex+120)) && fcordinatey<=50)
	{
		//damagebool=false;
		riorlife--;
		score-=3;
		itoa(score,point,10);
		//printf("%d",riorlife);
		//(agunx+20>=fcordinatex) && ((agunx)<=fcordinatex-20) 
	}

	//bat er bomb er collision

	if(fcordinatex>=bombarray[bombarrayindex]-170 && fcordinatex<=bombarray[bombarrayindex]+70 && horizontalforbomb==0 && fcordinatey==0){
	    damagebool=false;
		riorlife--;
		//printf("%d\n",riorlife);
	}

	//boss er collision

	if(smallbool==false)
	{
	if( downlength4fire==(fcordinatex+150) && fcordinatey<=15)//nicher agun er life koma
	{
		damagebool=false;
		riorlife--;
		//printf("%d",riorlife);
	}
	if( uplength4fire==(fcordinatex+150) && fcordinatey<=130 && fduckposition==true)//uprer agun er life koma
	{
		damagebool=false;
		riorlife--;
		//printf("%d",riorlife);
	}

	if(arr[firecounter]+65>=cordinateofboss && arr[firecounter]-65<=cordinateofboss && upperlimit<=85){ //rior agun plus boss er collision
		lifeofboss--;
		firecounter++;
		//printf("%d\n",lifeofboss);
		if(lifeofboss<=0){
			cordinateofboss=-205;
			uplength4fire= -100;
			downlength4fire=-100;
		}
		score+=10;
		itoa(score,point,10);
	}
	}
	if(riorlife==5)
		iShowBMP2(1450,700,"Love.bmp",0);
	if(riorlife>=4)
		iShowBMP2(1400,700,"Love.bmp",0);
	if(riorlife>=3)
		iShowBMP2(1350,700,"Love.bmp",0);
	if(riorlife>=2)
		iShowBMP2(1300,700,"Love.bmp",0);
	if(riorlife>=1)
		iShowBMP2(1250,700,"Love.bmp",0);
	//lifebar
	if(smallbool==false && lifeofboss>0)
	{
		iSetColor(255,255,255);
		iText(430,720,"LIFE OF BOSS:",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0,200,0);
	iRectangle(702,720,200,30);
	iSetColor(200,0,0);
	if(bgcheck==1)
	iFilledRectangle(700,720,(lifeofboss*20),32);
	if(bgcheck==2)
		iFilledRectangle(700,720,(lifeofboss*6.6666666667),28);
	}

	iSetColor(255,255,255);
	itoa(score,point,10);
	iText(100,730,"YOUR SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(300,730,point,GLUT_BITMAP_TIMES_ROMAN_24);

	if(reload==false && i%2==0)
	{
		iShowBMP2(500,400,"reloadpic.bmp",0);
	}
	}
	if(lifeofboss<=0 && bgcheck==1)
	{
	iShowBMP2(1450,0,bossdeatharray[bossdeathcon],0);
	iShowBMP2(1450,0,firering[i],0);
	}
	//fire ring


	if(riorlife<=0)
	{
	gameover=true;
	}
	if(gameover==true && hbg==true )
	{
	iShowBMP2(0,0,"gameover.bmp",0);
	if(i%2==0)
	iShowBMP2(400,100,"ctocontinue.bmp",0);	
	//userName();
	}
	if(gameover==true && hbg==true && enternamebool==true )
	{
	iShowBMP(0,0,"nameenterbg.bmp");	
	userName();
	}

	if(bgcheck==2 && lifeofboss==0 /*&& lifeofboss==0*/ && smalltime>=35 && hbg==true )
	{
	iShowBMP2(0,0,"missionpass.bmp",0);
	if(i%2==0)
	iShowBMP2(400,0,"ctocontinue.bmp",0);	
	//userName();
	}
	if(bgcheck==2 && lifeofboss==0 /*&&lifeofboss>=0 */ && enternamebool==true && hbg==true)
	{
	iShowBMP(0,0,"nameenterbg.bmp");	
	userName();
	}


	//selection of button
	if(instruction==false)
	iShowImage(0,0,screenwidth,screenheight,insbg);

	if(credit==false)
	iShowImage(0,0,screenwidth,screenheight,crimg);

	if(highScore==false)
	{
		iShowImage(0,0,screenwidth,screenheight,hscimg);
		iText(50, 600, "1", GLUT_BITMAP_HELVETICA_18);
		iText(50, 470, "2", GLUT_BITMAP_HELVETICA_18);
		iText(50, 340, "3", GLUT_BITMAP_HELVETICA_18);
		iText(50, 210, "4", GLUT_BITMAP_HELVETICA_18);
		iText(50, 80, "5", GLUT_BITMAP_HELVETICA_18);
		readHighScore();
		highScoreShow();
	}


	
}

void iPassiveMouse(int x, int y)
{
	//play button
	if(((x>=368 && x<=583 ) && (y>=600 && y<=670 )))
		{
	stopplay=false;
		}
	else if( ((x<368 || x>583 ) || (y<600 || y>670 )))
		stopplay=true;

	//instruction button

	if(((x>=316 && x<=625 ) && (y>=500 && y<=570 )))
		{
	stopinstruction=false;
		}
	else if(((x<316|| x>625 ) || (y<500 || y>570 )))
		stopinstruction=true;


	//highscore button.

	if(((x>=364 && x<=583 ) && (y>=400 && y<=470 )))
		{
	stophighScore=false;
		}
	else if(((x<364|| x>583 ) || (y<400 || y>470 )))
		stophighScore=true;


	//credit button

	if(((x>=364 && x<=583 ) && (y>=300 && y<=370 )))
		{
	stopcredit=false;
		}
	else if(((x<364|| x>583 ) || (y<300 || y>370 )))
		stopcredit=true;

	//exit button

	if((x>=364 && x<=583 ) && (y>=200 && y<=270 ))
		{
	stopexit=false;
		}
	else if(((x<364 || x>583 ) || (y<200 || y>270 )))
		stopexit=true;

}


/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	//printf("x = %d, y= %d\n", mx, my);
	//place your codes here
}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	//play button noraachora theme jabe
	if(play==true)
		{
		if(play==true &&(mx>=368 && mx<=583 ) && (my>=600 && my<=670 ))
		{
		play=false;
		gameover=false;/**/
		}
		}
	if(play==false && ((mx>=1366 && mx<=1493 ) && (my>=715 && my<=783)))
			play=true;
	

	if(instruction==true)//instruction button noraachora theme jabe
		{
		if(play==true &&(mx>=316 && mx<=625 ) && (my>=500 && my<=570 ))
		{
		instruction=false;
		}
		}
	if(instruction==false && ((mx>=1366 && mx<=1493 ) && (my>=715 && my<=783)))
			instruction=true;

	if(credit==true)
		{
		if(play==true &&(mx>=364 && mx<=583 ) && (my>=300 && my<=370 ))
		{
		credit=false;
		}
		}
	if(credit==false && ((mx>=1366 && mx<=1493 ) && (my>=715 && my<=783)))
			credit=true;


	if(highScore==true)
		{
		if(play==true && (mx>=364 && mx<=583 ) && (my>=400 && my<=470 ))
		{
		highScore=false;
		}
		}
	if(highScore==false && ((mx>=1366 && mx<=1493 ) && (my>=715 && my<=783)))
			highScore=true;


	if(exitmenu==true)
		{
		if(play==true &&(mx>=364 && mx<=583 ) && (my>=200 && my<=270 ))
		{
		exit(0);
		}
		}
	if(damagebool==true && fjumpposition==true){
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && play==false && notificationOn==false && reload==true)//throwing fire of RIO
	{
		{
		fattack = false;
		fire = false;
		fattackindex=0; //for single click attack int numberofbullet;
                       //bool reload=true;
		fireindex++;
		numberofbullet++;
		if(numberofbullet>=5)
			reload=false;
		//y123[fireindex]=fcordinatey+20;
		arr[fireindex]=fcordinatex+30;
		if(fireindex>=501){
			fireindex=1; 
		}
	}
		// movingfire =fcordinatex+30;
	}}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN && play==false)//Reload of fire
	{
		//fireindex=1;
		//fire = false;
		if(reload==false)
		{
			numberofbullet=0;
			reload=true;
		}
	}
	if(gameover==true || bgcheck==2){
	if (isNamePlateActive == true)
		{
			if (mx >= 800 && mx <= 1006 && my >= 500 && my <= 538)
			{
				flag = 1;
			}
		}
	}
}

/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	if(gameover==true || bgcheck==2)//bg2 er boss er life dite hobe
	{
	if (key == '\r')
	{
		flag = 0;
		appendHighScore(nameOfUser, score);
		menu=true ; instruction=true ;highScore=true ; credit=true ; exitmenu=true ;  play=true;hbg=false;gameover=false;riorlife=5;
	}
	if (flag == 1)
	{
		if (key == 8)
		{
			if (length > 0)
			{
				nameOfUser[--length] = ' ';
			}

		}
		else
		{
			nameOfUser[length] = key;
			puts(nameOfUser);
			length++;
		}
		
	
		
	}
	}
if (key == ' ')
	{
		menu=true;
	}
	int i;

if ((key == 'c' || 'C') && (gameover == true || bgcheck==2))
	{
		enternamebool=true;
	}
}
/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
 */
void iSpecialKeyboard(unsigned char key)
{
	if(fcordinatey<=0 && damagebool==true){
	if (key == GLUT_KEY_RIGHT)
	{
		fstandposition = false;

		if(lifeofboss<=0 && fcordinatex>1410){ //level 2 condition
			fcordinatex=0;
			bgcheck=2;
			firecounter=1;
			fireindex=0;
			smalltime=1;
			smallbool=true;
			 //for level 2 bg
			damagebool=true;
			fjumpposition=true;
			lifeofboss=30;
			
			//damagebool=true;
			cordinateofboss=1450;
			uplength4fire=1400;//////////////////////////////////eita notun
			downlength4fire=1700;///////////////////////////////////eita notun
		}
		 else if(fcordinatex>=1400 && lifeofboss>0)
			fcordinatex +=30;
		  if(smallbool==true)
		    fcordinatex += 30;
		else
			fcordinatex +=30;
		frioindex++;
		if(frioindex>=8)
			frioindex=0;
		//standposition = false;
	}
	else if(key == GLUT_KEY_LEFT)
	{
		frioleftposition=false;
		 if(fcordinatex<=0)
			fcordinatex -=0;
		 else if(smallbool==true)
		    fcordinatex -= 30;
		else
			fcordinatex -=30;
		frioindex++;
		if(frioindex>=8)
			frioindex=0;
	}}
     if(key == GLUT_KEY_UP)
	{
		//cordinatey=cordinatey+jumpup;
		if(riorlife>0 && damagebool==false){
			damagebool=true;
			getupbool=false;
			damageindex=0;
		}
		else{
		fcordinatey=200;
		fjumpposition = false;
		}
	}
	 if(key == GLUT_KEY_DOWN)
	{
		fduckposition = false;
	}
	}
void change(){
	if(fcordinatey<=0)
	{
		fjumpposition = true;
		fcordinatey=0;
	}
	if(fcordinatey>0)
		fcordinatey=fcordinatey-fcordinatejump;
}

int main()
{

iInitialize(screenwidth,screenheight, "Rio-the ultimate warrior");


	
	bgimage=iLoadImage("images\\bgmenu.bmp");
	playbg=iLoadImage("images\\bg1.bmp");
	insbg=iLoadImage("images\\insbg.jpg");
	loadimage=iLoadImage("images\\loadmenu.png");
	crimg=iLoadImage("images\\credit.png");
	frstimg=iLoadImage("images\\frstimg .jpg");
	frstimg1=iLoadImage("images\\frstimg1.jpg");
	frstimg2=iLoadImage("images\\frstimg2.jpg");
	hscimg=iLoadImage("images\\hsc.png");

	readHighScore();
	
	iSetTimer(250,Menu);
	if(notificationOn==false)
	{
	iSetTimer(10000,timerforbat);
	iSetTimer(9000,timerforpig); 
	}
	iSetTimer(10,change);
	iSetTimer(100,picchanger);
	iStart();

	return 0;
}
