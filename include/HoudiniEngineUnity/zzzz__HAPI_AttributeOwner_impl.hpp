#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_AttributeOwner(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_AttributeOwner::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AttributeOwner::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner  ::HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_INVALID{-1};
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner  ::HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_VERTEX{0};
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner  ::HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_POINT{1};
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner  ::HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_PRIM{2};
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner  ::HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_DETAIL{3};
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner  ::HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_MAX{4};
} // end anonymous namespace
