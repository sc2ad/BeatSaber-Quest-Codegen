// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ModestTree.TypeExtensions
#include "ModestTree/TypeExtensions.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ModestTree::TypeExtensions::$GetParentTypes$d__28);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions::$GetParentTypes$d__28*, "ModestTree", "TypeExtensions/<GetParentTypes>d__28");
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeExtensions/ModestTree.<GetParentTypes>d__28
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TypeExtensions::$GetParentTypes$d__28 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Type*>, public ::System::Collections::Generic::IEnumerator_1<::System::Type*>*/ {
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
    // private System.Type <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* $$2__current;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: type
    char __padding2[0x4] = {};
    // private System.Type type
    // Size: 0x8
    // Offset: 0x28
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Type <>3__type
    // Size: 0x8
    // Offset: 0x30
    ::System::Type* $$3__type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<System.Type> <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::IEnumerator_1<::System::Type*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::System::Type*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this);
    }
    // Creating interface conversion operator: i_Type
    inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i_Type() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Type <>2__current
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // Get instance field reference: public System.Type <>3__type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$$3__type();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<System.Type> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::System::Type*>*& dyn_$$7__wrap1();
    // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
    // Offset: 0x17AEA2C
    ::System::Type* System_Collections_Generic_IEnumerator$System_Type$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x17AEA94
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x17ADBE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeExtensions::$GetParentTypes$d__28* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::$GetParentTypes$d__28::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeExtensions::$GetParentTypes$d__28*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x17AE49C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x17AE578
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x17AE4B8
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x17AEA34
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
    // Offset: 0x17AEA9C
    ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x17AEB48
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.TypeExtensions/ModestTree.<GetParentTypes>d__28
  #pragma pack(pop)
  static check_size<sizeof(TypeExtensions::$GetParentTypes$d__28), 56 + sizeof(::System::Collections::Generic::IEnumerator_1<::System::Type*>*)> __ModestTree_TypeExtensions_$GetParentTypes$d__28SizeCheck;
  static_assert(sizeof(TypeExtensions::$GetParentTypes$d__28) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_Generic_IEnumerator$System_Type$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Type>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (ModestTree::TypeExtensions::$GetParentTypes$d__28::*)()>(&ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_Generic_IEnumerator$System_Type$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$GetParentTypes$d__28*), "System.Collections.Generic.IEnumerator<System.Type>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ModestTree::TypeExtensions::$GetParentTypes$d__28::*)()>(&ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$GetParentTypes$d__28*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$GetParentTypes$d__28::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$GetParentTypes$d__28::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::TypeExtensions::$GetParentTypes$d__28::*)()>(&ModestTree::TypeExtensions::$GetParentTypes$d__28::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$GetParentTypes$d__28*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$GetParentTypes$d__28::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::TypeExtensions::$GetParentTypes$d__28::*)()>(&ModestTree::TypeExtensions::$GetParentTypes$d__28::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$GetParentTypes$d__28*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$GetParentTypes$d__28::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::TypeExtensions::$GetParentTypes$d__28::*)()>(&ModestTree::TypeExtensions::$GetParentTypes$d__28::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$GetParentTypes$d__28*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::TypeExtensions::$GetParentTypes$d__28::*)()>(&ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$GetParentTypes$d__28*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (ModestTree::TypeExtensions::$GetParentTypes$d__28::*)()>(&ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$GetParentTypes$d__28*), "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (ModestTree::TypeExtensions::$GetParentTypes$d__28::*)()>(&ModestTree::TypeExtensions::$GetParentTypes$d__28::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$GetParentTypes$d__28*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
