#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OptionsViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton::____GlobalNamespace__OptionsViewController__OptionsButton(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton  ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton::EditAvatar{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton  ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton::PlayerOptions{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton  ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton::Settings{2};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)(::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton>)>(&::GlobalNamespace::OptionsViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x217bb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)(::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton>)>(&::GlobalNamespace::OptionsViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x217bc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)(bool, bool, bool)>(&::GlobalNamespace::OptionsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x217bcdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::OptionsViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217be6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._DidActivate_b__8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_DidActivate_b__8_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x217be74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._DidActivate_b__8_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_DidActivate_b__8_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x217be94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._DidActivate_b__8_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_DidActivate_b__8_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x217beb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "<DidActivate>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::OptionsViewController::__set__editAvatarButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::OptionsViewController::__get__editAvatarButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OptionsViewController::__set__playerOptionsButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::OptionsViewController::__get__playerOptionsButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OptionsViewController::__set__settingsButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::OptionsViewController::__get__settingsButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OptionsViewController::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppStaticSettingsSO, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AppStaticSettingsSO>(value));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO ::GlobalNamespace::OptionsViewController::__get__appStaticSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OptionsViewController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton> ::GlobalNamespace::OptionsViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OptionsViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::OptionsViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::OptionsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
// Ctor Parameters []
 ::GlobalNamespace::OptionsViewController::OptionsViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<OptionsViewController>())) {}
 void ::GlobalNamespace::OptionsViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OptionsViewController::_DidActivate_b__8_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OptionsViewController::_DidActivate_b__8_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OptionsViewController::_DidActivate_b__8_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController>::get(),
                            "<DidActivate>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
