#ifndef TURN_STATE_MANAGER_H
#define TURN_STATE_MANAGER_H

#include "Player.h"
#include "BattleChapter.h"

/**

*/
class TurnStateManager {
public:

	/**
	
	*/
	TurnStateManager();

	/**
	
	*/
	void EnemyArmyUpkeepEffects()const;

	/**
	
	*/
	void AllyArmyUpkeepEffects()const;

	/**
	
	*/
	void EnemyArmyEndStepEffects()const;

	/**
	
	*/
	void AllyArmyEndStepEffects()const;

	/**
	
	*/
	~TurnStateManager();


private:
};
#endif