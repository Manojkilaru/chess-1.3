//
//  move.cpp
//  chess1.0
//
//  Created by Manoj kilaru on 01/06/15.
//  Copyright (c) 2015 Manoj kilaru. All rights reserved.
//

#include "move.h"
#include <fstream>
const int length=4;
void movemotor(position initial,position final,piece *board[12][8],bool isdead){
    std::fstream fs,read;
    string s;
    fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
    fs<<(initial.x-piece::motor.x)*length<<" "<<(initial.y-piece::motor.y)*length<<" "<<1<<endl;
    fs.close();
    while(true)
    {
        read.open("read.txt");
        read>>s;
        if(s!="")
        {
            read.close();
            read.open("read.txt",std::fstream::out);
            read.close();
            break;
        }
        else
        {
            cout<<"manoj";
        }
        read.close();
    }
    fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
    fs.close();
    
    
    if ((board[final.x][final.y]->tostring()=="pawn"||board[final.x][final.y]->tostring()=="rook")&&!isdead) {
        fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
        fs<<(final.x-initial.x)*length<<" "<<(final.y-initial.y)*length<<" "<<-1<<endl;
        fs.close();
        while(true)
        {
            read.open("read.txt");
            read>>s;
            if(s!="")
            {
                read.close();
                read.open("read.txt",std::fstream::out);
                read.close();
                break;
            }
            else
            {
                cout<<"manoj";
            }
            read.close();
        }
        fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
        fs.close();
    }
    else{
        if (final.x>initial.x&&final.y>initial.y) {
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<length/2<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<(final.x-initial.x)*length-(length/2)<<" "<<0<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<(final.y-initial.y)*length-(length/2)<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<length/2<<" "<<0<<" "<<-1<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
        }
        else if (final.y==initial.y) {
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<length/2<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<(final.x-initial.x)*length<<" "<<0<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<-length/2<<" "<<-1<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
        }
        else if (final.x==initial.x) {
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<length/2<<" "<<0<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<(final.y-initial.y)*length<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<-length/2<<" "<<0<<" "<<-1<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
        }
        else if(final.x>initial.x&&final.y<initial.y){
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<-length/2<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<(final.x-initial.x)*length-(length/2)<<" "<<0<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<(final.y-initial.y)*length-(length/2)<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<length/2<<" "<<0<<" "<<-1<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
        }
        else if(final.x<initial.x&&final.y<initial.y){
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<-length/2<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<(final.x-initial.x)*length-(length/2)<<" "<<0<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<(final.y-initial.y)*length-(length/2)<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<-length/2<<" "<<0<<" "<<-1<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
        }
        else if(final.x<initial.x&&final.y>initial.y){
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<length/2<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<(final.x-initial.x)*length-(length/2)<<" "<<0<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<0<<" "<<(final.y-initial.y)*length-(length/2)<<" "<<0<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs<<-length/2<<" "<<0<<" "<<-1<<endl;
            fs.close();
            //wait
            while(true)
            {
                read.open("read.txt");
                read>>s;
                if(s!="")
                {
                    read.close();
                    read.open("read.txt",std::fstream::out);
                    read.close();
                    break;
                }
                else
                {
                    cout<<"manoj";
                }
                read.close();
            }
            fs.open ("/Users/manoj/Desktop/chess 1.3/output.txt",std::fstream::out);
            fs.close();
        }
    }
    piece::motor=final;
}
move::move(position intial,position final,piece *board[12][8]):initial(intial),final(final)
{
    if(final.x!=-7&&initial.x!=-7&&board[final.x][final.y]!=NULL/*&&board[final.x][final.y]->colour!=board[initial.x][initial.y]->colour*/)
    {
        deadpos=board[final.x][final.y]->deadpos(board);
    }
}
void move::set(piece *board[12][8])
{
    if(final.x!=-7&&initial.x!=-7&&board[final.x][final.y]!=NULL/*&&board[final.x][final.y]->colour!=board[initial.x][initial.y]->colour*/)
    {
        deadpos=board[final.x][final.y]->deadpos(board);
    }
}
void move::undoit(piece *board[12][8]){
    board[initial.x][initial.y]=board[final.x][final.y];
    board[initial.x][initial.y]->update_position(initial);
    if (deadpos.x!=-7&&deadpos.y!=-7) {
        board[final.x][final.y]=board[deadpos.x][deadpos.y];
        board[final.x][final.y]->update_position(final);
        if (board[deadpos.x][deadpos.y]->colour) {
            piece::whitecoins++;
        }
        else{
            piece::blackcoins++;
        }
        board[deadpos.x][deadpos.y]=NULL;
    }
    else{
        board[final.x][final.y]=NULL;
    }
}

void move::moveit(piece *board[12][8],bool serious){
    if (board[final.x][final.y]==NULL) {
        board[final.x][final.y]=board[initial.x][initial.y];
        board[final.x][final.y]->update_position(final);
        board[initial.x][initial.y]=NULL;
        
    }
    else
    {
        board[deadpos.x][deadpos.y]=board[final.x][final.y];
        board[deadpos.x][deadpos.y]->update_position(deadpos);
        if (board[deadpos.x][deadpos.y]->colour) {
            piece::whitecoins--;
        }
        else{
            piece::blackcoins--;
        }
        board[final.x][final.y]=board[initial.x][initial.y];
        board[final.x][final.y]->update_position(final);
        board[initial.x][initial.y]=NULL;
        if (serious) {
            movemotor(final,deadpos,board,true);
        }
    }
    if (serious) {
        movemotor(initial,final,board,false);
    }
}

