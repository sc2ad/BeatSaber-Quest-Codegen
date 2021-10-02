// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Enum/System.ValuesAndNames
  // [TokenAttribute] Offset: FFFFFFFF
  class Enum::ValuesAndNames : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.UInt64[] Values
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint64_t> Values;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // public System.String[] Names
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppString*> Names;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    public:
    // Get instance field reference: public System.UInt64[] Values
    ::ArrayW<uint64_t>& dyn_Values();
    // Get instance field reference: public System.String[] Names
    ::ArrayW<::Il2CppString*>& dyn_Names();
    // public System.Void .ctor(System.UInt64[] values, System.String[] names)
    // Offset: 0x19A0740
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enum::ValuesAndNames* New_ctor(::ArrayW<uint64_t> values, ::ArrayW<::Il2CppString*> names) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Enum::ValuesAndNames::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enum::ValuesAndNames*, creationType>(values, names)));
    }
  }; // System.Enum/System.ValuesAndNames
  #pragma pack(pop)
  static check_size<sizeof(Enum::ValuesAndNames), 24 + sizeof(::ArrayW<::Il2CppString*>)> __System_Enum_ValuesAndNamesSizeCheck;
  static_assert(sizeof(Enum::ValuesAndNames) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Enum::ValuesAndNames*, "System", "Enum/ValuesAndNames");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Enum::ValuesAndNames::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
