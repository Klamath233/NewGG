#ifndef END_my_m_MT_R_1che2pao1pawn_B_1che2ma
#define END_my_m_MT_R_1che2pao1pawn_B_1che2ma
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "1车2炮1兵对1车2马.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 

void my_m_MT_R_1che2pao1pawn_B_1che2ma(typePOS &POSITION, EvalInfo &ei){
	// ADD_MY
	Square yk = your_king_pos;
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	int pmok = (int)count_1s(bmp);
	MY_EV_ADD(pmok * ADD_1che2pao1pawn_1che2ma_ByShi[your_shi_num]);

	Square mpawn = S90_from_piecelist(POSITION,my_pawn,0);

	// fen 2Rakab1C/9/n8/9/4r4/6B1P/4n4/3C5/4A4/2BAK4 b - - 0 1
	if((your_shi_num + your_xiang_num) >= 3 && StoY(yk) MY_SMALL_EQL MY_RANK1){
		if(StoY(mpawn) MY_LARGE_EQL MY_RANK5){
			MY_EV_SUB(32);
		}
		if(abs(StoX(mpawn) - 0x4) == 4){
			MY_EV_SUB(32);
		}
	}
	
}

//void m_MT_B_1che2pao1pawn_R_1che2ma(typePOS &POSITION, EvalInfo &ei){
///*
//	Square bk = PieceListStart(board,BKING);
//	Square rk = PieceListStart(board,RKING);	
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_1che2pao1pawn_1che2ma_ByShi[board->R_shi];
//		}
//	}
//
//
//
//	*/
//}