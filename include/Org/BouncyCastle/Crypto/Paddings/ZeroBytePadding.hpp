// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
#include "Org/BouncyCastle/Crypto/Paddings/IBlockCipherPadding.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Forward declaring type: ZeroBytePadding
  class ZeroBytePadding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding*, "Org.BouncyCastle.Crypto.Paddings", "ZeroBytePadding");
// Type namespace: Org.BouncyCastle.Crypto.Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding
  // [TokenAttribute] Offset: FFFFFFFF
  class ZeroBytePadding : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*/ {
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
    operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(this);
    }
    // Creating interface conversion operator: i_IBlockCipherPadding
    inline ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* i_IBlockCipherPadding() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x163D900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZeroBytePadding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZeroBytePadding*, creationType>()));
    }
    // public System.Void Init(Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x163D840
    void Init(::Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Int32 AddPadding(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x163D844
    int AddPadding(::ArrayW<uint8_t> input, int inOff);
    // public System.Int32 PadCount(System.Byte[] input)
    // Offset: 0x163D8A0
    int PadCount(::ArrayW<uint8_t> input);
  }; // Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::Init)> {
  static const MethodInfo* get() {
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::AddPadding
// Il2CppName: AddPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::AddPadding)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding*), "AddPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::PadCount
// Il2CppName: PadCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::PadCount)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding*), "PadCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
