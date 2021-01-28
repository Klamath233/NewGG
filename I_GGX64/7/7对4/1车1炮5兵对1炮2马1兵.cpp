#ifndef END_my_m_MT_R_1che1pao5pawn_B_1pao2ma1pawn
#define END_my_m_MT_R_1che1pao5pawn_B_1pao2ma1pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "1车1炮5兵对1炮2马1兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 

void my_m_MT_R_1che1pao5pawn_B_1pao2ma1pawn(typePOS &POSITION, EvalInfo &ei){

	Square yk = your_king_pos;
	//
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_ChePaoXPawn_To_1Pao2Ma_ByPawn[your_shi_num]);
	//
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	MY_EV_SUB((sint16)count_1s(ymp) * ADD_ChePaoXPawn_To_1Pao2Ma_ByPawn[my_shi_num]);

}

//void m_MT_B_1che1pao5pawn_R_1pao2ma1pawn(typePOS &POSITION, EvalInfo &ei){
///*
//	Square rk = PieceListStart(board,RKING);
//	Square bk = PieceListStart(board,BKING);
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_ChePaoXPawn_To_1Pao2Ma_ByPawn[board->R_shi];
//		}
//	}
//
//	*/
//}


