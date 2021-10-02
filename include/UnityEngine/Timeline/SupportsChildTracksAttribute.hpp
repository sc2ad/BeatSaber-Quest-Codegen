// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.SupportsChildTracksAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: EB9634
  class SupportsChildTracksAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public readonly System.Type childType
    // Size: 0x8
    // Offset: 0x10
    System::Type* childType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public readonly System.Int32 levels
    // Size: 0x4
    // Offset: 0x18
    int levels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly System.Type childType
    System::Type*& dyn_childType();
    // Get instance field reference: public readonly System.Int32 levels
    int& dyn_levels();
    // public System.Void .ctor(System.Type childType, System.Int32 levels)
    // Offset: 0x19FFC64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SupportsChildTracksAttribute* New_ctor(System::Type* childType, int levels) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::SupportsChildTracksAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SupportsChildTracksAttribute*, creationType>(childType, levels)));
    }
  }; // UnityEngine.Timeline.SupportsChildTracksAttribute
  #pragma pack(pop)
  static check_size<sizeof(SupportsChildTracksAttribute), 24 + sizeof(int)> __UnityEngine_Timeline_SupportsChildTracksAttributeSizeCheck;
  static_assert(sizeof(SupportsChildTracksAttribute) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SupportsChildTracksAttribute*, "UnityEngine.Timeline", "SupportsChildTracksAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::SupportsChildTracksAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
