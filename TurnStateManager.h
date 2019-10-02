#ifndef TURN_STATE_MANAGER_H
#define TURN_STATE_MANAGER_H

#include "Player.h"
#include "BattleChapter.h"

/**
takes care of automated actions that take place between (at the beginning of) each phase
of the player's turn and the AI's turn
*/
class TurnStateManager {
public:

	/**
	no action taken
	*/
	TurnStateManager();

	/**
	each character in the enemy army's roster will be run in this method
	includes inventories, and later skills and squares
	*/
	void EnemyArmyUpkeepEffects(BattleChapter *_theChapter)const;

	/**
	each character in the player's roster will be run in this method
	includes inventories, and later skills and squares
	*/
	void AllyArmyUpkeepEffects(Player *_thePlayer)const;

	/**
	each character in the enemy army's roster will be run in this method
	includes inventories, and later skills and squares
	*/
	void EnemyArmyEndStepEffects(BattleChapter* _theChapter)const;

	/**
	each character in the player's roster will be run in this method
	includes inventories, and later skills and squares
	*/
	void AllyArmyEndStepEffects(Player* _thePlayer)const;

	/**
	TRIHARD _square as pointer
	processes the upkeep effects of a square
	used inside methods within this class
	*/
	void ProcessSquareUpkeepEffects(GridSquare const _square, GenericCharacter* const _occupant)const;

	/**
	no action taken
	*/
	~TurnStateManager();


private:
};
#endif
