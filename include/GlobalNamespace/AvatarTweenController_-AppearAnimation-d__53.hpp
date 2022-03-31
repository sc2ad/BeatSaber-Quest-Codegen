// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AvatarTweenController
#include "GlobalNamespace/AvatarTweenController.hpp"
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
  // Forward declaring type: WaitForSeconds
  class WaitForSeconds;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53*, "", "AvatarTweenController/<AppearAnimation>d__53");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: AvatarTweenController/<AppearAnimation>d__53
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AvatarTweenController::$AppearAnimation$d__53 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public AvatarTweenController <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::AvatarTweenController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarTweenController*) == 0x8);
    // private UnityEngine.WaitForSeconds <waitYieldInstruction>5__2
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::WaitForSeconds* $waitYieldInstruction$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::WaitForSeconds*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public AvatarTweenController <>4__this
    ::GlobalNamespace::AvatarTweenController*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.WaitForSeconds <waitYieldInstruction>5__2
    ::UnityEngine::WaitForSeconds*& dyn_$waitYieldInstruction$5__2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14C0A74
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14C0ADC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14BF994
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarTweenController::$AppearAnimation$d__53* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarTweenController::$AppearAnimation$d__53*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14C0830
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14C0834
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14C0A7C
    void System_Collections_IEnumerator_Reset();
  }; // AvatarTweenController/<AppearAnimation>d__53
  #pragma pack(pop)
  static check_size<sizeof(AvatarTweenController::$AppearAnimation$d__53), 40 + sizeof(::UnityEngine::WaitForSeconds*)> __GlobalNamespace_AvatarTweenController_$AppearAnimation$d__53SizeCheck;
  static_assert(sizeof(AvatarTweenController::$AppearAnimation$d__53) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::*)()>(&GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::*)()>(&GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::*)()>(&GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::*)()>(&GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::*)()>(&GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarTweenController::$AppearAnimation$d__53*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
