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
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorNoAlphaSerializable
  struct ColorNoAlphaSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorNoAlphaSerializable, "", "ColorNoAlphaSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ColorNoAlphaSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  struct ColorNoAlphaSerializable/*, public ::System::ValueType, public ::LiteNetLib::Utils::INetSerializable, public ::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>*/ {
    public:
    public:
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating value type constructor for type: ColorNoAlphaSerializable
    constexpr ColorNoAlphaSerializable(::UnityEngine::Color color_ = {}) noexcept : color{color_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>
    operator ::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Color
    constexpr operator ::UnityEngine::Color() const noexcept {
      return color;
    }
    // Get instance field reference: private UnityEngine.Color _color
    ::UnityEngine::Color& dyn__color();
    // public System.Void .ctor(UnityEngine.Color color)
    // Offset: 0x29BDEC8
    // ABORTED: conflicts with another method.  ColorNoAlphaSerializable(::UnityEngine::Color color);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x29BDED4
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x29BDF28
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(ColorNoAlphaSerializable other)
    // Offset: 0x29BDF90
    bool Equals(::GlobalNamespace::ColorNoAlphaSerializable other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x29BE094
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x29BE124
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x29BE12C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // ColorNoAlphaSerializable
  #pragma pack(pop)
  static check_size<sizeof(ColorNoAlphaSerializable), 0 + sizeof(::UnityEngine::Color)> __GlobalNamespace_ColorNoAlphaSerializableSizeCheck;
  static_assert(sizeof(ColorNoAlphaSerializable) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorNoAlphaSerializable::ColorNoAlphaSerializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorNoAlphaSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoAlphaSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ColorNoAlphaSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoAlphaSerializable), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoAlphaSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoAlphaSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ColorNoAlphaSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoAlphaSerializable), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoAlphaSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ColorNoAlphaSerializable::*)(::GlobalNamespace::ColorNoAlphaSerializable)>(&GlobalNamespace::ColorNoAlphaSerializable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "ColorNoAlphaSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoAlphaSerializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoAlphaSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ColorNoAlphaSerializable::*)(::Il2CppObject*)>(&GlobalNamespace::ColorNoAlphaSerializable::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoAlphaSerializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoAlphaSerializable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ColorNoAlphaSerializable::*)()>(&GlobalNamespace::ColorNoAlphaSerializable::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoAlphaSerializable), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoAlphaSerializable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::ColorNoAlphaSerializable::*)()>(&GlobalNamespace::ColorNoAlphaSerializable::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoAlphaSerializable), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
