#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerTypeProxyAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::Diagnostics::DebuggerTypeProxyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DebuggerTypeProxyAttribute::*)(System::Type)>(&System::Diagnostics::DebuggerTypeProxyAttribute::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x240bff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::DebuggerTypeProxyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::DebuggerTypeProxyAttribute::__set_typeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Diagnostics::DebuggerTypeProxyAttribute::__get_typeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
 System::Diagnostics::DebuggerTypeProxyAttribute::DebuggerTypeProxyAttribute(System::Type type)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<DebuggerTypeProxyAttribute>(type))) {}
 void System::Diagnostics::DebuggerTypeProxyAttribute::_ctor(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::DebuggerTypeProxyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
