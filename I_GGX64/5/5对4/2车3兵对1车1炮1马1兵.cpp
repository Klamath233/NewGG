#ifndef END_my_m_MT_R_2che3pawn_B_1che1pao1ma1pawn
#define END_my_m_MT_R_2che3pawn_B_1che1pao1ma1pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame/mat.h"
#include "2车3兵对1车1炮1马1兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 



//const int ADD_2CheXPawn_1Che1Pao1Ma1Pawn_ByPawnShi[3]    = {96, 64, 32};            //2车x兵对1车1炮1马1兵, 兵方的加分
//const int ADD_1Che1Pao1Ma1Pawn_2CheXPawn_ByPawnShi[3]    = {96, 64, 32};            //1车1炮1马1兵对2车x兵, 兵方的加分

void my_m_MT_R_2che3pawn_B_1che1pao1ma1pawn(typePOS &POSITION, EvalInfo &ei){

	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_2CheXPawn_1Che1Pao1Ma1Pawn_ByPawnShi[your_shi_num]);
	// SUB
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	MY_EV_SUB((sint16)count_1s(ymp) * ADD_1Che1Pao1Ma1Pawn_2CheXPawn_ByPawnShi[my_shi_num]);
}

//void m_MT_B_2che3pawn_R_1che1pao1ma1pawn(typePOS &POSITION, EvalInfo &ei){
///*
//
//	Square rk = PieceListStart(board,RKING);
//	Square bk = PieceListStart(board,BKING);
//
//	for(int from = PieceListStart(board,RPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) > StoY(bk)){
//			board->mulScore += ADD_1Che1Pao1Ma1Pawn_2CheXPawn_ByPawnShi[board->B_shi];
//		}
//	}
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_2CheXPawn_1Che1Pao1Ma1Pawn_ByPawnShi[board->R_shi];
//		}
//	}
//
//	*/
//}