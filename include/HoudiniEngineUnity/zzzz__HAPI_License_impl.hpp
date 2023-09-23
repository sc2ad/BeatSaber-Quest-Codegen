#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_License_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_License::HAPI_License(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_License::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_License::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_License  HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_NONE{0};
constexpr HoudiniEngineUnity::HAPI_License  HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI_ENGINE{1};
constexpr HoudiniEngineUnity::HAPI_License  HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI{2};
constexpr HoudiniEngineUnity::HAPI_License  HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI_FX{3};
constexpr HoudiniEngineUnity::HAPI_License  HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI_ENGINE_INDIE{4};
constexpr HoudiniEngineUnity::HAPI_License  HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI_INDIE{5};
constexpr HoudiniEngineUnity::HAPI_License  HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_MAX{6};
