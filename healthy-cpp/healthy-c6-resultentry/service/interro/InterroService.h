#pragma once
#ifndef _INTERRO_SERVICE_
#define _INTERRO_SERVICE_
#include <list>
#include "domain/vo/interro/InterroVO.h"
#include "domain/query/interro/InterroQuery.h"
#include "domain/dto/interro/InterroDTO.h"

/*
* 保存问诊信息实现
*/
class InterroService {
public:
	uint64_t saveData(const InterroDTO::Wrapper& dto);
};


#endif // !_INTERRO_SERVICE_