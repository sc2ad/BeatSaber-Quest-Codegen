#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_State(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_State::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_PDG_State  ::HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_STATE_READY{0};
constexpr ::HoudiniEngineUnity::HAPI_PDG_State  ::HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_STATE_COOKING{1};
constexpr ::HoudiniEngineUnity::HAPI_PDG_State  ::HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_STATE_MAX{2};
constexpr ::HoudiniEngineUnity::HAPI_PDG_State  ::HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_STATE_MAX_READY_STATE{0};
} // end anonymous namespace
