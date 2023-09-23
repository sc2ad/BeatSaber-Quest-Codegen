#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StatusVerbosity_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_StatusVerbosity(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_StatusVerbosity::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_StatusVerbosity::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_0{0};
constexpr HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_1{1};
constexpr HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_2{2};
constexpr HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_ALL{2};
constexpr HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_ERRORS{0};
constexpr HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_WARNINGS{1};
constexpr HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_MESSAGES{2};
