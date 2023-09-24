#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormController_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
//  Writing Method size for method: GlobalNamespace::CreateServerFormController.get_formData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::CreateServerFormData (GlobalNamespace::CreateServerFormController::*)()>(&GlobalNamespace::CreateServerFormController::get_formData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x214c33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreateServerFormController>::get(),
                            "get_formData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CreateServerFormController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreateServerFormController::*)(int32_t, bool)>(&GlobalNamespace::CreateServerFormController::Setup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x214c3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreateServerFormController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CreateServerFormController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreateServerFormController::*)()>(&GlobalNamespace::CreateServerFormController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214c460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreateServerFormController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CreateServerFormController::__set__maxPlayersList(GlobalNamespace::FormattedFloatListSettingsController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FormattedFloatListSettingsController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FormattedFloatListSettingsController>(value));
}
constexpr GlobalNamespace::FormattedFloatListSettingsController GlobalNamespace::CreateServerFormController::__get__maxPlayersList() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FormattedFloatListSettingsController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CreateServerFormController::__set__netDiscoverable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::CreateServerFormController::__get__netDiscoverable() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::CreateServerFormData GlobalNamespace::CreateServerFormController::get_formData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreateServerFormController>::get(),
                            "get_formData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::CreateServerFormData, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::CreateServerFormController::Setup(int32_t selectedNumberOfPlayers, bool netDiscoverable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreateServerFormController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectedNumberOfPlayers, netDiscoverable);
}
 GlobalNamespace::CreateServerFormController GlobalNamespace::CreateServerFormController::New_ctor()  {
GlobalNamespace::CreateServerFormController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::CreateServerFormController>())};
return o;
}
 void GlobalNamespace::CreateServerFormController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreateServerFormController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
