// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Util.Tokenizer
#include "System/Security/Util/Tokenizer.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Util::Tokenizer::ITokenReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Tokenizer::ITokenReader*, "System.Security.Util", "Tokenizer/ITokenReader");
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.Tokenizer/System.Security.Util.ITokenReader
  // [TokenAttribute] Offset: FFFFFFFF
  class Tokenizer::ITokenReader {
    public:
    // public System.Int32 Read()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Read();
  }; // System.Security.Util.Tokenizer/System.Security.Util.ITokenReader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::ITokenReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Util::Tokenizer::ITokenReader::*)()>(&System::Security::Util::Tokenizer::ITokenReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer::ITokenReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
