// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VideoProjectionEffect/GameplayVideoProjectionBehavior
#include "GlobalNamespace/VideoProjectionEffect_GameplayVideoProjectionBehavior.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0*, "", "VideoProjectionEffect/GameplayVideoProjectionBehavior/<>c__DisplayClass0_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VideoProjectionEffect/GameplayVideoProjectionBehavior/<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0 : public ::Il2CppObject {
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
    // public BasicBeatmapEventType videoEventType
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::BasicBeatmapEventType videoEventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::BasicBeatmapEventType
    constexpr operator ::GlobalNamespace::BasicBeatmapEventType() const noexcept {
      return videoEventType;
    }
    // Get instance field reference: public BasicBeatmapEventType videoEventType
    ::GlobalNamespace::BasicBeatmapEventType& dyn_videoEventType();
    // System.Boolean <.ctor>b__0(BasicBeatmapEventData e)
    // Offset: 0x2AC4AB8
    bool $_ctor$b__0(::GlobalNamespace::BasicBeatmapEventData* e);
    // public System.Void .ctor()
    // Offset: 0x2AC4AB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // VideoProjectionEffect/GameplayVideoProjectionBehavior/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0), 16 + sizeof(::GlobalNamespace::BasicBeatmapEventType)> __GlobalNamespace_VideoProjectionEffect_GameplayVideoProjectionBehavior_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0::$_ctor$b__0
// Il2CppName: <.ctor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0::$_ctor$b__0)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0*), "<.ctor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!