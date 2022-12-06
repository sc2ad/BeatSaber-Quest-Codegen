// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerLevelFinishedController
#include "GlobalNamespace/MultiplayerLevelFinishedController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19*, "", "MultiplayerLevelFinishedController/<StartLevelFinished>d__19");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelFinishedController/<StartLevelFinished>d__19
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerLevelFinishedController::$StartLevelFinished$d__19 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MultiplayerLevelCompletionResults localPlayerResults
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLevelCompletionResults*) == 0x8);
    // public MultiplayerLevelFinishedController <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerLevelFinishedController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLevelFinishedController*) == 0x8);
    // private System.Single <waitStartTime>5__2
    // Size: 0x4
    // Offset: 0x30
    float $waitStartTime$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <isPlayingAlone>5__3
    // Size: 0x1
    // Offset: 0x34
    bool $isPlayingAlone$5__3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $isPlayingAlone$5__3 and: $resultsTimeoutLength$5__4
    char __padding5[0x3] = {};
    // private System.Single <resultsTimeoutLength>5__4
    // Size: 0x4
    // Offset: 0x38
    float $resultsTimeoutLength$5__4;
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
    // Get instance field reference: public MultiplayerLevelCompletionResults localPlayerResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLevelCompletionResults*& dyn_localPlayerResults();
    // Get instance field reference: public MultiplayerLevelFinishedController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLevelFinishedController*& dyn_$$4__this();
    // Get instance field reference: private System.Single <waitStartTime>5__2
    [[deprecated("Use field access instead!")]] float& dyn_$waitStartTime$5__2();
    // Get instance field reference: private System.Boolean <isPlayingAlone>5__3
    [[deprecated("Use field access instead!")]] bool& dyn_$isPlayingAlone$5__3();
    // Get instance field reference: private System.Single <resultsTimeoutLength>5__4
    [[deprecated("Use field access instead!")]] float& dyn_$resultsTimeoutLength$5__4();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1469C74
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1469CDC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14695FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelFinishedController::$StartLevelFinished$d__19* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelFinishedController::$StartLevelFinished$d__19*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14697C0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14697C4
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1469C7C
    void System_Collections_IEnumerator_Reset();
  }; // MultiplayerLevelFinishedController/<StartLevelFinished>d__19
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelFinishedController::$StartLevelFinished$d__19), 56 + sizeof(float)> __GlobalNamespace_MultiplayerLevelFinishedController_$StartLevelFinished$d__19SizeCheck;
  static_assert(sizeof(MultiplayerLevelFinishedController::$StartLevelFinished$d__19) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
