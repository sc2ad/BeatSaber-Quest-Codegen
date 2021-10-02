// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AlphabetScrollInfo
#include "GlobalNamespace/AlphabetScrollInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: AlphabetScrollInfo/Data
  // [TokenAttribute] Offset: FFFFFFFF
  class AlphabetScrollInfo::Data : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public readonly System.Char character
    // Size: 0x2
    // Offset: 0x10
    ::Il2CppChar character;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: character and: cellIdx
    char __padding0[0x2] = {};
    // public readonly System.Int32 cellIdx
    // Size: 0x4
    // Offset: 0x14
    int cellIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly System.Char character
    ::Il2CppChar& dyn_character();
    // Get instance field reference: public readonly System.Int32 cellIdx
    int& dyn_cellIdx();
    // public System.Void .ctor(System.Char character, System.Int32 cellIdx)
    // Offset: 0x1378648
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlphabetScrollInfo::Data* New_ctor(::Il2CppChar character, int cellIdx) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AlphabetScrollInfo::Data::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlphabetScrollInfo::Data*, creationType>(character, cellIdx)));
    }
  }; // AlphabetScrollInfo/Data
  #pragma pack(pop)
  static check_size<sizeof(AlphabetScrollInfo::Data), 20 + sizeof(int)> __GlobalNamespace_AlphabetScrollInfo_DataSizeCheck;
  static_assert(sizeof(AlphabetScrollInfo::Data) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlphabetScrollInfo::Data*, "", "AlphabetScrollInfo/Data");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AlphabetScrollInfo::Data::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
