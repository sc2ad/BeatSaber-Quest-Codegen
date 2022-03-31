// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ZenUtilInternal
#include "Zenject/Internal/ZenUtilInternal.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*, "Zenject.Internal", "ZenUtilInternal/<GetAllSceneContexts>d__3");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ZenUtilInternal/Zenject.Internal.<GetAllSceneContexts>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ZenUtilInternal::$GetAllSceneContexts$d__3 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>, public ::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>*/ {
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
    // private Zenject.SceneContext <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::SceneContext* $$2__current;
    // Field size check
    static_assert(sizeof(::Zenject::SceneContext*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$7__wrap1
    char __padding2[0x4] = {};
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene> <>7__wrap1
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>
    operator ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>
    operator ::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private Zenject.SceneContext <>2__current
    ::Zenject::SceneContext*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene> <>7__wrap1
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*& dyn_$$7__wrap1();
    // private Zenject.SceneContext System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current()
    // Offset: 0x1BD8DF8
    ::Zenject::SceneContext* System_Collections_Generic_IEnumerator$Zenject_SceneContext$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1BD8E60
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1BD78C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenUtilInternal::$GetAllSceneContexts$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenUtilInternal::$GetAllSceneContexts$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1BD8928
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1BD8A04
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1BD8944
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1BD8E00
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<Zenject.SceneContext> System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator()
    // Offset: 0x1BD8E68
    ::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>* System_Collections_Generic_IEnumerable$Zenject_SceneContext$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1BD8F00
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.Internal.ZenUtilInternal/Zenject.Internal.<GetAllSceneContexts>d__3
  #pragma pack(pop)
  static check_size<sizeof(ZenUtilInternal::$GetAllSceneContexts$d__3), 40 + sizeof(::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*)> __Zenject_Internal_ZenUtilInternal_$GetAllSceneContexts$d__3SizeCheck;
  static_assert(sizeof(ZenUtilInternal::$GetAllSceneContexts$d__3) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_Generic_IEnumerator$Zenject_SceneContext$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SceneContext* (Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::*)()>(&Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_Generic_IEnumerator$Zenject_SceneContext$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*), "System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::*)()>(&Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::*)()>(&Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::*)()>(&Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::*)()>(&Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::*)()>(&Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_Generic_IEnumerable$Zenject_SceneContext$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>* (Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::*)()>(&Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_Generic_IEnumerable$Zenject_SceneContext$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*), "System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::*)()>(&Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
