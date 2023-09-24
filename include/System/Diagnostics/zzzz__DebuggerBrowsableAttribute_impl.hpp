#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerBrowsableAttribute_def.hpp"
#include "System/Diagnostics/zzzz__DebuggerBrowsableState_def.hpp"
//  Writing Method size for method: System::Diagnostics::DebuggerBrowsableAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DebuggerBrowsableAttribute::*)(System::Diagnostics::DebuggerBrowsableState)>(&System::Diagnostics::DebuggerBrowsableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x240bf78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::DebuggerBrowsableAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Diagnostics::DebuggerBrowsableState>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::DebuggerBrowsableAttribute::__set_state(System::Diagnostics::DebuggerBrowsableState value)  {
::cordl_internals::setInstanceField<System::Diagnostics::DebuggerBrowsableState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Diagnostics::DebuggerBrowsableState>(value));
}
constexpr System::Diagnostics::DebuggerBrowsableState System::Diagnostics::DebuggerBrowsableAttribute::__get_state() const {
return ::cordl_internals::getInstanceField<System::Diagnostics::DebuggerBrowsableState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Diagnostics::DebuggerBrowsableAttribute System::Diagnostics::DebuggerBrowsableAttribute::New_ctor(System::Diagnostics::DebuggerBrowsableState state)  {
System::Diagnostics::DebuggerBrowsableAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::Diagnostics::DebuggerBrowsableAttribute>(state))};
return o;
}
 void System::Diagnostics::DebuggerBrowsableAttribute::_ctor(System::Diagnostics::DebuggerBrowsableState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::DebuggerBrowsableAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Diagnostics::DebuggerBrowsableState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
