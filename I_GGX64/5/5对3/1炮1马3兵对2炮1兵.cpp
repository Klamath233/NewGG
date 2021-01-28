#ifndef END_my_m_MT_R_1pao1ma3pawn_B_2pao1pawn
#define END_my_m_MT_R_1pao1ma3pawn_B_2pao1pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "1炮1马3兵对2炮1兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 


//ADD_1PaoXPawn_1PaoXPawn_ByShi

void my_m_MT_R_1pao1ma3pawn_B_2pao1pawn(typePOS &POSITION, EvalInfo &ei){


	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_1pao2ma_1pao1maXpawn_ByShi[your_shi_num]);
	// SUB
	//Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	//MY_EV_SUB((sint16)count_1s(ymp) * ADD_1pao2ma_1pao1maXpawn_ByShi[my_shi_num]);

	if(EV_MY_CAN >= 2){
		MY_EV_ADD(EV_MY_CAN * 16);
	}

}

//void m_MT_B_1pao1ma3pawn_R_1pao2ma(typePOS &POSITION, EvalInfo &ei){
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
//			board->mulScore -= ADD_1pao2ma_1pao1maXpawn_ByShi[board->R_shi];
//		}
//	}
//
//
//	//board->mulScore += rcan * 64;
//	//board->mulScore -= bcan * 64;
//
//	*/
//}