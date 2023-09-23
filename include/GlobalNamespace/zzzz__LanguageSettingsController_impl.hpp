#pragma once
#include "GlobalNamespace/zzzz__DropdownSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__LanguageSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__LanguageSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::LanguageSettingsController.GetInitValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LanguageSettingsController::*)(ByRef<int32_t>, ByRef<int32_t>)>(&GlobalNamespace::LanguageSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2153eb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LanguageSettingsController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSettingsController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LanguageSettingsController.ApplyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LanguageSettingsController::*)(int32_t)>(&GlobalNamespace::LanguageSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2153f58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LanguageSettingsController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSettingsController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LanguageSettingsController.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LanguageSettingsController::*)(int32_t)>(&GlobalNamespace::LanguageSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2153fe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LanguageSettingsController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSettingsController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LanguageSettingsController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LanguageSettingsController::*)()>(&GlobalNamespace::LanguageSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215404c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSettingsController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LanguageSettingsController::__set__settingsValue(GlobalNamespace::LanguageSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LanguageSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LanguageSO>(value));
}
constexpr GlobalNamespace::LanguageSO GlobalNamespace::LanguageSettingsController::__get__settingsValue() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LanguageSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::LanguageSettingsController::GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSettingsController>::get(),
                            "GetInitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, idx, numberOfElements);
}
 void GlobalNamespace::LanguageSettingsController::ApplyValue(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSettingsController>::get(),
                            "ApplyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx);
}
 ::StringW GlobalNamespace::LanguageSettingsController::TextForValue(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSettingsController>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, idx);
}
// Ctor Parameters []
 GlobalNamespace::LanguageSettingsController::LanguageSettingsController()  : GlobalNamespace::DropdownSettingsController(THROW_UNLESS(::il2cpp_utils::New<LanguageSettingsController>())) {}
 void GlobalNamespace::LanguageSettingsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LanguageSettingsController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
