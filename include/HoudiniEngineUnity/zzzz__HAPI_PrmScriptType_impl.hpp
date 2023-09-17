#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_PrmScriptType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PrmScriptType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_PrmScriptType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PrmScriptType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INT{0};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_FLOAT{1};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_ANGLE{2};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_STRING{3};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_FILE{4};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_DIRECTORY{5};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_IMAGE{6};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GEOMETRY{7};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_TOGGLE{8};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_BUTTON{9};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_VECTOR2{10};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_VECTOR3{11};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_VECTOR4{12};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INTVECTOR2{13};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INTVECTOR3{14};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INTVECTOR4{15};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_UV{16};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_UVW{17};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_DIR{18};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_COLOR{19};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_COLOR4{20};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_OPPATH{21};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_OPLIST{22};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_OBJECT{23};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_OBJECTLIST{24};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_RENDER{25};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_SEPARATOR{26};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA{27};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT{28};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_LABEL{29};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_RGBAMASK{30};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_ORDINAL{31};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_RAMP_FLT{32};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_RAMP_RGB{33};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG{34};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INT_LOG{35};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_DATA{36};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX{37};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INT_MINMAX{38};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INT_STARTEND{39};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP{40};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_ICONSTRIP{41};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GROUPRADIO{1000};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE{1001};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE{1002};
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType  ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GROUP{1003};
} // end anonymous namespace
