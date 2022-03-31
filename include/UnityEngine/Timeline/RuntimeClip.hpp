// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.RuntimeClipBase
#include "UnityEngine/Timeline/RuntimeClipBase.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: RuntimeClip
  class RuntimeClip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::RuntimeClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::RuntimeClip*, "UnityEngine.Timeline", "RuntimeClip");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.RuntimeClip
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeClip : public ::UnityEngine::Timeline::RuntimeClipBase {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Timeline.TimelineClip m_Clip
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Timeline::TimelineClip* m_Clip;
    // Field size check
    static_assert(sizeof(::UnityEngine::Timeline::TimelineClip*) == 0x8);
    // private UnityEngine.Playables.Playable m_Playable
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Playables::Playable m_Playable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::Playable) == 0xC);
    // Padding between fields: m_Playable and: m_ParentMixer
    char __padding1[0x4] = {};
    // private UnityEngine.Playables.Playable m_ParentMixer
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Playables::Playable m_ParentMixer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::Playable) == 0xC);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Timeline.TimelineClip m_Clip
    ::UnityEngine::Timeline::TimelineClip*& dyn_m_Clip();
    // Get instance field reference: private UnityEngine.Playables.Playable m_Playable
    ::UnityEngine::Playables::Playable& dyn_m_Playable();
    // Get instance field reference: private UnityEngine.Playables.Playable m_ParentMixer
    ::UnityEngine::Playables::Playable& dyn_m_ParentMixer();
    // public UnityEngine.Timeline.TimelineClip get_clip()
    // Offset: 0x1D80D74
    ::UnityEngine::Timeline::TimelineClip* get_clip();
    // public UnityEngine.Playables.Playable get_mixer()
    // Offset: 0x1D80D7C
    ::UnityEngine::Playables::Playable get_mixer();
    // public UnityEngine.Playables.Playable get_playable()
    // Offset: 0x1D80D88
    ::UnityEngine::Playables::Playable get_playable();
    // public System.Void .ctor(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer)
    // Offset: 0x1D743B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeClip* New_ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::RuntimeClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeClip*, creationType>(clip, clipPlayable, parentMixer)));
    }
    // private System.Void Create(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer)
    // Offset: 0x1D80CE8
    void Create(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer);
    // public System.Void SetTime(System.Double time)
    // Offset: 0x1D80EA8
    void SetTime(double time);
    // public System.Void SetDuration(System.Double duration)
    // Offset: 0x1D80F08
    void SetDuration(double duration);
    // public override System.Double get_start()
    // Offset: 0x1D80CA8
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_start()
    double get_start();
    // public override System.Double get_duration()
    // Offset: 0x1D80CC4
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_duration()
    double get_duration();
    // public override System.Void set_enable(System.Boolean value)
    // Offset: 0x1D80D94
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::set_enable(System.Boolean value)
    void set_enable(bool value);
    // public override System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x1D80F68
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    void EvaluateAt(double localTime, ::UnityEngine::Playables::FrameData frameData);
    // public override System.Void DisableAt(System.Double localTime, System.Double rootDuration, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x1D81168
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::DisableAt(System.Double localTime, System.Double rootDuration, UnityEngine.Playables.FrameData frameData)
    void DisableAt(double localTime, double rootDuration, ::UnityEngine::Playables::FrameData frameData);
  }; // UnityEngine.Timeline.RuntimeClip
  #pragma pack(pop)
  static check_size<sizeof(RuntimeClip), 48 + sizeof(::UnityEngine::Playables::Playable)> __UnityEngine_Timeline_RuntimeClipSizeCheck;
  static_assert(sizeof(RuntimeClip) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::get_clip
// Il2CppName: get_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (UnityEngine::Timeline::RuntimeClip::*)()>(&UnityEngine::Timeline::RuntimeClip::get_clip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "get_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::get_mixer
// Il2CppName: get_mixer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (UnityEngine::Timeline::RuntimeClip::*)()>(&UnityEngine::Timeline::RuntimeClip::get_mixer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "get_mixer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::get_playable
// Il2CppName: get_playable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (UnityEngine::Timeline::RuntimeClip::*)()>(&UnityEngine::Timeline::RuntimeClip::get_playable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "get_playable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeClip::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::RuntimeClip::Create)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    static auto* clipPlayable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* parentMixer = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, clipPlayable, parentMixer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::SetTime
// Il2CppName: SetTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeClip::*)(double)>(&UnityEngine::Timeline::RuntimeClip::SetTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "SetTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::SetDuration
// Il2CppName: SetDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeClip::*)(double)>(&UnityEngine::Timeline::RuntimeClip::SetDuration)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "SetDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::get_start
// Il2CppName: get_start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::RuntimeClip::*)()>(&UnityEngine::Timeline::RuntimeClip::get_start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "get_start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::RuntimeClip::*)()>(&UnityEngine::Timeline::RuntimeClip::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::set_enable
// Il2CppName: set_enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeClip::*)(bool)>(&UnityEngine::Timeline::RuntimeClip::set_enable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "set_enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::EvaluateAt
// Il2CppName: EvaluateAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeClip::*)(double, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::RuntimeClip::EvaluateAt)> {
  static const MethodInfo* get() {
    static auto* localTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameData = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "EvaluateAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localTime, frameData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::RuntimeClip::DisableAt
// Il2CppName: DisableAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::RuntimeClip::*)(double, double, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::RuntimeClip::DisableAt)> {
  static const MethodInfo* get() {
    static auto* localTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* rootDuration = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameData = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::RuntimeClip*), "DisableAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localTime, rootDuration, frameData});
  }
};
