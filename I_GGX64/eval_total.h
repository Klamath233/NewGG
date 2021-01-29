#include "chess.h"
#include <cassert>
#include <cstring>
#include "preGen.h"

#include "evaluate.h"
#include "material.h"
#include "thread.h"
#include "uci.h"
#include "eval_const.h"

#pragma once

extern template<Color Us> Score eval_king_up_one_string(Position& pos, EvalInfo& ei);
extern template<Color Us> int PawnOverRiver(Position& pos, EvalInfo& ei);