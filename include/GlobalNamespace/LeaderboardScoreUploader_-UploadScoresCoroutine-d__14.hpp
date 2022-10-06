// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14*, "", "LeaderboardScoreUploader/<UploadScoresCoroutine>d__14");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardScoreUploader/<UploadScoresCoroutine>d__14
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LeaderboardScoreUploader::$UploadScoresCoroutine$d__14 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public LeaderboardScoreUploader <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::LeaderboardScoreUploader* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LeaderboardScoreUploader*) == 0x8);
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
    // Get instance field reference: public LeaderboardScoreUploader <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LeaderboardScoreUploader*& dyn_$$4__this();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x13B548C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x13B54F4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x13B4864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardScoreUploader::$UploadScoresCoroutine$d__14* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardScoreUploader::$UploadScoresCoroutine$d__14*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x13B4EE8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x13B4EEC
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x13B5494
    void System_Collections_IEnumerator_Reset();
  }; // LeaderboardScoreUploader/<UploadScoresCoroutine>d__14
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardScoreUploader::$UploadScoresCoroutine$d__14), 32 + sizeof(::GlobalNamespace::LeaderboardScoreUploader*)> __GlobalNamespace_LeaderboardScoreUploader_$UploadScoresCoroutine$d__14SizeCheck;
  static_assert(sizeof(LeaderboardScoreUploader::$UploadScoresCoroutine$d__14) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::*)()>(&GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::*)()>(&GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::*)()>(&GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::*)()>(&GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::*)()>(&GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
