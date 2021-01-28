#ifndef E_InitMatFunction1
#define E_InitMatFunction1
#include "../chess.h" 
#include "../white.h"
#else
#include "../black.h"
#endif

void InitMatFunction1(void){

	//********************************************* 一对无********************
	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [0]  [1]  [0]  [0]   [0]  [0]  [0] ]  = m_MT_R_1CHE;
	funMat[MARR->a[0]  [0]  [0]  [0]  [0]   [1]  [0]  [0] ]  = m_MT_B_1CHE;

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [0]  [0]  [1]  [0]   [0]  [0]  [0] ]  = m_MT_R_1MA;
	funMat[MARR->a[0]  [0]  [0]  [0]  [0]   [0]  [1]  [0] ]  = m_MT_B_1MA;


	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [0]  [0]  [0]  [1]   [0]  [0]  [0] ]  = m_MT_R_1PAO;
	funMat[MARR->a[0]  [0]  [0]  [0]  [0]   [0]  [0]  [1] ]  = m_MT_B_1PAO;

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[1]  [0]  [0]  [0]  [0]   [0]  [0]  [0] ]  = m_MT_R_1PAWN;
	funMat[MARR->a[0]  [1]  [0]  [0]  [0]   [0]  [0]  [0] ]  = m_MT_B_1PAWN;


	//*************************************一对一*******************************************
	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [0]  [1]  [0]  [0]   [1]  [0]  [0] ]  = m_MT_1CHE_TO_1CHE;

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [0]  [1]  [0]  [0]   [0]  [0]  [1] ]  = m_MT_R_1CHE_B_1PAO;
	funMat[MARR->a[0]  [0]  [0]  [0]  [1]   [1]  [0]  [0] ]  = m_MT_B_1CHE_R_1PAO;

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [0]  [1]  [0]  [0]   [0]  [1]  [0] ]  = m_MT_R_1CHE_B_1MA;
	funMat[MARR->a[0]  [0]  [0]  [1]  [0]   [1]  [0]  [0] ]  = m_MT_B_1CHE_R_1MA;

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [1]  [1]  [0]  [0]   [0]  [0]  [0] ]  = m_MT_R_1CHE_B_1PAWN;
	funMat[MARR->a[1]  [0]  [0]  [0]  [0]   [1]  [0]  [0] ]  = m_MT_B_1CHE_R_1PAWN; 

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [0]  [0]  [0]  [1]   [0]  [0]  [1] ]  = m_MT_PAO_TO_PAO;

    //           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [0]  [0]  [0]  [1]   [0]  [1]  [0] ]  = m_MT_R_1PAO_B_1MA;
	funMat[MARR->a[0]  [0]  [0]  [1]  [0]   [0]  [0]  [1] ]  = m_MT_B_1PAO_R_1MA;

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [1]  [0]  [0]  [1]   [0]  [0]  [0] ]  = m_MT_R_1PAO_B_1PAWN;
	funMat[MARR->a[1]  [0]  [0]  [0]  [0]   [0]  [0]  [1] ]  = m_MT_B_1PAO_R_1PAWN;

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [0]  [0]  [1]  [0]   [0]  [1]  [0] ]  = m_MT_1MA_1MA;

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[0]  [1]  [0]  [1]  [0]   [0]  [0]  [0] ]  = m_MT_R_1MA_B_1PAWN;
	funMat[MARR->a[1]  [0]  [0]  [0]  [0]   [0]  [1]  [0] ]  = m_MT_B_1MA_R_1PAWN;

	//           红兵  黑卒  红车  红马  红炮   黑车  黑马  黑炮 
	funMat[MARR->a[1]  [1]  [0]  [0]  [0]   [0]  [0]  [0] ]  = m_MT_PAWN_TO_PAWN;

}