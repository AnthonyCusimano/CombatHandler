#include "TurnStateManager.h"


TurnStateManager::TurnStateManager() {

	//:D

}

void TurnStateManager::EnemyArmyUpkeepEffects(BattleChapter* _theChapter)const {

	for (int i = 0; i < _theChapter->myArmy.size(); ++i) {

		//errors because getItem returns a const Item
		if(_theChapter->myArmy[i]->myItem)
			_theChapter->myArmy[i]->myItem->ProcessUpkeepAffect();
		_theChapter->myArmy[i]->myWeapon->ProcessUpkeepAffect();

		//skills

		//tiles

	}

}

void TurnStateManager::AllyArmyUpkeepEffects(Player* _thePlayer) const{

	for (int i = 0; i < _thePlayer->roster1.size(); ++i){

		if (_thePlayer->roster1[i]->myItem)
			_thePlayer->roster1[i]->myItem->ProcessUpkeepAffect();
		
		_thePlayer->roster1[i]->myWeapon->ProcessUpkeepAffect();

	}

}

void TurnStateManager::EnemyArmyEndStepEffects(BattleChapter* _theChapter)const {

	for (int i = 0; i < _theChapter->myArmy.size(); ++i) {

		if(_theChapter->myArmy[i]->myItem)
			_theChapter->myArmy[i]->myItem->ProcessEndStepAffect();

		_theChapter->myArmy[i]->myWeapon->ProcessEndStepAffect();

	}

}

void TurnStateManager::AllyArmyEndStepEffects(Player* _thePlayer)const {

	for (int i = 0; i < _thePlayer->roster1.size(); ++i) {

		if(_thePlayer->roster1[i]->myItem)
			_thePlayer->roster1[i]->myItem->ProcessEndStepAffect();

		_thePlayer->roster1[i]->myWeapon->ProcessEndStepAffect();

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
