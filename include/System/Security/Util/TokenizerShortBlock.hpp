// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Forward declaring type: TokenizerShortBlock
  class TokenizerShortBlock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Util::TokenizerShortBlock);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::TokenizerShortBlock*, "System.Security.Util", "TokenizerShortBlock");
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.TokenizerShortBlock
  // [TokenAttribute] Offset: FFFFFFFF
  class TokenizerShortBlock : public ::Il2CppObject {
    public:
    public:
    // System.Int16[] m_block
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int16_t> m_block;
    // Field size check
    static_assert(sizeof(::ArrayW<int16_t>) == 0x8);
    // System.Security.Util.TokenizerShortBlock m_next
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Util::TokenizerShortBlock* m_next;
    // Field size check
    static_assert(sizeof(::System::Security::Util::TokenizerShortBlock*) == 0x8);
    public:
    // Get instance field reference: System.Int16[] m_block
    [[deprecated("Use field access instead!")]] ::ArrayW<int16_t>& dyn_m_block();
    // Get instance field reference: System.Security.Util.TokenizerShortBlock m_next
    [[deprecated("Use field access instead!")]] ::System::Security::Util::TokenizerShortBlock*& dyn_m_next();
    // public System.Void .ctor()
    // Offset: 0x1C0BD38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenizerShortBlock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Util::TokenizerShortBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenizerShortBlock*, creationType>()));
    }
  }; // System.Security.Util.TokenizerShortBlock
  #pragma pack(pop)
  static check_size<sizeof(TokenizerShortBlock), 24 + sizeof(::System::Security::Util::TokenizerShortBlock*)> __System_Security_Util_TokenizerShortBlockSizeCheck;
  static_assert(sizeof(TokenizerShortBlock) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Util::TokenizerShortBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
