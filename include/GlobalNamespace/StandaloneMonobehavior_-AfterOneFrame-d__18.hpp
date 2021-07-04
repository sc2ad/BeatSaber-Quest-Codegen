// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandaloneMonobehavior
#include "GlobalNamespace/StandaloneMonobehavior.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: StandaloneMonobehavior/<AfterOneFrame>d__18
  // [CompilerGeneratedAttribute] Offset: DF0640
  class StandaloneMonobehavior::$AfterOneFrame$d__18 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public StandaloneMonobehavior <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::StandaloneMonobehavior* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandaloneMonobehavior*) == 0x8);
    // public System.Action action
    // Size: 0x8
    // Offset: 0x28
    System::Action* action;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $AfterOneFrame$d__18
    $AfterOneFrame$d__18(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::StandaloneMonobehavior* $$4__this_ = {}, System::Action* action_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, action{action_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x237CA34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandaloneMonobehavior::$AfterOneFrame$d__18* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandaloneMonobehavior::$AfterOneFrame$d__18::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneMonobehavior::$AfterOneFrame$d__18*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x237CC0C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x237CC10
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x237CC74
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x237CC7C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x237CCDC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // StandaloneMonobehavior/<AfterOneFrame>d__18
  #pragma pack(pop)
  static check_size<sizeof(StandaloneMonobehavior::$AfterOneFrame$d__18), 40 + sizeof(System::Action*)> __GlobalNamespace_StandaloneMonobehavior_$AfterOneFrame$d__18SizeCheck;
  static_assert(sizeof(StandaloneMonobehavior::$AfterOneFrame$d__18) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandaloneMonobehavior::$AfterOneFrame$d__18*, "", "StandaloneMonobehavior/<AfterOneFrame>d__18");
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$AfterOneFrame$d__18::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$AfterOneFrame$d__18::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$AfterOneFrame$d__18::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$AfterOneFrame$d__18::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$AfterOneFrame$d__18::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$AfterOneFrame$d__18::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!