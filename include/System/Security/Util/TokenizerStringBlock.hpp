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
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.TokenizerStringBlock
  // [TokenAttribute] Offset: FFFFFFFF
  class TokenizerStringBlock : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // System.String[] m_block
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppString*> m_block;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    // System.Security.Util.TokenizerStringBlock m_next
    // Size: 0x8
    // Offset: 0x18
    System::Security::Util::TokenizerStringBlock* m_next;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerStringBlock*) == 0x8);
    public:
    // Get instance field reference: System.String[] m_block
    ::ArrayW<::Il2CppString*>& dyn_m_block();
    // Get instance field reference: System.Security.Util.TokenizerStringBlock m_next
    System::Security::Util::TokenizerStringBlock*& dyn_m_next();
    // public System.Void .ctor()
    // Offset: 0x1DE6CC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenizerStringBlock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Util::TokenizerStringBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenizerStringBlock*, creationType>()));
    }
  }; // System.Security.Util.TokenizerStringBlock
  #pragma pack(pop)
  static check_size<sizeof(TokenizerStringBlock), 24 + sizeof(System::Security::Util::TokenizerStringBlock*)> __System_Security_Util_TokenizerStringBlockSizeCheck;
  static_assert(sizeof(TokenizerStringBlock) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::TokenizerStringBlock*, "System.Security.Util", "TokenizerStringBlock");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Util::TokenizerStringBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
