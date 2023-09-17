#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MissionLevelModifiersViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0::*)()>(&::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21737c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0._RefreshContent_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0::*)(int32_t, ::GlobalNamespace::GameplayModifierInfoListItem)>(&::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0::_RefreshContent_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21737d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0>::get(),
                            "<RefreshContent>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0::__set_modifierParamsList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> ::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0::__get_modifierParamsList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0::_RefreshContent_b__0(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem gameplayModifierInfoListItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0>::get(),
                            "<RefreshContent>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx, gameplayModifierInfoListItem);
}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelModifiersViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelModifiersViewController::*)(::GlobalNamespace::GameplayModifiers)>(&::GlobalNamespace::MissionLevelModifiersViewController::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2173604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelModifiersViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelModifiersViewController::*)(bool, bool, bool)>(&::GlobalNamespace::MissionLevelModifiersViewController::DidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21737c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MissionLevelModifiersViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelModifiersViewController.RefreshContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelModifiersViewController::*)()>(&::GlobalNamespace::MissionLevelModifiersViewController::RefreshContent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2173630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelModifiersViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelModifiersViewController::*)()>(&::GlobalNamespace::MissionLevelModifiersViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21737cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MissionLevelModifiersViewController::__set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiersModelSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayModifiersModelSO>(value));
}
constexpr ::GlobalNamespace::GameplayModifiersModelSO ::GlobalNamespace::MissionLevelModifiersViewController::__get__gameplayModifiersModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelModifiersViewController::__set__gameplayModifierInfoListItemsList(::GlobalNamespace::GameplayModifierInfoListItemsList value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifierInfoListItemsList, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayModifierInfoListItemsList>(value));
}
constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList ::GlobalNamespace::MissionLevelModifiersViewController::__get__gameplayModifierInfoListItemsList() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifierInfoListItemsList, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelModifiersViewController::__set__modifiersPanel(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::MissionLevelModifiersViewController::__get__modifiersPanel() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelModifiersViewController::__set__titleText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::MissionLevelModifiersViewController::__get__titleText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelModifiersViewController::__set__gameplayModifiers(::GlobalNamespace::GameplayModifiers value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiers, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayModifiers>(value));
}
constexpr ::GlobalNamespace::GameplayModifiers ::GlobalNamespace::MissionLevelModifiersViewController::__get__gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MissionLevelModifiersViewController::Setup(::GlobalNamespace::GameplayModifiers gameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameplayModifiers);
}
 void ::GlobalNamespace::MissionLevelModifiersViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void ::GlobalNamespace::MissionLevelModifiersViewController::RefreshContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MissionLevelModifiersViewController::MissionLevelModifiersViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<MissionLevelModifiersViewController>())) {}
 void ::GlobalNamespace::MissionLevelModifiersViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
