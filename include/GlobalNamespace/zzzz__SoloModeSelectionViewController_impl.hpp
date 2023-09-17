#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SoloModeSelectionViewController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType::____GlobalNamespace__SoloModeSelectionViewController__MenuType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType  ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType::FreePlayMode{0};
constexpr ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType  ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType::NoArrowsMode{1};
constexpr ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType  ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType::OneSaberMode{2};
constexpr ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType  ::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType::Back{3};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>)>(&::GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2181e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>)>(&::GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2181ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SoloModeSelectionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2181f74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SoloModeSelectionViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.HandleMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType)>(&::GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2182124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218214c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2182154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2182178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x218219c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "<DidActivate>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21821c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "<DidActivate>b__8_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SoloModeSelectionViewController::__set__freePlayModeButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::SoloModeSelectionViewController::__get__freePlayModeButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SoloModeSelectionViewController::__set__oneSaberModeButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::SoloModeSelectionViewController::__get__oneSaberModeButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SoloModeSelectionViewController::__set__noArrowsModeButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::SoloModeSelectionViewController::__get__noArrowsModeButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SoloModeSelectionViewController::__set__dismissButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::SoloModeSelectionViewController::__get__dismissButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SoloModeSelectionViewController::__set_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType> ::GlobalNamespace::SoloModeSelectionViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController,::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::SoloModeSelectionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void ::GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton(::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType subMenuType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__SoloModeSelectionViewController__MenuType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subMenuType);
}
// Ctor Parameters []
 ::GlobalNamespace::SoloModeSelectionViewController::SoloModeSelectionViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<SoloModeSelectionViewController>())) {}
 void ::GlobalNamespace::SoloModeSelectionViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "<DidActivate>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController>::get(),
                            "<DidActivate>b__8_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
