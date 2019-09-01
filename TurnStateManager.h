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
	void EnemyArmyUpkeepEffects(BattleChapter *_theChapter)const;

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
	void ProcessSquareUpkeepEffects(GridSquare const _square, GenericCharacter* const _occupant)const;

	/**
	
	*/
	~TurnStateManager();


private:
};
#endif
