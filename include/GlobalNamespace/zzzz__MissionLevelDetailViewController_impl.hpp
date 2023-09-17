#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MissionLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItemsList_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::*)()>(&::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2173368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0._RefreshContent_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::*)(int32_t, ::GlobalNamespace::ObjectiveListItem)>(&::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::_RefreshContent_b__0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2173398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0>::get(),
                            "<RefreshContent>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectiveListItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0._RefreshContent_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::*)(int32_t, ::GlobalNamespace::GameplayModifierInfoListItem)>(&::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::_RefreshContent_b__1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2173588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0>::get(),
                            "<RefreshContent>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::__set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MissionObjective>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::MissionObjective>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective> ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::__get_missionObjectives() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionObjective>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::__set_modifierParamsList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::__get_modifierParamsList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::_RefreshContent_b__0(int32_t idx, ::GlobalNamespace::ObjectiveListItem objectiveListItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0>::get(),
                            "<RefreshContent>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectiveListItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx, objectiveListItem);
}
 void ::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0::_RefreshContent_b__1(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem gameplayModifierInfoListItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0>::get(),
                            "<RefreshContent>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx, gameplayModifierInfoListItem);
}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.add_didPressPlayButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController>)>(&::GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2172f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "add_didPressPlayButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.remove_didPressPlayButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController>)>(&::GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2172fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "remove_didPressPlayButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.get_missionNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionNode (::GlobalNamespace::MissionLevelDetailViewController::*)()>(&::GlobalNamespace::MissionLevelDetailViewController::get_missionNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217309c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "get_missionNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(::GlobalNamespace::MissionNode)>(&::GlobalNamespace::MissionLevelDetailViewController::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21730a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(bool, bool, bool)>(&::GlobalNamespace::MissionLevelDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21732bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MissionLevelDetailViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.RefreshContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(&::GlobalNamespace::MissionLevelDetailViewController::RefreshContent)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x21730d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.PlayButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(&::GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2173370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "PlayButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(&::GlobalNamespace::MissionLevelDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2173390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MissionLevelDetailViewController::__set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiersModelSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayModifiersModelSO>(value));
}
constexpr ::GlobalNamespace::GameplayModifiersModelSO ::GlobalNamespace::MissionLevelDetailViewController::__get__gameplayModifiersModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelDetailViewController::__set__playButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::MissionLevelDetailViewController::__get__playButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelDetailViewController::__set__levelBar(::GlobalNamespace::LevelBar value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelBar, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LevelBar>(value));
}
constexpr ::GlobalNamespace::LevelBar ::GlobalNamespace::MissionLevelDetailViewController::__get__levelBar() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelBar, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelDetailViewController::__set__objectiveListItems(::GlobalNamespace::ObjectiveListItemsList value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ObjectiveListItemsList, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ObjectiveListItemsList>(value));
}
constexpr ::GlobalNamespace::ObjectiveListItemsList ::GlobalNamespace::MissionLevelDetailViewController::__get__objectiveListItems() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObjectiveListItemsList, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelDetailViewController::__set__gameplayModifierInfoListItemsList(::GlobalNamespace::GameplayModifierInfoListItemsList value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifierInfoListItemsList, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayModifierInfoListItemsList>(value));
}
constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList ::GlobalNamespace::MissionLevelDetailViewController::__get__gameplayModifierInfoListItemsList() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifierInfoListItemsList, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelDetailViewController::__set__modifiersPanelGO(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::MissionLevelDetailViewController::__get__modifiersPanelGO() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelDetailViewController::__set_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController> ::GlobalNamespace::MissionLevelDetailViewController::__get_didPressPlayButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MissionLevelDetailViewController::__set__missionNode(::GlobalNamespace::MissionNode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionNode, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MissionNode>(value));
}
constexpr ::GlobalNamespace::MissionNode ::GlobalNamespace::MissionLevelDetailViewController::__get__missionNode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionNode, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "add_didPressPlayButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "remove_didPressPlayButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::MissionNode ::GlobalNamespace::MissionLevelDetailViewController::get_missionNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "get_missionNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionNode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionLevelDetailViewController::Setup(::GlobalNamespace::MissionNode missionNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionNode);
}
 void ::GlobalNamespace::MissionLevelDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void ::GlobalNamespace::MissionLevelDetailViewController::RefreshContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            "PlayButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MissionLevelDetailViewController::MissionLevelDetailViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<MissionLevelDetailViewController>())) {}
 void ::GlobalNamespace::MissionLevelDetailViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
