#ifndef END_my_m_MT_R_1che4pawn_B_1pao1ma
#define END_my_m_MT_R_1che4pawn_B_1pao1ma
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame\mat.h"
#include "1车4兵对1马1炮.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 



//#define ADD_ChePawn_To_MaPao_By_Panw   128              //车兵对马炮,车兵方兵要加分,因为马炮太难杀对方了
//#define ADD_ChePawn_To_MaPao_By_Che    128              //车兵对马炮,车兵方车要加分,因为马炮太难杀对方了

//我方1车4兵,对方是马炮
void my_m_MT_R_1che4pawn_B_1pao1ma(typePOS &POSITION, EvalInfo &ei){


	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_ChePawn_To_MaPao_By_PawnByShi[your_shi_num]);

	MY_EV_ADD(ADD_ChePawn_To_MaPao_By_Che);
}
