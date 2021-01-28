#ifndef END_my_m_MT_R_2pao_2pawn_B_1ma
#define END_my_m_MT_R_2pao_2pawn_B_1ma
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "2炮2兵对1马.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 


void my_m_MT_R_2pao_2pawn_B_1ma(typePOS &POSITION, EvalInfo &ei){

	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_2PaoXPawn_1Ma[your_shi_num]);
}

//void m_MT_B_2pao_2pawn_R_1ma(typePOS &POSITION, EvalInfo &ei){
///*
//	Square rk = PieceListStart(board,RKING);
//	
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_2PaoXPawn_1Ma[board->R_shi];;
//		}
//	}
//
//	*/
//}