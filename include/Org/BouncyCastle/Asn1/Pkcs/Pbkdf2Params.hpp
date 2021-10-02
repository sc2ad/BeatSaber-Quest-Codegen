// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params
  // [TokenAttribute] Offset: FFFFFFFF
  class Pbkdf2Params : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString octStr
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1OctetString* octStr;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger iterationCount
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* iterationCount;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger keyLength
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* keyLength;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier prf
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    public:
    // Get static field: static private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algid_hmacWithSHA1
    static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _get_algid_hmacWithSHA1();
    // Set static field: static private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algid_hmacWithSHA1
    static void _set_algid_hmacWithSHA1(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1OctetString octStr
    Org::BouncyCastle::Asn1::Asn1OctetString*& dyn_octStr();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger iterationCount
    Org::BouncyCastle::Asn1::DerInteger*& dyn_iterationCount();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger keyLength
    Org::BouncyCastle::Asn1::DerInteger*& dyn_keyLength();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier prf
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_prf();
    // public Org.BouncyCastle.Math.BigInteger get_IterationCount()
    // Offset: 0x19713A8
    Org::BouncyCastle::Math::BigInteger* get_IterationCount();
    // public Org.BouncyCastle.Math.BigInteger get_KeyLength()
    // Offset: 0x19713C4
    Org::BouncyCastle::Math::BigInteger* get_KeyLength();
    // public System.Boolean get_IsDefaultPrf()
    // Offset: 0x19713D8
    bool get_IsDefaultPrf();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_Prf()
    // Offset: 0x1971464
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Prf();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x19710DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pbkdf2Params* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pbkdf2Params*, creationType>(seq)));
    }
    // static private System.Void .cctor()
    // Offset: 0x197165C
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params GetInstance(System.Object obj)
    // Offset: 0x1970E54
    static Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* GetInstance(::Il2CppObject* obj);
    // public System.Byte[] GetSalt()
    // Offset: 0x1971388
    ::ArrayW<uint8_t> GetSalt();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19714D8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params
  #pragma pack(pop)
  static check_size<sizeof(Pbkdf2Params), 40 + sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)> __Org_BouncyCastle_Asn1_Pkcs_Pbkdf2ParamsSizeCheck;
  static_assert(sizeof(Pbkdf2Params) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*, "Org.BouncyCastle.Asn1.Pkcs", "Pbkdf2Params");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_IterationCount
// Il2CppName: get_IterationCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_IterationCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*), "get_IterationCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_KeyLength
// Il2CppName: get_KeyLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_KeyLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*), "get_KeyLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_IsDefaultPrf
// Il2CppName: get_IsDefaultPrf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_IsDefaultPrf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*), "get_IsDefaultPrf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_Prf
// Il2CppName: get_Prf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::get_Prf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*), "get_Prf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::GetSalt
// Il2CppName: GetSalt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::GetSalt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*), "GetSalt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
