#ifndef END_my_m_MT_R_2che5pawn_B_1che1pao1pawn
#define END_my_m_MT_R_2che5pawn_B_1che1pao1pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "2车5兵对1车1炮1兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 


//2车2兵对1车1炮1兵
void my_m_MT_R_2che5pawn_B_1che1pao1pawn(typePOS &POSITION, EvalInfo &ei){


	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_2CheXPawn_1Che1Pao1Pawn_ByShi[your_shi_num]);
	// SUB
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	MY_EV_SUB((sint16)count_1s(ymp) * ADD_1Che1PaoXPawn__2Che1Pawn_ByShi[my_shi_num]);
}
