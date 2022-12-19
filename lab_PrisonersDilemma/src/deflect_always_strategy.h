#pragma once

#include "IStrategy.h"

class deflect_always_strategy : public IStrategy
{
public:
    result run(const std :: vector<std :: vector<bool>> &history, const int &row, const int &column) const override;
};