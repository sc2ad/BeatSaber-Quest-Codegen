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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: HEU_InputPreset
  class HEU_InputPreset;
  // Forward declaring type: HEU_VolumeCachePreset
  class HEU_VolumeCachePreset;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_AssetPreset
  class HEU_AssetPreset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetPreset*, "HoudiniEngineUnity", "HEU_AssetPreset");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetPreset
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AssetPreset : public ::Il2CppObject {
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
    // public System.Char[] _identifier
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppChar> identifier;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // public System.Int32 _version
    // Size: 0x4
    // Offset: 0x18
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: version and: assetOPName
    char __padding1[0x4] = {};
    // public System.String _assetOPName
    // Size: 0x8
    // Offset: 0x20
    ::StringW assetOPName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Byte[] _parameterPreset
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> parameterPreset;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Collections.Generic.List`1<System.String> _curveNames
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::StringW>* curveNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Collections.Generic.List`1<System.Byte[]> _curvePresets
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* curvePresets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x127C24C
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputPreset> inputPresets
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* inputPresets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x127C284
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_VolumeCachePreset> volumeCachePresets
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* volumeCachePresets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*) == 0x8);
    public:
    // Get instance field reference: public System.Char[] _identifier
    ::ArrayW<::Il2CppChar>& dyn__identifier();
    // Get instance field reference: public System.Int32 _version
    int& dyn__version();
    // Get instance field reference: public System.String _assetOPName
    ::StringW& dyn__assetOPName();
    // Get instance field reference: public System.Byte[] _parameterPreset
    ::ArrayW<uint8_t>& dyn__parameterPreset();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> _curveNames
    ::System::Collections::Generic::List_1<::StringW>*& dyn__curveNames();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Byte[]> _curvePresets
    ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& dyn__curvePresets();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputPreset> inputPresets
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*& dyn_inputPresets();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_VolumeCachePreset> volumeCachePresets
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*& dyn_volumeCachePresets();
    // public System.Void .ctor()
    // Offset: 0x16AC41C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_AssetPreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_AssetPreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_AssetPreset*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_AssetPreset
  #pragma pack(pop)
  static check_size<sizeof(HEU_AssetPreset), 72 + sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*)> __HoudiniEngineUnity_HEU_AssetPresetSizeCheck;
  static_assert(sizeof(HEU_AssetPreset) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetPreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
