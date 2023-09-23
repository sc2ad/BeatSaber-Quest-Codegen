#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__EnterTextViewController_def.hpp"
#include "GlobalNamespace/zzzz__VRTextEntryController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: GlobalNamespace::EnterTextViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)(System::Action_2<GlobalNamespace::EnterTextViewController,::StringW>)>(&GlobalNamespace::EnterTextViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x215a664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::EnterTextViewController,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnterTextViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)(System::Action_2<GlobalNamespace::EnterTextViewController,::StringW>)>(&GlobalNamespace::EnterTextViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x215a714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::EnterTextViewController,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnterTextViewController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)(::StringW)>(&GlobalNamespace::EnterTextViewController::Init)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215a7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnterTextViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)(bool, bool, bool)>(&GlobalNamespace::EnterTextViewController::DidActivate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x215a7e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::EnterTextViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnterTextViewController.OkButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)()>(&GlobalNamespace::EnterTextViewController::OkButtonPressed)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x215a8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            "OkButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnterTextViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)()>(&GlobalNamespace::EnterTextViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215a964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnterTextViewController::__set__textEntryController(GlobalNamespace::VRTextEntryController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::VRTextEntryController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::VRTextEntryController>(value));
}
constexpr GlobalNamespace::VRTextEntryController GlobalNamespace::EnterTextViewController::__get__textEntryController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::VRTextEntryController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnterTextViewController::__set__titleText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::EnterTextViewController::__get__titleText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnterTextViewController::__set__okButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::EnterTextViewController::__get__okButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnterTextViewController::__set_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController,::StringW> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::EnterTextViewController,::StringW>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::EnterTextViewController,::StringW>>(value));
}
constexpr System::Action_2<GlobalNamespace::EnterTextViewController,::StringW> GlobalNamespace::EnterTextViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::EnterTextViewController,::StringW>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EnterTextViewController::add_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController,::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::EnterTextViewController,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::EnterTextViewController::remove_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController,::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::EnterTextViewController,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::EnterTextViewController::Init(::StringW titleText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, titleText);
}
 void GlobalNamespace::EnterTextViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::EnterTextViewController::OkButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            "OkButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::EnterTextViewController::EnterTextViewController()  : HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<EnterTextViewController>())) {}
 void GlobalNamespace::EnterTextViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnterTextViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
