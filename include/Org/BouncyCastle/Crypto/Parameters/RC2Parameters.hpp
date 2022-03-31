// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.KeyParameter
#include "Org/BouncyCastle/Crypto/Parameters/KeyParameter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RC2Parameters
  class RC2Parameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RC2Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*, "Org.BouncyCastle.Crypto.Parameters", "RC2Parameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.RC2Parameters
  // [TokenAttribute] Offset: FFFFFFFF
  class RC2Parameters : public ::Org::BouncyCastle::Crypto::Parameters::KeyParameter {
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
    // private readonly System.Int32 bits
    // Size: 0x4
    // Offset: 0x18
    int bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept = delete;
    // Get instance field reference: private readonly System.Int32 bits
    int& dyn_bits();
    // public System.Int32 get_EffectiveKeyBits()
    // Offset: 0x15C3B6C
    int get_EffectiveKeyBits();
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen, System.Int32 bits)
    // Offset: 0x15C3B44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2Parameters* New_ctor(::ArrayW<uint8_t> key, int keyOff, int keyLen, int bits) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2Parameters*, creationType>(key, keyOff, keyLen, bits)));
    }
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Offset: 0x15C3B08
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.KeyParameter
    // Base method: System.Void KeyParameter::.ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2Parameters* New_ctor(::ArrayW<uint8_t> key, int keyOff, int keyLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2Parameters*, creationType>(key, keyOff, keyLen)));
    }
  }; // Org.BouncyCastle.Crypto.Parameters.RC2Parameters
  #pragma pack(pop)
  static check_size<sizeof(RC2Parameters), 24 + sizeof(int)> __Org_BouncyCastle_Crypto_Parameters_RC2ParametersSizeCheck;
  static_assert(sizeof(RC2Parameters) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RC2Parameters::get_EffectiveKeyBits
// Il2CppName: get_EffectiveKeyBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::RC2Parameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RC2Parameters::get_EffectiveKeyBits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RC2Parameters*), "get_EffectiveKeyBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RC2Parameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RC2Parameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
