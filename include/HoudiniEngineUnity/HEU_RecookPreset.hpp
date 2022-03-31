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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_VolumeCachePreset
  class HEU_VolumeCachePreset;
  // Forward declaring type: HEU_InputPreset
  class HEU_InputPreset;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_RecookPreset
  class HEU_RecookPreset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_RecookPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_RecookPreset*, "HoudiniEngineUnity", "HEU_RecookPreset");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_RecookPreset
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_RecookPreset : public ::Il2CppObject {
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
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_VolumeCachePreset> _volumeCachePresets
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* volumeCachePresets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*) == 0x8);
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputPreset> _inputPresets
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* inputPresets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_VolumeCachePreset> _volumeCachePresets
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*& dyn__volumeCachePresets();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputPreset> _inputPresets
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*& dyn__inputPresets();
    // public System.Void .ctor()
    // Offset: 0x1AC8180
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_RecookPreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_RecookPreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_RecookPreset*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_RecookPreset
  #pragma pack(pop)
  static check_size<sizeof(HEU_RecookPreset), 24 + sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*)> __HoudiniEngineUnity_HEU_RecookPresetSizeCheck;
  static_assert(sizeof(HEU_RecookPreset) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_RecookPreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
