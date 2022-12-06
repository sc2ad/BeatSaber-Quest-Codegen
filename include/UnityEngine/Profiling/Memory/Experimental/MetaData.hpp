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
// Type namespace: UnityEngine.Profiling.Memory.Experimental
namespace UnityEngine::Profiling::Memory::Experimental {
  // Forward declaring type: MetaData
  class MetaData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Profiling::Memory::Experimental::MetaData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Memory::Experimental::MetaData*, "UnityEngine.Profiling.Memory.Experimental", "MetaData");
// Type namespace: UnityEngine.Profiling.Memory.Experimental
namespace UnityEngine::Profiling::Memory::Experimental {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Profiling.Memory.Experimental.MetaData
  // [TokenAttribute] Offset: FFFFFFFF
  class MetaData : public ::Il2CppObject {
    public:
    public:
    // public System.String content
    // Size: 0x8
    // Offset: 0x10
    ::StringW content;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String platform
    // Size: 0x8
    // Offset: 0x18
    ::StringW platform;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String content
    [[deprecated("Use field access instead!")]] ::StringW& dyn_content();
    // Get instance field reference: public System.String platform
    [[deprecated("Use field access instead!")]] ::StringW& dyn_platform();
    // public System.Void .ctor()
    // Offset: 0x21559DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetaData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Profiling::Memory::Experimental::MetaData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetaData*, creationType>()));
    }
  }; // UnityEngine.Profiling.Memory.Experimental.MetaData
  #pragma pack(pop)
  static check_size<sizeof(MetaData), 24 + sizeof(::StringW)> __UnityEngine_Profiling_Memory_Experimental_MetaDataSizeCheck;
  static_assert(sizeof(MetaData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Profiling::Memory::Experimental::MetaData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
