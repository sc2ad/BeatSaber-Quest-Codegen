#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__HowToPlayViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions::GlobalNamespace__HowToPlayViewController__HowToPlayOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions  GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions::HowToPlay{0};
constexpr GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions  GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions::Credits{1};
//  Writing Method size for method: GlobalNamespace::HowToPlayViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)(System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions>)>(&GlobalNamespace::HowToPlayViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x215fd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HowToPlayViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)(System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions>)>(&GlobalNamespace::HowToPlayViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x215fdf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HowToPlayViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)(bool)>(&GlobalNamespace::HowToPlayViewController::Setup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x215fea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HowToPlayViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)(bool, bool, bool)>(&GlobalNamespace::HowToPlayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x215fed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::HowToPlayViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HowToPlayViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)()>(&GlobalNamespace::HowToPlayViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215ffd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HowToPlayViewController._DidActivate_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)()>(&GlobalNamespace::HowToPlayViewController::_DidActivate_b__7_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x215ffe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "<DidActivate>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HowToPlayViewController._DidActivate_b__7_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)()>(&GlobalNamespace::HowToPlayViewController::_DidActivate_b__7_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2160000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "<DidActivate>b__7_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HowToPlayViewController::__set__tutorialButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::HowToPlayViewController::__get__tutorialButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HowToPlayViewController::__set__creditsButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::HowToPlayViewController::__get__creditsButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HowToPlayViewController::__set_didFinishEvent(System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions>>(value));
}
constexpr System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions> GlobalNamespace::HowToPlayViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::HowToPlayViewController::add_didFinishEvent(System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::HowToPlayViewController::remove_didFinishEvent(System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__HowToPlayViewController__HowToPlayOptions>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::HowToPlayViewController::Setup(bool showTutorialButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, showTutorialButton);
}
 void GlobalNamespace::HowToPlayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
// Ctor Parameters []
 GlobalNamespace::HowToPlayViewController::HowToPlayViewController()  : HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<HowToPlayViewController>())) {}
 void GlobalNamespace::HowToPlayViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HowToPlayViewController::_DidActivate_b__7_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "<DidActivate>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HowToPlayViewController::_DidActivate_b__7_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HowToPlayViewController>::get(),
                            "<DidActivate>b__7_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
