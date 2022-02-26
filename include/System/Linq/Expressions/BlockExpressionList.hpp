// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Expression
  class Expression;
  // Forward declaring type: BlockExpression
  class BlockExpression;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: BlockExpressionList
  class BlockExpressionList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::BlockExpressionList);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::BlockExpressionList*, "System.Linq.Expressions", "BlockExpressionList");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.BlockExpressionList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 119D258
  class BlockExpressionList : public ::Il2CppObject/*, public ::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>*/ {
    public:
    // Nested type: ::System::Linq::Expressions::BlockExpressionList::$GetEnumerator$d__18
    class $GetEnumerator$d__18;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Linq.Expressions.BlockExpression _block
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::BlockExpression* block;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::BlockExpression*) == 0x8);
    // private readonly System.Linq.Expressions.Expression _arg0
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Expression* arg0;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>
    operator ::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>*>(this);
    }
    // Get instance field reference: private readonly System.Linq.Expressions.BlockExpression _block
    ::System::Linq::Expressions::BlockExpression*& dyn__block();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _arg0
    ::System::Linq::Expressions::Expression*& dyn__arg0();
    // public System.Linq.Expressions.Expression get_Item(System.Int32 index)
    // Offset: 0x15F9870
    ::System::Linq::Expressions::Expression* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Linq.Expressions.Expression value)
    // Offset: 0x15F989C
    void set_Item(int index, ::System::Linq::Expressions::Expression* value);
    // public System.Int32 get_Count()
    // Offset: 0x15F9B20
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x15F9B40
    bool get_IsReadOnly();
    // System.Void .ctor(System.Linq.Expressions.BlockExpression provider, System.Linq.Expressions.Expression arg0)
    // Offset: 0x15F971C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlockExpressionList* New_ctor(::System::Linq::Expressions::BlockExpression* provider, ::System::Linq::Expressions::Expression* arg0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::BlockExpressionList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlockExpressionList*, creationType>(provider, arg0)));
    }
    // public System.Int32 IndexOf(System.Linq.Expressions.Expression item)
    // Offset: 0x15F9754
    int IndexOf(::System::Linq::Expressions::Expression* item);
    // public System.Void Insert(System.Int32 index, System.Linq.Expressions.Expression item)
    // Offset: 0x15F97E8
    void Insert(int index, ::System::Linq::Expressions::Expression* item);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x15F982C
    void RemoveAt(int index);
    // public System.Void Add(System.Linq.Expressions.Expression item)
    // Offset: 0x15F98E0
    void Add(::System::Linq::Expressions::Expression* item);
    // public System.Void Clear()
    // Offset: 0x15F9924
    void Clear();
    // public System.Boolean Contains(System.Linq.Expressions.Expression item)
    // Offset: 0x15F9968
    bool Contains(::System::Linq::Expressions::Expression* item);
    // public System.Void CopyTo(System.Linq.Expressions.Expression[] array, System.Int32 index)
    // Offset: 0x15F9984
    void CopyTo(::ArrayW<::System::Linq::Expressions::Expression*> array, int index);
    // public System.Boolean Remove(System.Linq.Expressions.Expression item)
    // Offset: 0x15F9B84
    bool Remove(::System::Linq::Expressions::Expression* item);
    // public System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.Expression> GetEnumerator()
    // Offset: 0x15F9BC8
    ::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Expression*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x15F9C64
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Linq.Expressions.BlockExpressionList
  #pragma pack(pop)
  static check_size<sizeof(BlockExpressionList), 24 + sizeof(::System::Linq::Expressions::Expression*)> __System_Linq_Expressions_BlockExpressionListSizeCheck;
  static_assert(sizeof(BlockExpressionList) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::BlockExpressionList::*)(int)>(&System::Linq::Expressions::BlockExpressionList::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::BlockExpressionList::*)(int, ::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::BlockExpressionList::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::BlockExpressionList::*)()>(&System::Linq::Expressions::BlockExpressionList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::BlockExpressionList::*)()>(&System::Linq::Expressions::BlockExpressionList::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::BlockExpressionList::*)(::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::BlockExpressionList::IndexOf)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::BlockExpressionList::*)(int, ::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::BlockExpressionList::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, item});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::BlockExpressionList::*)(int)>(&System::Linq::Expressions::BlockExpressionList::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::BlockExpressionList::*)(::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::BlockExpressionList::Add)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::BlockExpressionList::*)()>(&System::Linq::Expressions::BlockExpressionList::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::BlockExpressionList::*)(::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::BlockExpressionList::Contains)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::BlockExpressionList::*)(::ArrayW<::System::Linq::Expressions::Expression*>, int)>(&System::Linq::Expressions::BlockExpressionList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::BlockExpressionList::*)(::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::BlockExpressionList::Remove)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Expression*>* (System::Linq::Expressions::BlockExpressionList::*)()>(&System::Linq::Expressions::BlockExpressionList::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BlockExpressionList::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Linq::Expressions::BlockExpressionList::*)()>(&System::Linq::Expressions::BlockExpressionList::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BlockExpressionList*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
