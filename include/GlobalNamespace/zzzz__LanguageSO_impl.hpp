#pragma once
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_impl.hpp"
#include "GlobalNamespace/zzzz__LanguageSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::LanguageSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LanguageSO::*)()>(&GlobalNamespace::LanguageSO::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2198674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::LanguageSO::LanguageSO()  : GlobalNamespace::ObservableVariableSO_1<Polyglot::Language>(THROW_UNLESS(::il2cpp_utils::New<LanguageSO>())) {}
 void GlobalNamespace::LanguageSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
