#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SessionSyncInfo_def.hpp"
// Ctor Parameters [CppParam { name: "cookUsingHoudiniTime", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "syncViewport", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_SessionSyncInfo::HAPI_SessionSyncInfo(bool cookUsingHoudiniTime, bool syncViewport) noexcept : ::bs_hook::ValueTypeWrapper() {this->cookUsingHoudiniTime = cookUsingHoudiniTime;
this->syncViewport = syncViewport;
}
constexpr void HoudiniEngineUnity::HAPI_SessionSyncInfo::__set_cookUsingHoudiniTime(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_SessionSyncInfo::__get_cookUsingHoudiniTime() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_SessionSyncInfo::__set_syncViewport(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_SessionSyncInfo::__get_syncViewport() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
