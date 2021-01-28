
#ifndef E_InitMatFunction8
#define E_InitMatFunction8
#include "../chess.h"
 
#include "../white.h"
#else
#include "../black.h"
#endif

void InitMatFunction8(void){

	//********************************************* 8 对 0*****************************************************************
	//********************************************* 8 对 1*****************************************************************

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [1]  [2]  [1]  [0]  [0]  ]  = m_MT_R_2pao_1ma5pawn_B_1che;
	funMat[MARR->a[0]  [5]  [1]  [0]  [0]  [0]  [1]  [2]  ]  = m_MT_B_2pao_1ma5pawn_R_1che;
	
	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [2]  [1]  [1]  [0]  [0]  ]  = m_MT_R_1pao_2ma5pawn_B_1che;
	funMat[MARR->a[0]  [5]  [1]  [0]  [0]  [0]  [2]  [1]  ]  = m_MT_B_1pao_2ma5pawn_R_1che;
	
	//************************************8 对 2*********************************************************
     //           红兵  黑卒  红车  红马  红炮  黑车  黑马  黑炮相 
	funMat[MARR->a[5]  [0]  [2]  [0]  [1]  [2]  [0]  [0]  ]  = m_MT_R_2che1pao5pawn_B_2che; //2车1炮1兵对2车
	funMat[MARR->a[0]  [5]  [2]  [0]  [0]  [2]  [0]  [1]  ]  = m_MT_B_2che1pao5pawn_R_2che;

	 //           红兵  黑卒  红车  红马  红炮  黑车  黑马  黑炮相 
	funMat[MARR->a[5]  [0]  [2]  [1]  [0]  [2]  [0]  [0]  ]  = m_MT_R_2che1ma5pawn_B_2che; //2车1炮1兵对2车
	funMat[MARR->a[0]  [5]  [2]  [0]  [0]  [2]  [1]  [0]  ]  = m_MT_B_2che1ma5pawn_R_2che;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [1]  [1]  [2]  [0]  [0]  ]  = m_MT_R_1che1pao1ma5pawn_B_2che;
	funMat[MARR->a[0]  [5]  [2]  [0]  [0]  [1]  [1]  [1]  ]  = m_MT_B_1che1pao1ma5pawn_R_2che;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [1]  [2]  [1]  [0]  [1]  ]  = m_MT_R_2pao1ma5pawn_B_1che1pao;  //
	funMat[MARR->a[0]  [5]  [1]  [0]  [1]  [0]  [1]  [2]  ]  = m_MT_B_2pao1ma5pawn_R_1che1pao;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [1]  [2]  [1]  [1]  [0]  ]  = m_MT_R_2pao1ma5pawn_B_1che1ma; 
	funMat[MARR->a[0]  [5]  [1]  [1]  [0]  [0]  [1]  [2]  ]  = m_MT_B_2pao1ma5pawn_R_1che1ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [2]  [1]  [1]  [0]  [1]  ]  = m_MT_R_1pao2ma5pawn_B_1che1pao;  //
	funMat[MARR->a[0]  [5]  [1]  [0]  [1]  [0]  [2]  [1]  ]  = m_MT_B_1pao2ma5pawn_R_1che1pao;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [2]  [1]  [1]  [1]  [0]  ]  = m_MT_R_1pao2ma5pawn_B_1che1ma; 
	funMat[MARR->a[0]  [5]  [1]  [1]  [0]  [0]  [2]  [1]  ]  = m_MT_B_1pao2ma5pawn_R_1che1ma;
	
	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [0]  [1]  [2]  [1]  [0]  [0]  ]  = m_MT_R_2pao_1ma5pawn_B_1che1pawn;
	funMat[MARR->a[1]  [5]  [1]  [0]  [0]  [0]  [1]  [2]  ]  = m_MT_B_2pao_1ma5pawn_R_1che1pawn;
	
	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [0]  [2]  [1]  [1]  [0]  [0]  ]  = m_MT_R_1pao_2ma5pawn_B_1che1pawn;
	funMat[MARR->a[1]  [5]  [1]  [0]  [0]  [0]  [2]  [1]  ]  = m_MT_B_1pao_2ma5pawn_R_1che1pawn;
	
	//************************************8 对 3*********************************************************
	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [2]  [0]  [1]  [2]  [0]  [1]  ]  = m_MT_R_2che1pao5pawn_B_2che1pao;
	funMat[MARR->a[0]  [5]  [2]  [0]  [1]  [2]  [0]  [1]  ]  = m_MT_B_2che1pao5pawn_R_2che1pao;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [2]  [1]  [0]  [2]  [0]  [1]  ]  = m_MT_R_2che1ma5pawn_B_2che1pao;
	funMat[MARR->a[0]  [5]  [2]  [0]  [1]  [2]  [1]  [0]  ]  = m_MT_B_2che1ma5pawn_R_2che1pao;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [2]  [0]  [1]  [2]  [1]  [0]  ]  = m_MT_R_2che1pao5pawn_B_2che1ma;
	funMat[MARR->a[0]  [5]  [2]  [1]  [0]  [2]  [0]  [1]  ]  = m_MT_B_2che1pao5pawn_R_2che1ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [2]  [1]  [0]  [2]  [1]  [0]  ]  = m_MT_R_2che1ma5pawn_B_2che1ma;
	funMat[MARR->a[0]  [5]  [2]  [1]  [0]  [2]  [1]  [0]  ]  = m_MT_B_2che1ma5pawn_R_2che1ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [1]  [0]  [2]  [2]  [0]  [0]  ]  = m_MT_R_1che2pao5pawn_B_2che1pawn;
	funMat[MARR->a[1]  [5]  [2]  [0]  [0]  [1]  [0]  [2]  ]  = m_MT_B_1che2pao5pawn_R_2che1pawn;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [0]  [2]  [1]  [0]  [2]  ]  = m_MT_R_1che2pao5pawn_B_1che2pao;   //---------
	funMat[MARR->a[0]  [5]  [1]  [0]  [2]  [1]  [0]  [2]  ]  = m_MT_B_1che2pao5pawn_R_1che2pao; 

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [0]  [2]  [1]  [1]  [1]  ]  = m_MT_R_1che2pao5pawn_B_1che1pao1ma;
	funMat[MARR->a[0]  [5]  [1]  [1]  [1]  [1]  [0]  [2]  ]  = m_MT_B_1che2pao5pawn_R_1che1pao1ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [0]  [2]  [1]  [2]  [0]  ]  = m_MT_R_1che2pao5pawn_B_1che2ma;
	funMat[MARR->a[0]  [5]  [1]  [2]  [0]  [1]  [0]  [2]  ]  = m_MT_B_1che2pao5pawn_R_1che2ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [1]  [1]  [1]  [2]  [0]  [0]  ]  = m_MT_R_1che1pao1ma5pawn_B_2che1pawn;
	funMat[MARR->a[1]  [5]  [2]  [0]  [0]  [1]  [1]  [1]  ]  = m_MT_B_1che1pao1ma5pawn_R_2che1pawn;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [1]  [1]  [1]  [0]  [2]  ]  = m_MT_R_1che1pao1ma5pawn_B_1che2pao;
	funMat[MARR->a[0]  [5]  [1]  [0]  [2]  [1]  [1]  [1]  ]  = m_MT_B_1che1pao1ma5pawn_R_1che2pao;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [1]  [1]  [1]  [1]  [1]  ]  = m_MT_R_1che1pao1ma5pawn_B_1che1pao1ma;
	funMat[MARR->a[0]  [5]  [1]  [1]  [1]  [1]  [1]  [1]  ]  = m_MT_B_1che1pao1ma5pawn_R_1che1pao1ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [1]  [1]  [1]  [2]  [0]  ]  = m_MT_R_1che1pao1ma5pawn_B_1che2ma;
	funMat[MARR->a[0]  [5]  [1]  [2]  [0]  [1]  [1]  [1]  ]  = m_MT_B_1che1pao1ma5pawn_R_1che2ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [1]  [2]  [0]  [2]  [0]  [0]  ]  = m_MT_R_1che2ma5pawn_B_2che1pawn;
	funMat[MARR->a[1]  [5]  [2]  [0]  [0]  [1]  [2]  [0]  ]  = m_MT_B_1che2ma5pawn_R_2che1pawn;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [2]  [0]  [1]  [0]  [2]  ]  = m_MT_R_1che2ma5pawn_B_1che2pao;
	funMat[MARR->a[0]  [5]  [1]  [0]  [2]  [1]  [2]  [0]  ]  = m_MT_B_1che2ma5pawn_R_1che2pao;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [2]  [0]  [1]  [1]  [1]  ]  = m_MT_R_1che2ma5pawn_B_1che1pao1ma;
	funMat[MARR->a[0]  [5]  [1]  [1]  [1]  [1]  [2]  [0]  ]  = m_MT_B_1che2ma5pawn_R_1che1pao1ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [2]  [0]  [1]  [2]  [0]  ]  = m_MT_R_1che2ma5pawn_B_1che2ma;
	funMat[MARR->a[0]  [5]  [1]  [2]  [0]  [1]  [2]  [0]  ]  = m_MT_B_1che2ma5pawn_R_1che2ma; //---------

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [1]  [2]  [0]  [1]  [2]  ]  = m_MT_R_2pao1ma5pawn_B_2pao1ma;
	funMat[MARR->a[0]  [5]  [0]  [1]  [2]  [0]  [1]  [2]  ]  = m_MT_B_2pao1ma5pawn_R_2pao1ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [1]  [2]  [0]  [2]  [1]  ]  = m_MT_R_2pao1ma5pawn_B_1pao2ma;
	funMat[MARR->a[0]  [5]  [0]  [2]  [1]  [0]  [1]  [2]  ]  = m_MT_B_2pao1ma5pawn_R_1pao2ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [2]  [1]  [0]  [1]  [2]  ]  = m_MT_R_1pao2ma5pawn_B_2pao1ma;
	funMat[MARR->a[0]  [5]  [0]  [1]  [2]  [0]  [2]  [1]  ]  = m_MT_B_1pao2ma5pawn_R_2pao1ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [0]  [2]  [1]  [0]  [2]  [1]  ]  = m_MT_R_1pao2ma5pawn_B_1pao2ma;
	funMat[MARR->a[0]  [5]  [0]  [2]  [1]  [0]  [2]  [1]  ]  = m_MT_B_1pao2ma5pawn_R_1pao2ma;
	//************************************8 对 4*********************************************************
	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[4]  [2]  [1]  [2]  [1]  [2]  [0]  [0]  ]  = m_MT_R_1che1pao2ma4pawn_B_2che2pawn;
	funMat[MARR->a[2]  [4]  [2]  [0]  [0]  [1]  [2]  [1]  ]  = m_MT_B_1che1pao2ma4pawn_R_2che2pawn;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [0]  [2]  [1]  [2]  [1]  ]  = m_MT_R_1che2pao5pawn_B_1che1pao2ma;
	funMat[MARR->a[0]  [5]  [1]  [2]  [1]  [1]  [0]  [2]  ]  = m_MT_B_1che2pao5pawn_R_1che1pao2ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [0]  [1]  [1]  [1]  [1]  [2]  [1]  ]  = m_MT_R_1che1pao1ma5pawn_B_1che1pao2ma;
	funMat[MARR->a[0]  [5]  [1]  [2]  [1]  [1]  [1]  [1]  ]  = m_MT_B_1che1pao1ma5pawn_R_1che1pao2ma;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[4]  [1]  [0]  [2]  [2]  [1]  [1]  [1]  ]  = m_MT_R_2pao2ma4pawn_B_1che1pao1ma1pawn;
	funMat[MARR->a[1]  [4]  [1]  [1]  [1]  [0]  [2]  [2]  ]  = m_MT_B_2pao2ma4pawn_R_1che1pao1ma1pawn;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[4]  [1]  [0]  [2]  [2]  [1]  [0]  [2]  ]  = m_MT_R_2pao2ma4pawn_B_1che2pao1pawn;
	funMat[MARR->a[1]  [4]  [1]  [0]  [2]  [0]  [2]  [2]  ]  = m_MT_B_2pao2ma4pawn_R_1che2pao1pawn;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [0]  [1]  [2]  [0]  [1]  [2]  ]  = m_MT_R_2pao1ma5pawn_B_2pao1ma1pawn;
	funMat[MARR->a[1]  [5]  [0]  [1]  [2]  [0]  [1]  [2]  ]  = m_MT_B_2pao1ma5pawn_R_2pao1ma1pawn;

    //           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [0]  [1]  [2]  [0]  [2]  [1]  ]  = m_MT_R_2pao1ma5pawn_B_1pao2ma1pawn;
	funMat[MARR->a[1]  [5]  [0]  [2]  [1]  [0]  [1]  [2]  ]  = m_MT_B_2pao1ma5pawn_R_1pao2ma1pawn;

    //           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [0]  [2]  [1]  [0]  [2]  [1]  ]  = m_MT_R_1pao2ma5pawn_B_1pao2ma1pawn;
	funMat[MARR->a[1]  [5]  [0]  [2]  [1]  [0]  [2]  [1]  ]  = m_MT_B_1pao2ma5pawn_R_1pao2ma1pawn;

    //           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [0]  [2]  [1]  [0]  [2]  [1]  ]  = m_MT_R_1pao2ma5pawn_B_2pao1ma1pawn;
	funMat[MARR->a[1]  [5]  [0]  [2]  [1]  [0]  [2]  [1]  ]  = m_MT_B_1pao2ma5pawn_R_2pao1ma1pawn;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [1]  [1]  [1]  [1]  [2]  [0]  [1]  ]  = m_MT_R_1che1pao1ma5pawn_B_2che1pao1pawn;
	funMat[MARR->a[1]  [5]  [2]  [0]  [1]  [1]  [1]  [1]  ]  = m_MT_B_1che1pao1ma5pawn_R_2che1pao1pawn;
	//************************************8 对 5*********************************************************
	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[4]  [2]  [0]  [2]  [2]  [1]  [0]  [2]  ]  = m_MT_R_2pao2ma4pawn_B_1che2pao2pawn;
	funMat[MARR->a[2]  [4]  [1]  [0]  [2]  [0]  [2]  [2]  ]  = m_MT_B_2pao2ma4pawn_R_1che2pao2pawn;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [2]  [1]  [1]  [1]  [2]  [0]  [1]  ]  = m_MT_R_1che1pao1ma5pawn_B_2che1pao2pawn;
	funMat[MARR->a[2]  [5]  [2]  [0]  [1]  [1]  [1]  [1]  ]  = m_MT_B_1che1pao1ma5pawn_R_2che1pao2pawn;

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [3]  [0]  [1]  [2]  [1]  [1]  [0]  ]  = m_MT_R_2pao1ma5pawn_B_1che1ma3pawn;
	funMat[MARR->a[3]  [5]  [1]  [1]  [0]  [0]  [1]  [2]  ]  = m_MT_B_2pao1ma5pawn_R_1che1ma3pawn; //

	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [3]  [0]  [2]  [1]  [1]  [1]  [0]  ]  = m_MT_R_1pao2ma5pawn_B_1che1ma3pawn;
	funMat[MARR->a[3]  [5]  [1]  [1]  [0]  [0]  [2]  [1]  ]  = m_MT_B_1pao2ma5pawn_R_1che1ma3pawn; //
	//************************************8 对 6*********************************************************
	//           红兵  黑卒 红车 红马 红炮 黑车 黑马 黑炮  
	funMat[MARR->a[5]  [3]  [1]  [1]  [1]  [2]  [0]  [1]  ]  = m_MT_R_1che1pao1ma5pawn_B_2che1pao3pawn;
	funMat[MARR->a[3]  [5]  [2]  [0]  [1]  [1]  [1]  [1]  ]  = m_MT_B_1che1pao1ma5pawn_R_2che1pao3pawn;
	//************************************8 对 7*********************************************************
	//************************************8 对 8*********************************************************

}