#pragma once
#include "System/Diagnostics/zzzz__Switch_impl.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
//  Writing Method size for method: System::Diagnostics::BooleanSwitch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::BooleanSwitch::*)(::StringW, ::StringW)>(&System::Diagnostics::BooleanSwitch::_ctor)> {
  constexpr static std::size_t size = 0x1070;
  constexpr static std::size_t addrs = 0x27d8980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::BooleanSwitch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None }]
 System::Diagnostics::BooleanSwitch::BooleanSwitch(::StringW displayName, ::StringW description)  : System::Diagnostics::Switch(THROW_UNLESS(::il2cpp_utils::New<BooleanSwitch>(displayName, description))) {}
 void System::Diagnostics::BooleanSwitch::_ctor(::StringW displayName, ::StringW description)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::BooleanSwitch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, displayName, description);
}
