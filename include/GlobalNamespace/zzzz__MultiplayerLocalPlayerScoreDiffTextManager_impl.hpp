#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalPlayerScoreDiffTextManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)()>(&GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20fadec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)()>(&GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x20fae9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)()>(&GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::Update)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x20faf6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager.HandleStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)(GlobalNamespace::GlobalNamespace__MultiplayerController__State)>(&GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x20fb2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerController__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::*)()>(&GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fb2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__set__scoreDiffText(GlobalNamespace::MultiplayerScoreDiffText value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerScoreDiffText, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerScoreDiffText>(value));
}
constexpr GlobalNamespace::MultiplayerScoreDiffText GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__get__scoreDiffText() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerScoreDiffText, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__set__multiplayerController(GlobalNamespace::MultiplayerController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerController>(value));
}
constexpr GlobalNamespace::MultiplayerController GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__get__multiplayerController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerScoreProvider, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerScoreProvider>(value));
}
constexpr GlobalNamespace::MultiplayerScoreProvider GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__get__scoreProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerScoreProvider, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__set__hudInitData(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__get__hudInitData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__set__timeToNextUpdate(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__get__timeToNextUpdate() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__set__wasLocalPlayerLeader(System::Nullable_1<bool> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<bool>, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Nullable_1<bool>>(value));
}
constexpr System::Nullable_1<bool> GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::__get__wasLocalPlayerLeader() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<bool>, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerController__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newState);
}
 GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::New_ctor()  {
GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>())};
return o;
}
 void GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
