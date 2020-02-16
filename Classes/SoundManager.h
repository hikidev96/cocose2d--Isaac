#pragma once
#include "ProjectFW.h"

class SoundManager
{
private:
	static SoundManager* instance;

	float bgmVolume;
	float sfxVolume;
	int mainMenuBgm;
	int charSelectLeft;
	int charSelectRight;
	int tearFire5;
	int titleScreenJingle;
	int dipteraSonata;
	int fireBurning;

	SoundManager();
	~SoundManager() {};
public:
	static SoundManager* getInstance();
	static void releaseInstance();

	// ---- BGM ---- //
	void PlayMainMenuBgm();
	void StopMainMenuBgm();
	void PlaydipteraSonata();
	void StopdipteraSonata();

	// ---- Jingle ---- // 
	void PlayTitleScreenJingle();


	// ---- SFX ---- //
	void PlayCharSelectLeft();
	void PlayCharSelectRight();
	void PlayTearFire5();
	void PlayFireBurning();
	void StopFireBurning();

	// ---- GET/SET ---- //
	float getBgmVolume() { return bgmVolume; }
	void setBgmVolume(float bgmvolume) { bgmVolume = bgmvolume; }
	float getSfxVolume() { return sfxVolume; }
	void setSfxVolume(float sfxvolume) { sfxVolume = sfxvolume; }

	
	void RunnigBgmVolume();
	void RunnigSfxVolume();

};