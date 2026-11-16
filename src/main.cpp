#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>

using namespace geode::prelude;

class $modify(UnlockIconsManager, GameManager) {
    bool isIconUnlocked(int iconID, IconType type) {
        return true;
    }

    bool isColorUnlocked(int colorID, bool isPrimary) {
        return true;
    }
};