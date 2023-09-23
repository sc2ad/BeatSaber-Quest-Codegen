#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerVerticalPlayerMovementManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerFacade_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2104528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21045e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x21046b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager.HandleStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)(GlobalNamespace::GlobalNamespace__MultiplayerController__State)>(&GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21045d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerController__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&GlobalNamespace::MultiplayerVerticalPlayerMovementManager::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2104e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__movementRange(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__movementRange() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__duelMovementRange(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__duelMovementRange() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__maxMoveSpeedMetersPerSecond(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__maxMoveSpeedMetersPerSecond() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__accelerationMetersPerSecondSquared(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__accelerationMetersPerSecondSquared() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__decelerationMetersPerSecondSquared(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__decelerationMetersPerSecondSquared() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__minScoreDifference(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__minScoreDifference() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__multiplayerPlayersManager(GlobalNamespace::MultiplayerPlayersManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerPlayersManager>(value));
}
constexpr GlobalNamespace::MultiplayerPlayersManager GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerPlayersManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerScoreProvider, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerScoreProvider>(value));
}
constexpr GlobalNamespace::MultiplayerScoreProvider GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__scoreProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerScoreProvider, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLayoutProvider, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLayoutProvider>(value));
}
constexpr GlobalNamespace::MultiplayerLayoutProvider GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__layoutProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLayoutProvider, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__multiplayerController(GlobalNamespace::MultiplayerController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerController>(value));
}
constexpr GlobalNamespace::MultiplayerController GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__reusablePlayersList(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__reusablePlayersList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__currentSpeedsDictionary(System::Collections::Generic::Dictionary_2<GlobalNamespace::MultiplayerConnectedPlayerFacade,float_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::MultiplayerConnectedPlayerFacade,float_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::MultiplayerConnectedPlayerFacade,float_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::MultiplayerConnectedPlayerFacade,float_t> GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__currentSpeedsDictionary() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::MultiplayerConnectedPlayerFacade,float_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__lastFrameBaseScore(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__lastFrameBaseScore() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerController__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerVerticalPlayerMovementManager::MultiplayerVerticalPlayerMovementManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerVerticalPlayerMovementManager>())) {}
 void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerVerticalPlayerMovementManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
