// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.IAsn1Convertible
#include "Org/BouncyCastle/Asn1/IAsn1Convertible.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1StreamParser
  class Asn1StreamParser;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: BerApplicationSpecificParser
  class BerApplicationSpecificParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerApplicationSpecificParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerApplicationSpecificParser*, "Org.BouncyCastle.Asn1", "BerApplicationSpecificParser");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerApplicationSpecificParser
  // [TokenAttribute] Offset: FFFFFFFF
  class BerApplicationSpecificParser : public ::Il2CppObject/*, public ::Org::BouncyCastle::Asn1::IAsn1Convertible*/ {
    public:
    public:
    // private readonly System.Int32 tag
    // Size: 0x4
    // Offset: 0x10
    int tag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: tag and: parser
    char __padding0[0x4] = {};
    // private readonly Org.BouncyCastle.Asn1.Asn1StreamParser parser
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1StreamParser*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Asn1::IAsn1Convertible
    operator ::Org::BouncyCastle::Asn1::IAsn1Convertible() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(this);
    }
    // Creating interface conversion operator: i_IAsn1Convertible
    inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* i_IAsn1Convertible() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(this);
    }
    // Get instance field reference: private readonly System.Int32 tag
    [[deprecated("Use field access instead!")]] int& dyn_tag();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1StreamParser parser
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1StreamParser*& dyn_parser();
    // System.Void .ctor(System.Int32 tag, Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x1CD9E00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerApplicationSpecificParser* New_ctor(int tag, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::BerApplicationSpecificParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerApplicationSpecificParser*, creationType>(tag, parser)));
    }
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1CD9E3C
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.BerApplicationSpecificParser
  #pragma pack(pop)
  static check_size<sizeof(BerApplicationSpecificParser), 24 + sizeof(::Org::BouncyCastle::Asn1::Asn1StreamParser*)> __Org_BouncyCastle_Asn1_BerApplicationSpecificParserSizeCheck;
  static_assert(sizeof(BerApplicationSpecificParser) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerApplicationSpecificParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::BerApplicationSpecificParser::*)()>(&Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerApplicationSpecificParser*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
