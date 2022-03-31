// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerInteger
#include "Org/BouncyCastle/Asn1/DerInteger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: CrlNumber
  class CrlNumber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CrlNumber);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CrlNumber*, "Org.BouncyCastle.Asn1.X509", "CrlNumber");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.CrlNumber
  // [TokenAttribute] Offset: FFFFFFFF
  class CrlNumber : public ::Org::BouncyCastle::Asn1::DerInteger {
    public:
    // public Org.BouncyCastle.Math.BigInteger get_Number()
    // Offset: 0x1EC5B04
    ::Org::BouncyCastle::Math::BigInteger* get_Number();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger number)
    // Offset: 0x1EC5AFC
    // Implemented from: Org.BouncyCastle.Asn1.DerInteger
    // Base method: System.Void DerInteger::.ctor(Org.BouncyCastle.Math.BigInteger number)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrlNumber* New_ctor(::Org::BouncyCastle::Math::BigInteger* number) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::CrlNumber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrlNumber*, creationType>(number)));
    }
    // public override System.String ToString()
    // Offset: 0x1EC5B0C
    // Implemented from: Org.BouncyCastle.Asn1.DerInteger
    // Base method: System.String DerInteger::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Asn1.X509.CrlNumber
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CrlNumber::get_Number
// Il2CppName: get_Number
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::X509::CrlNumber::*)()>(&Org::BouncyCastle::Asn1::X509::CrlNumber::get_Number)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CrlNumber*), "get_Number", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CrlNumber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CrlNumber::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::X509::CrlNumber::*)()>(&Org::BouncyCastle::Asn1::X509::CrlNumber::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CrlNumber*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
