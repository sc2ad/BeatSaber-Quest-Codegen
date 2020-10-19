// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AvatarPoseMirror
#include "GlobalNamespace/AvatarPoseMirror.hpp"
// Including type: AvatarPoseController
#include "GlobalNamespace/AvatarPoseController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AvatarPoseMirror.Start
void GlobalNamespace::AvatarPoseMirror::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: AvatarPoseMirror.HandleAvatarPoseControllerPositionsWillBeSet
void GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Vector3& newHeadPosition, UnityEngine::Vector3& newLeftHandPosition, UnityEngine::Vector3& newRightHandPosition) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "AvatarPoseMirror", "HandleAvatarPoseControllerPositionsWillBeSet", headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition));
}
// Autogenerated method: AvatarPoseMirror.HandleAvatarPoseControllerRotationsWillBeSet
void GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerRotationsWillBeSet(UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation, UnityEngine::Quaternion& newHeadRotation, UnityEngine::Quaternion& newLeftHandRotation, UnityEngine::Quaternion& newRightHandRotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "AvatarPoseMirror", "HandleAvatarPoseControllerRotationsWillBeSet", headRotation, leftHandRotation, rightHandRotation, newHeadRotation, newLeftHandRotation, newRightHandRotation));
}
// Autogenerated method: AvatarPoseMirror.MirrorRotation
UnityEngine::Quaternion GlobalNamespace::AvatarPoseMirror::MirrorRotation(UnityEngine::Quaternion rotation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("", "AvatarPoseMirror", "MirrorRotation", rotation));
}
// Autogenerated method: AvatarPoseMirror.MirrorPosition
UnityEngine::Vector3 GlobalNamespace::AvatarPoseMirror::MirrorPosition(UnityEngine::Vector3 position) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("", "AvatarPoseMirror", "MirrorPosition", position));
}
// Autogenerated method: AvatarPoseMirror..ctor
GlobalNamespace::AvatarPoseMirror* GlobalNamespace::AvatarPoseMirror::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AvatarPoseMirror*>());
}