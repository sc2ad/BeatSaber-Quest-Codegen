#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Reflection::FieldAttributes::FieldAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Reflection::FieldAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::FieldAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::FieldAccessMask{7};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::PrivateScope{0};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Private{1};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::FamANDAssem{2};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Assembly{3};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Family{4};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::FamORAssem{5};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Public{6};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Static{16};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::InitOnly{32};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Literal{64};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::NotSerialized{128};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::SpecialName{512};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::PinvokeImpl{8192};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::RTSpecialName{1024};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::HasFieldMarshal{4096};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::HasDefault{32768};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::HasFieldRVA{256};
constexpr System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::ReservedMask{38144};
