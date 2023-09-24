#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionViewController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton  GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton::QuickPlay{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton  GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton::CreateServer{1};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton  GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton::JoinWithCode{2};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton  GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton::GameBrowser{3};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>)>(&GlobalNamespace::MultiplayerModeSelectionViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x217842c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>)>(&GlobalNamespace::MultiplayerModeSelectionViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21784dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(bool, bool, bool)>(&GlobalNamespace::MultiplayerModeSelectionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x217858c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerModeSelectionViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(GlobalNamespace::MultiplayerStatusData)>(&GlobalNamespace::MultiplayerModeSelectionViewController::SetData)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2178868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerStatusData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController.HandleMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton)>(&GlobalNamespace::MultiplayerModeSelectionViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2178ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&GlobalNamespace::MultiplayerModeSelectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2178afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2178b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "<DidActivate>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2178b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "<DidActivate>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2178b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "<DidActivate>b__11_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2178b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "<DidActivate>b__11_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__quickPlayButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MultiplayerModeSelectionViewController::__get__quickPlayButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__gameBrowserButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MultiplayerModeSelectionViewController::__get__gameBrowserButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__joinWithCodeButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MultiplayerModeSelectionViewController::__get__joinWithCodeButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__createServerButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MultiplayerModeSelectionViewController::__get__createServerButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__maintenanceMessageText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::MultiplayerModeSelectionViewController::__get__maintenanceMessageText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__customServerEndPointText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::MultiplayerModeSelectionViewController::__get__customServerEndPointText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__networkConfig(GlobalNamespace::INetworkConfig value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkConfig, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkConfig>(value));
}
constexpr GlobalNamespace::INetworkConfig GlobalNamespace::MultiplayerModeSelectionViewController::__get__networkConfig() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkConfig, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>>(value));
}
constexpr System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton> GlobalNamespace::MultiplayerModeSelectionViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::add_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::remove_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController,GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::SetData(GlobalNamespace::MultiplayerStatusData multiplayerStatusData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerStatusData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerStatusData);
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::HandleMenuButton(GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton menuButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, menuButton);
}
 GlobalNamespace::MultiplayerModeSelectionViewController GlobalNamespace::MultiplayerModeSelectionViewController::New_ctor()  {
GlobalNamespace::MultiplayerModeSelectionViewController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerModeSelectionViewController>())};
return o;
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "<DidActivate>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "<DidActivate>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "<DidActivate>b__11_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionViewController>::get(),
                            "<DidActivate>b__11_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
