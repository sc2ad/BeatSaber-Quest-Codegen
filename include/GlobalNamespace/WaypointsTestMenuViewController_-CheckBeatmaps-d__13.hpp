// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WaypointsTestMenuViewController
#include "GlobalNamespace/WaypointsTestMenuViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: System.Collections.Generic.List`1/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: List`1 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*, "", "WaypointsTestMenuViewController/<CheckBeatmaps>d__13");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: WaypointsTestMenuViewController/<CheckBeatmaps>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WaypointsTestMenuViewController::$CheckBeatmaps$d__13 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public WaypointsTestMenuViewController <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::WaypointsTestMenuViewController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::WaypointsTestMenuViewController*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapLevelSO> levels
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* levels;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>*) == 0x8);
    // private System.Int32 <count>5__2
    // Size: 0x4
    // Offset: 0x30
    int $count$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1<BeatmapDifficulty> <difficultiesToCheck>5__3
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* $difficultiesToCheck$5__3;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*) == 0x8);
    // private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<BeatmapLevelSO> <>7__wrap3
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    typename ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>::Enumerator $$7__wrap3;
    // private BeatmapLevelSO <level>5__5
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::BeatmapLevelSO* $level$5__5;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<BeatmapCharacteristicSO> <>7__wrap5
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    typename ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>::Enumerator $$7__wrap5;
    // private BeatmapCharacteristicSO <characteristic>5__7
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::BeatmapCharacteristicSO* $characteristic$5__7;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<BeatmapDifficulty> <>7__wrap7
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    typename ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>::Enumerator $$7__wrap7;
    // private BeatmapDifficulty <difficulty>5__9
    // Size: 0x4
    // Offset: 0x98
    ::GlobalNamespace::BeatmapDifficulty $difficulty$5__9;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
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
    // Get instance field reference: public WaypointsTestMenuViewController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::WaypointsTestMenuViewController*& dyn_$$4__this();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapLevelSO> levels
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>*& dyn_levels();
    // Get instance field reference: private System.Int32 <count>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$count$5__2();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapDifficulty> <difficultiesToCheck>5__3
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*& dyn_$difficultiesToCheck$5__3();
    // Get instance field reference: private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<BeatmapLevelSO> <>7__wrap3
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>::Enumerator& dyn_$$7__wrap3();
    // Get instance field reference: private BeatmapLevelSO <level>5__5
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSO*& dyn_$level$5__5();
    // Get instance field reference: private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<BeatmapCharacteristicSO> <>7__wrap5
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>::Enumerator& dyn_$$7__wrap5();
    // Get instance field reference: private BeatmapCharacteristicSO <characteristic>5__7
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicSO*& dyn_$characteristic$5__7();
    // Get instance field reference: private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<BeatmapDifficulty> <>7__wrap7
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>::Enumerator& dyn_$$7__wrap7();
    // Get instance field reference: private BeatmapDifficulty <difficulty>5__9
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_$difficulty$5__9();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x166F89C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x166F904
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x166EDD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaypointsTestMenuViewController::$CheckBeatmaps$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaypointsTestMenuViewController::$CheckBeatmaps$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x166EF90
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x166F18C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x166F134
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x166F0DC
    void $$m__Finally2();
    // private System.Void <>m__Finally3()
    // Offset: 0x166F084
    void $$m__Finally3();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x166F8A4
    void System_Collections_IEnumerator_Reset();
  }; // WaypointsTestMenuViewController/<CheckBeatmaps>d__13
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::$$m__Finally3
// Il2CppName: <>m__Finally3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::$$m__Finally3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*), "<>m__Finally3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
