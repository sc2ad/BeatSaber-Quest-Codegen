#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_ParmType::HAPI_ParmType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_ParmType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ParmType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_INT{0};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_MULTIPARMLIST{1};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_TOGGLE{2};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_BUTTON{3};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FLOAT{4};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_COLOR{5};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_STRING{6};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_FILE{7};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_FILE_GEO{8};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_FILE_IMAGE{9};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NODE{10};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FOLDERLIST{11};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FOLDERLIST_RADIO{12};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FOLDER{13};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_LABEL{14};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_SEPARATOR{15};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_FILE_DIR{16};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_MAX{17};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_INT_START{0};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_INT_END{3};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FLOAT_START{4};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FLOAT_END{5};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_STRING_START{6};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_STRING_END{10};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_START{7};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_END{9};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NODE_START{10};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NODE_END{10};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_CONTAINER_START{11};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_CONTAINER_END{12};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NONVALUE_START{13};
constexpr HoudiniEngineUnity::HAPI_ParmType  HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NONVALUE_END{15};
