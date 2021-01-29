#ifndef END_my_m_MT_R_1che5pawn_B_2pao1ma1pawn
#define END_my_m_MT_R_1che5pawn_B_2pao1ma1pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame/mat.h"
#include "1车5兵对2炮1马1兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 



void my_m_MT_R_1che5pawn_B_2pao1ma1pawn(typePOS &POSITION, EvalInfo &ei){

	int mcan = EV_MY_CAN;
	int ycan = EV_YOUR_CAN;
	if((my_shi_num + my_xiang_num) >= 3 && StoY(my_king_pos) MY_LARGE_EQL MY_RANK8){
		if(mcan >= 2 && ycan == 0){
			MY_EV_ADD(mcan * ADD_1CheMore2Pawn_To_2Pao1ma1Pawn);
		}
	}
}

//void m_MT_B_1che5pawn_R_2pao1ma1pawn(typePOS &POSITION, EvalInfo &ei){
///*
//	Square bk = PieceListStart(board,BKING);
//
//	int rcan = RpawnCanOverLiver(board);
//	int bcan = BpawnCanOverLiver(board);
//
//	// fen 2b1k4/4a4/4ba1N1/4pN3/1r7/C3P4/2p3p2/4B4/4A4/3AK1B2 w - - 50 50
//	if((board->B_shi + board->B_xiang) >= 3 && StoY(bk) <= 0x4){
//		if(bcan >= 2 && rcan == 0){
//			board->mulScore -= bcan * ADD_1CheMore2Pawn_To_2Pao1ma1Pawn;
//		}
//	}
//
//	*/
//}

