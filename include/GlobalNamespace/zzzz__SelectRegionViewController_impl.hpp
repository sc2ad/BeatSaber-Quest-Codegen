#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region::____GlobalNamespace__SelectRegionViewController__Region(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region  ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region::None{0};
constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region  ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region::NorthAndSouthAmerica{1};
constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region  ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region::Europe{2};
constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region  ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region::SouthKorea{3};
constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region  ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region::Japan{4};
constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region  ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region::Other{5};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair::*)(::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region, ::StringW)>(&::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21816e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "region", ty: "::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region", modifiers: "", def_value: Some("{}") }, CppParam { name: "localizationKey", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair(::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region region, ::StringW localizationKey) noexcept : ::bs_hook::ValueTypeWrapper() {this->region = region;
this->localizationKey = localizationKey;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair::__set_region(::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region, 0x0>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair::__get_region() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair::__set_localizationKey(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair::__get_localizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair::_ctor(::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region region, ::StringW localizationKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, region, localizationKey);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::*)()>(&::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2181758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c._DidActivate_b__8_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::*)(::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair)>(&::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::_DidActivate_b__8_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2181760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::__set___9(::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c>(value));
}
 ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::__set___9__8_1(::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW> value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW>, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c>::get>(std::forward<::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW>>(value));
}
 ::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW> ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::__get___9__8_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW>, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::____GlobalNamespace__SelectRegionViewController____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__SelectRegionViewController____c>())) {}
 void ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c::_DidActivate_b__8_1(::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController____c>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, p);
}
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.add_didPressContinueButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>)>(&::GlobalNamespace::SelectRegionViewController::add_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21811d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "add_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.remove_didPressContinueButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>)>(&::GlobalNamespace::SelectRegionViewController::remove_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2181284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "remove_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SelectRegionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2181334;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SelectRegionViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2181564;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SelectRegionViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.HandleRegionSelectionDropdownDidSelectCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(::HMUI::DropdownWithTableView, int32_t)>(&::GlobalNamespace::SelectRegionViewController::HandleRegionSelectionDropdownDidSelectCell)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2181644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "HandleRegionSelectionDropdownDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2181688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController._DidActivate_b__8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::_DidActivate_b__8_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2181690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SelectRegionViewController::__set__continueButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::SelectRegionViewController::__get__continueButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SelectRegionViewController::__set__regionSelectionDropdown(::HMUI::SimpleTextDropdown value)  {
::cordl_internals::setInstanceField<::HMUI::SimpleTextDropdown, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::SimpleTextDropdown>(value));
}
constexpr ::HMUI::SimpleTextDropdown ::GlobalNamespace::SelectRegionViewController::__get__regionSelectionDropdown() const {
return ::cordl_internals::getInstanceField<::HMUI::SimpleTextDropdown, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SelectRegionViewController::__set__regionLocalizationKeys(::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair> ::GlobalNamespace::SelectRegionViewController::__get__regionLocalizationKeys() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SelectRegionViewController::__set_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region> ::GlobalNamespace::SelectRegionViewController::__get_didPressContinueButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SelectRegionViewController::add_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "add_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::SelectRegionViewController::remove_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "remove_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::SelectRegionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void ::GlobalNamespace::SelectRegionViewController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SelectRegionViewController::HandleRegionSelectionDropdownDidSelectCell(::HMUI::DropdownWithTableView dropdown, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "HandleRegionSelectionDropdownDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dropdown, idx);
}
// Ctor Parameters []
 ::GlobalNamespace::SelectRegionViewController::SelectRegionViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<SelectRegionViewController>())) {}
 void ::GlobalNamespace::SelectRegionViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SelectRegionViewController::_DidActivate_b__8_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
