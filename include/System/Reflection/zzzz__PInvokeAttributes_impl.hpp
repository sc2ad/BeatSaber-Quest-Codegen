#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Reflection/zzzz__PInvokeAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::PInvokeAttributes::PInvokeAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Reflection::PInvokeAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::PInvokeAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::NoMangle{1};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CharSetMask{6};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CharSetNotSpec{0};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CharSetAnsi{2};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CharSetUnicode{4};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CharSetAuto{6};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::BestFitUseAssem{0};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::BestFitEnabled{16};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::BestFitDisabled{32};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::BestFitMask{48};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::ThrowOnUnmappableCharUseAssem{0};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::ThrowOnUnmappableCharEnabled{4096};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::ThrowOnUnmappableCharDisabled{8192};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::ThrowOnUnmappableCharMask{12288};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::SupportsLastError{64};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CallConvMask{1792};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CallConvWinapi{256};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CallConvCdecl{512};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CallConvStdcall{768};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CallConvThiscall{1024};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::CallConvFastcall{1280};
constexpr ::System::Reflection::PInvokeAttributes  ::System::Reflection::PInvokeAttributes::MaxValue{65535};
} // end anonymous namespace
