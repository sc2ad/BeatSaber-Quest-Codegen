#pragma once
namespace {
#include "GlobalNamespace/zzzz__MainSettingsDefaultValues_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainSettingsDefaultValues.SetFixedDefaultValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::MainSettingsModelSO)>(&::GlobalNamespace::MainSettingsDefaultValues::SetFixedDefaultValues)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x21ef7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues>::get(),
                            "SetFixedDefaultValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsDefaultValues._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsDefaultValues::*)()>(&::GlobalNamespace::MainSettingsDefaultValues::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ef938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::MainSettingsDefaultValues::__set_kDefaultMirrorGraphicsSettings(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "kDefaultMirrorGraphicsSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::MainSettingsDefaultValues::__get_kDefaultMirrorGraphicsSettings()  {
return ::cordl_internals::getStaticField<int32_t, "kDefaultMirrorGraphicsSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues>::get>();
}
 void ::GlobalNamespace::MainSettingsDefaultValues::SetFixedDefaultValues(::GlobalNamespace::MainSettingsModelSO mainSettingsModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues>::get(),
                            "SetFixedDefaultValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mainSettingsModel);
}
// Ctor Parameters []
 ::GlobalNamespace::MainSettingsDefaultValues::MainSettingsDefaultValues()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MainSettingsDefaultValues>())) {}
 void ::GlobalNamespace::MainSettingsDefaultValues::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsDefaultValues>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
