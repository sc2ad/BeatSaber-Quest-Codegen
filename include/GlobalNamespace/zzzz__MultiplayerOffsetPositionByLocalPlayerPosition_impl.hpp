#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOffsetPositionByLocalPlayerPosition_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(&GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x20fb450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(&GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20fb4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.SetEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)(bool)>(&GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::SetEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20f9e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            "SetEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.UpdatePositionAndRotationIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(&GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::UpdatePositionAndRotationIfNeeded)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x20fb4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            "UpdatePositionAndRotationIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(&GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fb72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__multiplayerPlayersManager(GlobalNamespace::MultiplayerPlayersManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerPlayersManager>(value));
}
constexpr GlobalNamespace::MultiplayerPlayersManager GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__multiplayerPlayersManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__positionOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__positionOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__rotationOffset(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__rotationOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__lastParentPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__lastParentPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__set__lastParentRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__get__lastParentRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::SetEnabled(bool isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            "SetEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isEnabled);
}
 void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::UpdatePositionAndRotationIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            "UpdatePositionAndRotationIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::MultiplayerOffsetPositionByLocalPlayerPosition()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerOffsetPositionByLocalPlayerPosition>())) {}
 void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
