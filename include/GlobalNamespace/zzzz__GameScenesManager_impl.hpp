#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__ZenjectSceneLoader_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData.get_sceneNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::StringW> (GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::get_sceneNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f80f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "get_sceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData.set_sceneNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::*)(System::Collections::Generic::List_1<::StringW>)>(&GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::set_sceneNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f80f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "set_sceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData.get_container
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::get_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f80f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "get_container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData.set_container
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::set_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f80fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "set_container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::*)(System::Collections::Generic::List_1<::StringW>)>(&GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f7ebb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData.SetDiContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::SetDiContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f80fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "SetDiContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::__set__sceneNames_k__BackingField(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::__get__sceneNames_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::__set__container_k__BackingField(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::__get__container_k__BackingField() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::get_sceneNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "get_sceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::set_sceneNames(System::Collections::Generic::List_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "set_sceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Zenject::DiContainer GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::get_container()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "get_container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::set_container(Zenject::DiContainer value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "set_container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "sceneNames", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::GlobalNamespace__GameScenesManager__ScenesStackData(System::Collections::Generic::List_1<::StringW> sceneNames)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameScenesManager__ScenesStackData>(sceneNames))) {}
 void GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::_ctor(System::Collections::Generic::List_1<::StringW> sceneNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sceneNames);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData::SetDiContainer(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>::get(),
                            "SetDiContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType::GlobalNamespace__GameScenesManager__ScenePresentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType  GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType::DoNotLoad{0};
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType  GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType::Load{1};
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType  GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType::Activate{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType::GlobalNamespace__GameScenesManager__SceneDismissType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType  GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType::DoNotUnload{0};
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType  GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType::Unload{1};
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType  GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType::Deactivate{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7ea88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0._PushScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::_PushScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1f80fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0>::get(),
                            "<PushScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0._PushScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::_PushScenes_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1f8114c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0>::get(),
                            "<PushScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::__set_scenesStackData(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::__get_scenesStackData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::__set_scenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::__get_scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::__set___4__this(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::__set_finishCallback(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::GlobalNamespace__GameScenesManager____c__DisplayClass30_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameScenesManager____c__DisplayClass30_0>())) {}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::_PushScenes_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0>::get(),
                            "<PushScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0::_PushScenes_b__1(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0>::get(),
                            "<PushScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7ee98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0._PopScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::_PopScenes_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1f811c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0>::get(),
                            "<PopScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::__set___4__this(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::__set_finishCallback(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::GlobalNamespace__GameScenesManager____c__DisplayClass31_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameScenesManager____c__DisplayClass31_0>())) {}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0::_PopScenes_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0>::get(),
                            "<PopScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7f1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0._ReplaceScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1f8126c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0>::get(),
                            "<ReplaceScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0._ReplaceScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1f81394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0>::get(),
                            "<ReplaceScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0._ReplaceScenes_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1f81400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0>::get(),
                            "<ReplaceScenes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__set___4__this(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__set_scenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__get_scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__set_newSceneNames(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__get_newSceneNames() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__set_emptyTransitionSceneNameList(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__get_emptyTransitionSceneNameList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__set_scenesStackData(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__get_scenesStackData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__set_finishCallback(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__set___9__1(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__get___9__1() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__set___9__2(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::__get___9__2() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::GlobalNamespace__GameScenesManager____c__DisplayClass32_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameScenesManager____c__DisplayClass32_0>())) {}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__0(Zenject::DiContainer emptySceneContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0>::get(),
                            "<ReplaceScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, emptySceneContainer);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__1(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0>::get(),
                            "<ReplaceScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__2(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0>::get(),
                            "<ReplaceScenes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7f82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0._ClearAndOpenScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1f81478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0>::get(),
                            "<ClearAndOpenScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0._ClearAndOpenScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1f815a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0>::get(),
                            "<ClearAndOpenScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0._ClearAndOpenScenes_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1f8160c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0>::get(),
                            "<ClearAndOpenScenes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__set___4__this(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__set_scenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__get_scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__set_newSceneNames(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__get_newSceneNames() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__set_emptyTransitionSceneNameList(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__get_emptyTransitionSceneNameList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__set_scenesStackData(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__get_scenesStackData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__set_finishCallback(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__set___9__1(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__get___9__1() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__set___9__2(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::__get___9__2() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::GlobalNamespace__GameScenesManager____c__DisplayClass33_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameScenesManager____c__DisplayClass33_0>())) {}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__0(Zenject::DiContainer emptySceneContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0>::get(),
                            "<ClearAndOpenScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, emptySceneContainer);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__1(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0>::get(),
                            "<ClearAndOpenScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__2(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0>::get(),
                            "<ClearAndOpenScenes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7fbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0._AppendScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::_AppendScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1f81684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0>::get(),
                            "<AppendScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0._AppendScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::_AppendScenes_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1f816f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0>::get(),
                            "<AppendScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::__set_scenesStackData(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::__get_scenesStackData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::__set_scenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::__get_scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::__set___4__this(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::__set_finishCallback(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::GlobalNamespace__GameScenesManager____c__DisplayClass34_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameScenesManager____c__DisplayClass34_0>())) {}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::_AppendScenes_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0>::get(),
                            "<AppendScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0::_AppendScenes_b__1(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0>::get(),
                            "<AppendScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7ff98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0._RemoveScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::*)(Zenject::DiContainer)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::_RemoveScenes_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1f81768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0>::get(),
                            "<RemoveScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0._RemoveScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::_RemoveScenes_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1f81810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0>::get(),
                            "<RemoveScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::__set___4__this(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::__set_finishCallback(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::__set_sceneNamesToRemove(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::__get_sceneNamesToRemove() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::GlobalNamespace__GameScenesManager____c__DisplayClass35_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameScenesManager____c__DisplayClass35_0>())) {}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::_RemoveScenes_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0>::get(),
                            "<RemoveScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
 bool GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0::_RemoveScenes_b__1(::StringW scene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0>::get(),
                            "<RemoveScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, scene);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f81874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0._ScenesTransitionCoroutine_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::_ScenesTransitionCoroutine_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1f8187c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0>::get(),
                            "<ScenesTransitionCoroutine>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0._ScenesTransitionCoroutine_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::_ScenesTransitionCoroutine_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1f818a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0>::get(),
                            "<ScenesTransitionCoroutine>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::__set_newScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::__get_newScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::GlobalNamespace__GameScenesManager____c__DisplayClass38_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameScenesManager____c__DisplayClass38_0>())) {}
 void GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::_ScenesTransitionCoroutine_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0>::get(),
                            "<ScenesTransitionCoroutine>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0::_ScenesTransitionCoroutine_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0>::get(),
                            "<ScenesTransitionCoroutine>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f7ffa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1f818c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::MoveNext)> {
  constexpr static std::size_t size = 0xefc;
  constexpr static std::size_t addrs = 0x1f818fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1f82898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1f828e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f82938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1f82940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f82980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_newScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_newScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_scenesToDismiss(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_scenesToDismiss() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___4__this(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_scenesToPresent(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_scenesToPresent() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_minDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_minDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_presentType(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_presentType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_afterMinDurationCallback(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_afterMinDurationCallback() const {
return ::cordl_internals::getInstanceField<System::Action, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___8__1(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0 GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_extraBindingsCallback(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_extraBindingsCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_dismissType(GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_dismissType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_finishCallback(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set__eventSystem_5__2(UnityEngine::EventSystems::EventSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::EventSystem, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventSystems::EventSystem>(value));
}
constexpr UnityEngine::EventSystems::EventSystem GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__eventSystem_5__2() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::EventSystem, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set__sceneName_5__3(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__sceneName_5__3() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set__loadSceneOperation_5__4(UnityEngine::AsyncOperation value)  {
::cordl_internals::setInstanceField<UnityEngine::AsyncOperation, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AsyncOperation>(value));
}
constexpr UnityEngine::AsyncOperation GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__loadSceneOperation_5__4() const {
return ::cordl_internals::getInstanceField<UnityEngine::AsyncOperation, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set__sceneNum_5__5(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__sceneNum_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___7__wrap5(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<::StringW>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<::StringW> GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___7__wrap5() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GameScenesManager.add_transitionDidStartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(System::Action_1<float_t>)>(&GlobalNamespace::GameScenesManager::add_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1f7dec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "add_transitionDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.remove_transitionDidStartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(System::Action_1<float_t>)>(&GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1f7df74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "remove_transitionDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.add_beforeDismissingScenesEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(System::Action)>(&GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f7e024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "add_beforeDismissingScenesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.remove_beforeDismissingScenesEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(System::Action)>(&GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f7e0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "remove_beforeDismissingScenesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.add_transitionDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1f7e15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "add_transitionDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.remove_transitionDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1f7e20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "remove_transitionDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.add_installEarlyBindingsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1f7e2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "add_installEarlyBindingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.remove_installEarlyBindingsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::remove_installEarlyBindingsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1f7e36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "remove_installEarlyBindingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.get_currentScenesContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (GlobalNamespace::GameScenesManager::*)()>(&GlobalNamespace::GameScenesManager::get_currentScenesContainer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1f7e41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "get_currentScenesContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.get_isInTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameScenesManager::*)()>(&GlobalNamespace::GameScenesManager::get_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7e474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "get_isInTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.get_waitUntilSceneTransitionFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::WaitUntil (GlobalNamespace::GameScenesManager::*)()>(&GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1f7e47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "get_waitUntilSceneTransitionFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.MarkSceneAsPersistent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(::StringW)>(&GlobalNamespace::GameScenesManager::MarkSceneAsPersistent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1f7e528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "MarkSceneAsPersistent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.GetCurrentlyLoadedSceneNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::StringW> (GlobalNamespace::GameScenesManager::*)()>(&GlobalNamespace::GameScenesManager::GetCurrentlyLoadedSceneNames)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1f7e580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "GetCurrentlyLoadedSceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.PushScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(GlobalNamespace::ScenesTransitionSetupDataSO, float_t, System::Action, System::Action_1<Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::PushScenes)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x1f7e734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "PushScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.PopScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(float_t, System::Action, System::Action_1<Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::PopScenes)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x1f7ecb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "PopScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.ReplaceScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(GlobalNamespace::ScenesTransitionSetupDataSO, ::ArrayW<System::Collections::IEnumerator>, float_t, System::Action, System::Action_1<Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::ReplaceScenes)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x1f7eea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ReplaceScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IEnumerator>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.ClearAndOpenScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(GlobalNamespace::ScenesTransitionSetupDataSO, float_t, System::Action, System::Action_1<Zenject::DiContainer>, bool)>(&GlobalNamespace::GameScenesManager::ClearAndOpenScenes)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x1f7f200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ClearAndOpenScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.AppendScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(GlobalNamespace::ScenesTransitionSetupDataSO, float_t, System::Action, System::Action_1<Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::AppendScenes)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x1f7f834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "AppendScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.RemoveScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(GlobalNamespace::ScenesTransitionSetupDataSO, float_t, System::Action, System::Action_1<Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::RemoveScenes)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1f7fbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "RemoveScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.ScenesTransitionCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::GameScenesManager::*)(GlobalNamespace::ScenesTransitionSetupDataSO, System::Collections::Generic::List_1<::StringW>, GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType, System::Collections::Generic::List_1<::StringW>, GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType, float_t, System::Action, System::Action_1<Zenject::DiContainer>, System::Action_1<Zenject::DiContainer>)>(&GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1f7ebe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ScenesTransitionCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.ActivatePresentedSceneRootObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<::StringW>)>(&GlobalNamespace::GameScenesManager::ActivatePresentedSceneRootObjects)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1f7ffc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ActivatePresentedSceneRootObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.IsAnySceneInStack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameScenesManager::*)(System::Collections::Generic::List_1<::StringW>)>(&GlobalNamespace::GameScenesManager::IsAnySceneInStack)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1f802c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "IsAnySceneInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.AreAllScenesInStack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameScenesManager::*)(System::Collections::Generic::List_1<::StringW>)>(&GlobalNamespace::GameScenesManager::AreAllScenesInStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f806e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "AreAllScenesInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.IsSceneInStack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameScenesManager::*)(::StringW)>(&GlobalNamespace::GameScenesManager::IsSceneInStack)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x1f8042c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "IsSceneInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.SceneNamesFromSceneInfoArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::StringW> (GlobalNamespace::GameScenesManager::*)(::ArrayW<GlobalNamespace::SceneInfo>)>(&GlobalNamespace::GameScenesManager::SceneNamesFromSceneInfoArray)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1f7ea90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "SceneNamesFromSceneInfoArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::SceneInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.SetActiveRootObjectsInScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(System::Collections::Generic::List_1<::StringW>, bool)>(&GlobalNamespace::GameScenesManager::SetActiveRootObjectsInScenes)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1f806e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "SetActiveRootObjectsInScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.ReparentRootGameObjectsToDisabledGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(::StringW)>(&GlobalNamespace::GameScenesManager::ReparentRootGameObjectsToDisabledGameObject)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x1f80864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ReparentRootGameObjectsToDisabledGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.MoveGameObjectsFromContainerToSceneRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)(::StringW)>(&GlobalNamespace::GameScenesManager::MoveGameObjectsFromContainerToSceneRoot)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x1f80ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "MoveGameObjectsFromContainerToSceneRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::GameScenesManager::Log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1f80e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::*)()>(&GlobalNamespace::GameScenesManager::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1f80ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameScenesManager._get_waitUntilSceneTransitionFinish_b__22_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameScenesManager::*)()>(&GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__22_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f80f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "<get_waitUntilSceneTransitionFinish>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameScenesManager::__set__emptyTransitionSceneInfo(GlobalNamespace::SceneInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SceneInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SceneInfo>(value));
}
constexpr GlobalNamespace::SceneInfo GlobalNamespace::GameScenesManager::__get__emptyTransitionSceneInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SceneInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameScenesManager::__set__zenjectSceneLoader(Zenject::ZenjectSceneLoader value)  {
::cordl_internals::setInstanceField<Zenject::ZenjectSceneLoader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ZenjectSceneLoader>(value));
}
constexpr Zenject::ZenjectSceneLoader GlobalNamespace::GameScenesManager::__get__zenjectSceneLoader() const {
return ::cordl_internals::getInstanceField<Zenject::ZenjectSceneLoader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameScenesManager::__set_transitionDidStartEvent(System::Action_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<float_t>>(value));
}
constexpr System::Action_1<float_t> GlobalNamespace::GameScenesManager::__get_transitionDidStartEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameScenesManager::__set_beforeDismissingScenesEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GameScenesManager::__get_beforeDismissingScenesEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameScenesManager::__set_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>(value));
}
constexpr System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> GlobalNamespace::GameScenesManager::__get_transitionDidFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameScenesManager::__set_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>(value));
}
constexpr System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> GlobalNamespace::GameScenesManager::__get_installEarlyBindingsEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameScenesManager::__set__inTransition(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameScenesManager::__get__inTransition() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameScenesManager::__set__scenesStack(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData> GlobalNamespace::GameScenesManager::__get__scenesStack() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameScenesManager::__set__neverUnloadScenes(System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr System::Collections::Generic::HashSet_1<::StringW> GlobalNamespace::GameScenesManager::__get__neverUnloadScenes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GameScenesManager::add_transitionDidStartEvent(System::Action_1<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "add_transitionDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent(System::Action_1<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "remove_transitionDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "add_beforeDismissingScenesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "remove_beforeDismissingScenesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "add_transitionDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "remove_transitionDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "add_installEarlyBindingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameScenesManager::remove_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "remove_installEarlyBindingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Zenject::DiContainer GlobalNamespace::GameScenesManager::get_currentScenesContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "get_currentScenesContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameScenesManager::get_isInTransition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "get_isInTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::WaitUntil GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "get_waitUntilSceneTransitionFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::WaitUntil, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameScenesManager::MarkSceneAsPersistent(::StringW sceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "MarkSceneAsPersistent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sceneName);
}
 System::Collections::Generic::List_1<::StringW> GlobalNamespace::GameScenesManager::GetCurrentlyLoadedSceneNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "GetCurrentlyLoadedSceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param minDuration: float_t (default: 0)
/// @param afterMinDurationCallback: System::Action (default: csnull)
/// @param finishCallback: System::Action_1<Zenject::DiContainer> (default: csnull)
 void GlobalNamespace::GameScenesManager::PushScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "PushScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param minDuration: float_t (default: 0)
/// @param afterMinDurationCallback: System::Action (default: csnull)
/// @param finishCallback: System::Action_1<Zenject::DiContainer> (default: csnull)
 void GlobalNamespace::GameScenesManager::PopScenes(float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "PopScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param beforeNewScenesActivateRoutines: ::ArrayW<System::Collections::IEnumerator> (default: csnull)
/// @param minDuration: float_t (default: 0)
/// @param afterMinDurationCallback: System::Action (default: csnull)
/// @param finishCallback: System::Action_1<Zenject::DiContainer> (default: csnull)
 void GlobalNamespace::GameScenesManager::ReplaceScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, ::ArrayW<System::Collections::IEnumerator> beforeNewScenesActivateRoutines, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ReplaceScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IEnumerator>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scenesTransitionSetupData, beforeNewScenesActivateRoutines, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param minDuration: float_t (default: 0)
/// @param afterMinDurationCallback: System::Action (default: csnull)
/// @param finishCallback: System::Action_1<Zenject::DiContainer> (default: csnull)
/// @param unloadAllScenes: bool (default: true)
 void GlobalNamespace::GameScenesManager::ClearAndOpenScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback, bool unloadAllScenes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ClearAndOpenScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback, unloadAllScenes);
}
/// @param minDuration: float_t (default: 0)
/// @param afterMinDurationCallback: System::Action (default: csnull)
/// @param finishCallback: System::Action_1<Zenject::DiContainer> (default: csnull)
 void GlobalNamespace::GameScenesManager::AppendScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "AppendScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param minDuration: float_t (default: 0)
/// @param afterMinDurationCallback: System::Action (default: csnull)
/// @param finishCallback: System::Action_1<Zenject::DiContainer> (default: csnull)
 void GlobalNamespace::GameScenesManager::RemoveScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupDataSo, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "RemoveScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scenesTransitionSetupDataSo, minDuration, afterMinDurationCallback, finishCallback);
}
 System::Collections::IEnumerator GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine(GlobalNamespace::ScenesTransitionSetupDataSO newScenesTransitionSetupData, System::Collections::Generic::List_1<::StringW> scenesToPresent, GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType presentType, System::Collections::Generic::List_1<::StringW> scenesToDismiss, GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType dismissType, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> extraBindingsCallback, System::Action_1<Zenject::DiContainer> finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ScenesTransitionCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, newScenesTransitionSetupData, scenesToPresent, presentType, scenesToDismiss, dismissType, minDuration, afterMinDurationCallback, extraBindingsCallback, finishCallback);
}
 void GlobalNamespace::GameScenesManager::ActivatePresentedSceneRootObjects(System::Collections::Generic::List_1<::StringW> scenesToPresent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ActivatePresentedSceneRootObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scenesToPresent);
}
 bool GlobalNamespace::GameScenesManager::IsAnySceneInStack(System::Collections::Generic::List_1<::StringW> sceneNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "IsAnySceneInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sceneNames);
}
 bool GlobalNamespace::GameScenesManager::AreAllScenesInStack(System::Collections::Generic::List_1<::StringW> sceneNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "AreAllScenesInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sceneNames);
}
 bool GlobalNamespace::GameScenesManager::IsSceneInStack(::StringW searchSceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "IsSceneInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, searchSceneName);
}
 System::Collections::Generic::List_1<::StringW> GlobalNamespace::GameScenesManager::SceneNamesFromSceneInfoArray(::ArrayW<GlobalNamespace::SceneInfo> sceneInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "SceneNamesFromSceneInfoArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::SceneInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method, sceneInfos);
}
 void GlobalNamespace::GameScenesManager::SetActiveRootObjectsInScenes(System::Collections::Generic::List_1<::StringW> sceneNames, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "SetActiveRootObjectsInScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sceneNames, value);
}
 void GlobalNamespace::GameScenesManager::ReparentRootGameObjectsToDisabledGameObject(::StringW sceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "ReparentRootGameObjectsToDisabledGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sceneName);
}
 void GlobalNamespace::GameScenesManager::MoveGameObjectsFromContainerToSceneRoot(::StringW sceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "MoveGameObjectsFromContainerToSceneRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sceneName);
}
 void GlobalNamespace::GameScenesManager::Log(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
 GlobalNamespace::GameScenesManager::GameScenesManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<GameScenesManager>())) {}
 void GlobalNamespace::GameScenesManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameScenesManager>::get(),
                            "<get_waitUntilSceneTransitionFinish>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
