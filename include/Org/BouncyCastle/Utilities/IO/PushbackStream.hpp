// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Utilities.IO.FilterStream
#include "Org/BouncyCastle/Utilities/IO/FilterStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.IO
namespace Org::BouncyCastle::Utilities::IO {
  // Forward declaring type: PushbackStream
  class PushbackStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::PushbackStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::PushbackStream*, "Org.BouncyCastle.Utilities.IO", "PushbackStream");
// Type namespace: Org.BouncyCastle.Utilities.IO
namespace Org::BouncyCastle::Utilities::IO {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.PushbackStream
  // [TokenAttribute] Offset: FFFFFFFF
  class PushbackStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
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
    // private System.Int32 buf
    // Size: 0x4
    // Offset: 0x30
    int buf;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 buf
    int& dyn_buf();
    // public System.Void Unread(System.Int32 b)
    // Offset: 0x25A56B0
    void Unread(int b);
    // public System.Void .ctor(System.IO.Stream s)
    // Offset: 0x25A55EC
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Void FilterStream::.ctor(System.IO.Stream s)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PushbackStream* New_ctor(::System::IO::Stream* s) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Utilities::IO::PushbackStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PushbackStream*, creationType>(s)));
    }
    // public override System.Int32 ReadByte()
    // Offset: 0x25A55F8
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Int32 FilterStream::ReadByte()
    int ReadByte();
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x25A5638
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Int32 FilterStream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
  }; // Org.BouncyCastle.Utilities.IO.PushbackStream
  #pragma pack(pop)
  static check_size<sizeof(PushbackStream), 48 + sizeof(int)> __Org_BouncyCastle_Utilities_IO_PushbackStreamSizeCheck;
  static_assert(sizeof(PushbackStream) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::PushbackStream::Unread
// Il2CppName: Unread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::IO::PushbackStream::*)(int)>(&Org::BouncyCastle::Utilities::IO::PushbackStream::Unread)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::PushbackStream*), "Unread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::PushbackStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::PushbackStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Utilities::IO::PushbackStream::*)()>(&Org::BouncyCastle::Utilities::IO::PushbackStream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::PushbackStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::PushbackStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Utilities::IO::PushbackStream::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Utilities::IO::PushbackStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::PushbackStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
