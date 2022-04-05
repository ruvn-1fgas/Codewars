class SnakesLadders
{
    bool lastplayer = false;
    bool curPlayer = false;

    int fPos = 0;
    int sPos = 0;

    static int getPos(int pos)
    {
      switch (pos)
      {
        case 2: return 38;
        case 7: return 14;
        case 8: return 31;
        case 16: return 6;
        case 15: return 26;
        case 21: return 42;
        case 28: return 84;
        case 36: return 44;
        case 46: return 25;
        case 49: return 11;
        case 51: return 67;
        case 62: return 19;
        case 64: return 60;
        case 71: return 91;
        case 74: return 53;
        case 78: return 98;
        case 87: return 94;
        case 89: return 68;
        case 92: return 88;
        case 95: return 75;
        case 99: return 80;
        default: return pos;
      }


    }

public:
    SnakesLadders() {};
    std::string play(int die1, int die2)
    {
        bool lastplayer = curPlayer;
      

        if(!curPlayer)//Первый
        {
          if(fPos == 100 || sPos == 100)
            return "Game over!";
          std::cout<<"1 pos = "<<fPos<<" Кубики = "<<die1+die2<<'\n';
            if (die1 == die2)
                curPlayer = curPlayer;
            else
                curPlayer = !curPlayer;



            int lastPos = fPos;

            fPos = getPos(fPos + die1 + die2);

            if (fPos == 100)
              return "Player 1 Wins!";

            if(fPos > 100)
            {
                //fPos = lastPos;

                //fPos = 100 - die1 - die2 + (100 - lastPos);
                fPos = getPos(200 - die1 - die2 - lastPos);

                //fPos -= (100 - (fPos + die1 + die2));
                //fPos += die1 + die2 - (100 - (fPos + die1 + die2));
            }

            
            return "Player 1 is on square " + std::to_string(fPos);
        }else//Второй
        {
          if(sPos == 100 || fPos == 100)
            return "Game over!";
          
            std::cout<<"2 pos = "<<sPos<<" Кубики = "<<die1+die2<<'\n';

            if (die1 == die2)
                curPlayer = curPlayer;
            else
                curPlayer = !curPlayer;

            int lastPos = sPos;

            sPos = getPos(sPos + die1 + die2);

            if (sPos == 100)       
              return "Player 2 Wins!";
          
            if (sPos > 100)
            {
                //fPos = lastPos;

                //fPos = 100 - die1 - die2 + (100 - lastPos);
                sPos = getPos(200 - die1 - die2 - lastPos);

                //fPos -= (100 - (fPos + die1 + die2));
                //fPos += die1 + die2 - (100 - (fPos + die1 + die2));
            }
            return "Player 2 is on square " + std::to_string(sPos);
        }
    };
};
