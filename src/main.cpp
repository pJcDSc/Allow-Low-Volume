#include <Geode/Geode.hpp>

using namespace geode::prelude;

// Main menu music slider
#include <Geode/modify/OptionsLayer.hpp>
class $modify(OptionsLayer) {
	void musicSliderChanged(CCObject* p0) {
		float new_vol;
		FMODAudioEngine *F;

		new_vol = static_cast<SliderThumb*>(p0)->getValue();
		F = FMODAudioEngine::sharedEngine();
		F->setBackgroundMusicVolume(new_vol);
	}
};

// In-level music slider
#include <Geode/modify/PauseLayer.hpp>
class $modify(PauseLayer) {
	void musicSliderChanged(CCObject* p0) {
		float new_vol;
		FMODAudioEngine *F;

		new_vol = static_cast<SliderThumb*>(p0)->getValue();
		F = FMODAudioEngine::sharedEngine();
		F->setBackgroundMusicVolume(new_vol);
	}
};