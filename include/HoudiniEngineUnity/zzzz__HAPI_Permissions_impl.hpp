#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Permissions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_Permissions::HAPI_Permissions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_Permissions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_Permissions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_Permissions  HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_NON_APPLICABLE{0};
constexpr HoudiniEngineUnity::HAPI_Permissions  HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_READ_WRITE{1};
constexpr HoudiniEngineUnity::HAPI_Permissions  HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_READ_ONLY{2};
constexpr HoudiniEngineUnity::HAPI_Permissions  HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_WRITE_ONLY{3};
constexpr HoudiniEngineUnity::HAPI_Permissions  HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_MAX{4};
