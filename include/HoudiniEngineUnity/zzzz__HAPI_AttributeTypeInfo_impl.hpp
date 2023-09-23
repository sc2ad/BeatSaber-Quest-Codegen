#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeTypeInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_AttributeTypeInfo(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_AttributeTypeInfo::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_AttributeTypeInfo::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_INVALID{-1};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_NONE{0};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_POINT{1};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_HPOINT{2};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_VECTOR{3};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_NORMAL{4};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_COLOR{5};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_QUATERNION{6};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_MATRIX3{7};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_MATRIX{8};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_ST{9};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_HIDDEN{10};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_BOX2{11};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_BOX{12};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_TEXTURE{13};
constexpr HoudiniEngineUnity::HAPI_AttributeTypeInfo  HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_MAX{14};
