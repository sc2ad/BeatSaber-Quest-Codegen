// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GridView/GridViewCellsEnumerator
#include "GlobalNamespace/GridView_GridViewCellsEnumerator.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2/System.Collections.Generic.KeyCollection/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Collections.Generic.List`1/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: List`1 because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1*, "", "GridView/GridViewCellsEnumerator/<GetEnumerator>d__1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GridView/GridViewCellsEnumerator/<GetEnumerator>d__1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GridView::GridViewCellsEnumerator::$GetEnumerator$d__1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>*/ {
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
    // private UnityEngine.MonoBehaviour <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MonoBehaviour* $$2__current;
    // Field size check
    static_assert(sizeof(::UnityEngine::MonoBehaviour*) == 0x8);
    // public GridView/GridViewCellsEnumerator <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GridView::GridViewCellsEnumerator* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GridView::GridViewCellsEnumerator*) == 0x8);
    // private System.Collections.Generic.Dictionary`2/System.Collections.Generic.KeyCollection/System.Collections.Generic.Enumerator<UnityEngine.MonoBehaviour,System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    typename ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>::KeyCollection::Enumerator $$7__wrap1;
    // private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<UnityEngine.MonoBehaviour> <>7__wrap2
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    typename ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>::Enumerator $$7__wrap2;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private UnityEngine.MonoBehaviour <>2__current
    ::UnityEngine::MonoBehaviour*& dyn_$$2__current();
    // Get instance field reference: public GridView/GridViewCellsEnumerator <>4__this
    ::GlobalNamespace::GridView::GridViewCellsEnumerator*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/System.Collections.Generic.KeyCollection/System.Collections.Generic.Enumerator<UnityEngine.MonoBehaviour,System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>> <>7__wrap1
    typename ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>::KeyCollection::Enumerator& dyn_$$7__wrap1();
    // Get instance field reference: private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<UnityEngine.MonoBehaviour> <>7__wrap2
    typename ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>::Enumerator& dyn_$$7__wrap2();
    // private UnityEngine.MonoBehaviour System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current()
    // Offset: 0x13A7F6C
    ::UnityEngine::MonoBehaviour* System_Collections_Generic_IEnumerator$UnityEngine_MonoBehaviour$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x13A7FD4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x13A7BD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridView::GridViewCellsEnumerator::$GetEnumerator$d__1* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridView::GridViewCellsEnumerator::$GetEnumerator$d__1*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x13A7C00
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x13A7D40
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x13A7CE8
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x13A7C90
    void $$m__Finally2();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x13A7F74
    void System_Collections_IEnumerator_Reset();
  }; // GridView/GridViewCellsEnumerator/<GetEnumerator>d__1
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::System_Collections_Generic_IEnumerator$UnityEngine_MonoBehaviour$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MonoBehaviour* (GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::*)()>(&GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::System_Collections_Generic_IEnumerator$UnityEngine_MonoBehaviour$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1*), "System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::*)()>(&GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::*)()>(&GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::*)()>(&GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::*)()>(&GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::*)()>(&GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::*)()>(&GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView::GridViewCellsEnumerator::$GetEnumerator$d__1*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
