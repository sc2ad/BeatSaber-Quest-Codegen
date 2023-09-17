#pragma once
#include "GlobalNamespace/zzzz__InputFieldSettingsController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__UrlInputFieldSettingsController_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UrlInputFieldSettingsController.HandleInputFieldDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UrlInputFieldSettingsController::*)(::HMUI::InputFieldView)>(&::GlobalNamespace::UrlInputFieldSettingsController::HandleInputFieldDidChange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2153ca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::UrlInputFieldSettingsController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UrlInputFieldSettingsController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UrlInputFieldSettingsController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UrlInputFieldSettingsController::*)()>(&::GlobalNamespace::UrlInputFieldSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2153d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UrlInputFieldSettingsController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::UrlInputFieldSettingsController::HandleInputFieldDidChange(::HMUI::InputFieldView inputFieldView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UrlInputFieldSettingsController>::get(),
                            "HandleInputFieldDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::InputFieldView>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputFieldView);
}
// Ctor Parameters []
 ::GlobalNamespace::UrlInputFieldSettingsController::UrlInputFieldSettingsController()  : ::GlobalNamespace::InputFieldSettingsController(THROW_UNLESS(::il2cpp_utils::New<UrlInputFieldSettingsController>())) {}
 void ::GlobalNamespace::UrlInputFieldSettingsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UrlInputFieldSettingsController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
