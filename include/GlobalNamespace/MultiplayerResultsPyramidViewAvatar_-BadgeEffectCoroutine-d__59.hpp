// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerResultsPyramidViewAvatar
#include "GlobalNamespace/MultiplayerResultsPyramidViewAvatar.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsPyramidViewAvatar/<BadgeEffectCoroutine>d__59
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C514
  class MultiplayerResultsPyramidViewAvatar::$BadgeEffectCoroutine$d__59 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MultiplayerResultsPyramidViewAvatar <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerResultsPyramidViewAvatar* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*) == 0x8);
    // public System.Single delayBeforeReceiveStarts
    // Size: 0x4
    // Offset: 0x28
    float delayBeforeReceiveStarts;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single delayBeforeArrivalEffect
    // Size: 0x4
    // Offset: 0x2C
    float delayBeforeArrivalEffect;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $BadgeEffectCoroutine$d__59
    $BadgeEffectCoroutine$d__59(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::MultiplayerResultsPyramidViewAvatar* $$4__this_ = {}, float delayBeforeReceiveStarts_ = {}, float delayBeforeArrivalEffect_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, delayBeforeReceiveStarts{delayBeforeReceiveStarts_}, delayBeforeArrivalEffect{delayBeforeArrivalEffect_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xF184AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsPyramidViewAvatar::$BadgeEffectCoroutine$d__59* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsPyramidViewAvatar::$BadgeEffectCoroutine$d__59::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsPyramidViewAvatar::$BadgeEffectCoroutine$d__59*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF18F28
    void System_IDisposable_Dispose_NEW();
    // private System.Boolean MoveNext()
    // Offset: 0xF18F2C
    bool MoveNext_NEW();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xF1905C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF19064
    void System_Collections_IEnumerator_Reset_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF190C4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
  }; // MultiplayerResultsPyramidViewAvatar/<BadgeEffectCoroutine>d__59
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsPyramidViewAvatar::$BadgeEffectCoroutine$d__59), 44 + sizeof(float)> __GlobalNamespace_MultiplayerResultsPyramidViewAvatar_$BadgeEffectCoroutine$d__59SizeCheck;
  static_assert(sizeof(MultiplayerResultsPyramidViewAvatar::$BadgeEffectCoroutine$d__59) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsPyramidViewAvatar::$BadgeEffectCoroutine$d__59*, "", "MultiplayerResultsPyramidViewAvatar/<BadgeEffectCoroutine>d__59");