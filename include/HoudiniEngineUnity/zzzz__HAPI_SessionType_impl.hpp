#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_SessionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_SessionType::HAPI_SessionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_SessionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_SessionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_SessionType  ::HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_INPROCESS{0};
constexpr ::HoudiniEngineUnity::HAPI_SessionType  ::HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_THRIFT{1};
constexpr ::HoudiniEngineUnity::HAPI_SessionType  ::HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_CUSTOM1{2};
constexpr ::HoudiniEngineUnity::HAPI_SessionType  ::HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_CUSTOM2{3};
constexpr ::HoudiniEngineUnity::HAPI_SessionType  ::HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_CUSTOM3{4};
constexpr ::HoudiniEngineUnity::HAPI_SessionType  ::HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_MAX{5};
} // end anonymous namespace
