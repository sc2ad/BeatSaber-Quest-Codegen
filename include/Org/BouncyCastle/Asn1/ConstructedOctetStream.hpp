// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Utilities.IO.BaseInputStream
#include "Org/BouncyCastle/Utilities/IO/BaseInputStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1StreamParser
  class Asn1StreamParser;
  // Forward declaring type: Asn1OctetStringParser
  class Asn1OctetStringParser;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: ConstructedOctetStream
  class ConstructedOctetStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::ConstructedOctetStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::ConstructedOctetStream*, "Org.BouncyCastle.Asn1", "ConstructedOctetStream");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.ConstructedOctetStream
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstructedOctetStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1StreamParser _parser
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1StreamParser*) == 0x8);
    // private System.Boolean _first
    // Size: 0x1
    // Offset: 0x38
    bool first;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: first and: currentStream
    char __padding1[0x7] = {};
    // private System.IO.Stream _currentStream
    // Size: 0x8
    // Offset: 0x40
    ::System::IO::Stream* currentStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1StreamParser _parser
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1StreamParser*& dyn__parser();
    // Get instance field reference: private System.Boolean _first
    [[deprecated("Use field access instead!")]] bool& dyn__first();
    // Get instance field reference: private System.IO.Stream _currentStream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn__currentStream();
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x1CE0234
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructedOctetStream* New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::ConstructedOctetStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructedOctetStream*, creationType>(parser)));
    }
    // private Org.BouncyCastle.Asn1.Asn1OctetStringParser GetNextParser()
    // Offset: 0x1CE2410
    ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* GetNextParser();
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1CE2224
    // Implemented from: Org.BouncyCastle.Utilities.IO.BaseInputStream
    // Base method: System.Int32 BaseInputStream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Int32 ReadByte()
    // Offset: 0x1CE2528
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
  }; // Org.BouncyCastle.Asn1.ConstructedOctetStream
  #pragma pack(pop)
  static check_size<sizeof(ConstructedOctetStream), 64 + sizeof(::System::IO::Stream*)> __Org_BouncyCastle_Asn1_ConstructedOctetStreamSizeCheck;
  static_assert(sizeof(ConstructedOctetStream) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::ConstructedOctetStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser
// Il2CppName: GetNextParser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser* (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::ConstructedOctetStream*), "GetNextParser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::ConstructedOctetStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::ConstructedOctetStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::ConstructedOctetStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
