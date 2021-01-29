#ifndef END_my_m_MT_R_1che1pao5pawn_B_2pao1pawn
#define END_my_m_MT_R_1che1pao5pawn_B_2pao1pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame/mat.h"
#include "1车1炮5兵对2炮1兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 


//const int ADD_ChePaoXPawn_To_2Pao1Pawn_ByPawn[3]    =  { 96, 64, 32};  //车炮X兵,对2炮1兵
//const int ADD_2Pao1Pawn_To_ChePaoXPawn_ByPawn[3]    =  { 96, 64, 32};  //车炮X兵,对2炮1兵


void my_m_MT_R_1che1pao5pawn_B_2pao1pawn(typePOS &POSITION, EvalInfo &ei){


	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_ChePaoXPawn_To_2Pao1Pawn_ByPawn[your_shi_num]);
	// SUB
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	MY_EV_SUB((sint16)count_1s(ymp) * ADD_2Pao1Pawn_To_ChePaoXPawn_ByPawn[my_shi_num]);
}

//void m_MT_B_1che1pao5pawn_R_2pao1pawn(typePOS &POSITION, EvalInfo &ei){
//
///*
//	Square rk = PieceListStart(board,RKING);
//	Square bk = PieceListStart(board,BKING);
//
//	for(int from = PieceListStart(board,RPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) > StoY(bk)){
//			board->mulScore += ADD_2Pao1Pawn_To_ChePaoXPawn_ByPawn[board->B_shi];
//		}
//	}
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_ChePaoXPawn_To_2Pao1Pawn_ByPawn[board->R_shi];
//		}
//	}
//
//
//
//	*/
//}