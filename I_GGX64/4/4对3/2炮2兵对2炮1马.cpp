#ifndef END_my_m_MT_R_2pao2pawn_B_2pao1ma
#define END_my_m_MT_R_2pao2pawn_B_2pao1ma
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "2炮2兵对2炮1马.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 



//ADD_1PaoXPawn_1PaoXPawn_ByShi

void my_m_MT_R_2pao2pawn_B_2pao1ma(typePOS &POSITION, EvalInfo &ei){
	// ADD_MY
	Square yk = your_king_pos;
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	int pmok = (int)count_1s(bmp);
	MY_EV_ADD(pmok * ADD_2pao1ma_2paoXpawn_ByShi[your_shi_num]);


}

//void m_MT_B_2pao2pawn_R_2pao1ma(typePOS &POSITION, EvalInfo &ei){
///*
//	Square rk = PieceListStart(board,RKING);
//	Square bk = PieceListStart(board,BKING);
//
//	//int rcan = RpawnAlreadyRiver(board);
//	//int bcan = BpawnAlreadyRiver(board);
//	//
//	//for(int from = PieceListStart(board,RPAWN); from > 0x32; from = NextPiece(board,from)){
//	//	if(StoY(from) > StoY(bk)){
//	//		board->mulScore += ADD_2pao1ma_2pao1pawn_ByShi[board->B_shi];
//	//	}
//	//}
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_2pao1ma_2paoXpawn_ByShi[board->R_shi];
//		}
//	}
//
//
//	//board->mulScore += rcan * 64;
//	//board->mulScore -= bcan * 64;
//
//	*/
//}