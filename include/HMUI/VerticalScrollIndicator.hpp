// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.VerticalScrollIndicator
  // [TokenAttribute] Offset: FFFFFFFF
  class VerticalScrollIndicator : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.RectTransform _handle
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* handle;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.AnimationClip _normalAnimationClip
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationClip* normalAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _disabledAnimationClip
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationClip* disabledAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private System.Single _padding
    // Size: 0x4
    // Offset: 0x30
    float padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _progress
    // Size: 0x4
    // Offset: 0x34
    float progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _normalizedPageHeight
    // Size: 0x4
    // Offset: 0x38
    float normalizedPageHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _handle
    UnityEngine::RectTransform*& dyn__handle();
    // Get instance field reference: private UnityEngine.AnimationClip _normalAnimationClip
    UnityEngine::AnimationClip*& dyn__normalAnimationClip();
    // Get instance field reference: private UnityEngine.AnimationClip _disabledAnimationClip
    UnityEngine::AnimationClip*& dyn__disabledAnimationClip();
    // Get instance field reference: private System.Single _padding
    float& dyn__padding();
    // Get instance field reference: private System.Single _progress
    float& dyn__progress();
    // Get instance field reference: private System.Single _normalizedPageHeight
    float& dyn__normalizedPageHeight();
    // public System.Single get_progress()
    // Offset: 0x1422C54
    float get_progress();
    // public System.Void set_progress(System.Single value)
    // Offset: 0x141726C
    void set_progress(float value);
    // public System.Single get_normalizedPageHeight()
    // Offset: 0x1422C5C
    float get_normalizedPageHeight();
    // public System.Void set_normalizedPageHeight(System.Single value)
    // Offset: 0x1416EB8
    void set_normalizedPageHeight(float value);
    // public System.Void set_disabled(System.Boolean value)
    // Offset: 0x1422C64
    void set_disabled(bool value);
    // protected System.Void OnEnable()
    // Offset: 0x1422CB0
    void OnEnable();
    // private System.Void RefreshHandle()
    // Offset: 0x1422B2C
    void RefreshHandle();
    // public System.Void .ctor()
    // Offset: 0x1422CB4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VerticalScrollIndicator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::VerticalScrollIndicator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VerticalScrollIndicator*, creationType>()));
    }
  }; // HMUI.VerticalScrollIndicator
  #pragma pack(pop)
  static check_size<sizeof(VerticalScrollIndicator), 56 + sizeof(float)> __HMUI_VerticalScrollIndicatorSizeCheck;
  static_assert(sizeof(VerticalScrollIndicator) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::VerticalScrollIndicator*, "HMUI", "VerticalScrollIndicator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::VerticalScrollIndicator::get_progress
// Il2CppName: get_progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::VerticalScrollIndicator::*)()>(&HMUI::VerticalScrollIndicator::get_progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::VerticalScrollIndicator*), "get_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::VerticalScrollIndicator::set_progress
// Il2CppName: set_progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::VerticalScrollIndicator::*)(float)>(&HMUI::VerticalScrollIndicator::set_progress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::VerticalScrollIndicator*), "set_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::VerticalScrollIndicator::get_normalizedPageHeight
// Il2CppName: get_normalizedPageHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::VerticalScrollIndicator::*)()>(&HMUI::VerticalScrollIndicator::get_normalizedPageHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::VerticalScrollIndicator*), "get_normalizedPageHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::VerticalScrollIndicator::set_normalizedPageHeight
// Il2CppName: set_normalizedPageHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::VerticalScrollIndicator::*)(float)>(&HMUI::VerticalScrollIndicator::set_normalizedPageHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::VerticalScrollIndicator*), "set_normalizedPageHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::VerticalScrollIndicator::set_disabled
// Il2CppName: set_disabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::VerticalScrollIndicator::*)(bool)>(&HMUI::VerticalScrollIndicator::set_disabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::VerticalScrollIndicator*), "set_disabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::VerticalScrollIndicator::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::VerticalScrollIndicator::*)()>(&HMUI::VerticalScrollIndicator::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::VerticalScrollIndicator*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::VerticalScrollIndicator::RefreshHandle
// Il2CppName: RefreshHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::VerticalScrollIndicator::*)()>(&HMUI::VerticalScrollIndicator::RefreshHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::VerticalScrollIndicator*), "RefreshHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::VerticalScrollIndicator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
