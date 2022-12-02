// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: EqualityAdapter
  class EqualityAdapter;
  // Forward declaring type: Tolerance
  class Tolerance;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: DirectoryInfo
  class DirectoryInfo;
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: NUnitEqualityComparer
  class NUnitEqualityComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Constraints::NUnitEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Constraints::NUnitEqualityComparer*, "NUnit.Framework.Constraints", "NUnitEqualityComparer");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.NUnitEqualityComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class NUnitEqualityComparer : public ::Il2CppObject {
    public:
    // Nested type: ::NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint
    class FailurePoint;
    public:
    // private System.Boolean caseInsensitive
    // Size: 0x1
    // Offset: 0x10
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean compareAsCollection
    // Size: 0x1
    // Offset: 0x11
    bool compareAsCollection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: compareAsCollection and: externalComparers
    char __padding1[0x6] = {};
    // private System.Collections.Generic.List`1<NUnit.Framework.Constraints.EqualityAdapter> externalComparers
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::NUnit::Framework::Constraints::EqualityAdapter*>* externalComparers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::NUnit::Framework::Constraints::EqualityAdapter*>*) == 0x8);
    // private System.Collections.Generic.List`1<NUnit.Framework.Constraints.NUnitEqualityComparer/NUnit.Framework.Constraints.FailurePoint> failurePoints
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* failurePoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x1108ABC
    // private System.Boolean <WithSameOffset>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool WithSameOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private readonly System.Int32 BUFFER_SIZE
    static int _get_BUFFER_SIZE();
    // Set static field: static private readonly System.Int32 BUFFER_SIZE
    static void _set_BUFFER_SIZE(int value);
    // Get static field: static private readonly System.Type GameObjectType
    static ::System::Type* _get_GameObjectType();
    // Set static field: static private readonly System.Type GameObjectType
    static void _set_GameObjectType(::System::Type* value);
    // Get instance field reference: private System.Boolean caseInsensitive
    [[deprecated("Use field access instead!")]] bool& dyn_caseInsensitive();
    // Get instance field reference: private System.Boolean compareAsCollection
    [[deprecated("Use field access instead!")]] bool& dyn_compareAsCollection();
    // Get instance field reference: private System.Collections.Generic.List`1<NUnit.Framework.Constraints.EqualityAdapter> externalComparers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::NUnit::Framework::Constraints::EqualityAdapter*>*& dyn_externalComparers();
    // Get instance field reference: private System.Collections.Generic.List`1<NUnit.Framework.Constraints.NUnitEqualityComparer/NUnit.Framework.Constraints.FailurePoint> failurePoints
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>*& dyn_failurePoints();
    // Get instance field reference: private System.Boolean <WithSameOffset>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$WithSameOffset$k__BackingField();
    // public System.Boolean get_IgnoreCase()
    // Offset: 0x1D4CDFC
    bool get_IgnoreCase();
    // public System.Collections.Generic.IList`1<NUnit.Framework.Constraints.NUnitEqualityComparer/NUnit.Framework.Constraints.FailurePoint> get_FailurePoints()
    // Offset: 0x1D4CE34
    ::System::Collections::Generic::IList_1<::NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* get_FailurePoints();
    // public System.Boolean get_WithSameOffset()
    // Offset: 0x1D5234C
    bool get_WithSameOffset();
    // public System.Void .ctor()
    // Offset: 0x1D4CD68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NUnitEqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Constraints::NUnitEqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NUnitEqualityComparer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D546F4
    static void _cctor();
    // public System.Boolean AreEqual(System.Object x, System.Object y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1D4B2B8
    bool AreEqual(::Il2CppObject* x, ::Il2CppObject* y, ByRef<::NUnit::Framework::Constraints::Tolerance*> tolerance);
    // static private System.Reflection.MethodInfo FirstImplementsIEquatableOfSecond(System.Type first, System.Type second)
    // Offset: 0x1D53A08
    static ::System::Reflection::MethodInfo* FirstImplementsIEquatableOfSecond(::System::Type* first, ::System::Type* second);
    // static private System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.MethodInfo>> GetEquatableGenericArguments(System.Type type)
    // Offset: 0x1D54480
    static ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Reflection::MethodInfo*>>* GetEquatableGenericArguments(::System::Type* type);
    // static private System.Boolean InvokeFirstIEquatableEqualsSecond(System.Object first, System.Object second, System.Reflection.MethodInfo equals)
    // Offset: 0x1D53CFC
    static bool InvokeFirstIEquatableEqualsSecond(::Il2CppObject* first, ::Il2CppObject* second, ::System::Reflection::MethodInfo* equals);
    // private NUnit.Framework.Constraints.EqualityAdapter GetExternalComparer(System.Object x, System.Object y)
    // Offset: 0x1D52354
    ::NUnit::Framework::Constraints::EqualityAdapter* GetExternalComparer(::Il2CppObject* x, ::Il2CppObject* y);
    // private System.Boolean ArraysEqual(System.Array x, System.Array y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1D52480
    bool ArraysEqual(::System::Array* x, ::System::Array* y, ByRef<::NUnit::Framework::Constraints::Tolerance*> tolerance);
    // private System.Boolean DictionariesEqual(System.Collections.IDictionary x, System.Collections.IDictionary y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1D52560
    bool DictionariesEqual(::System::Collections::IDictionary* x, ::System::Collections::IDictionary* y, ByRef<::NUnit::Framework::Constraints::Tolerance*> tolerance);
    // private System.Boolean DictionaryEntriesEqual(System.Collections.DictionaryEntry x, System.Collections.DictionaryEntry y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1D52B70
    bool DictionaryEntriesEqual(::System::Collections::DictionaryEntry x, ::System::Collections::DictionaryEntry y, ByRef<::NUnit::Framework::Constraints::Tolerance*> tolerance);
    // private System.Boolean StringsEqual(System.String x, System.String y)
    // Offset: 0x1D52C88
    bool StringsEqual(::StringW x, ::StringW y);
    // private System.Boolean CharsEqual(System.Char x, System.Char y)
    // Offset: 0x1D5332C
    bool CharsEqual(::Il2CppChar x, ::Il2CppChar y);
    // private System.Boolean EnumerablesEqual(System.Collections.IEnumerable x, System.Collections.IEnumerable y, ref NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1D53EA0
    bool EnumerablesEqual(::System::Collections::IEnumerable* x, ::System::Collections::IEnumerable* y, ByRef<::NUnit::Framework::Constraints::Tolerance*> tolerance);
    // static private System.Boolean DirectoriesEqual(System.IO.DirectoryInfo x, System.IO.DirectoryInfo y)
    // Offset: 0x1D533F0
    static bool DirectoriesEqual(::System::IO::DirectoryInfo* x, ::System::IO::DirectoryInfo* y);
    // private System.Boolean StreamsEqual(System.IO.Stream x, System.IO.Stream y)
    // Offset: 0x1D52D00
    bool StreamsEqual(::System::IO::Stream* x, ::System::IO::Stream* y);
    // static System.Void CheckGameObjectReference(ref T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void CheckGameObjectReference(ByRef<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Constraints::NUnitEqualityComparer::CheckGameObjectReference");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("NUnit.Framework.Constraints", "NUnitEqualityComparer", "CheckGameObjectReference", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(value));
    }
  }; // NUnit.Framework.Constraints.NUnitEqualityComparer
  #pragma pack(pop)
  static check_size<sizeof(NUnitEqualityComparer), 40 + sizeof(bool)> __NUnit_Framework_Constraints_NUnitEqualityComparerSizeCheck;
  static_assert(sizeof(NUnitEqualityComparer) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::get_IgnoreCase
// Il2CppName: get_IgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)()>(&NUnit::Framework::Constraints::NUnitEqualityComparer::get_IgnoreCase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "get_IgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::get_FailurePoints
// Il2CppName: get_FailurePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* (NUnit::Framework::Constraints::NUnitEqualityComparer::*)()>(&NUnit::Framework::Constraints::NUnitEqualityComparer::get_FailurePoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "get_FailurePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::get_WithSameOffset
// Il2CppName: get_WithSameOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)()>(&NUnit::Framework::Constraints::NUnitEqualityComparer::get_WithSameOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "get_WithSameOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Constraints::NUnitEqualityComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::Il2CppObject*, ::Il2CppObject*, ByRef<::NUnit::Framework::Constraints::Tolerance*>)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::AreEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::FirstImplementsIEquatableOfSecond
// Il2CppName: FirstImplementsIEquatableOfSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::System::Type*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::FirstImplementsIEquatableOfSecond)> {
  static const MethodInfo* get() {
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "FirstImplementsIEquatableOfSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{first, second});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::GetEquatableGenericArguments
// Il2CppName: GetEquatableGenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Reflection::MethodInfo*>>* (*)(::System::Type*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::GetEquatableGenericArguments)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "GetEquatableGenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::InvokeFirstIEquatableEqualsSecond
// Il2CppName: InvokeFirstIEquatableEqualsSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::Il2CppObject*, ::System::Reflection::MethodInfo*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::InvokeFirstIEquatableEqualsSecond)> {
  static const MethodInfo* get() {
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* equals = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "InvokeFirstIEquatableEqualsSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{first, second, equals});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::GetExternalComparer
// Il2CppName: GetExternalComparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Constraints::EqualityAdapter* (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::GetExternalComparer)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "GetExternalComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::ArraysEqual
// Il2CppName: ArraysEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::System::Array*, ::System::Array*, ByRef<::NUnit::Framework::Constraints::Tolerance*>)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::ArraysEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "ArraysEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::DictionariesEqual
// Il2CppName: DictionariesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::System::Collections::IDictionary*, ::System::Collections::IDictionary*, ByRef<::NUnit::Framework::Constraints::Tolerance*>)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::DictionariesEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "DictionariesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::DictionaryEntriesEqual
// Il2CppName: DictionaryEntriesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::System::Collections::DictionaryEntry, ::System::Collections::DictionaryEntry, ByRef<::NUnit::Framework::Constraints::Tolerance*>)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::DictionaryEntriesEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Collections", "DictionaryEntry")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Collections", "DictionaryEntry")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "DictionaryEntriesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::StringsEqual
// Il2CppName: StringsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::StringW, ::StringW)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::StringsEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "StringsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::CharsEqual
// Il2CppName: CharsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::Il2CppChar, ::Il2CppChar)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::CharsEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "CharsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::EnumerablesEqual
// Il2CppName: EnumerablesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*, ByRef<::NUnit::Framework::Constraints::Tolerance*>)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::EnumerablesEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "Tolerance")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "EnumerablesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, tolerance});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::DirectoriesEqual
// Il2CppName: DirectoriesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::DirectoryInfo*, ::System::IO::DirectoryInfo*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::DirectoriesEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.IO", "DirectoryInfo")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.IO", "DirectoryInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "DirectoriesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::StreamsEqual
// Il2CppName: StreamsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::NUnitEqualityComparer::*)(::System::IO::Stream*, ::System::IO::Stream*)>(&NUnit::Framework::Constraints::NUnitEqualityComparer::StreamsEqual)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::NUnitEqualityComparer*), "StreamsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::CheckGameObjectReference
// Il2CppName: CheckGameObjectReference
// Cannot write MetadataGetter for generic methods!
