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
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PropertyName
  struct PropertyName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PropertyName, "UnityEngine", "PropertyName");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PropertyName
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 11A591C
  struct PropertyName/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::PropertyName>*/ {
    public:
    public:
    // System.Int32 id
    // Size: 0x4
    // Offset: 0x0
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PropertyName
    constexpr PropertyName(int id_ = {}) noexcept : id{id_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::PropertyName>
    operator ::System::IEquatable_1<::UnityEngine::PropertyName>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::PropertyName>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return id;
    }
    // Get instance field reference: System.Int32 id
    int& dyn_id();
    // public System.Void .ctor(System.String name)
    // Offset: 0x20C5FF0
    PropertyName(::StringW name);
    // public System.Void .ctor(UnityEngine.PropertyName other)
    // Offset: 0x20C60A8
    // ABORTED: is copy constructor.  PropertyName(::UnityEngine::PropertyName other);
    // public System.Boolean Equals(UnityEngine.PropertyName other)
    // Offset: 0x20C614C
    bool Equals(::UnityEngine::PropertyName other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x20C60BC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x20C60C4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0x20C615C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.PropertyName
  #pragma pack(pop)
  static check_size<sizeof(PropertyName), 0 + sizeof(int)> __UnityEngine_PropertyNameSizeCheck;
  static_assert(sizeof(PropertyName) == 0x4);
  // static public System.Boolean op_Equality(UnityEngine.PropertyName lhs, UnityEngine.PropertyName rhs)
  // Offset: 0x20C60B0
  bool operator ==(const ::UnityEngine::PropertyName& lhs, const ::UnityEngine::PropertyName& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::PropertyName::PropertyName
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::PropertyName::PropertyName
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::PropertyName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PropertyName::*)(::UnityEngine::PropertyName)>(&UnityEngine::PropertyName::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "PropertyName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PropertyName), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::PropertyName::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PropertyName::*)()>(&UnityEngine::PropertyName::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PropertyName), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PropertyName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PropertyName::*)(::Il2CppObject*)>(&UnityEngine::PropertyName::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PropertyName), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::PropertyName::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::PropertyName::*)()>(&UnityEngine::PropertyName::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PropertyName), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PropertyName::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
