// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Edge
  struct Edge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Edge, "UnityEngine.ProBuilder", "Edge");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.Edge
  // [TokenAttribute] Offset: FFFFFFFF
  struct Edge/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>*/ {
    public:
    public:
    // public System.Int32 a
    // Size: 0x4
    // Offset: 0x0
    int a;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 b
    // Size: 0x4
    // Offset: 0x4
    int b;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Edge
    constexpr Edge(int a_ = {}, int b_ = {}) noexcept : a{a_}, b{b_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>
    operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>*>(this);
    }
    // Creating interface conversion operator: i_Edge
    inline ::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>* i_Edge() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>*>(this);
    }
    // Get static field: static public readonly UnityEngine.ProBuilder.Edge Empty
    static ::UnityEngine::ProBuilder::Edge _get_Empty();
    // Set static field: static public readonly UnityEngine.ProBuilder.Edge Empty
    static void _set_Empty(::UnityEngine::ProBuilder::Edge value);
    // Get instance field reference: public System.Int32 a
    [[deprecated("Use field access instead!")]] int& dyn_a();
    // Get instance field reference: public System.Int32 b
    [[deprecated("Use field access instead!")]] int& dyn_b();
    // public System.Void .ctor(System.Int32 a, System.Int32 b)
    // Offset: 0x25F762C
    // ABORTED: conflicts with another method.  Edge(int a, int b);
    // static private System.Void .cctor()
    // Offset: 0x25F8020
    static void _cctor();
    // public System.Boolean IsValid()
    // Offset: 0x25F7634
    bool IsValid();
    // public System.Boolean Equals(UnityEngine.ProBuilder.Edge other)
    // Offset: 0x25F7814
    bool Equals(::UnityEngine::ProBuilder::Edge other);
    // static public UnityEngine.ProBuilder.Edge Add(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
    // Offset: 0x25F7A68
    static ::UnityEngine::ProBuilder::Edge Add(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b);
    // static public UnityEngine.ProBuilder.Edge Subtract(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
    // Offset: 0x25F7AE8
    static ::UnityEngine::ProBuilder::Edge Subtract(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b);
    // public System.Boolean Equals(UnityEngine.ProBuilder.Edge other, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x25F7B68
    bool Equals(::UnityEngine::ProBuilder::Edge other, ::System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // public System.Boolean Contains(System.Int32 index)
    // Offset: 0x25F7C84
    bool Contains(int index);
    // public System.Boolean Contains(UnityEngine.ProBuilder.Edge other)
    // Offset: 0x25F7CA8
    bool Contains(::UnityEngine::ProBuilder::Edge other);
    // System.Boolean Contains(System.Int32 index, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x25F7CD8
    bool Contains(int index, ::System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // static System.Void GetIndices(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x25F7D84
    static void GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::List_1<int>* indices);
    // public override System.String ToString()
    // Offset: 0x25F7660
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x25F785C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x25F7914
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Edge
  #pragma pack(pop)
  static check_size<sizeof(Edge), 4 + sizeof(int)> __UnityEngine_ProBuilder_EdgeSizeCheck;
  static_assert(sizeof(Edge) == 0x8);
  // static public UnityEngine.ProBuilder.Edge op_Addition(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0x25F7938
  ::UnityEngine::ProBuilder::Edge operator+(const ::UnityEngine::ProBuilder::Edge& a, const ::UnityEngine::ProBuilder::Edge& b);
  // static public UnityEngine.ProBuilder.Edge op_Subtraction(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0x25F7950
  ::UnityEngine::ProBuilder::Edge operator-(const ::UnityEngine::ProBuilder::Edge& a, const ::UnityEngine::ProBuilder::Edge& b);
  // static public UnityEngine.ProBuilder.Edge op_Addition(UnityEngine.ProBuilder.Edge a, System.Int32 b)
  // Offset: 0x25F7968
  ::UnityEngine::ProBuilder::Edge operator+(const ::UnityEngine::ProBuilder::Edge& a, const int& b);
  // static public UnityEngine.ProBuilder.Edge op_Subtraction(UnityEngine.ProBuilder.Edge a, System.Int32 b)
  // Offset: 0x25F797C
  ::UnityEngine::ProBuilder::Edge operator-(const ::UnityEngine::ProBuilder::Edge& a, const int& b);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0x25F7990
  bool operator ==(const ::UnityEngine::ProBuilder::Edge& a, const ::UnityEngine::ProBuilder::Edge& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0x25F79C8
  bool operator !=(const ::UnityEngine::ProBuilder::Edge& a, const ::UnityEngine::ProBuilder::Edge& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::Edge
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Edge::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Edge::*)()>(&UnityEngine::ProBuilder::Edge::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Edge::*)(::UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::Edge::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::Edge::Add)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::Edge::Subtract)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Edge::*)(::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::Edge::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, lookup});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Edge::*)(int)>(&UnityEngine::ProBuilder::Edge::Contains)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Edge::*)(::UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::Edge::Contains)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Edge::*)(int, ::System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::Edge::Contains)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, lookup});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::GetIndices
// Il2CppName: GetIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<int>*)>(&UnityEngine::ProBuilder::Edge::GetIndices)> {
  static const MethodInfo* get() {
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "GetIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::Edge::*)()>(&UnityEngine::ProBuilder::Edge::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Edge::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::Edge::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Edge::*)()>(&UnityEngine::ProBuilder::Edge::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Edge), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Edge::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
