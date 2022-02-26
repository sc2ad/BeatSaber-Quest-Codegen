// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ParametersWithIV
  class ParametersWithIV;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithIV");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
  // [TokenAttribute] Offset: FFFFFFFF
  class ParametersWithIV : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::ICipherParameters*/ {
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
    // private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private readonly System.Byte[] iv
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> iv;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::ICipherParameters
    operator ::Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    ::Org::BouncyCastle::Crypto::ICipherParameters*& dyn_parameters();
    // Get instance field reference: private readonly System.Byte[] iv
    ::ArrayW<uint8_t>& dyn_iv();
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0x15655E4
    ::Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.ICipherParameters parameters, System.Byte[] iv)
    // Offset: 0x15654E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametersWithIV* New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t> iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametersWithIV*, creationType>(parameters, iv)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.ICipherParameters parameters, System.Byte[] iv, System.Int32 ivOff, System.Int32 ivLen)
    // Offset: 0x15654FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametersWithIV* New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t> iv, int ivOff, int ivLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametersWithIV*, creationType>(parameters, iv, ivOff, ivLen)));
    }
    // public System.Byte[] GetIV()
    // Offset: 0x155D530
    ::ArrayW<uint8_t> GetIV();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
  #pragma pack(pop)
  static check_size<sizeof(ParametersWithIV), 24 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Parameters_ParametersWithIVSizeCheck;
  static_assert(sizeof(ParametersWithIV) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::GetIV
// Il2CppName: GetIV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::GetIV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*), "GetIV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
