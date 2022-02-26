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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: TokenDTO
  class TokenDTO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LeaderboardsDTO::TokenDTO);
DEFINE_IL2CPP_ARG_TYPE(::LeaderboardsDTO::TokenDTO*, "LeaderboardsDTO", "TokenDTO");
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsDTO.TokenDTO
  // [TokenAttribute] Offset: FFFFFFFF
  class TokenDTO : public ::Il2CppObject {
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
    // public System.String token
    // Size: 0x8
    // Offset: 0x10
    ::StringW token;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 expireIn
    // Size: 0x4
    // Offset: 0x18
    int expireIn;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String token
    ::StringW& dyn_token();
    // Get instance field reference: public System.Int32 expireIn
    int& dyn_expireIn();
    // public System.Void .ctor()
    // Offset: 0x13B1628
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LeaderboardsDTO::TokenDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.TokenDTO
  #pragma pack(pop)
  static check_size<sizeof(TokenDTO), 24 + sizeof(int)> __LeaderboardsDTO_TokenDTOSizeCheck;
  static_assert(sizeof(TokenDTO) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LeaderboardsDTO::TokenDTO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
