#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__EnvironmentOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "HMUI/zzzz__PanelAnimationSO_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListSO_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements.get_environmentInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::*)()>(&::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::get_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2130560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements.set_environmentInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::*)(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO>)>(&::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::set_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2130568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>::get(),
                            "set_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::*)()>(&::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2130570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::__set_label(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::__get_label() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::__set_simpleTextDropdown(::HMUI::SimpleTextDropdown value)  {
::cordl_internals::setInstanceField<::HMUI::SimpleTextDropdown, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::SimpleTextDropdown>(value));
}
constexpr ::HMUI::SimpleTextDropdown ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::__get_simpleTextDropdown() const {
return ::cordl_internals::getInstanceField<::HMUI::SimpleTextDropdown, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::__set_environmentType(::GlobalNamespace::EnvironmentTypeSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentTypeSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentTypeSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentTypeSO ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::__get_environmentType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentTypeSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::__set__environmentInfos_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::__get__environmentInfos_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::get_environmentInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::set_environmentInfos(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>::get(),
                            "set_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>())) {}
 void ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::*)()>(&::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21305dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c._SetData_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::*)(::GlobalNamespace::EnvironmentInfoSO)>(&::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::_SetData_b__12_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21305e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>::get(),
                            "<SetData>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::__set___9(::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>(value));
}
 ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::__set___9__12_0(::System::Func_2<::GlobalNamespace::EnvironmentInfoSO,::StringW> value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::EnvironmentInfoSO,::StringW>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>::get>(std::forward<::System::Func_2<::GlobalNamespace::EnvironmentInfoSO,::StringW>>(value));
}
 ::System::Func_2<::GlobalNamespace::EnvironmentInfoSO,::StringW> ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::__get___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::EnvironmentInfoSO,::StringW>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>())) {}
 void ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c::_SetData_b__12_0(::GlobalNamespace::EnvironmentInfoSO x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c>::get(),
                            "<SetData>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.get_overrideEnvironmentSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OverrideEnvironmentSettings (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::get_overrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212fad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "get_overrideEnvironmentSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(::GlobalNamespace::OverrideEnvironmentSettings)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x212fadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x212fd8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x212ff28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.HandleDropDownDidSelectCellWithIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(::HMUI::DropdownWithTableView, int32_t)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x213007c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "HandleDropDownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.HandleOverrideEnvironmentsToggleValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(bool)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x213030c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "HandleOverrideEnvironmentsToggleValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2130538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController._HandleOverrideEnvironmentsToggleValueChanged_b__16_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_HandleOverrideEnvironmentsToggleValueChanged_b__16_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2130540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "<HandleOverrideEnvironmentsToggleValueChanged>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IRefreshable
constexpr  ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::operator ::GlobalNamespace::IRefreshable() const noexcept {
return ::GlobalNamespace::IRefreshable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__overrideEnvironmentsToggle(::UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Toggle>(value));
}
constexpr ::UnityEngine::UI::Toggle ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__overrideEnvironmentsToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__elementsGO(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__elementsGO() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__elements(::ArrayW<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements> ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__elements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__presentPanelAnimation(::HMUI::PanelAnimationSO value)  {
::cordl_internals::setInstanceField<::HMUI::PanelAnimationSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::PanelAnimationSO>(value));
}
constexpr ::HMUI::PanelAnimationSO ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__presentPanelAnimation() const {
return ::cordl_internals::getInstanceField<::HMUI::PanelAnimationSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__dismissPanelAnimation(::HMUI::PanelAnimationSO value)  {
::cordl_internals::setInstanceField<::HMUI::PanelAnimationSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::PanelAnimationSO>(value));
}
constexpr ::HMUI::PanelAnimationSO ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__dismissPanelAnimation() const {
return ::cordl_internals::getInstanceField<::HMUI::PanelAnimationSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__allEnvironments(::GlobalNamespace::EnvironmentsListSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentsListSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentsListSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentsListSO ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__allEnvironments() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentsListSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnalyticsModel, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IAnalyticsModel>(value));
}
constexpr ::GlobalNamespace::IAnalyticsModel ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OverrideEnvironmentSettings, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OverrideEnvironmentSettings>(value));
}
constexpr ::GlobalNamespace::OverrideEnvironmentSettings ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__overrideEnvironmentSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OverrideEnvironmentSettings, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::OverrideEnvironmentSettings ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::get_overrideEnvironmentSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "get_overrideEnvironmentSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OverrideEnvironmentSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::SetData(::GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, overrideEnvironmentSettings);
}
 void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropDownWithTableView, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "HandleDropDownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dropDownWithTableView, idx);
}
 void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged(bool isOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "HandleOverrideEnvironmentsToggleValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isOn);
}
// Ctor Parameters []
 ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::EnvironmentOverrideSettingsPanelController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<EnvironmentOverrideSettingsPanelController>())) {}
 void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_HandleOverrideEnvironmentsToggleValueChanged_b__16_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>::get(),
                            "<HandleOverrideEnvironmentsToggleValueChanged>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
