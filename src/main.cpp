#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/OptionsLayer.hpp>
class $modify(OptionsLayer) {
	void musicSliderChanged(CCObject* p) {
		float new_vol;
		FMODAudioEngine *F;

		new_vol = reinterpret_cast<SliderThumb*>(p)->getValue();
		F = FMODAudioEngine::sharedEngine();
		F->setBackgroundMusicVolume(new_vol);
	}
};