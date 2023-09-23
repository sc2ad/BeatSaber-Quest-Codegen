#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Reflection/zzzz__ParameterAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Reflection::ParameterAttributes::ParameterAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Reflection::ParameterAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::ParameterAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::None{0};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::In{1};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Out{2};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Lcid{4};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Retval{8};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Optional{16};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::HasDefault{4096};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::HasFieldMarshal{8192};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Reserved3{16384};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Reserved4{32768};
constexpr System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::ReservedMask{61440};
