// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TubeLightTrack
  class TubeLightTrack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TubeLightTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightTrack*, "", "TubeLightTrack");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TubeLightTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [TrackClipTypeAttribute] Offset: 10F4E48
  // [TrackBindingTypeAttribute] Offset: 10F4E48
  // [TrackColorAttribute] Offset: 10F4E48
  class TubeLightTrack : public ::UnityEngine::Timeline::TrackAsset {
    public:
    // public System.Void .ctor()
    // Offset: 0x13EF214
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TubeLightTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TubeLightTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TubeLightTrack*, creationType>()));
    }
  }; // TubeLightTrack
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TubeLightTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
