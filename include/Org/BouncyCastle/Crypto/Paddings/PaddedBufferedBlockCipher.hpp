// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.BufferedBlockCipher
#include "Org/BouncyCastle/Crypto/BufferedBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Forward declaring type: IBlockCipherPadding
  class IBlockCipherPadding;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Forward declaring type: PaddedBufferedBlockCipher
  class PaddedBufferedBlockCipher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*, "Org.BouncyCastle.Crypto.Paddings", "PaddedBufferedBlockCipher");
// Type namespace: Org.BouncyCastle.Crypto.Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class PaddedBufferedBlockCipher : public ::Org::BouncyCastle::Crypto::BufferedBlockCipher {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*) == 0x8);
    public:
    // Creating conversion operator: operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*
    constexpr operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*() const noexcept {
      return padding;
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& dyn_padding();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding)
    // Offset: 0x1645D40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PaddedBufferedBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PaddedBufferedBlockCipher*, creationType>(cipher, padding)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x1645E34
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Void BufferedBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PaddedBufferedBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PaddedBufferedBlockCipher*, creationType>(cipher)));
    }
    // public override System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1645EB0
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Void BufferedBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.Int32 GetOutputSize(System.Int32 length)
    // Offset: 0x1646058
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::GetOutputSize(System.Int32 length)
    int GetOutputSize(int length);
    // public override System.Int32 GetUpdateOutputSize(System.Int32 length)
    // Offset: 0x16460A4
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::GetUpdateOutputSize(System.Int32 length)
    int GetUpdateOutputSize(int length);
    // public override System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x16460DC
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    int ProcessBytes(::ArrayW<uint8_t> input, int inOff, int length, ::ArrayW<uint8_t> output, int outOff);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x164638C
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
  }; // Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(PaddedBufferedBlockCipher), 40 + sizeof(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*)> __Org_BouncyCastle_Crypto_Paddings_PaddedBufferedBlockCipherSizeCheck;
  static_assert(sizeof(PaddedBufferedBlockCipher) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
