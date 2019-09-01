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
	void AllyArmyUpkeepEffects(Player *_thePlayer)const;

	/**
	
	*/
	void EnemyArmyEndStepEffects(BattleChapter* _theChapter)const;

	/**
	
	*/
	void AllyArmyEndStepEffects(Player* _thePlayer)const;

	/**
	
	*/
	void ProcessSquareUpkeepEffects(GridSquare const _square, GenericCharacter* const _occupant)const;

	/**
	
	*/
	~TurnStateManager();


private:
};
#endif
