// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
#include "Org/BouncyCastle/Crypto/IAsymmetricBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Encodings
namespace Org::BouncyCastle::Crypto::Encodings {
  // Forward declaring type: OaepEncoding
  class OaepEncoding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding*, "Org.BouncyCastle.Crypto.Encodings", "OaepEncoding");
// Type namespace: Org.BouncyCastle.Crypto.Encodings
namespace Org::BouncyCastle::Crypto::Encodings {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Encodings.OaepEncoding
  // [TokenAttribute] Offset: FFFFFFFF
  class OaepEncoding : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Byte[] defHash
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> defHash;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private Org.BouncyCastle.Crypto.IDigest mgf1Hash
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Crypto::IDigest* mgf1Hash;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher engine
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x30
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
    operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this);
    }
    // Get instance field reference: private System.Byte[] defHash
    ::ArrayW<uint8_t>& dyn_defHash();
    // Get instance field reference: private Org.BouncyCastle.Crypto.IDigest mgf1Hash
    ::Org::BouncyCastle::Crypto::IDigest*& dyn_mgf1Hash();
    // Get instance field reference: private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher engine
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& dyn_engine();
    // Get instance field reference: private Org.BouncyCastle.Security.SecureRandom random
    ::Org::BouncyCastle::Security::SecureRandom*& dyn_random();
    // Get instance field reference: private System.Boolean forEncryption
    bool& dyn_forEncryption();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher)
    // Offset: 0x1E1BDB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Encodings::OaepEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OaepEncoding*, creationType>(cipher)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest hash)
    // Offset: 0x1E1BE34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Encodings::OaepEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OaepEncoding*, creationType>(cipher, hash)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest hash, System.Byte[] encodingParams)
    // Offset: 0x1E1BE28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash, ::ArrayW<uint8_t> encodingParams) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Encodings::OaepEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OaepEncoding*, creationType>(cipher, hash, encodingParams)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest hash, Org.BouncyCastle.Crypto.IDigest mgf1Hash, System.Byte[] encodingParams)
    // Offset: 0x1E1BE40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash, ::Org::BouncyCastle::Crypto::IDigest* mgf1Hash, ::ArrayW<uint8_t> encodingParams) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Encodings::OaepEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OaepEncoding*, creationType>(cipher, hash, mgf1Hash, encodingParams)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters param)
    // Offset: 0x1E1C088
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0x1E1C1C0
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0x1E1C298
    int GetOutputBlockSize();
    // public System.Byte[] ProcessBlock(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x1E1C370
    ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> inBytes, int inOff, int inLen);
    // private System.Byte[] EncodeBlock(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x1E1C380
    ::ArrayW<uint8_t> EncodeBlock(::ArrayW<uint8_t> inBytes, int inOff, int inLen);
    // private System.Byte[] DecodeBlock(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x1E1C6A0
    ::ArrayW<uint8_t> DecodeBlock(::ArrayW<uint8_t> inBytes, int inOff, int inLen);
    // private System.Void ItoOSP(System.Int32 i, System.Byte[] sp)
    // Offset: 0x1E1D014
    void ItoOSP(int i, ::ArrayW<uint8_t> sp);
    // private System.Byte[] maskGeneratorFunction1(System.Byte[] Z, System.Int32 zOff, System.Int32 zLen, System.Int32 length)
    // Offset: 0x1E1CB04
    ::ArrayW<uint8_t> maskGeneratorFunction1(::ArrayW<uint8_t> Z, int zOff, int zLen, int length);
  }; // Org.BouncyCastle.Crypto.Encodings.OaepEncoding
  #pragma pack(pop)
  static check_size<sizeof(OaepEncoding), 48 + sizeof(bool)> __Org_BouncyCastle_Crypto_Encodings_OaepEncodingSizeCheck;
  static_assert(sizeof(OaepEncoding) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Encodings::OaepEncoding::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Encodings::OaepEncoding::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* param = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::OaepEncoding*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, param});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::GetInputBlockSize
// Il2CppName: GetInputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Encodings::OaepEncoding::*)()>(&Org::BouncyCastle::Crypto::Encodings::OaepEncoding::GetInputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::OaepEncoding*), "GetInputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::GetOutputBlockSize
// Il2CppName: GetOutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Encodings::OaepEncoding::*)()>(&Org::BouncyCastle::Crypto::Encodings::OaepEncoding::GetOutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::OaepEncoding*), "GetOutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Encodings::OaepEncoding::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Encodings::OaepEncoding::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::OaepEncoding*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, inLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::EncodeBlock
// Il2CppName: EncodeBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Encodings::OaepEncoding::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Encodings::OaepEncoding::EncodeBlock)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::OaepEncoding*), "EncodeBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, inLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::DecodeBlock
// Il2CppName: DecodeBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Encodings::OaepEncoding::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Encodings::OaepEncoding::DecodeBlock)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::OaepEncoding*), "DecodeBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, inLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::ItoOSP
// Il2CppName: ItoOSP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Encodings::OaepEncoding::*)(int, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Encodings::OaepEncoding::ItoOSP)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sp = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::OaepEncoding*), "ItoOSP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, sp});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::OaepEncoding::maskGeneratorFunction1
// Il2CppName: maskGeneratorFunction1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Encodings::OaepEncoding::*)(::ArrayW<uint8_t>, int, int, int)>(&Org::BouncyCastle::Crypto::Encodings::OaepEncoding::maskGeneratorFunction1)> {
  static const MethodInfo* get() {
    static auto* Z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* zLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::OaepEncoding*), "maskGeneratorFunction1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Z, zOff, zLen, length});
  }
};
