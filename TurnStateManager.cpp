#include "TurnStateManager.h"


TurnStateManager::TurnStateManager() {

	//:D

}

void TurnStateManager::EnemyArmyUpkeepEffects(BattleChapter* _theChapter)const {

	for (int i = 0; i < _theChapter->myArmy.size(); ++i) {
		
		//errors because getItem returns a const Item
		_theChapter->myArmy[i]->myItem->ProcessUpkeepAffect();
		_theChapter->myArmy[i]->myWeapon->ProcessUpkeepAffect();

		//skills

		//tiles

	}

}

void TurnStateManager::ProcessSquareUpkeepEffects(GridSquare const _square, GenericCharacter* const _occupant)const {

	if (_square.myType == SQUARE_TYPE_BLESSED) {

		//heal :)

	}

}


TurnStateManager::~TurnStateManager() {

	//:D

}
