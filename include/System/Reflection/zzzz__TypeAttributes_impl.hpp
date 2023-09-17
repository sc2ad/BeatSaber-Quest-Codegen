#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::TypeAttributes::TypeAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Reflection::TypeAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::TypeAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::VisibilityMask{7};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::NotPublic{0};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::Public{1};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::NestedPublic{2};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::NestedPrivate{3};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::NestedFamily{4};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::NestedAssembly{5};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::NestedFamANDAssem{6};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::NestedFamORAssem{7};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::LayoutMask{24};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::AutoLayout{0};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::SequentialLayout{8};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::ExplicitLayout{16};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::ClassSemanticsMask{32};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::Class{0};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::Interface{32};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::Abstract{128};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::Sealed{256};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::SpecialName{1024};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::Import{4096};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::Serializable{8192};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::WindowsRuntime{16384};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::StringFormatMask{196608};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::AnsiClass{0};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::UnicodeClass{65536};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::AutoClass{131072};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::CustomFormatClass{196608};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::CustomFormatMask{12582912};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::BeforeFieldInit{1048576};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::RTSpecialName{2048};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::HasSecurity{262144};
constexpr ::System::Reflection::TypeAttributes  ::System::Reflection::TypeAttributes::ReservedMask{264192};
} // end anonymous namespace
