// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationPosePlayable
  struct AnimationPosePlayable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPosePlayable, "UnityEngine.Animations", "AnimationPosePlayable");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationPosePlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 11DA6DC
  // [NativeHeaderAttribute] Offset: 11DA6DC
  // [RequiredByNativeCodeAttribute] Offset: 11DA6DC
  // [NativeHeaderAttribute] Offset: 11DA6DC
  // [NativeHeaderAttribute] Offset: 11DA6DC
  struct AnimationPosePlayable/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>, public ::UnityEngine::Playables::IPlayable*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: AnimationPosePlayable
    constexpr AnimationPosePlayable(::UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>
    operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayable
    operator ::UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableHandle
    constexpr operator ::UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimationPosePlayable m_NullPlayable
    static ::UnityEngine::Animations::AnimationPosePlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationPosePlayable m_NullPlayable
    static void _set_m_NullPlayable(::UnityEngine::Animations::AnimationPosePlayable value);
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    ::UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x29F01D4
    // ABORTED: conflicts with another method.  AnimationPosePlayable(::UnityEngine::Playables::PlayableHandle handle);
    // static private System.Void .cctor()
    // Offset: 0x29F0358
    static void _cctor();
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x29F028C
    ::UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationPosePlayable other)
    // Offset: 0x29F0298
    bool Equals(::UnityEngine::Animations::AnimationPosePlayable other);
  }; // UnityEngine.Animations.AnimationPosePlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationPosePlayable), 0 + sizeof(::UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationPosePlayableSizeCheck;
  static_assert(sizeof(AnimationPosePlayable) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPosePlayable::AnimationPosePlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPosePlayable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::AnimationPosePlayable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPosePlayable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPosePlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimationPosePlayable::*)()>(&UnityEngine::Animations::AnimationPosePlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPosePlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPosePlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimationPosePlayable::*)(::UnityEngine::Animations::AnimationPosePlayable)>(&UnityEngine::Animations::AnimationPosePlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationPosePlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPosePlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
