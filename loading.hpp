#ifndef LOADING_H
#define LOADING



int screenWidth = 1920;
int screenHeight = 1080;

char bg[1][30] = { "Pic\\loading\\background.png" };
char line[1][50] = { "Pic\\loading\\station.png" };
char trainRight[1][40] = { "Pic\\loading\\Train_GoingRight.png" };
char trainLeft[1][40] = { "Pic\\loading\\Train_GoingLeft.png" };
char logo[1][40] = { "Pic\\loading\\title.png" };
char button[1][40] = { "Pic\\loading\\button.png" };


int trainY1 = 0;
int trainX1 = 0;
int trainX2 = 0;
int trainY2 = 0;

int titleW = 0;
int titleH = 0;
int buttonX = 0;
int buttonY = 0;

void loadingImage(){

	iShowImage(0, 0, 1920, 1080, iLoadImage(bg[0]));
	iShowImage(-1000 + trainX1, -194 + trainY1, 1920, 1000, iLoadImage(trainRight[0]));
	iShowImage(1920 + trainX2, -194 + trainY2, 1920, 1000, iLoadImage(trainLeft[0]));
	iShowImage(0, 0, 1920, 1080, iLoadImage(line[0]));
	iShowImage(0 - titleW, 0 - titleH, screenWidth + titleW, screenHeight + titleH, iLoadImage(logo[0]));
	iShowImage(0, 0 + buttonY, 1920, 1080, iLoadImage(button[0]));
}

void train(){

	//Train Movement Right to left

	trainX2 -= 50;
	trainY2 = (-1)*trainY2 + 2;

	if (trainX2 < 2 * (-1920))
	{
		trainX2 = 0;
	}


	//Train Movement Left to Right__________________

	trainX1 += 50;
	trainY1 = (-1)*trainY1 + 2;

	if (trainX1 > 1000 + screenWidth)
	{
		trainX1 = (-1)*(screenWidth);
	}

}

void buttonAni(){

	//Button Animation_______________

	buttonY = (-1) * buttonY + 5;
}




#endif