#pragma once
#include "System/zzzz__EventArgs_def.hpp"
//  Writing Method size for method: System::EventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::EventArgs::*)()>(&System::EventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24290d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::EventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::EventArgs::__set_Empty(System::EventArgs value)  {
::cordl_internals::setStaticField<System::EventArgs, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::EventArgs>::get>(std::forward<System::EventArgs>(value));
}
 System::EventArgs System::EventArgs::__get_Empty()  {
return ::cordl_internals::getStaticField<System::EventArgs, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::EventArgs>::get>();
}
// Ctor Parameters []
 System::EventArgs::EventArgs()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EventArgs>())) {}
 void System::EventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::EventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
