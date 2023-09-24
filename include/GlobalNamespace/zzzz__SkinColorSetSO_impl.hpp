#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SkinColorSetSO_def.hpp"
#include "GlobalNamespace/zzzz__SkinColorSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::SkinColorSetSO.get_colors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::SkinColorSO> (GlobalNamespace::SkinColorSetSO::*)()>(&GlobalNamespace::SkinColorSetSO::get_colors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22299f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SkinColorSetSO>::get(),
                            "get_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SkinColorSetSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SkinColorSetSO::*)()>(&GlobalNamespace::SkinColorSetSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2229a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SkinColorSetSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SkinColorSetSO::__set__colors(::ArrayW<GlobalNamespace::SkinColorSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::SkinColorSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::SkinColorSO>>(value));
}
constexpr ::ArrayW<GlobalNamespace::SkinColorSO> GlobalNamespace::SkinColorSetSO::__get__colors() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::SkinColorSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<GlobalNamespace::SkinColorSO> GlobalNamespace::SkinColorSetSO::get_colors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SkinColorSetSO>::get(),
                            "get_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::SkinColorSO>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SkinColorSetSO GlobalNamespace::SkinColorSetSO::New_ctor()  {
GlobalNamespace::SkinColorSetSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SkinColorSetSO>())};
return o;
}
 void GlobalNamespace::SkinColorSetSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SkinColorSetSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
