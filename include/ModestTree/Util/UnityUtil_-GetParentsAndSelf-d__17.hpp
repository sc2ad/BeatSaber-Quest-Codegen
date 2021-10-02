// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.UnityUtil/ModestTree.Util.<GetParentsAndSelf>d__17
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnityUtil::$GetParentsAndSelf$d__17 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>, public System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.Transform <>2__current
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: transform
    char __padding2[0x4] = {};
    // private UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform <>3__transform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* $$3__transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private UnityEngine.Transform <>2__current
    UnityEngine::Transform*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: private UnityEngine.Transform transform
    UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public UnityEngine.Transform <>3__transform
    UnityEngine::Transform*& dyn_$$3__transform();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> <>7__wrap1
    System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*& dyn_$$7__wrap1();
    // private UnityEngine.Transform System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
    // Offset: 0x14F27EC
    UnityEngine::Transform* System_Collections_Generic_IEnumerator$UnityEngine_Transform$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14F2854
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14F0DD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$GetParentsAndSelf$d__17* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$GetParentsAndSelf$d__17*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14F2428
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14F2504
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x14F2444
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14F27F4
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
    // Offset: 0x14F285C
    System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* System_Collections_Generic_IEnumerable$UnityEngine_Transform$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14F2908
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/ModestTree.Util.<GetParentsAndSelf>d__17
  #pragma pack(pop)
  static check_size<sizeof(UnityUtil::$GetParentsAndSelf$d__17), 56 + sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*)> __ModestTree_Util_UnityUtil_$GetParentsAndSelf$d__17SizeCheck;
  static_assert(sizeof(UnityUtil::$GetParentsAndSelf$d__17) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*, "ModestTree.Util", "UnityUtil/<GetParentsAndSelf>d__17");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_Generic_IEnumerator$UnityEngine_Transform$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::*)()>(&ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_Generic_IEnumerator$UnityEngine_Transform$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*), "System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::*)()>(&ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::*)()>(&ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::*)()>(&ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::*)()>(&ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::*)()>(&ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_Generic_IEnumerable$UnityEngine_Transform$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* (ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::*)()>(&ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_Generic_IEnumerable$UnityEngine_Transform$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*), "System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::*)()>(&ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
