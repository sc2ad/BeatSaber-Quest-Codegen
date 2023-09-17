#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MethodImplAttributes::MethodImplAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Reflection::MethodImplAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::MethodImplAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::CodeTypeMask{3};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::IL{0};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::Native{1};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::OPTIL{2};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::Runtime{3};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::ManagedMask{4};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::Unmanaged{4};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::Managed{0};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::ForwardRef{16};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::PreserveSig{128};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::InternalCall{4096};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::Synchronized{32};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::NoInlining{8};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::AggressiveInlining{256};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::NoOptimization{64};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::MaxMethodImplVal{65535};
constexpr ::System::Reflection::MethodImplAttributes  ::System::Reflection::MethodImplAttributes::SecurityMitigations{1024};
} // end anonymous namespace
