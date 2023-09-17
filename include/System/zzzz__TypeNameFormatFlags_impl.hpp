#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__TypeNameFormatFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TypeNameFormatFlags::TypeNameFormatFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::TypeNameFormatFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::TypeNameFormatFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatBasic{0};
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatNamespace{1};
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatFullInst{2};
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatAssembly{4};
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatSignature{8};
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatNoVersion{16};
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatAngleBrackets{64};
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatStubInfo{128};
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatGenericParam{256};
constexpr ::System::TypeNameFormatFlags  ::System::TypeNameFormatFlags::FormatSerialization{259};
} // end anonymous namespace