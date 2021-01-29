#ifndef END_my_m_MT_R_2pao3pawn_B_1ma1pawn
#define END_my_m_MT_R_2pao3pawn_B_1ma1pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame/mat.h"
#include "2炮3兵对1马1兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 




void my_m_MT_R_2pao3pawn_B_1ma1pawn(typePOS &POSITION, EvalInfo &ei){

	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * Add_MAT_B_2pao1pawn_R_1che1pawn_ByShi[your_shi_num]);
	// SUB
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	MY_EV_SUB((sint16)count_1s(ymp) * Add_MAT_B_2pao1pawn_R_1che1pawn_ByShi[my_shi_num]);
}

//void m_MT_B_2pao3pawn_R_1ma1pawn(typePOS &POSITION, EvalInfo &ei){
//	/*
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < 0xc){
//			board->mulScore -= 96;
//		}
//
//	}
//
//	for(int from = PieceListStart(board,RPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) > 0x3){
//			board->mulScore += 96;
//		}
//
//	}
//
//	*/
//}