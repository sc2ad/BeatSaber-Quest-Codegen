// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo
#include "HoudiniEngineUnity/HEU_ThreadedTaskLoadGeo.hpp"
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
  // Forward declaring type: HEU_LoadBufferVolume
  class HEU_LoadBufferVolume;
  // Forward declaring type: HEU_LoadBufferMesh
  class HEU_LoadBufferMesh;
  // Forward declaring type: HEU_LoadBufferInstancer
  class HEU_LoadBufferInstancer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_LoadObject);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_LoadObject*, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadObject");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo/HoudiniEngineUnity.HEU_LoadObject
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ThreadedTaskLoadGeo::HEU_LoadObject : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 _objectNodeID
    // Size: 0x4
    // Offset: 0x10
    int objectNodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _displayNodeID
    // Size: 0x4
    // Offset: 0x14
    int displayNodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_LoadBufferVolume> _terrainBuffers
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* terrainBuffers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*) == 0x8);
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_LoadBufferMesh> _meshBuffers
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>* meshBuffers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*) == 0x8);
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_LoadBufferInstancer> _instancerBuffers
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>* instancerBuffers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 _objectNodeID
    [[deprecated("Use field access instead!")]] int& dyn__objectNodeID();
    // Get instance field reference: public System.Int32 _displayNodeID
    [[deprecated("Use field access instead!")]] int& dyn__displayNodeID();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_LoadBufferVolume> _terrainBuffers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*& dyn__terrainBuffers();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_LoadBufferMesh> _meshBuffers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*& dyn__meshBuffers();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_LoadBufferInstancer> _instancerBuffers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*& dyn__instancerBuffers();
    // public System.Void .ctor()
    // Offset: 0x1A58440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ThreadedTaskLoadGeo::HEU_LoadObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_LoadObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ThreadedTaskLoadGeo::HEU_LoadObject*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo/HoudiniEngineUnity.HEU_LoadObject
  #pragma pack(pop)
  static check_size<sizeof(HEU_ThreadedTaskLoadGeo::HEU_LoadObject), 40 + sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*)> __HoudiniEngineUnity_HEU_ThreadedTaskLoadGeo_HEU_LoadObjectSizeCheck;
  static_assert(sizeof(HEU_ThreadedTaskLoadGeo::HEU_LoadObject) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_LoadObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
