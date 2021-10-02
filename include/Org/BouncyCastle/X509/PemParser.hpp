// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.PemParser
  // [TokenAttribute] Offset: FFFFFFFF
  class PemParser : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.String _header1
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* header1;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _header2
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* header2;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _footer1
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* footer1;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _footer2
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* footer2;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: private readonly System.String _header1
    ::Il2CppString*& dyn__header1();
    // Get instance field reference: private readonly System.String _header2
    ::Il2CppString*& dyn__header2();
    // Get instance field reference: private readonly System.String _footer1
    ::Il2CppString*& dyn__footer1();
    // Get instance field reference: private readonly System.String _footer2
    ::Il2CppString*& dyn__footer2();
    // System.Void .ctor(System.String type)
    // Offset: 0x2183FC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PemParser* New_ctor(::Il2CppString* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::PemParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PemParser*, creationType>(type)));
    }
    // private System.String ReadLine(System.IO.Stream inStream)
    // Offset: 0x21840A4
    ::Il2CppString* ReadLine(System::IO::Stream* inStream);
    // Org.BouncyCastle.Asn1.Asn1Sequence ReadPemObject(System.IO.Stream inStream)
    // Offset: 0x218417C
    Org::BouncyCastle::Asn1::Asn1Sequence* ReadPemObject(System::IO::Stream* inStream);
  }; // Org.BouncyCastle.X509.PemParser
  #pragma pack(pop)
  static check_size<sizeof(PemParser), 40 + sizeof(::Il2CppString*)> __Org_BouncyCastle_X509_PemParserSizeCheck;
  static_assert(sizeof(PemParser) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::PemParser*, "Org.BouncyCastle.X509", "PemParser");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::X509::PemParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::X509::PemParser::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::X509::PemParser::*)(System::IO::Stream*)>(&Org::BouncyCastle::X509::PemParser::ReadLine)> {
  static const MethodInfo* get() {
    static auto* inStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::PemParser*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inStream});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::PemParser::ReadPemObject
// Il2CppName: ReadPemObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Sequence* (Org::BouncyCastle::X509::PemParser::*)(System::IO::Stream*)>(&Org::BouncyCastle::X509::PemParser::ReadPemObject)> {
  static const MethodInfo* get() {
    static auto* inStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::PemParser*), "ReadPemObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inStream});
  }
};
