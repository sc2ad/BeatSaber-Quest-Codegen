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
  // Forward declaring type: AvatarColorTrack
  class AvatarColorTrack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarColorTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorTrack*, "", "AvatarColorTrack");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AvatarColorTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [TrackClipTypeAttribute] Offset: 110A020
  // [TrackBindingTypeAttribute] Offset: 110A020
  // [TrackColorAttribute] Offset: 110A020
  class AvatarColorTrack : public ::UnityEngine::Timeline::TrackAsset {
    public:
    // public System.Void .ctor()
    // Offset: 0x153FD50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarColorTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarColorTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarColorTrack*, creationType>()));
    }
  }; // AvatarColorTrack
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarColorTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
