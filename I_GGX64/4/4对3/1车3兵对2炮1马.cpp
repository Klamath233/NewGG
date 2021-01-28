#ifndef END_my_m_MT_R_1che3pawn_B_2pao1ma
#define END_my_m_MT_R_1che3pawn_B_2pao1ma
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "1车3兵对2炮1马.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 

void my_m_MT_R_1che3pawn_B_2pao1ma(typePOS &POSITION, EvalInfo &ei){
	// ADD_MY
	Square yk = your_king_pos;
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	int pmok = (int)count_1s(bmp);
	MY_EV_ADD(pmok * ADD_CheXPawn_To_2Pao1Ma_ByPawn[your_shi_num]);

}

//void m_MT_B_1che3pawn_R_2pao1ma(typePOS &POSITION, EvalInfo &ei){
///*
//    Square rk    = PieceListStart(board,RKING);
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_CheXPawn_To_2Pao1Ma_ByPawn[board->R_shi];
//		}
//	}
//
//	*/
//}




//m_MT_R_1che3pawn_B_3pawn