#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlatformMenu_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlatformMenu_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler::GlobalNamespace__OVRPlatformMenu__eHandler(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler  GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler::ShowConfirmQuit{0};
constexpr GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler  GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler::RetreatOneLevel{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction::GlobalNamespace__OVRPlatformMenu__eBackButtonAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction  GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction::NONE{0};
constexpr GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction  GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction::SHORT_PRESS{1};
//  Writing Method size for method: GlobalNamespace::OVRPlatformMenu.HandleBackButtonState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction (GlobalNamespace::OVRPlatformMenu::*)()>(&GlobalNamespace::OVRPlatformMenu::HandleBackButtonState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25dcd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "HandleBackButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPlatformMenu.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlatformMenu::*)()>(&GlobalNamespace::OVRPlatformMenu::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x25dcd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPlatformMenu.ShowConfirmQuitMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlatformMenu::*)()>(&GlobalNamespace::OVRPlatformMenu::ShowConfirmQuitMenu)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25dceec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "ShowConfirmQuitMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPlatformMenu.RetreatOneLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlatformMenu::RetreatOneLevel)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x25dcfc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "RetreatOneLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPlatformMenu.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlatformMenu::*)()>(&GlobalNamespace::OVRPlatformMenu::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25dd0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPlatformMenu._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlatformMenu::*)()>(&GlobalNamespace::OVRPlatformMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25dd0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRPlatformMenu::__set_inputCode(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__RawButton>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton GlobalNamespace::OVRPlatformMenu::__get_inputCode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__RawButton, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPlatformMenu::__set_shortPressHandler(GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler GlobalNamespace::OVRPlatformMenu::__get_shortPressHandler() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPlatformMenu::__set_OnShortPress(System::Func_1<bool> value)  {
::cordl_internals::setInstanceField<System::Func_1<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<bool>>(value));
}
constexpr System::Func_1<bool> GlobalNamespace::OVRPlatformMenu::__get_OnShortPress() const {
return ::cordl_internals::getInstanceField<System::Func_1<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVRPlatformMenu::__set_sceneStack(System::Collections::Generic::Stack_1<::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Stack_1<::StringW>, "sceneStack", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get>(std::forward<System::Collections::Generic::Stack_1<::StringW>>(value));
}
 System::Collections::Generic::Stack_1<::StringW> GlobalNamespace::OVRPlatformMenu::__get_sceneStack()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Stack_1<::StringW>, "sceneStack", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get>();
}
 GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction GlobalNamespace::OVRPlatformMenu::HandleBackButtonState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "HandleBackButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPlatformMenu::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPlatformMenu::ShowConfirmQuitMenu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "ShowConfirmQuitMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRPlatformMenu::RetreatOneLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "RetreatOneLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRPlatformMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::OVRPlatformMenu GlobalNamespace::OVRPlatformMenu::New_ctor()  {
GlobalNamespace::OVRPlatformMenu o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::OVRPlatformMenu>())};
return o;
}
 void GlobalNamespace::OVRPlatformMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPlatformMenu>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
