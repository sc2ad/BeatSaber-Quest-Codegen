// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MovementBeatmapEventEffect
#include "GlobalNamespace/MovementBeatmapEventEffect.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MovementBeatmapEventEffect/MovementData
  // [TokenAttribute] Offset: FFFFFFFF
  class MovementBeatmapEventEffect::MovementData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.Vector3 _localPositionOffset
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 localPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Creating conversion operator: operator UnityEngine::Vector3
    constexpr operator UnityEngine::Vector3() const noexcept {
      return localPositionOffset;
    }
    // Get instance field reference: private UnityEngine.Vector3 _localPositionOffset
    UnityEngine::Vector3& dyn__localPositionOffset();
    // public UnityEngine.Vector3 get_localPositionOffset()
    // Offset: 0x1208D50
    UnityEngine::Vector3 get_localPositionOffset();
    // public System.Void .ctor()
    // Offset: 0x1208D5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovementBeatmapEventEffect::MovementData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MovementBeatmapEventEffect::MovementData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovementBeatmapEventEffect::MovementData*, creationType>()));
    }
  }; // MovementBeatmapEventEffect/MovementData
  #pragma pack(pop)
  static check_size<sizeof(MovementBeatmapEventEffect::MovementData), 16 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_MovementBeatmapEventEffect_MovementDataSizeCheck;
  static_assert(sizeof(MovementBeatmapEventEffect::MovementData) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MovementBeatmapEventEffect::MovementData*, "", "MovementBeatmapEventEffect/MovementData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::MovementData::get_localPositionOffset
// Il2CppName: get_localPositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::MovementBeatmapEventEffect::MovementData::*)()>(&GlobalNamespace::MovementBeatmapEventEffect::MovementData::get_localPositionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect::MovementData*), "get_localPositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::MovementData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
