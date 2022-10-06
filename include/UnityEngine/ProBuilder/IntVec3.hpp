// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: IntVec3
  struct IntVec3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IntVec3, "UnityEngine.ProBuilder", "IntVec3");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.IntVec3
  // [TokenAttribute] Offset: FFFFFFFF
  struct IntVec3/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>*/ {
    public:
    public:
    // public UnityEngine.Vector3 value
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 value;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: IntVec3
    constexpr IntVec3(::UnityEngine::Vector3 value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>
    operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>*>(this);
    }
    // Creating interface conversion operator: i_IntVec3
    inline ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>* i_IntVec3() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Vector3
    constexpr operator ::UnityEngine::Vector3() const noexcept {
      return value;
    }
    // Get instance field reference: public UnityEngine.Vector3 value
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_value();
    // public System.Single get_x()
    // Offset: 0x2081F00
    float get_x();
    // public System.Single get_y()
    // Offset: 0x2081F08
    float get_y();
    // public System.Single get_z()
    // Offset: 0x2081F10
    float get_z();
    // public System.Void .ctor(UnityEngine.Vector3 vector)
    // Offset: 0x2081F18
    // ABORTED: conflicts with another method.  IntVec3(::UnityEngine::Vector3 vector);
    // public System.Boolean Equals(UnityEngine.ProBuilder.IntVec3 p)
    // Offset: 0x208201C
    bool Equals(::UnityEngine::ProBuilder::IntVec3 p);
    // public System.Boolean Equals(UnityEngine.Vector3 p)
    // Offset: 0x2082168
    bool Equals(::UnityEngine::Vector3 p);
    // static private System.Int32 round(System.Single v)
    // Offset: 0x20820F0
    static int round(float v);
    // public override System.String ToString()
    // Offset: 0x2081F24
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object b)
    // Offset: 0x2082200
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object b)
    bool Equals(::Il2CppObject* b);
    // public override System.Int32 GetHashCode()
    // Offset: 0x20822CC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.IntVec3
  #pragma pack(pop)
  static check_size<sizeof(IntVec3), 0 + sizeof(::UnityEngine::Vector3)> __UnityEngine_ProBuilder_IntVec3SizeCheck;
  static_assert(sizeof(IntVec3) == 0xC);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.IntVec3 a, UnityEngine.ProBuilder.IntVec3 b)
  // Offset: 0x2081FE4
  bool operator ==(const ::UnityEngine::ProBuilder::IntVec3& a, const ::UnityEngine::ProBuilder::IntVec3& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.IntVec3 a, UnityEngine.ProBuilder.IntVec3 b)
  // Offset: 0x20820B4
  bool operator !=(const ::UnityEngine::ProBuilder::IntVec3& a, const ::UnityEngine::ProBuilder::IntVec3& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::IntVec3::*)()>(&UnityEngine::ProBuilder::IntVec3::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec3), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::IntVec3::*)()>(&UnityEngine::ProBuilder::IntVec3::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec3), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::get_z
// Il2CppName: get_z
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::IntVec3::*)()>(&UnityEngine::ProBuilder::IntVec3::get_z)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec3), "get_z", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::IntVec3
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::IntVec3::*)(::UnityEngine::ProBuilder::IntVec3)>(&UnityEngine::ProBuilder::IntVec3::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "IntVec3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec3), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::IntVec3::*)(::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::IntVec3::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec3), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::round
// Il2CppName: round
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&UnityEngine::ProBuilder::IntVec3::round)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec3), "round", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::IntVec3::*)()>(&UnityEngine::ProBuilder::IntVec3::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec3), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::IntVec3::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::IntVec3::Equals)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec3), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::IntVec3::*)()>(&UnityEngine::ProBuilder::IntVec3::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec3), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec3::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
