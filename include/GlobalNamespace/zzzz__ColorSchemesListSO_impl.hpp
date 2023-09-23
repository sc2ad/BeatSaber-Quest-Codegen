#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesListSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::ColorSchemesListSO.get_colorSchemes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::ColorSchemeSO> (GlobalNamespace::ColorSchemesListSO::*)()>(&GlobalNamespace::ColorSchemesListSO::get_colorSchemes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11a32f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorSchemesListSO>::get(),
                            "get_colorSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ColorSchemesListSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemesListSO::*)()>(&GlobalNamespace::ColorSchemesListSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11a32f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorSchemesListSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ColorSchemesListSO::__set__colorSchemes(::ArrayW<GlobalNamespace::ColorSchemeSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::ColorSchemeSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::ColorSchemeSO>>(value));
}
constexpr ::ArrayW<GlobalNamespace::ColorSchemeSO> GlobalNamespace::ColorSchemesListSO::__get__colorSchemes() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::ColorSchemeSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<GlobalNamespace::ColorSchemeSO> GlobalNamespace::ColorSchemesListSO::get_colorSchemes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorSchemesListSO>::get(),
                            "get_colorSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::ColorSchemeSO>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::ColorSchemesListSO::ColorSchemesListSO()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<ColorSchemesListSO>())) {}
 void GlobalNamespace::ColorSchemesListSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorSchemesListSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
