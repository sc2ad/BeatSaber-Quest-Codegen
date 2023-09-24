#pragma once
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGeneratorAI_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorAI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::*)(GlobalNamespace::IMultiplayerSessionManager)>(&GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227ddfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGeneratorAI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorAI.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::*)()>(&GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::Init)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x227e858;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerLobbyPoseGeneratorAI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGeneratorAI>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorAI.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::*)()>(&GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::Tick)> {
  constexpr static std::size_t size = 0x9d8;
  constexpr static std::size_t addrs = 0x227eb28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MockPlayerLobbyPoseGeneratorAI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGeneratorAI>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__random(System::Random value)  {
::cordl_internals::setInstanceField<System::Random, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Random>(value));
}
constexpr System::Random GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__random() const {
return ::cordl_internals::getInstanceField<System::Random, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__headPose(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__headPose() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__leftHandPose(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__leftHandPose() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__rightHandPose(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__rightHandPose() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__lastHeadPoseTarget(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__lastHeadPoseTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__lastLeftHandPoseTarget(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__lastLeftHandPoseTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__lastRightHandPoseTarget(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__lastRightHandPoseTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__lastTargetTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__lastTargetTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__headPoseTarget(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__headPoseTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__leftHandPoseTarget(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__leftHandPoseTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__rightHandPoseTarget(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__rightHandPoseTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__set__nextTargetTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::__get__nextTargetTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MockPlayerLobbyPoseGeneratorAI GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::New_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  {
GlobalNamespace::MockPlayerLobbyPoseGeneratorAI o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MockPlayerLobbyPoseGeneratorAI>(multiplayerSessionManager))};
return o;
}
 void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGeneratorAI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplayerSessionManager);
}
 void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGeneratorAI>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerLobbyPoseGeneratorAI>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
