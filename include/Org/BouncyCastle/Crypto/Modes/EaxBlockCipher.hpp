// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
#include "Org/BouncyCastle/Crypto/Modes/IAeadBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Forward declaring type: SicBlockCipher
  class SicBlockCipher;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IMac
  class IMac;
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Forward declaring type: EaxBlockCipher
  class EaxBlockCipher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "EaxBlockCipher");
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.EaxBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class EaxBlockCipher : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*/ {
    public:
    public:
    // private Org.BouncyCastle.Crypto.Modes.SicBlockCipher cipher
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: blockSize
    char __padding1[0x3] = {};
    // private System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x1C
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Org.BouncyCastle.Crypto.IMac mac
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Crypto::IMac* mac;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IMac*) == 0x8);
    // private System.Byte[] nonceMac
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> nonceMac;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] associatedTextMac
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> associatedTextMac;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] macBlock
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> macBlock;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 macSize
    // Size: 0x4
    // Offset: 0x40
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: macSize and: bufBlock
    char __padding7[0x4] = {};
    // private System.Byte[] bufBlock
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> bufBlock;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x50
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean cipherInitialized
    // Size: 0x1
    // Offset: 0x54
    bool cipherInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cipherInitialized and: initialAssociatedText
    char __padding10[0x3] = {};
    // private System.Byte[] initialAssociatedText
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> initialAssociatedText;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
    operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IAeadBlockCipher
    inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* i_IAeadBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this);
    }
    // Get instance field reference: private Org.BouncyCastle.Crypto.Modes.SicBlockCipher cipher
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*& dyn_cipher();
    // Get instance field reference: private System.Boolean forEncryption
    [[deprecated("Use field access instead!")]] bool& dyn_forEncryption();
    // Get instance field reference: private System.Int32 blockSize
    [[deprecated("Use field access instead!")]] int& dyn_blockSize();
    // Get instance field reference: private Org.BouncyCastle.Crypto.IMac mac
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IMac*& dyn_mac();
    // Get instance field reference: private System.Byte[] nonceMac
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_nonceMac();
    // Get instance field reference: private System.Byte[] associatedTextMac
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_associatedTextMac();
    // Get instance field reference: private System.Byte[] macBlock
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_macBlock();
    // Get instance field reference: private System.Int32 macSize
    [[deprecated("Use field access instead!")]] int& dyn_macSize();
    // Get instance field reference: private System.Byte[] bufBlock
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_bufBlock();
    // Get instance field reference: private System.Int32 bufOff
    [[deprecated("Use field access instead!")]] int& dyn_bufOff();
    // Get instance field reference: private System.Boolean cipherInitialized
    [[deprecated("Use field access instead!")]] bool& dyn_cipherInitialized();
    // Get instance field reference: private System.Byte[] initialAssociatedText
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_initialAssociatedText();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x1EA7B90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EaxBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EaxBlockCipher*, creationType>(cipher)));
    }
    // public System.Int32 GetBlockSize()
    // Offset: 0x1EA7DCC
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1EA7DF0
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // private System.Void InitCipher()
    // Offset: 0x1EA8290
    void InitCipher();
    // private System.Void CalculateMac()
    // Offset: 0x1EA843C
    void CalculateMac();
    // public System.Void Reset()
    // Offset: 0x1EA85A8
    void Reset();
    // private System.Void Reset(System.Boolean clearMac)
    // Offset: 0x1EA85B0
    void Reset(bool clearMac);
    // public System.Void ProcessAadBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1EA87C8
    void ProcessAadBytes(::ArrayW<uint8_t> inBytes, int inOff, int len);
    // public System.Int32 ProcessBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1EA88E8
    int ProcessBytes(::ArrayW<uint8_t> inBytes, int inOff, int len, ::ArrayW<uint8_t> outBytes, int outOff);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1EA8C08
    int DoFinal(::ArrayW<uint8_t> outBytes, int outOff);
    // public System.Int32 GetUpdateOutputSize(System.Int32 len)
    // Offset: 0x1EA8FEC
    int GetUpdateOutputSize(int len);
    // public System.Int32 GetOutputSize(System.Int32 len)
    // Offset: 0x1EA9020
    int GetOutputSize(int len);
    // private System.Int32 Process(System.Byte b, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1EA8990
    int Process(uint8_t b, ::ArrayW<uint8_t> outBytes, int outOff);
    // private System.Boolean VerifyMac(System.Byte[] mac, System.Int32 off)
    // Offset: 0x1EA8F4C
    bool VerifyMac(::ArrayW<uint8_t> mac, int off);
  }; // Org.BouncyCastle.Crypto.Modes.EaxBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(EaxBlockCipher), 88 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Modes_EaxBlockCipherSizeCheck;
  static_assert(sizeof(EaxBlockCipher) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::InitCipher
// Il2CppName: InitCipher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::InitCipher)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "InitCipher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::CalculateMac
// Il2CppName: CalculateMac
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::CalculateMac)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "CalculateMac", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(bool)>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset)> {
  static const MethodInfo* get() {
    static auto* clearMac = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clearMac});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadBytes
// Il2CppName: ProcessAadBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadBytes)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "ProcessAadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, len, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Process)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::VerifyMac
// Il2CppName: VerifyMac
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::VerifyMac)> {
  static const MethodInfo* get() {
    static auto* mac = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*), "VerifyMac", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mac, off});
  }
};
