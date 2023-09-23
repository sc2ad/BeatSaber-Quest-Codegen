#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HMUI/zzzz__ScreenModeSO_def.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
//  Writing Method size for method: HMUI::ScreenModeSO.get_data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ScreenModeData (HMUI::ScreenModeSO::*)()>(&HMUI::ScreenModeSO::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb8d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeSO>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ScreenModeSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenModeSO::*)()>(&HMUI::ScreenModeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb8d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ScreenModeSO::__set__data(HMUI::ScreenModeData value)  {
::cordl_internals::setInstanceField<HMUI::ScreenModeData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ScreenModeData>(value));
}
constexpr HMUI::ScreenModeData HMUI::ScreenModeSO::__get__data() const {
return ::cordl_internals::getInstanceField<HMUI::ScreenModeData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HMUI::ScreenModeData HMUI::ScreenModeSO::get_data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeSO>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::ScreenModeData, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 HMUI::ScreenModeSO::ScreenModeSO()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<ScreenModeSO>())) {}
 void HMUI::ScreenModeSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
