#pragma once
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
//  Writing Method size for method: GlobalNamespace::GameplayModifierInfoListItemsList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifierInfoListItemsList::*)()>(&GlobalNamespace::GameplayModifierInfoListItemsList::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2123158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierInfoListItemsList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::GameplayModifierInfoListItemsList GlobalNamespace::GameplayModifierInfoListItemsList::New_ctor()  {
GlobalNamespace::GameplayModifierInfoListItemsList o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GameplayModifierInfoListItemsList>())};
return o;
}
 void GlobalNamespace::GameplayModifierInfoListItemsList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierInfoListItemsList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
