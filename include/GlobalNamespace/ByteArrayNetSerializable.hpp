// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: ByteArrayNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class ByteArrayNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Byte[] _data
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.String _name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _allowNull
    // Size: 0x1
    // Offset: 0x20
    bool allowNull;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: allowNull and: minLength
    char __padding2[0x3] = {};
    // private readonly System.Int32 _minLength
    // Size: 0x4
    // Offset: 0x24
    int minLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _maxLength
    // Size: 0x4
    // Offset: 0x28
    int maxLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field reference: private System.Byte[] _data
    ::ArrayW<uint8_t>& dyn__data();
    // Get instance field reference: private readonly System.String _name
    ::Il2CppString*& dyn__name();
    // Get instance field reference: private readonly System.Boolean _allowNull
    bool& dyn__allowNull();
    // Get instance field reference: private readonly System.Int32 _minLength
    int& dyn__minLength();
    // Get instance field reference: private readonly System.Int32 _maxLength
    int& dyn__maxLength();
    // public System.Byte[] get_data()
    // Offset: 0x144D4E4
    ::ArrayW<uint8_t> get_data();
    // public System.Void set_data(System.Byte[] value)
    // Offset: 0x144D4EC
    void set_data(::ArrayW<uint8_t> value);
    // public System.Void .ctor(System.String name, System.Int32 minLength, System.Int32 maxLength, System.Boolean allowNull)
    // Offset: 0x144D448
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteArrayNetSerializable* New_ctor(::Il2CppString* name, int minLength, int maxLength, bool allowNull) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ByteArrayNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteArrayNetSerializable*, creationType>(name, minLength, maxLength, allowNull)));
    }
    // public System.Void .ctor(System.String name, System.Int32 size, System.Boolean allowNull)
    // Offset: 0x144D49C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteArrayNetSerializable* New_ctor(::Il2CppString* name, int size, bool allowNull) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ByteArrayNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteArrayNetSerializable*, creationType>(name, size, allowNull)));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x144D6EC
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x144D7FC
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Clear()
    // Offset: 0x144DA14
    void Clear();
  }; // ByteArrayNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(ByteArrayNetSerializable), 40 + sizeof(int)> __GlobalNamespace_ByteArrayNetSerializableSizeCheck;
  static_assert(sizeof(ByteArrayNetSerializable) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ByteArrayNetSerializable*, "", "ByteArrayNetSerializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ByteArrayNetSerializable::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::ByteArrayNetSerializable::*)()>(&GlobalNamespace::ByteArrayNetSerializable::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ByteArrayNetSerializable*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ByteArrayNetSerializable::set_data
// Il2CppName: set_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ByteArrayNetSerializable::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::ByteArrayNetSerializable::set_data)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ByteArrayNetSerializable*), "set_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ByteArrayNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ByteArrayNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ByteArrayNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ByteArrayNetSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ByteArrayNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ByteArrayNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ByteArrayNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ByteArrayNetSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ByteArrayNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ByteArrayNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ByteArrayNetSerializable::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ByteArrayNetSerializable::*)()>(&GlobalNamespace::ByteArrayNetSerializable::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ByteArrayNetSerializable*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
