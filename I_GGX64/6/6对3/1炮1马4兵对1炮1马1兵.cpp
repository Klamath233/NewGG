#ifndef END_my_m_MT_R_1pao1ma4pawn_B_1pao1ma1pawn
#define END_my_m_MT_R_1pao1ma4pawn_B_1pao1ma1pawn
#include "../../chess.h"
#include "../../preGen.h"

#include "../../endgame\mat.h"
#include "1炮1马4兵对1炮1马1兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 


//马炮二兵对一马一炮
void my_m_MT_R_1pao1ma4pawn_B_1pao1ma1pawn(typePOS &POSITION, EvalInfo &ei){

	// ADD
	Square yk = your_king_pos;
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_1Pao1MaXPawn_1Pao1Ma_ByPawnShi[your_shi_num]);

	// SUB
	Square mk = my_king_pos;
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(mk)]);
	MY_EV_SUB((sint16)count_1s(ymp) * ADD_1Pao1MaXPawn_1Pao1Ma_ByPawnShi[my_shi_num]);

	Square ypawn = S90_from_piecelist(POSITION,your_pawn,0);


	// fen 3k1a3/4a4/n3b4/p8/9/4C1P2/4P3P/4BKN2/c8/9 w - - 0 1
	if(StoY(ypawn) MY_SMALL_EQL MY_RANK4){
		MY_EV_ADD(EV_MY_CAN * 32);
	}
}