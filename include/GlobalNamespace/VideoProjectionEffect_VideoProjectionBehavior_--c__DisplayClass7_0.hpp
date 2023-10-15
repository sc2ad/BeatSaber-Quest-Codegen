// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VideoProjectionEffect/VideoProjectionBehavior
#include "GlobalNamespace/VideoProjectionEffect_VideoProjectionBehavior.hpp"
// Including type: VideoProjectionDataModelSO
#include "GlobalNamespace/VideoProjectionDataModelSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0*, "", "VideoProjectionEffect/VideoProjectionBehavior/<>c__DisplayClass7_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VideoProjectionEffect/VideoProjectionBehavior/<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 eventValue
    // Size: 0x4
    // Offset: 0x10
    int eventValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return eventValue;
    }
    // Get instance field reference: public System.Int32 eventValue
    [[deprecated("Use field access instead!")]] int& dyn_eventValue();
    // public System.Void .ctor()
    // Offset: 0x1542094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0*, creationType>()));
    }
    // System.Boolean <LoadVideoFromModel>b__0(VideoProjectionDataModelSO/VideoClipWithId clipWithId)
    // Offset: 0x154209C
    bool $LoadVideoFromModel$b__0(::GlobalNamespace::VideoProjectionDataModelSO::VideoClipWithId* clipWithId);
  }; // VideoProjectionEffect/VideoProjectionBehavior/<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0), 16 + sizeof(int)> __GlobalNamespace_VideoProjectionEffect_VideoProjectionBehavior_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0::$LoadVideoFromModel$b__0
// Il2CppName: <LoadVideoFromModel>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0::*)(::GlobalNamespace::VideoProjectionDataModelSO::VideoClipWithId*)>(&GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0::$LoadVideoFromModel$b__0)> {
  static const MethodInfo* get() {
    static auto* clipWithId = &::il2cpp_utils::GetClassFromName("", "VideoProjectionDataModelSO/VideoClipWithId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior::$$c__DisplayClass7_0*), "<LoadVideoFromModel>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipWithId});
  }
};