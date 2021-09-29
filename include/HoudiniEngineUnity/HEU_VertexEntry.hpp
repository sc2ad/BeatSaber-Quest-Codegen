// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_VertexEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_VertexEntry : public ::Il2CppObject {
    public:
    // public System.Int32 _meshKey
    // Size: 0x4
    // Offset: 0x10
    int meshKey;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _vertexIndex
    // Size: 0x4
    // Offset: 0x14
    int vertexIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _normalIndex
    // Size: 0x4
    // Offset: 0x18
    int normalIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HEU_VertexEntry
    HEU_VertexEntry(int meshKey_ = {}, int vertexIndex_ = {}, int normalIndex_ = {}) noexcept : meshKey{meshKey_}, vertexIndex{vertexIndex_}, normalIndex{normalIndex_} {}
    // Get instance field reference: public System.Int32 _meshKey
    int& dyn__meshKey();
    // Get instance field reference: public System.Int32 _vertexIndex
    int& dyn__vertexIndex();
    // Get instance field reference: public System.Int32 _normalIndex
    int& dyn__normalIndex();
    // public System.Void .ctor(System.Int32 meshKey, System.Int32 vertexIndex, System.Int32 normalIndex)
    // Offset: 0x16FBB94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_VertexEntry* New_ctor(int meshKey, int vertexIndex, int normalIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_VertexEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_VertexEntry*, creationType>(meshKey, vertexIndex, normalIndex)));
    }
  }; // HoudiniEngineUnity.HEU_VertexEntry
  #pragma pack(pop)
  static check_size<sizeof(HEU_VertexEntry), 24 + sizeof(int)> __HoudiniEngineUnity_HEU_VertexEntrySizeCheck;
  static_assert(sizeof(HEU_VertexEntry) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_VertexEntry*, "HoudiniEngineUnity", "HEU_VertexEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_VertexEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!