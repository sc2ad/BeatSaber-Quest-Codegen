#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__RefreshEventArgs_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::ComponentModel::RefreshEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::RefreshEventArgs::*)(System::Type)>(&System::ComponentModel::RefreshEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27854c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::RefreshEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::RefreshEventArgs::__set__TypeChanged_k__BackingField(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::ComponentModel::RefreshEventArgs::__get__TypeChanged_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "typeChanged", ty: "System::Type", modifiers: "", def_value: None }]
 System::ComponentModel::RefreshEventArgs::RefreshEventArgs(System::Type typeChanged)  : System::EventArgs(THROW_UNLESS(::il2cpp_utils::New<RefreshEventArgs>(typeChanged))) {}
 void System::ComponentModel::RefreshEventArgs::_ctor(System::Type typeChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::RefreshEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, typeChanged);
}
