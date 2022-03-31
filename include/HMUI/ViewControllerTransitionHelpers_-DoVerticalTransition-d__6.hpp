// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers
#include "HMUI/ViewControllerTransitionHelpers.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6*, "HMUI", "ViewControllerTransitionHelpers/<DoVerticalTransition>d__6");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers/HMUI.<DoVerticalTransition>d__6
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ViewControllerTransitionHelpers::$DoVerticalTransition$d__6 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public HMUI.ViewController toPresentViewController
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::ViewController* toPresentViewController;
    // Field size check
    static_assert(sizeof(::HMUI::ViewController*) == 0x8);
    // public HMUI.ViewController toDismissViewController
    // Size: 0x8
    // Offset: 0x28
    ::HMUI::ViewController* toDismissViewController;
    // Field size check
    static_assert(sizeof(::HMUI::ViewController*) == 0x8);
    // public System.Single moveOffsetMultiplier
    // Size: 0x4
    // Offset: 0x30
    float moveOffsetMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: moveOffsetMultiplier and: $$8__1
    char __padding4[0x4] = {};
    // private HMUI.ViewControllerTransitionHelpers/HMUI.<>c__DisplayClass6_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    ::HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0* $$8__1;
    // Field size check
    static_assert(sizeof(::HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public HMUI.ViewController toPresentViewController
    ::HMUI::ViewController*& dyn_toPresentViewController();
    // Get instance field reference: public HMUI.ViewController toDismissViewController
    ::HMUI::ViewController*& dyn_toDismissViewController();
    // Get instance field reference: public System.Single moveOffsetMultiplier
    float& dyn_moveOffsetMultiplier();
    // Get instance field reference: private HMUI.ViewControllerTransitionHelpers/HMUI.<>c__DisplayClass6_0 <>8__1
    ::HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0*& dyn_$$8__1();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x29E52F4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x29E535C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x29E4820
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewControllerTransitionHelpers::$DoVerticalTransition$d__6* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewControllerTransitionHelpers::$DoVerticalTransition$d__6*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x29E5180
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x29E5184
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x29E52FC
    void System_Collections_IEnumerator_Reset();
  }; // HMUI.ViewControllerTransitionHelpers/HMUI.<DoVerticalTransition>d__6
  #pragma pack(pop)
  static check_size<sizeof(ViewControllerTransitionHelpers::$DoVerticalTransition$d__6), 56 + sizeof(::HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0*)> __HMUI_ViewControllerTransitionHelpers_$DoVerticalTransition$d__6SizeCheck;
  static_assert(sizeof(ViewControllerTransitionHelpers::$DoVerticalTransition$d__6) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
