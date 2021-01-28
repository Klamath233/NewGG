#ifndef END_my_m_MT_R_1che3pawn_B_1pao1pawn
#define END_my_m_MT_R_1che3pawn_B_1pao1pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "1车3兵对1炮1兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 

// fen 9/3P5/4k4/9/2b3b2/6B2/9/3AB4/r3Ap3/C3K4 w - - 44 44

//const int ADD_PaoXPawn_To_ChePawnByShi_WpaoSafe[3]  =  { 80, 48, 16};  //炮兵对车兵,炮方安全后,有兵的加分 

//车兵对炮兵
void my_m_MT_R_1che3pawn_B_1pao1pawn(typePOS &POSITION, EvalInfo &ei){
	
	// ADD_MY
	Square yk = your_king_pos;
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	int pmok = (int)count_1s(bmp);
	MY_EV_ADD(pmok * ADD_CheXPawn_To_PaoPawn_PawnByShi[your_shi_num]);


	MY_EV_ADD(ADD_CheXPawn_To_PaoPawn);
}

//const int ADD_CheXPawn_To_PaoPawn                   =  128;             //车兵对炮兵,车方的加分
//const int ADD_CheXPawn_To_PaoPawn_PawnByShi[3]      =  {168,128, 64};
//
//void m_MT_B_1che3pawn_R_1pao1pawn(typePOS &POSITION, EvalInfo &ei){
///*
//	//int rpao = PieceListStart(board,RPAO);
//
//	////if(board->R_shi == 2 && board->R_xiang == 2){
//	////	if(board->b256[0xa7] == RXIANG){
//	////		if(StoY(rpao) >= 0xa){       //炮可回家
//	////			return 1;
//	////		}
//	////	}
//	////}
//
//	//if(m_MT_B_1che1pawn_R_1pao(board) == 1){
//	//	return 1;
//	//}
//
//	Square rk = PieceListStart(board,RKING);
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -=  ADD_CheXPawn_To_PaoPawn_PawnByShi[board->R_shi];
//		}
//	}
//
//	board->mulScore -= ADD_CheXPawn_To_PaoPawn;
//
//	*/
//}