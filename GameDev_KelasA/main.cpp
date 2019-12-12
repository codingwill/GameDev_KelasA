#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Konsep Pemrograman - Game Dev C++");
	Texture idle0;
	idle0.loadFromFile("images/ninja/png/Idle__000.png");
	
	/*
	Texture idle1;
	idle1.loadFromFile("images/ninja/png/Idle__001.png");
	Texture idle2;
	idle2.loadFromFile("images/ninja/png/Idle__002.png");
	Texture idle3;
	idle3.loadFromFile("images/ninja/png/Idle__003.png");
	Texture idle4;
	idle4.loadFromFile("images/ninja/png/Idle__004.png");
	Texture idle5;
	idle5.loadFromFile("images/ninja/png/Idle__005.png");
	Texture idle6;
	idle6.loadFromFile("images/ninja/png/Idle__006.png");
	Texture idle7;
	idle7.loadFromFile("images/ninja/png/Idle__007.png");
	Texture idle8;
	idle8.loadFromFile("images/ninja/png/Idle__008.png");
	Texture idle9;
	idle9.loadFromFile("images/ninja/png/Idle__009.png");
	*/
	Sprite player;
	player.setScale(1.0f, 1.0f);
	player.setTexture(idle0);
	/*
	//SET PENGHITUNG WAKTU
	Clock clock;
	Time time;
	float currentTime;
	float fps = 0.1f;
	*/
	// run the program as long as the window is open
	while (window.isOpen())
	{
		/*
		time = clock.getElapsedTime();
		currentTime = time.asSeconds();
		player.setTexture(idle0, true);
		//SET ANIMASI
		if (currentTime >= 10  * fps)
			clock.restart();
		else if (currentTime >= 9 * fps)
			player.setTexture(idle9);
		else if (currentTime >= 8 * fps)
			player.setTexture(idle8);
		else if (currentTime >= 7 * fps)
			player.setTexture(idle7);
		else if (currentTime >= 6 * fps)
			player.setTexture(idle6);
		else if (currentTime >= 5 * fps)
			player.setTexture(idle5);
		else if (currentTime >= 4 * fps)
			player.setTexture(idle4);
		else if (currentTime >= 3 * fps)
			player.setTexture(idle3);
		else if (currentTime >= 2 * fps)
			player.setTexture(idle2);
		else if (currentTime >= 1 * fps)
			player.setTexture(idle1);
		else if (currentTime >= 0 * fps)
			player.setTexture(idle0);

		if (Keyboard::isKeyPressed(Keyboard::W))
		{
			player.setPosition(player.getPosition().x + 0, player.getPosition().y + 1);
		}
		if (Keyboard::isKeyPressed(Keyboard::D))
		{
			player.setPosition(player.getPosition().x + 1, player.getPosition().y + 0);
		}
		if (Keyboard::isKeyPressed(Keyboard::S))
		{
			player.setPosition(player.getPosition().x + 0, player.getPosition().y - 1);
		}
		if (Keyboard::isKeyPressed(Keyboard::A))
		{
			player.setPosition(player.getPosition().x - 1, player.getPosition().y + 0);
		}
		*/
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.draw(player);
		
		window.display();
	}

	return 0;
}