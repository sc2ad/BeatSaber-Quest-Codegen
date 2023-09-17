#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeSO.get_colorScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme (::GlobalNamespace::ColorSchemeSO::*)()>(&::GlobalNamespace::ColorSchemeSO::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11a3300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeSO>::get(),
                            "get_colorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeSO.LogColorScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeSO::*)()>(&::GlobalNamespace::ColorSchemeSO::LogColorScheme)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x11a3308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeSO>::get(),
                            "LogColorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeSO::*)()>(&::GlobalNamespace::ColorSchemeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11a35ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ColorSchemeSO::__set__colorScheme(::GlobalNamespace::ColorScheme value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorScheme, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorScheme>(value));
}
constexpr ::GlobalNamespace::ColorScheme ::GlobalNamespace::ColorSchemeSO::__get__colorScheme() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorScheme, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::ColorScheme ::GlobalNamespace::ColorSchemeSO::get_colorScheme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeSO>::get(),
                            "get_colorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ColorSchemeSO::LogColorScheme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeSO>::get(),
                            "LogColorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::ColorSchemeSO::ColorSchemeSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<ColorSchemeSO>())) {}
 void ::GlobalNamespace::ColorSchemeSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
