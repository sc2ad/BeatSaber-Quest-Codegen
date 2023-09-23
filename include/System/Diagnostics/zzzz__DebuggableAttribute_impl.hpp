#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggableAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes::System__Diagnostics__DebuggableAttribute__DebuggingModes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes  System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes::None{0};
constexpr System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes  System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes::Default{1};
constexpr System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes  System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes::DisableOptimizations{256};
constexpr System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes  System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes::IgnoreSymbolStoreSequencePoints{2};
constexpr System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes  System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes::EnableEditAndContinue{4};
//  Writing Method size for method: System::Diagnostics::DebuggableAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DebuggableAttribute::*)(System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes)>(&System::Diagnostics::DebuggableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x240bf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::DebuggableAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::DebuggableAttribute::__set_m_debuggingModes(System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes value)  {
::cordl_internals::setInstanceField<System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes>(value));
}
constexpr System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes System::Diagnostics::DebuggableAttribute::__get_m_debuggingModes() const {
return ::cordl_internals::getInstanceField<System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "modes", ty: "System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes", modifiers: "", def_value: None }]
 System::Diagnostics::DebuggableAttribute::DebuggableAttribute(System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes modes)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<DebuggableAttribute>(modes))) {}
 void System::Diagnostics::DebuggableAttribute::_ctor(System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes modes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::DebuggableAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Diagnostics::System__Diagnostics__DebuggableAttribute__DebuggingModes>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, modes);
}
