#ifndef END_my_m_MT_R_1che1ma1pawn_B_1pao2pawn
#define END_my_m_MT_R_1che1ma1pawn_B_1pao2pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame/mat.h"
#include "1车1马1兵对1炮2兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 


void my_m_MT_R_1che1ma1pawn_B_1pao2pawn(typePOS &POSITION, EvalInfo &ei){
	
	// ADD_MY
	Square yk = your_king_pos;
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	int pmok = (int)count_1s(bmp);
	MY_EV_ADD(pmok * ADD_CheMaXPawn_To_1Pao2Pawn_ByPawn[your_shi_num]);
	// SUB
	Square mk = my_king_pos;
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(mk)]);
	int pyok = (int)count_1s(ymp);
	MY_EV_SUB(pyok * ADD_1Pao2Pawn_To_CheMaXPawn_ByPawn[my_shi_num]);

}

//void m_MT_B_1che1ma1pawn_R_1pao2pawn(typePOS &POSITION, EvalInfo &ei){
//
///*
//	Square rk = PieceListStart(board,RKING);
//	Square bk = PieceListStart(board,BKING);
//
//	for(int from = PieceListStart(board,RPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) > StoY(bk)){
//			board->mulScore += ADD_1Pao2Pawn_To_CheMaXPawn_ByPawn[board->B_shi];
//		}
//	}
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_CheMaXPawn_To_1Pao2Pawn_ByPawn[board->R_shi];
//		}
//	}
//
//
//
//	*/
//}