#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MethodAttributes::MethodAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Reflection::MethodAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::MethodAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::MemberAccessMask{7};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::PrivateScope{0};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::Private{1};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::FamANDAssem{2};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::Assembly{3};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::Family{4};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::FamORAssem{5};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::Public{6};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::Static{16};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::Final{32};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::Virtual{64};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::HideBySig{128};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::CheckAccessOnOverride{512};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::VtableLayoutMask{256};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::ReuseSlot{0};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::NewSlot{256};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::Abstract{1024};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::SpecialName{2048};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::PinvokeImpl{8192};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::UnmanagedExport{8};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::RTSpecialName{4096};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::HasSecurity{16384};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::RequireSecObject{32768};
constexpr ::System::Reflection::MethodAttributes  ::System::Reflection::MethodAttributes::ReservedMask{53248};
} // end anonymous namespace
