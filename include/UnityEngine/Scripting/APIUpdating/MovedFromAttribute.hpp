// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
#include "UnityEngine/Scripting/APIUpdating/MovedFromAttributeData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Scripting.APIUpdating
namespace UnityEngine::Scripting::APIUpdating {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Scripting.APIUpdating.MovedFromAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E73600
  class MovedFromAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // UnityEngine.Scripting.APIUpdating.MovedFromAttributeData data
    // Size: 0x1C
    // Offset: 0x10
    UnityEngine::Scripting::APIUpdating::MovedFromAttributeData data;
    // Field size check
    static_assert(sizeof(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData) == 0x1C);
    public:
    // Creating conversion operator: operator UnityEngine::Scripting::APIUpdating::MovedFromAttributeData
    constexpr operator UnityEngine::Scripting::APIUpdating::MovedFromAttributeData() const noexcept {
      return data;
    }
    // Get instance field reference: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData data
    UnityEngine::Scripting::APIUpdating::MovedFromAttributeData& dyn_data();
    // public System.Void .ctor(System.Boolean autoUpdateAPI, System.String sourceNamespace, System.String sourceAssembly, System.String sourceClassName)
    // Offset: 0x1E0DA18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovedFromAttribute* New_ctor(bool autoUpdateAPI, ::Il2CppString* sourceNamespace, ::Il2CppString* sourceAssembly, ::Il2CppString* sourceClassName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::APIUpdating::MovedFromAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovedFromAttribute*, creationType>(autoUpdateAPI, sourceNamespace, sourceAssembly, sourceClassName)));
    }
    // public System.Void .ctor(System.String sourceNamespace)
    // Offset: 0x1E0DAC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovedFromAttribute* New_ctor(::Il2CppString* sourceNamespace) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::APIUpdating::MovedFromAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovedFromAttribute*, creationType>(sourceNamespace)));
    }
  }; // UnityEngine.Scripting.APIUpdating.MovedFromAttribute
  #pragma pack(pop)
  static check_size<sizeof(MovedFromAttribute), 16 + sizeof(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData)> __UnityEngine_Scripting_APIUpdating_MovedFromAttributeSizeCheck;
  static_assert(sizeof(MovedFromAttribute) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::APIUpdating::MovedFromAttribute*, "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Scripting::APIUpdating::MovedFromAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Scripting::APIUpdating::MovedFromAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
