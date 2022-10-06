// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FadeInOutController
#include "GlobalNamespace/FadeInOutController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FadeInOutController::$Fade$d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeInOutController::$Fade$d__15*, "", "FadeInOutController/<Fade>d__15");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: FadeInOutController/<Fade>d__15
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FadeInOutController::$Fade$d__15 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Single startDelay
    // Size: 0x4
    // Offset: 0x20
    float startDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: startDelay and: $$4__this
    char __padding2[0x4] = {};
    // public FadeInOutController <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::FadeInOutController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FadeInOutController*) == 0x8);
    // public System.Single fromValue
    // Size: 0x4
    // Offset: 0x30
    float fromValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single toValue
    // Size: 0x4
    // Offset: 0x34
    float toValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.AnimationCurve curve
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* curve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x40
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: fadeFinishedCallback
    char __padding7[0x4] = {};
    // public System.Action fadeFinishedCallback
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* fadeFinishedCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Single <elapsedTime>5__2
    // Size: 0x4
    // Offset: 0x50
    float $elapsedTime$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppObject
    inline ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* i_Il2CppObject() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Single startDelay
    [[deprecated("Use field access instead!")]] float& dyn_startDelay();
    // Get instance field reference: public FadeInOutController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FadeInOutController*& dyn_$$4__this();
    // Get instance field reference: public System.Single fromValue
    [[deprecated("Use field access instead!")]] float& dyn_fromValue();
    // Get instance field reference: public System.Single toValue
    [[deprecated("Use field access instead!")]] float& dyn_toValue();
    // Get instance field reference: public UnityEngine.AnimationCurve curve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_curve();
    // Get instance field reference: public System.Single duration
    [[deprecated("Use field access instead!")]] float& dyn_duration();
    // Get instance field reference: public System.Action fadeFinishedCallback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_fadeFinishedCallback();
    // Get instance field reference: private System.Single <elapsedTime>5__2
    [[deprecated("Use field access instead!")]] float& dyn_$elapsedTime$5__2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x15CACAC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x15CAD14
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x15CAAB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeInOutController::$Fade$d__15* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FadeInOutController::$Fade$d__15::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeInOutController::$Fade$d__15*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x15CAB00
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x15CAB04
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x15CACB4
    void System_Collections_IEnumerator_Reset();
  }; // FadeInOutController/<Fade>d__15
  #pragma pack(pop)
  static check_size<sizeof(FadeInOutController::$Fade$d__15), 80 + sizeof(float)> __GlobalNamespace_FadeInOutController_$Fade$d__15SizeCheck;
  static_assert(sizeof(FadeInOutController::$Fade$d__15) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::$Fade$d__15::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::FadeInOutController::$Fade$d__15::*)()>(&GlobalNamespace::FadeInOutController::$Fade$d__15::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController::$Fade$d__15*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::$Fade$d__15::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::FadeInOutController::$Fade$d__15::*)()>(&GlobalNamespace::FadeInOutController::$Fade$d__15::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController::$Fade$d__15*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::$Fade$d__15::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::$Fade$d__15::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::$Fade$d__15::*)()>(&GlobalNamespace::FadeInOutController::$Fade$d__15::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController::$Fade$d__15*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::$Fade$d__15::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FadeInOutController::$Fade$d__15::*)()>(&GlobalNamespace::FadeInOutController::$Fade$d__15::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController::$Fade$d__15*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::$Fade$d__15::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::$Fade$d__15::*)()>(&GlobalNamespace::FadeInOutController::$Fade$d__15::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController::$Fade$d__15*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
