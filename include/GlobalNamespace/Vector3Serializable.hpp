// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Vector3Serializable
  struct Vector3Serializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3Serializable, "", "Vector3Serializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Vector3Serializable
  // [TokenAttribute] Offset: FFFFFFFF
  struct Vector3Serializable/*, public ::System::ValueType, public ::LiteNetLib::Utils::INetSerializable, public ::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>*/ {
    public:
    public:
    // private System.Int32 _x
    // Size: 0x4
    // Offset: 0x0
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _y
    // Size: 0x4
    // Offset: 0x4
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _z
    // Size: 0x4
    // Offset: 0x8
    int z;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Vector3Serializable
    constexpr Vector3Serializable(int x_ = {}, int y_ = {}, int z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>
    operator ::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>*>(this);
    }
    // Get instance field reference: private System.Int32 _x
    int& dyn__x();
    // Get instance field reference: private System.Int32 _y
    int& dyn__y();
    // Get instance field reference: private System.Int32 _z
    int& dyn__z();
    // public System.Void .ctor(UnityEngine.Vector3 v)
    // Offset: 0x29786B8
    Vector3Serializable(::UnityEngine::Vector3 v);
    // public System.Void .ctor(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x297876C
    Vector3Serializable(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2974F50
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2974D5C
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(Vector3Serializable other)
    // Offset: 0x2976644
    bool Equals(::GlobalNamespace::Vector3Serializable other);
    // public System.Boolean Approximately(Vector3Serializable other)
    // Offset: 0x29783B8
    bool Approximately(::GlobalNamespace::Vector3Serializable other);
    // public System.Int32 GetSize()
    // Offset: 0x29768B4
    int GetSize();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2978428
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2976790
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x29784D0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Vector3Serializable
  #pragma pack(pop)
  static check_size<sizeof(Vector3Serializable), 8 + sizeof(int)> __GlobalNamespace_Vector3SerializableSizeCheck;
  static_assert(sizeof(Vector3Serializable) == 0xC);
  // static public Vector3Serializable op_Addition(Vector3Serializable a, Vector3Serializable b)
  // Offset: 0x2976B9C
  ::GlobalNamespace::Vector3Serializable operator+(const ::GlobalNamespace::Vector3Serializable& a, const ::GlobalNamespace::Vector3Serializable& b);
  // static public Vector3Serializable op_Subtraction(Vector3Serializable a, Vector3Serializable b)
  // Offset: 0x2976C38
  ::GlobalNamespace::Vector3Serializable operator-(const ::GlobalNamespace::Vector3Serializable& a, const ::GlobalNamespace::Vector3Serializable& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Vector3Serializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Vector3Serializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Vector3Serializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::Vector3Serializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Vector3Serializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::Vector3Serializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Vector3Serializable::*)(::GlobalNamespace::Vector3Serializable)>(&GlobalNamespace::Vector3Serializable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "Vector3Serializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Vector3Serializable::*)(::GlobalNamespace::Vector3Serializable)>(&GlobalNamespace::Vector3Serializable::Approximately)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "Vector3Serializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::Vector3Serializable::*)()>(&GlobalNamespace::Vector3Serializable::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Vector3Serializable::*)(::Il2CppObject*)>(&GlobalNamespace::Vector3Serializable::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::Vector3Serializable::*)()>(&GlobalNamespace::Vector3Serializable::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::Vector3Serializable::*)()>(&GlobalNamespace::Vector3Serializable::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
