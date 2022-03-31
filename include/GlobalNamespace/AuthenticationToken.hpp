// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Platform because it is already included!
}
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
  // Forward declaring type: AuthenticationToken
  struct AuthenticationToken;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationToken, "", "AuthenticationToken");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: AuthenticationToken
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct AuthenticationToken/*, public ::System::ValueType, public ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*/ {
    public:
    // Nested type: ::GlobalNamespace::AuthenticationToken::Platform
    struct Platform;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: AuthenticationToken/Platform
    // [TokenAttribute] Offset: FFFFFFFF
    struct Platform/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: Platform
      constexpr Platform(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public AuthenticationToken/Platform Test
      static constexpr const uint8_t Test = 0u;
      // Get static field: static public AuthenticationToken/Platform Test
      static ::GlobalNamespace::AuthenticationToken::Platform _get_Test();
      // Set static field: static public AuthenticationToken/Platform Test
      static void _set_Test(::GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform OculusRift
      static constexpr const uint8_t OculusRift = 1u;
      // Get static field: static public AuthenticationToken/Platform OculusRift
      static ::GlobalNamespace::AuthenticationToken::Platform _get_OculusRift();
      // Set static field: static public AuthenticationToken/Platform OculusRift
      static void _set_OculusRift(::GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform OculusQuest
      static constexpr const uint8_t OculusQuest = 2u;
      // Get static field: static public AuthenticationToken/Platform OculusQuest
      static ::GlobalNamespace::AuthenticationToken::Platform _get_OculusQuest();
      // Set static field: static public AuthenticationToken/Platform OculusQuest
      static void _set_OculusQuest(::GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform Steam
      static constexpr const uint8_t Steam = 3u;
      // Get static field: static public AuthenticationToken/Platform Steam
      static ::GlobalNamespace::AuthenticationToken::Platform _get_Steam();
      // Set static field: static public AuthenticationToken/Platform Steam
      static void _set_Steam(::GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform PS4
      static constexpr const uint8_t PS4 = 4u;
      // Get static field: static public AuthenticationToken/Platform PS4
      static ::GlobalNamespace::AuthenticationToken::Platform _get_PS4();
      // Set static field: static public AuthenticationToken/Platform PS4
      static void _set_PS4(::GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform PS4Dev
      static constexpr const uint8_t PS4Dev = 5u;
      // Get static field: static public AuthenticationToken/Platform PS4Dev
      static ::GlobalNamespace::AuthenticationToken::Platform _get_PS4Dev();
      // Set static field: static public AuthenticationToken/Platform PS4Dev
      static void _set_PS4Dev(::GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform PS4Cert
      static constexpr const uint8_t PS4Cert = 6u;
      // Get static field: static public AuthenticationToken/Platform PS4Cert
      static ::GlobalNamespace::AuthenticationToken::Platform _get_PS4Cert();
      // Set static field: static public AuthenticationToken/Platform PS4Cert
      static void _set_PS4Cert(::GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform Oculus
      static constexpr const uint8_t Oculus = 2u;
      // Get static field: static public AuthenticationToken/Platform Oculus
      static ::GlobalNamespace::AuthenticationToken::Platform _get_Oculus();
      // Set static field: static public AuthenticationToken/Platform Oculus
      static void _set_Oculus(::GlobalNamespace::AuthenticationToken::Platform value);
      // Get instance field reference: public System.Byte value__
      uint8_t& dyn_value__();
    }; // AuthenticationToken/Platform
    #pragma pack(pop)
    static check_size<sizeof(AuthenticationToken::Platform), 0 + sizeof(uint8_t)> __GlobalNamespace_AuthenticationToken_PlatformSizeCheck;
    static_assert(sizeof(AuthenticationToken::Platform) == 0x1);
    public:
    // public readonly AuthenticationToken/Platform platform
    // Size: 0x1
    // Offset: 0x0
    ::GlobalNamespace::AuthenticationToken::Platform platform;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AuthenticationToken::Platform) == 0x1);
    // Padding between fields: platform and: userId
    char __padding0[0x7] = {};
    // public readonly System.String userId
    // Size: 0x8
    // Offset: 0x8
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String userName
    // Size: 0x8
    // Offset: 0x10
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String sessionToken
    // Size: 0x8
    // Offset: 0x18
    ::StringW sessionToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: AuthenticationToken
    constexpr AuthenticationToken(::GlobalNamespace::AuthenticationToken::Platform platform_ = {}, ::StringW userId_ = {}, ::StringW userName_ = {}, ::StringW sessionToken_ = {}) noexcept : platform{platform_}, userId{userId_}, userName{userName_}, sessionToken{sessionToken_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>
    operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*>(this);
    }
    // Get instance field reference: public readonly AuthenticationToken/Platform platform
    ::GlobalNamespace::AuthenticationToken::Platform& dyn_platform();
    // Get instance field reference: public readonly System.String userId
    ::StringW& dyn_userId();
    // Get instance field reference: public readonly System.String userName
    ::StringW& dyn_userName();
    // Get instance field reference: public readonly System.String sessionToken
    ::StringW& dyn_sessionToken();
    // public System.Void .ctor(AuthenticationToken/Platform platform, System.String userId, System.String userName, System.String sessionToken)
    // Offset: 0x14F2990
    // ABORTED: conflicts with another method.  AuthenticationToken(::GlobalNamespace::AuthenticationToken::Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x14F29A0
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public AuthenticationToken CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x14F2B6C
    ::GlobalNamespace::AuthenticationToken CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);
    // static public AuthenticationToken Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x14F2B74
    static ::GlobalNamespace::AuthenticationToken Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // static private System.Byte[] FromHex(System.String str)
    // Offset: 0x14F2A74
    static ::ArrayW<uint8_t> FromHex(::StringW str);
    // static private System.Byte GetHexVal(System.Char c)
    // Offset: 0x14F2D38
    static uint8_t GetHexVal(::Il2CppChar c);
    // static private System.Byte[] FromUtf8(System.String str)
    // Offset: 0x14F2A38
    static ::ArrayW<uint8_t> FromUtf8(::StringW str);
    // static private System.String ToHex(System.Byte[] bytes)
    // Offset: 0x14F2CA8
    static ::StringW ToHex(::ArrayW<uint8_t> bytes);
    // static private System.String ToUtf8(System.Byte[] bytes)
    // Offset: 0x14F2C6C
    static ::StringW ToUtf8(::ArrayW<uint8_t> bytes);
  }; // AuthenticationToken
  #pragma pack(pop)
  static check_size<sizeof(AuthenticationToken), 24 + sizeof(::StringW)> __GlobalNamespace_AuthenticationTokenSizeCheck;
  static_assert(sizeof(AuthenticationToken) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationToken::Platform, "", "AuthenticationToken/Platform");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::AuthenticationToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AuthenticationToken::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::AuthenticationToken::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AuthenticationToken (GlobalNamespace::AuthenticationToken::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::AuthenticationToken::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AuthenticationToken (*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::AuthenticationToken::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::FromHex
// Il2CppName: FromHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&GlobalNamespace::AuthenticationToken::FromHex)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "FromHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::GetHexVal
// Il2CppName: GetHexVal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::Il2CppChar)>(&GlobalNamespace::AuthenticationToken::GetHexVal)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "GetHexVal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::FromUtf8
// Il2CppName: FromUtf8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&GlobalNamespace::AuthenticationToken::FromUtf8)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "FromUtf8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::ToHex
// Il2CppName: ToHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::AuthenticationToken::ToHex)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "ToHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationToken::ToUtf8
// Il2CppName: ToUtf8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::AuthenticationToken::ToUtf8)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationToken), "ToUtf8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
