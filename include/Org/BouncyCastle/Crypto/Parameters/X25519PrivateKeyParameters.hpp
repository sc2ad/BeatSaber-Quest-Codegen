// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: X25519PrivateKeyParameters
  class X25519PrivateKeyParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "X25519PrivateKeyParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.X25519PrivateKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class X25519PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    public:
    // private readonly System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get static field: static public readonly System.Int32 KeySize
    static int _get_KeySize();
    // Set static field: static public readonly System.Int32 KeySize
    static void _set_KeySize(int value);
    // Get static field: static public readonly System.Int32 SecretSize
    static int _get_SecretSize();
    // Set static field: static public readonly System.Int32 SecretSize
    static void _set_SecretSize(int value);
    // Get instance field reference: private readonly System.Byte[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_data();
    // public System.Void .ctor(System.Byte[] buf, System.Int32 off)
    // Offset: 0x1644EC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X25519PrivateKeyParameters* New_ctor(::ArrayW<uint8_t> buf, int off) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X25519PrivateKeyParameters*, creationType>(buf, off)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1644F80
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Parameters.X25519PrivateKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(X25519PrivateKeyParameters), 24 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Parameters_X25519PrivateKeyParametersSizeCheck;
  static_assert(sizeof(X25519PrivateKeyParameters) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
