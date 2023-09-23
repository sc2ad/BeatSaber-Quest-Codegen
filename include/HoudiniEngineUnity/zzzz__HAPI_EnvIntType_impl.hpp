#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_EnvIntType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_EnvIntType::HAPI_EnvIntType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_EnvIntType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_EnvIntType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_INVALID{-1};
constexpr HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_MAJOR{100};
constexpr HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_MINOR{110};
constexpr HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_BUILD{120};
constexpr HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_PATCH{130};
constexpr HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR{200};
constexpr HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR{210};
constexpr HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API{220};
constexpr HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_MAX{221};
