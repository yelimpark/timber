#pragma once
#include "Scene/Scene.h"
#include "GameObject/charSelect.h"
#include "Manager/SceneManager.h"

using namespace sf;


class SetUp : public Scene
{
private:
	Sprite spriteBackground;

	Text textPlayer1;

	Text textPlayer2;

	Text textComplete;

	CircleShape triangle;

	int menuselected = 0;
public:
	SetUp(SceneManager& sceneManager);

	virtual bool Init();

	virtual void HanddleInput(sf::Event& event);

	virtual void Update(float dt);

	virtual void render(sf::RenderWindow* window);

	virtual void Start();

	virtual void End();

	//���� �������

	~SetUp();
};
