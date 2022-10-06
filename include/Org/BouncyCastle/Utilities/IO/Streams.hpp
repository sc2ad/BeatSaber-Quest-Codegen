// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.IO
namespace Org::BouncyCastle::Utilities::IO {
  // Forward declaring type: Streams
  class Streams;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Streams);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Streams*, "Org.BouncyCastle.Utilities.IO", "Streams");
// Type namespace: Org.BouncyCastle.Utilities.IO
namespace Org::BouncyCastle::Utilities::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.Streams
  // [TokenAttribute] Offset: FFFFFFFF
  class Streams : public ::Il2CppObject {
    public:
    // static public System.Byte[] ReadAll(System.IO.Stream inStr)
    // Offset: 0x26544E4
    static ::ArrayW<uint8_t> ReadAll(::System::IO::Stream* inStr);
    // static public System.Int32 ReadFully(System.IO.Stream inStr, System.Byte[] buf)
    // Offset: 0x265464C
    static int ReadFully(::System::IO::Stream* inStr, ::ArrayW<uint8_t> buf);
    // static public System.Int32 ReadFully(System.IO.Stream inStr, System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x2654668
    static int ReadFully(::System::IO::Stream* inStr, ::ArrayW<uint8_t> buf, int off, int len);
    // static public System.Void PipeAll(System.IO.Stream inStr, System.IO.Stream outStr)
    // Offset: 0x2654564
    static void PipeAll(::System::IO::Stream* inStr, ::System::IO::Stream* outStr);
    // static public System.Int32 WriteBufTo(System.IO.MemoryStream buf, System.Byte[] output, System.Int32 offset)
    // Offset: 0x26546F4
    static int WriteBufTo(::System::IO::MemoryStream* buf, ::ArrayW<uint8_t> output, int offset);
  }; // Org.BouncyCastle.Utilities.IO.Streams
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Streams::ReadAll
// Il2CppName: ReadAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&Org::BouncyCastle::Utilities::IO::Streams::ReadAll)> {
  static const MethodInfo* get() {
    static auto* inStr = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Streams*), "ReadAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inStr});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Streams::ReadFully
// Il2CppName: ReadFully
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IO::Stream*, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Utilities::IO::Streams::ReadFully)> {
  static const MethodInfo* get() {
    static auto* inStr = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Streams*), "ReadFully", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inStr, buf});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Streams::ReadFully
// Il2CppName: ReadFully
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Utilities::IO::Streams::ReadFully)> {
  static const MethodInfo* get() {
    static auto* inStr = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Streams*), "ReadFully", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inStr, buf, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Streams::PipeAll
// Il2CppName: PipeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*)>(&Org::BouncyCastle::Utilities::IO::Streams::PipeAll)> {
  static const MethodInfo* get() {
    static auto* inStr = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* outStr = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Streams*), "PipeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inStr, outStr});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Streams::WriteBufTo
// Il2CppName: WriteBufTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IO::MemoryStream*, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Utilities::IO::Streams::WriteBufTo)> {
  static const MethodInfo* get() {
    static auto* buf = &::il2cpp_utils::GetClassFromName("System.IO", "MemoryStream")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Streams*), "WriteBufTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, output, offset});
  }
};
