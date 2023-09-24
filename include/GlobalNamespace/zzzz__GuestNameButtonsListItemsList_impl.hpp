#pragma once
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__GuestNameButtonsListItemsList_def.hpp"
//  Writing Method size for method: GlobalNamespace::GuestNameButtonsListItemsList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GuestNameButtonsListItemsList::*)()>(&GlobalNamespace::GuestNameButtonsListItemsList::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2146ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GuestNameButtonsListItemsList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::GuestNameButtonsListItemsList GlobalNamespace::GuestNameButtonsListItemsList::New_ctor()  {
GlobalNamespace::GuestNameButtonsListItemsList o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GuestNameButtonsListItemsList>())};
return o;
}
 void GlobalNamespace::GuestNameButtonsListItemsList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GuestNameButtonsListItemsList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
