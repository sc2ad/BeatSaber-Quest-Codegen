// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: DHValidationParms
  class DHValidationParms;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: DHDomainParameters
  class DHDomainParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::DHDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::DHDomainParameters*, "Org.BouncyCastle.Asn1.X9", "DHDomainParameters");
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.DHDomainParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class DHDomainParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.DerInteger p
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::DerInteger* p;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger g
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::DerInteger* g;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger q
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerInteger* q;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger j
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Asn1::DerInteger* j;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X9.DHValidationParms validationParms
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Asn1::X9::DHValidationParms* validationParms;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X9::DHValidationParms*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger p
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_p();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger g
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_g();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger q
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_q();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger j
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_j();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X9.DHValidationParms validationParms
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X9::DHValidationParms*& dyn_validationParms();
    // public Org.BouncyCastle.Asn1.DerInteger get_P()
    // Offset: 0x1F9EE38
    ::Org::BouncyCastle::Asn1::DerInteger* get_P();
    // public Org.BouncyCastle.Asn1.DerInteger get_G()
    // Offset: 0x1F9EE40
    ::Org::BouncyCastle::Asn1::DerInteger* get_G();
    // public Org.BouncyCastle.Asn1.DerInteger get_Q()
    // Offset: 0x1F9EE48
    ::Org::BouncyCastle::Asn1::DerInteger* get_Q();
    // public Org.BouncyCastle.Asn1.DerInteger get_J()
    // Offset: 0x1F9EE50
    ::Org::BouncyCastle::Asn1::DerInteger* get_J();
    // public Org.BouncyCastle.Asn1.X9.DHValidationParms get_ValidationParms()
    // Offset: 0x1F9EE58
    ::Org::BouncyCastle::Asn1::X9::DHValidationParms* get_ValidationParms();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1F9E97C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X9::DHDomainParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHDomainParameters*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X9.DHDomainParameters GetInstance(System.Object obj)
    // Offset: 0x1F9E7FC
    static ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* GetInstance(::Il2CppObject* obj);
    // static private Org.BouncyCastle.Asn1.Asn1Encodable GetNext(System.Collections.IEnumerator e)
    // Offset: 0x1F9EB5C
    static ::Org::BouncyCastle::Asn1::Asn1Encodable* GetNext(::System::Collections::IEnumerator* e);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1F9EE60
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.DHDomainParameters
  #pragma pack(pop)
  static check_size<sizeof(DHDomainParameters), 48 + sizeof(::Org::BouncyCastle::Asn1::X9::DHValidationParms*)> __Org_BouncyCastle_Asn1_X9_DHDomainParametersSizeCheck;
  static_assert(sizeof(DHDomainParameters) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_P
// Il2CppName: get_P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(&Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_P)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHDomainParameters*), "get_P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_G
// Il2CppName: get_G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(&Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_G)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHDomainParameters*), "get_G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_Q
// Il2CppName: get_Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(&Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_Q)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHDomainParameters*), "get_Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_J
// Il2CppName: get_J
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(&Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_J)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHDomainParameters*), "get_J", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_ValidationParms
// Il2CppName: get_ValidationParms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::DHValidationParms* (Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(&Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_ValidationParms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHDomainParameters*), "get_ValidationParms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHDomainParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::DHDomainParameters* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHDomainParameters*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetNext
// Il2CppName: GetNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::System::Collections::IEnumerator*)>(&Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetNext)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHDomainParameters*), "GetNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHDomainParameters::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(&Org::BouncyCastle::Asn1::X9::DHDomainParameters::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHDomainParameters*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
