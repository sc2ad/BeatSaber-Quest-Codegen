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
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9FieldID
  class X9FieldID;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9FieldID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9FieldID*, "Org.BouncyCastle.Asn1.X9", "X9FieldID");
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9FieldID
  // [TokenAttribute] Offset: FFFFFFFF
  class X9FieldID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier id
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* id;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1Object parameters
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::Asn1Object* parameters;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1Object*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier id
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn_id();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1Object parameters
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1Object*& dyn_parameters();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_Identifier()
    // Offset: 0x1FA56E8
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Identifier();
    // public Org.BouncyCastle.Asn1.Asn1Object get_Parameters()
    // Offset: 0x1FA56F0
    ::Org::BouncyCastle::Asn1::Asn1Object* get_Parameters();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger primeP)
    // Offset: 0x1FA4C14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9FieldID* New_ctor(::Org::BouncyCastle::Math::BigInteger* primeP) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X9::X9FieldID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9FieldID*, creationType>(primeP)));
    }
    // public System.Void .ctor(System.Int32 m, System.Int32 k1)
    // Offset: 0x1FA4CC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9FieldID* New_ctor(int m, int k1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X9::X9FieldID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9FieldID*, creationType>(m, k1)));
    }
    // public System.Void .ctor(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3)
    // Offset: 0x1FA4CCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9FieldID* New_ctor(int m, int k1, int k2, int k3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X9::X9FieldID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9FieldID*, creationType>(m, k1, k2, k3)));
    }
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1FA5614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9FieldID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X9::X9FieldID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9FieldID*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X9.X9FieldID GetInstance(System.Object obj)
    // Offset: 0x1FA4B2C
    static ::Org::BouncyCastle::Asn1::X9::X9FieldID* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1FA56F8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.X9FieldID
  #pragma pack(pop)
  static check_size<sizeof(X9FieldID), 24 + sizeof(::Org::BouncyCastle::Asn1::Asn1Object*)> __Org_BouncyCastle_Asn1_X9_X9FieldIDSizeCheck;
  static_assert(sizeof(X9FieldID) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldID::get_Identifier
// Il2CppName: get_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Asn1::X9::X9FieldID::*)()>(&Org::BouncyCastle::Asn1::X9::X9FieldID::get_Identifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9FieldID*), "get_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldID::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X9::X9FieldID::*)()>(&Org::BouncyCastle::Asn1::X9::X9FieldID::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9FieldID*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldID::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldID::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldID::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldID::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldID::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9FieldID* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X9::X9FieldID::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9FieldID*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldID::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X9::X9FieldID::*)()>(&Org::BouncyCastle::Asn1::X9::X9FieldID::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9FieldID*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
