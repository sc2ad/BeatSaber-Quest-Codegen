// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AnimationEventSource
#include "UnityEngine/AnimationEventSource.hpp"
// Including type: UnityEngine.AnimatorStateInfo
#include "UnityEngine/AnimatorStateInfo.hpp"
// Including type: UnityEngine.AnimatorClipInfo
#include "UnityEngine/AnimatorClipInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: AnimationState
  class AnimationState;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationEvent
  class AnimationEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AnimationEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationEvent*, "UnityEngine", "AnimationEvent");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x74
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimationEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 11BFB34
  class AnimationEvent : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.Single m_Time
    // Size: 0x4
    // Offset: 0x10
    float m_Time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Time and: m_FunctionName
    char __padding0[0x4] = {};
    // System.String m_FunctionName
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_FunctionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String m_StringParameter
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_StringParameter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // UnityEngine.Object m_ObjectReferenceParameter
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Object* m_ObjectReferenceParameter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // System.Single m_FloatParameter
    // Size: 0x4
    // Offset: 0x30
    float m_FloatParameter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 m_IntParameter
    // Size: 0x4
    // Offset: 0x34
    int m_IntParameter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_MessageOptions
    // Size: 0x4
    // Offset: 0x38
    int m_MessageOptions;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.AnimationEventSource m_Source
    // Size: 0x4
    // Offset: 0x3C
    ::UnityEngine::AnimationEventSource m_Source;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationEventSource) == 0x4);
    // UnityEngine.AnimationState m_StateSender
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationState* m_StateSender;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationState*) == 0x8);
    // UnityEngine.AnimatorStateInfo m_AnimatorStateInfo
    // Size: 0x24
    // Offset: 0x48
    ::UnityEngine::AnimatorStateInfo m_AnimatorStateInfo;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimatorStateInfo) == 0x24);
    // UnityEngine.AnimatorClipInfo m_AnimatorClipInfo
    // Size: 0x8
    // Offset: 0x6C
    ::UnityEngine::AnimatorClipInfo m_AnimatorClipInfo;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimatorClipInfo) == 0x8);
    public:
    // Get instance field reference: System.Single m_Time
    float& dyn_m_Time();
    // Get instance field reference: System.String m_FunctionName
    ::StringW& dyn_m_FunctionName();
    // Get instance field reference: System.String m_StringParameter
    ::StringW& dyn_m_StringParameter();
    // Get instance field reference: UnityEngine.Object m_ObjectReferenceParameter
    ::UnityEngine::Object*& dyn_m_ObjectReferenceParameter();
    // Get instance field reference: System.Single m_FloatParameter
    float& dyn_m_FloatParameter();
    // Get instance field reference: System.Int32 m_IntParameter
    int& dyn_m_IntParameter();
    // Get instance field reference: System.Int32 m_MessageOptions
    int& dyn_m_MessageOptions();
    // Get instance field reference: UnityEngine.AnimationEventSource m_Source
    ::UnityEngine::AnimationEventSource& dyn_m_Source();
    // Get instance field reference: UnityEngine.AnimationState m_StateSender
    ::UnityEngine::AnimationState*& dyn_m_StateSender();
    // Get instance field reference: UnityEngine.AnimatorStateInfo m_AnimatorStateInfo
    ::UnityEngine::AnimatorStateInfo& dyn_m_AnimatorStateInfo();
    // Get instance field reference: UnityEngine.AnimatorClipInfo m_AnimatorClipInfo
    ::UnityEngine::AnimatorClipInfo& dyn_m_AnimatorClipInfo();
    // public System.Void .ctor()
    // Offset: 0x29A3F24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimationEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationEvent*, creationType>()));
    }
  }; // UnityEngine.AnimationEvent
  #pragma pack(pop)
  static check_size<sizeof(AnimationEvent), 108 + sizeof(::UnityEngine::AnimatorClipInfo)> __UnityEngine_AnimationEventSizeCheck;
  static_assert(sizeof(AnimationEvent) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimationEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
