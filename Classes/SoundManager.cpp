#include "SoundManager.h"

SoundManager* SoundManager::instance = nullptr;

SoundManager::SoundManager()
{
	bgmVolume = 0.2f;
	sfxVolume = 0.2f;
}

SoundManager * SoundManager::getInstance()
{
	if (!instance)
	{
		instance = new SoundManager;
	}

	return instance;
}

void SoundManager::releaseInstance()
{
	if (instance)
		delete instance;
}

void SoundManager::PlayMainMenuBgm()
{
	mainMenuBgm = AudioEngine::play2d("Sound/Bgm/title screen.ogg", true, bgmVolume);
}

void SoundManager::StopMainMenuBgm()
{
	AudioEngine::stop(mainMenuBgm);
}

void SoundManager::PlaydipteraSonata()
{
	dipteraSonata = AudioEngine::play2d("Sound/Bgm/diptera sonata(basement).ogg", true, bgmVolume);
}

void SoundManager::StopdipteraSonata()
{
	AudioEngine::stop(dipteraSonata);
}

void SoundManager::PlayTitleScreenJingle()
{
	titleScreenJingle = AudioEngine::play2d("Sound/Jingle/title screen jingle v1_01.ogg", false, bgmVolume);
}

void SoundManager::PlayCharSelectLeft()
{
	charSelectLeft = AudioEngine::play2d("Sound/Sfx/character select left.mp3", false, sfxVolume);
}

void SoundManager::PlayCharSelectRight()
{
	charSelectRight = AudioEngine::play2d("Sound/Sfx/character select right.mp3", false, sfxVolume);
}

void SoundManager::PlayTearFire5()
{
	tearFire5 = AudioEngine::play2d("Sound/Sfx/tear fire 5.mp3", false, sfxVolume);
}

void SoundManager::PlayTearFire4()
{
	tearFire4 = AudioEngine::play2d("Sound/Sfx/tear-fire-4.mp3", false, sfxVolume);
}

void SoundManager::PlayTearBlock()
{
	tearBlock = AudioEngine::play2d("Sound/Sfx/tear-block.mp3", false, sfxVolume);
}

void SoundManager::PlayFireBurning()
{
	if (AudioEngine::getState(fireBurning) != AudioEngine::AudioState::PLAYING)
	{
		fireBurning = AudioEngine::play2d("Sound/Sfx/fire burning.mp3", true, sfxVolume);
	}
}

void SoundManager::StopFireBurning()
{
	AudioEngine::stop(fireBurning);
}

void SoundManager::PlayExplosion1()
{
	explosion1 = AudioEngine::play2d("Sound/Sfx/boss-explosions-1.mp3", false, sfxVolume);
}

void SoundManager::PlayErrorBuzz()
{
	if (AudioEngine::getState(ErrorBuzz) != AudioEngine::AudioState::PLAYING)
	{
		ErrorBuzz = AudioEngine::play2d("Sound/Sfx/boss 2 intro errorbuzz.mp3", false, sfxVolume);
	}
}

void SoundManager::PlayInsectSwarm()
{
	if (AudioEngine::getState(insectSwarm) != AudioEngine::AudioState::PLAYING)
	{
		insectSwarm = AudioEngine::play2d("Sound/Sfx/insect swarm.mp3", false, sfxVolume / 2);
	}
	if (AudioEngine::getCurrentTime(insectSwarm) >= 0.7f)
	{
		insectSwarm = AudioEngine::play2d("Sound/Sfx/insect swarm.mp3", false, sfxVolume / 2);
	}
}

void SoundManager::StopInsectSwarm()
{
	AudioEngine::stop(insectSwarm);
}

void SoundManager::PlayHurtGrunt1()
{
	hurtGrunt1 = AudioEngine::play2d("Sound/Sfx/hurt grunt .mp3", false, sfxVolume);
}

void SoundManager::PlayHurtGrunt2()
{
	hurtGrunt2 = AudioEngine::play2d("Sound/Sfx/hurt grunt 1.mp3", false, sfxVolume);
}

void SoundManager::PlayHurtGrunt3()
{
	hurtGrunt3 = AudioEngine::play2d("Sound/Sfx/hurt grunt 2.mp3", false, sfxVolume);
}

void SoundManager::PlayPennyPickUp()
{
	pennyPickUp = AudioEngine::play2d("Sound/Sfx/penny-pickup-1.mp3", false, sfxVolume);
}

void SoundManager::PlayPennyDrop()
{
	pennyDrop = AudioEngine::play2d("Sound/Sfx/penny-drop-1.mp3", false, sfxVolume);
}

void SoundManager::PlayOffFire()
{
	offFire = AudioEngine::play2d("Sound/Sfx/steam-half-sec.mp3", false, sfxVolume);
}

void SoundManager::PlayPlop()
{
	plop= AudioEngine::play2d("Sound/Sfx/plop.mp3", false, sfxVolume);
}

void SoundManager::PlayDoorUnlock()
{
	doorUnlock = AudioEngine::play2d("Sound/Sfx/unlock.mp3", false, sfxVolume);
}

void SoundManager::PlayShakeyKidRoar()
{
	shakeyKidRoar = AudioEngine::play2d("Sound/Sfx/shakey-kid-roar.mp3", false, sfxVolume);
}

void SoundManager::RunnigBgmVolume()
{
	AudioEngine::setVolume(mainMenuBgm, bgmVolume);
}

void SoundManager::RunnigSfxVolume()
{

}
