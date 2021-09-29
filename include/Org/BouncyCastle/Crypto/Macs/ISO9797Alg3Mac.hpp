// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Forward declaring type: IBlockCipherPadding
  class IBlockCipherPadding;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: KeyParameter
  class KeyParameter;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac
  // [TokenAttribute] Offset: FFFFFFFF
  class ISO9797Alg3Mac : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // private System.Byte[] mac
    // Size: 0x8
    // Offset: 0x10
    ::ArrayWrapper<uint8_t> mac;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x18
    ::ArrayWrapper<uint8_t> buf;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x20
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufOff and: cipher
    char __padding2[0x4] = {};
    // private Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*) == 0x8);
    // private System.Int32 macSize
    // Size: 0x4
    // Offset: 0x38
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: macSize and: lastKey2
    char __padding5[0x4] = {};
    // private Org.BouncyCastle.Crypto.Parameters.KeyParameter lastKey2
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Crypto::Parameters::KeyParameter* lastKey2;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::KeyParameter*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.KeyParameter lastKey3
    // Size: 0x8
    // Offset: 0x48
    Org::BouncyCastle::Crypto::Parameters::KeyParameter* lastKey3;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::KeyParameter*) == 0x8);
    // Creating value type constructor for type: ISO9797Alg3Mac
    ISO9797Alg3Mac(::ArrayWrapper<uint8_t> mac_ = {}, ::ArrayWrapper<uint8_t> buf_ = {}, int bufOff_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding_ = {}, int macSize_ = {}, Org::BouncyCastle::Crypto::Parameters::KeyParameter* lastKey2_ = {}, Org::BouncyCastle::Crypto::Parameters::KeyParameter* lastKey3_ = {}) noexcept : mac{mac_}, buf{buf_}, bufOff{bufOff_}, cipher{cipher_}, padding{padding_}, macSize{macSize_}, lastKey2{lastKey2_}, lastKey3{lastKey3_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Get instance field reference: private System.Byte[] mac
    ::ArrayWrapper<uint8_t>& dyn_mac();
    // Get instance field reference: private System.Byte[] buf
    ::ArrayWrapper<uint8_t>& dyn_buf();
    // Get instance field reference: private System.Int32 bufOff
    int& dyn_bufOff();
    // Get instance field reference: private Org.BouncyCastle.Crypto.IBlockCipher cipher
    Org::BouncyCastle::Crypto::IBlockCipher*& dyn_cipher();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding
    Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& dyn_padding();
    // Get instance field reference: private System.Int32 macSize
    int& dyn_macSize();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.KeyParameter lastKey2
    Org::BouncyCastle::Crypto::Parameters::KeyParameter*& dyn_lastKey2();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.KeyParameter lastKey3
    Org::BouncyCastle::Crypto::Parameters::KeyParameter*& dyn_lastKey3();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x1A87BE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ISO9797Alg3Mac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ISO9797Alg3Mac*, creationType>(cipher)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding)
    // Offset: 0x1A87EF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ISO9797Alg3Mac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ISO9797Alg3Mac*, creationType>(cipher, padding)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 macSizeInBits, Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding)
    // Offset: 0x1A87CB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ISO9797Alg3Mac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ISO9797Alg3Mac*, creationType>(cipher, macSizeInBits, padding)));
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1A87FC4
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x1A88460
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1A88468
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1A885A0
    void BlockUpdate(::ArrayWrapper<uint8_t> input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1A88844
    int DoFinal(::ArrayWrapper<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1A88390
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac
  #pragma pack(pop)
  static check_size<sizeof(ISO9797Alg3Mac), 72 + sizeof(Org::BouncyCastle::Crypto::Parameters::KeyParameter*)> __Org_BouncyCastle_Crypto_Macs_ISO9797Alg3MacSizeCheck;
  static_assert(sizeof(ISO9797Alg3Mac) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac*, "Org.BouncyCastle.Crypto.Macs", "ISO9797Alg3Mac");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::*)(Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::*)()>(&Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::GetMacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::*)(::ArrayWrapper<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::*)(::ArrayWrapper<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::*)()>(&Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
