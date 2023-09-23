#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Session_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SessionType_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "HoudiniEngineUnity::HAPI_SessionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "id", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_Session::HAPI_Session(HoudiniEngineUnity::HAPI_SessionType type, int64_t id) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->id = id;
}
constexpr void HoudiniEngineUnity::HAPI_Session::__set_type(HoudiniEngineUnity::HAPI_SessionType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_SessionType, 0x0>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_SessionType>(value));
}
constexpr HoudiniEngineUnity::HAPI_SessionType HoudiniEngineUnity::HAPI_Session::__get_type() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_SessionType, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Session::__set_id(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t HoudiniEngineUnity::HAPI_Session::__get_id() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->__instance);
}
