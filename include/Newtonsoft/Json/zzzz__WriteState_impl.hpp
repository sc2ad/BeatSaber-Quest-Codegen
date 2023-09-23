#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/zzzz__WriteState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::WriteState::WriteState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::WriteState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::WriteState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Error{0};
constexpr Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Closed{1};
constexpr Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Object{2};
constexpr Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Array{3};
constexpr Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Constructor{4};
constexpr Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Property{5};
constexpr Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Start{6};
