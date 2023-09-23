#pragma once
#include "GlobalNamespace/zzzz__SwitchSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__BoolSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::BoolSettingsController.GetInitValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BoolSettingsController::*)()>(&GlobalNamespace::BoolSettingsController::GetInitValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21523b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BoolSettingsController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BoolSettingsController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BoolSettingsController.ApplyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoolSettingsController::*)(bool)>(&GlobalNamespace::BoolSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2152400;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BoolSettingsController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BoolSettingsController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BoolSettingsController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoolSettingsController::*)()>(&GlobalNamespace::BoolSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2152458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BoolSettingsController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BoolSettingsController::__set__settingsValue(GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BoolSO>(value));
}
constexpr GlobalNamespace::BoolSO GlobalNamespace::BoolSettingsController::__get__settingsValue() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::BoolSettingsController::GetInitValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BoolSettingsController>::get(),
                            "GetInitValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BoolSettingsController::ApplyValue(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BoolSettingsController>::get(),
                            "ApplyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 GlobalNamespace::BoolSettingsController::BoolSettingsController()  : GlobalNamespace::SwitchSettingsController(THROW_UNLESS(::il2cpp_utils::New<BoolSettingsController>())) {}
 void GlobalNamespace::BoolSettingsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BoolSettingsController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
