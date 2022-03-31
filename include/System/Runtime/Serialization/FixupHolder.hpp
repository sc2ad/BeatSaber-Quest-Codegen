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
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: FixupHolder
  class FixupHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::FixupHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FixupHolder*, "System.Runtime.Serialization", "FixupHolder");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.FixupHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class FixupHolder : public ::Il2CppObject {
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
    // System.Int64 m_id
    // Size: 0x8
    // Offset: 0x10
    int64_t m_id;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Object m_fixupInfo
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_fixupInfo;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 m_fixupType
    // Size: 0x4
    // Offset: 0x20
    int m_fixupType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Int64 m_id
    int64_t& dyn_m_id();
    // Get instance field reference: System.Object m_fixupInfo
    ::Il2CppObject*& dyn_m_fixupInfo();
    // Get instance field reference: System.Int32 m_fixupType
    int& dyn_m_fixupType();
    // System.Void .ctor(System.Int64 id, System.Object fixupInfo, System.Int32 fixupType)
    // Offset: 0x18B4E54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixupHolder* New_ctor(int64_t id, ::Il2CppObject* fixupInfo, int fixupType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::FixupHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixupHolder*, creationType>(id, fixupInfo, fixupType)));
    }
  }; // System.Runtime.Serialization.FixupHolder
  #pragma pack(pop)
  static check_size<sizeof(FixupHolder), 32 + sizeof(int)> __System_Runtime_Serialization_FixupHolderSizeCheck;
  static_assert(sizeof(FixupHolder) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::FixupHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
