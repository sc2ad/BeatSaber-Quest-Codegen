#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__JSONContainerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::JSONContainerType::JSONContainerType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::JSONContainerType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::JSONContainerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::JSONContainerType  ::HoudiniEngineUnity::JSONContainerType::Array{0};
constexpr ::HoudiniEngineUnity::JSONContainerType  ::HoudiniEngineUnity::JSONContainerType::Object{1};
} // end anonymous namespace