#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_State::HAPI_State(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_State::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_State  ::HoudiniEngineUnity::HAPI_State::HAPI_STATE_READY{0};
constexpr ::HoudiniEngineUnity::HAPI_State  ::HoudiniEngineUnity::HAPI_State::HAPI_STATE_READY_WITH_FATAL_ERRORS{1};
constexpr ::HoudiniEngineUnity::HAPI_State  ::HoudiniEngineUnity::HAPI_State::HAPI_STATE_READY_WITH_COOK_ERRORS{2};
constexpr ::HoudiniEngineUnity::HAPI_State  ::HoudiniEngineUnity::HAPI_State::HAPI_STATE_STARTING_COOK{3};
constexpr ::HoudiniEngineUnity::HAPI_State  ::HoudiniEngineUnity::HAPI_State::HAPI_STATE_COOKING{4};
constexpr ::HoudiniEngineUnity::HAPI_State  ::HoudiniEngineUnity::HAPI_State::HAPI_STATE_STARTING_LOAD{5};
constexpr ::HoudiniEngineUnity::HAPI_State  ::HoudiniEngineUnity::HAPI_State::HAPI_STATE_LOADING{6};
constexpr ::HoudiniEngineUnity::HAPI_State  ::HoudiniEngineUnity::HAPI_State::HAPI_STATE_MAX{7};
constexpr ::HoudiniEngineUnity::HAPI_State  ::HoudiniEngineUnity::HAPI_State::HAPI_STATE_MAX_READY_STATE{2};
} // end anonymous namespace
