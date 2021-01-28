#ifndef END_my_m_MT_R_1che_2pawn_B_1ma
#define END_my_m_MT_R_1che_2pawn_B_1ma
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "1车2兵对1马.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 



//1车2兵对1马
void my_m_MT_R_1che_2pawn_B_1ma(typePOS &POSITION, EvalInfo &ei){
	Square yk = your_king_pos;
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_CheXPawn_To1Ma_ByPawnShi[your_shi_num]);

	MY_EV_ADD(ADD_CheXPawn_To1Ma);
}

//1车2兵对1马
//void m_MT_B_1che_2pawn_R_1ma(typePOS &POSITION, EvalInfo &ei){
///*
//	Square rk   = PieceListStart(board,RKING);
//	//int rpao = PieceListStart(board,RPAO);
//
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_CheXPawn_To1Ma_ByPawnShi[board->R_shi];
//		}
//	}
//
//	board->mulScore -= ADD_CheXPawn_To1Ma;
//
//	*/
//}