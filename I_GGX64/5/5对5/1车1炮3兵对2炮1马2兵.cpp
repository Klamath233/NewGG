#ifndef END_my_m_MT_R_1che1pao3pawn_B_2pao1ma2pawn
#define END_my_m_MT_R_1che1pao3pawn_B_2pao1ma2pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame/mat.h"
#include "1车1炮3兵对2炮1马2兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 



void my_m_MT_R_1che1pao3pawn_B_2pao1ma2pawn(typePOS &POSITION, EvalInfo &ei){

	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_ChePaoXPawn_To_2Pao1Ma_ByPawn[your_shi_num]);
	// SUB
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	MY_EV_SUB((sint16)count_1s(ymp) * ADD_ChePaoXPawn_To_2Pao1Ma_ByPawn[my_shi_num]);
}

//void m_MT_B_1che1pao3pawn_R_2pao1ma2pawn(typePOS &POSITION, EvalInfo &ei){
//
//	/*Square rk = PieceListStart(board,RKING);
//	Square bk = PieceListStart(board,BKING);
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_ChePaoXPawn_To_2Pao1Ma_ByPawn[board->R_shi];
//		}
//	}
//
//	*/
//}


