﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_MEMBER_VISITOR_H_
#define _BEHAVIAC_MEMBER_VISITOR_H_

#include "behaviac_agent_headers.h"

// Agent property and method handlers


struct PROPERTY_TYPE_FirstAgent_p1 { };
template<> inline FirstStruct& FirstAgent::_Get_Property_<PROPERTY_TYPE_FirstAgent_p1>()
{
	return this->p1;
}

struct METHOD_TYPE_FirstAgent_GetP1s1 { };
template<> inline int FirstAgent::_Execute_Method_<METHOD_TYPE_FirstAgent_GetP1s1>()
{
	return this->FirstAgent::GetP1s1();
}


#endif // _BEHAVIAC_MEMBER_VISITOR_H_