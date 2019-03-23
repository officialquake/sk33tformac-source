#include "clantag.h"

// Thanks @pwned

void clantag()

{
    if(vars.misc.clantag > 0)
    {
        if (vars.misc.clantagtype == CLAN_TAG::xanax)
        {
            
            static int Tick;
            Tick++;
            
            if (Tick > 0 && Tick < 15)
            {
                SetClanTag("x            ", "Xanax");
            }
            else if (Tick > 30 && Tick < 45)
            {
                SetClanTag("xa           ", "Xanax");
            }
            else if (Tick > 60 && Tick < 75)
            {
                SetClanTag("xan          ", "Xanax");
            }
            else if (Tick > 90 && Tick < 105)
            {
                SetClanTag("xana         ", "Xanax");
            }
            else if (Tick > 120 && Tick < 135)
            {
                SetClanTag("xanax         ", "Xanax");
            }
            else if (Tick > 150 && Tick < 165)
            {
                SetClanTag(" xanax        ", "Xanax");
            }
            else if (Tick > 180 && Tick < 195)
            {
                SetClanTag("  xanax       ", "Xanax");
            }
            else if  (Tick > 210 && Tick < 225)
            {
                SetClanTag("   xanax      ", "Xanax");
            }
            else if (Tick > 240 && Tick < 255)
            {
                SetClanTag("    xanax     ", "Xanax");
            }
            else if (Tick > 270 && Tick < 285)
            {
                SetClanTag("     xanax    ", "Xanax");
            }
            else if (Tick > 300 && Tick < 315)
            {
                SetClanTag("      xanax   ", "Xanax");
            }
            else if (Tick > 330 && Tick < 345)
            {
                
                SetClanTag("       xanax  ", "Xanax");
            }
            else if (Tick > 360 && Tick < 375)
            {
                SetClanTag("        xanax  ", "Xanax");
            }
            else if (Tick > 390 && Tick < 405)
            {
                SetClanTag("         xanax ", "Xanax");
            }
            else if (Tick > 420 && Tick < 435)
            {
                SetClanTag("          xanax", "Xanax");
            }
            else if (Tick > 450 && Tick < 465)
            {
                SetClanTag("           xana", "Xanax");
            }
            else if (Tick > 480 && Tick < 495)
            {
                SetClanTag("            xan", "Xanax");
            }
            else if (Tick > 510 && Tick < 525)
            {
                SetClanTag("             xa", "Xanax");
            }
            else if (Tick > 540 && Tick < 555)
            {
                SetClanTag("              x", "Xanax");
            }
            else if (Tick > 570 && Tick < 585)
            {
                SetClanTag("               ", "Xanax");
            }
            
            
            // Reset
            if(Tick > 585)
            {
                Tick = 0;
            }
        }
        
        //
        //
        
        if (vars.misc.clantagtype == CLAN_TAG::supremacy)
        {
            
            static int Tick;
            Tick++;
            
            if (Tick > 0 && Tick < 15)
            {
                SetClanTag("SUPREMACY $", "SUPREMACY $");
            }
            
            
            
            // Reset
            if(Tick > 15)
            {
                Tick = 0;
            }
        }
        
        
        if (vars.misc.clantagtype == CLAN_TAG::gamesense)
        {
            
            
            //skeet
            {
                switch (int(pGlobals->curtime * 2.4) % 27)
                {
                    case 0: SetClanTag("                  ", "gamesense"); break;
                    case 1: SetClanTag("                 g", "gamesense"); break;
                    case 2: SetClanTag("                ga", "gamesense"); break;
                    case 3: SetClanTag("               gam", "gamesense"); break;
                    case 4: SetClanTag("              game", "gamesense"); break;
                    case 5: SetClanTag("             games", "gamesense"); break;
                    case 6: SetClanTag("            gamese", "gamesense"); break;
                    case 7: SetClanTag("           gamesen", "gamesense"); break;
                    case 8: SetClanTag("          gamesens", "gamesense"); break;
                    case 9: SetClanTag("         gamesense", "gamesense"); break;
                    case 10:SetClanTag("        gamesense ", "gamesense"); break;
                    case 11:SetClanTag("       gamesense  ", "gamesense"); break;
                    case 12:SetClanTag("      gamesense   ", "gamesense"); break;
                    case 13:SetClanTag("      gamesense   ", "gamesense"); break;
                    case 14:SetClanTag("    gamesense     ", "gamesense"); break;
                    case 15:SetClanTag("   gamesense      ", "gamesense"); break;
                    case 16:SetClanTag("  gamesense       ", "gamesense"); break;
                    case 17:SetClanTag(" gamesense        ", "gamesense"); break;
                    case 18:SetClanTag(" gamesense        ", "gamesense"); break;
                    case 19:SetClanTag(" gamesense        ", "gamesense"); break;
                    case 20:SetClanTag("gamesense         ", "gamesense"); break;
                    case 21:SetClanTag("amesense          ", "gamesense"); break;
                    case 22:SetClanTag("mesense           ", "gamesense"); break;
                    case 23:SetClanTag("esense            ", "gamesense"); break;
                    case 24:SetClanTag("sense             ", "gamesense"); break;
                    case 25:SetClanTag("ense              ", "gamesense"); break;
                    case 26:SetClanTag("nse               ", "gamesense"); break;
                    case 27:SetClanTag("se                ", "gamesense"); break;
                    case 28:SetClanTag("e                 ", "gamesense"); break;
                        
                }
            }
        }
        
        
        if (vars.misc.clantagtype == CLAN_TAG::getzeus)
        {
            static int Tick;
            Tick++;
            
            if (Tick > 0 && Tick < 15)
            {
                SetClanTag("getze.us ", "getze.us");
            }
            else if (Tick > 30 && Tick < 45)
            {
                SetClanTag("etze.us g", "getze.us");
            }
            else if (Tick > 60 && Tick < 75)
            {
                SetClanTag("tze.us ge", "getze.us");
            }
            else if (Tick > 90 && Tick < 105)
            {
                SetClanTag("ze.us get", "getze.us");
            }
            else if (Tick > 120 && Tick < 135)
            {
                SetClanTag("e.us getz", "getze.us");
            }
            else if (Tick > 150 && Tick < 165)
            {
                SetClanTag(".us getze", "getze.us");
            }
            else if (Tick > 180 && Tick < 195)
            {
                SetClanTag("us getze.", "getze.us");
            }
            else if  (Tick > 210 && Tick < 225)
            {
                SetClanTag("s getze.u", "getze.us");
            }
            else if  (Tick > 240 && Tick < 255)
            {
                SetClanTag(" getze.us", "getze.us");
            }
            else if  (Tick > 270 && Tick < 285)
            {
                SetClanTag("getze.us ", "getze.us");
            }
            else if  (Tick > 300 && Tick < 315)
            {
                SetClanTag("getze.us ", "getze.us");
            }
            
            
            // Reset
            if(Tick > 315)
            {
                Tick = 0;
            }
        }
        
        
        
        
    }
}

