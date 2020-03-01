#include <stdio.h>
#include <windows.h>

#define N 10
#define LINE 19

//char RandBGColor(void);//Randomly generated background color
//char RandFGColor(void);//Randomly generated foreground color
char RandColor(void);
void Delay(void); //Delay for a while

int main()
{
    char s_1[] = {"☆ 岁月带走了年少轻狂 也慢慢沉淀了冷暖自知"};
    char s_2[] = {"☆ 生活都有不尽人意 但依旧需要满怀信心"};
    char s_3[] = {"☆ 迎新的笔写不出惆怅 在新的一年里"};
    char s_4[] = {"☆ 愿你梦里星河灿烂满辰大海"};
    char s_5[] = {"☆ 愿你踏破阻浪拥抱单纯美好"};
    char s_6[] = {"☆ 愿你谈笑欢脱忘记琐碎烦恼"};
    char s_7[] = {"☆ 愿你长乐未央终有良友相伴"};
    char s_8[] = {"☆ 愿你执手他人诗酒相趁年华"};
    char s_9[] = {"☆ 愿你风轻云淡不曾失去笑脸"};
    char s_10[] = {"☆ 新的2020年 有新的期待和期许"};
    char s_11[] = {"☆ 我在此用我单薄的言语"};
    char s_12[] = {"☆ 祝各位 平安喜乐 得偿所愿"};
    char s_13[] = {"☆  "};
    char s_14[] = {"☆ 见字如面。"};
    char s_15[] = {"☆ "};
    char s_16[] = {"☆ "};
    char s_17[] = {"                           2020春节快乐！\n"};
    char s_18[] = {"                                                                YangGuangSheng"};
    char s_19[] = {"                                                                 2020 New Year"};
    char *s_set[] = {s_1, s_2, s_3, s_4, s_5, s_6, s_7, s_8, s_9, s_10, s_11, s_12, s_13, s_14, s_15, s_16, s_17, s_18, s_19};

    char s[9] = "color "; //define a string to replace command "system("color xx")",so can easy change colors
                          //It needs at least 9 units to store the string, cause \0 need to store, too.

    puts("\n\n\n\n\n\n ");      //Adjust the position when words printed
    for (int i = 0; i < N; i++) //make a flicker effect,shine N times
    {
        s[6] = RandColor(); // background color
        s[7] = RandColor(); // foreground color
        system(s);          //Call cmd's color command

        puts("\r                                   ★ 2020春节快乐! ★");
        // Caution: Use printf() to replace puts(), the text will only be printed once
        for (int i = 0; i < 81474400; i++)
            ; //make the flicker effect softer and slower
    }

    puts("\n\n亲爱的计安的小伙伴们:\n");
    puts("\t新春快乐!\n");

    s[6] = '4'; // change background color when diaplay the main words, 4--red

    for (int i = 0; i < LINE; i++)
    {
        puts("\n\a");       //Add sound(beep) when words come out
        s[7] = RandColor(); //foreground color,change words color randomly
        system(s);          //call cmd's color command
        puts(*(s_set + i)); // Print words
        Delay();            //delay for a while
    }

    getchar(); //stop the program

    return 0;
}

char RandColor() //Randomly generated colors
{
    char a = 0;
    a = (char)abs(rand() % 16);
    if (a >= 10)
    {
        a -= 10;
        a += 97;
    }
    else
        a += 48;

    return a;
}

char RandBGColor(void) //use light colors
{
    char bgcolor;

    srand((unsigned)time(NULL));
    bgcolor = rand() % 6 + 15;
    bgcolor += 'a' - 10; //Decimal to Hexadecimal

    return (char)bgcolor;
}

char RandFGColor(void) //use colors
{
    char fgcolor;

    srand((unsigned)time(NULL));
    fgcolor = rand() % 10 + 0;
    //fgcolor += 'A' - 10;//Decimal to Hexadecimal

    return (char)fgcolor;
}

void Delay(void)
{
    for (int i = 0; i < 214748325; i++)
    {
        i += 1;
        i -= 1;
    }
}
