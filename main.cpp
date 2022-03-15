#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
class Base{
public:
    Texture Board, Figure;
    Base(){

        Board.loadFromFile("C:\\chess-piece\\pngwing.com.png");
        Figure.loadFromFile("C:\\chess-piece\\queen.png");
    }
};
class Draw: public Base{
public:
    Sprite *prt= new Sprite;

    Draw(){


        RenderWindow window(sf::VideoMode(640, 480), "Chess game");

        Sprite spriteboard(Board);


        Sprite queen(Figure, IntRect(40, 0, 40, 40));
        *prt = queen;
        queen.setPosition(160, 40);
        Sprite King(Figure, IntRect(0, 0, 40, 40));
        King.setPosition(200, 40);
        Sprite knight(Figure, IntRect(120, 0, 40, 40));
        knight.setPosition(80, 40);
        Sprite knight2(Figure, IntRect(120, 0, 40, 40));
        knight2.setPosition(280, 40);
        Sprite bishop(Figure, IntRect(80, 0, 40, 40));
        bishop.setPosition(120, 40);
        Sprite bishop2(Figure, IntRect(80, 0, 40, 40));
        bishop2.setPosition(240, 40);
        Sprite rook(Figure, IntRect(160, 0, 40, 40));
        rook.setPosition(40, 40);
        Sprite rook2(Figure, IntRect(160, 0, 40, 40));
        rook2.setPosition(320, 40);
        //  Sprite pawn1(Figure, IntRect(200, 0, 40, 40));
        //  pawn1.setPosition(40, 80);
        //  Sprite pawn2(Figure, IntRect(200, 0, 40, 40));
        // pawn2.setPosition(80, 80);
        Sprite pawn3(Figure, IntRect(200, 0, 40, 40));
        pawn3.setPosition(120, 80);
        Sprite pawn4(Figure, IntRect(200, 0, 40, 40));
        pawn4.setPosition(160, 80);
        Sprite pawn5(Figure, IntRect(200, 0, 40, 40));
        pawn5.setPosition(200, 80);
        Sprite pawn6(Figure, IntRect(200, 0, 40, 40));
        pawn6.setPosition(240, 80);
        Sprite pawn7(Figure, IntRect(200, 0, 40, 40));
        pawn7.setPosition(280, 80);
        Sprite pawn8(Figure, IntRect(200, 0, 40, 40));
        pawn8.setPosition(320, 80);
        Sprite BQueen(Figure, IntRect(40, 40, 40, 40));
        BQueen.setPosition(160, 320);
        Sprite BKing(Figure, IntRect(0, 40, 40, 40));
        BKing.setPosition(200, 320);
        Sprite Bknight(Figure, IntRect(120, 40, 40, 40));
        Bknight.setPosition(80, 320);
        Sprite Bknight2(Figure, IntRect(120, 40, 40, 40));
        Bknight2.setPosition(280, 320);
        Sprite Bbishop(Figure, IntRect(80, 40, 40, 40));
        Bbishop.setPosition(120, 320);
        Sprite Bbishop2(Figure, IntRect(80, 40, 40, 40));
        Bbishop2.setPosition(240, 320);
        Sprite Brook(Figure, IntRect(160, 40, 40, 40));
        Brook.setPosition(40, 320);
        Sprite Brook2(Figure, IntRect(160, 40, 40, 40));
        Brook2.setPosition(320, 320);
        Sprite Bpawn1(Figure, IntRect(200, 40, 40, 40));
        Bpawn1.setPosition(40, 280);
        Sprite Bpawn2(Figure, IntRect(200, 40, 40, 40));
        Bpawn2.setPosition(80, 280);
        Sprite Bpawn3(Figure, IntRect(200, 40, 40, 40));
        Bpawn3.setPosition(120, 280);
        Sprite Bpawn4(Figure, IntRect(200, 40, 40, 40));
        Bpawn4.setPosition(160, 280);
        Sprite Bpawn5(Figure, IntRect(200, 40, 40, 40));
        Bpawn5.setPosition(200, 280);
        Sprite Bpawn6(Figure, IntRect(200, 40, 40, 40));
        Bpawn6.setPosition(240, 280);
        Sprite Bpawn7(Figure, IntRect(200, 40, 40, 40));
        Bpawn7.setPosition(280, 280);
        Sprite Bpawn8(Figure, IntRect(200, 40, 40, 40));
        Bpawn8.setPosition(320, 280);

        while (window.isOpen()) {
            Event event;

            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();

            }
            window.clear(Color::Green);
            window.draw(spriteboard);
            window.draw(queen);
            window.draw(King);
            window.draw(knight);
            window.draw(knight2);
            window.draw(bishop);
            window.draw(bishop2);
            window.draw(rook);
            window.draw(rook2);
            window.draw(pawn3);
            window.draw(pawn4);
            window.draw(pawn5);
            window.draw(pawn6);
            window.draw(pawn7);
            window.draw(pawn8);
            window.draw(BQueen);
            window.draw(BKing);
            window.draw(Bknight);
            window.draw(Bknight2);
            window.draw(Bbishop);
            window.draw(Bbishop2);
            window.draw(Brook);
            window.draw(Brook2);
            window.draw(Bpawn1);
            window.draw(Bpawn2);
            window.draw(Bpawn3);
            window.draw(Bpawn4);
            window.draw(Bpawn5);
            window.draw(Bpawn6);
            window.draw(Bpawn7);
            window.draw(Bpawn8);
            window.display();
        }

    }



};

class Pawn: public Base {
public:

    Pawn(int x, int y) {
        Sprite pawn1(Base::Figure, IntRect(200, 0, 40, 40));
        pawn1.setPosition(x, y);
        RenderWindow window(VideoMode(640, 480), "Chess game");
        while (window.isOpen()) {
            Event event;

            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();

            }
            window.clear(Color::Green);
            Pawn pawn1(40, 80);

            // window.draw(pawn1);
            window.display();

            // Pawn pawn2{80, 80};

        }
    }
};

int main() {
    Draw gr{};
    //  RenderWindow window(VideoMode(640, 480), "Chess game");

}

