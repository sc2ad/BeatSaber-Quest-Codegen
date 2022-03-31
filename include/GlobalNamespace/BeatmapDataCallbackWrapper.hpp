// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataCallbackWrapper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataCallbackWrapper*, "", "BeatmapDataCallbackWrapper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataCallbackWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataCallbackWrapper : public ::Il2CppObject {
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
    // public readonly System.Type BasicBeatmapEventType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* BasicBeatmapEventType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public readonly System.Single aheadTime
    // Size: 0x4
    // Offset: 0x18
    float aheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: aheadTime and: subtypeIdentifiers
    char __padding1[0x4] = {};
    // public readonly System.Int32[] subtypeIdentifiers
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> subtypeIdentifiers;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: public readonly System.Type BasicBeatmapEventType
    ::System::Type*& dyn_BasicBeatmapEventType();
    // Get instance field reference: public readonly System.Single aheadTime
    float& dyn_aheadTime();
    // Get instance field reference: public readonly System.Int32[] subtypeIdentifiers
    ::ArrayW<int>& dyn_subtypeIdentifiers();
    // protected System.Void .ctor(System.Single aheadTime, System.Type BasicBeatmapEventType, params System.Int32[] subtypeIdentifiers)
    // Offset: 0x1368C38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataCallbackWrapper* New_ctor(float aheadTime, ::System::Type* BasicBeatmapEventType, ::ArrayW<int> subtypeIdentifiers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataCallbackWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataCallbackWrapper*, creationType>(aheadTime, BasicBeatmapEventType, subtypeIdentifiers)));
    }
    // public System.Void CallCallback(BeatmapDataItem beatmapData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CallCallback(::GlobalNamespace::BeatmapDataItem* beatmapData);
  }; // BeatmapDataCallbackWrapper
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataCallbackWrapper), 32 + sizeof(::ArrayW<int>)> __GlobalNamespace_BeatmapDataCallbackWrapperSizeCheck;
  static_assert(sizeof(BeatmapDataCallbackWrapper) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataCallbackWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataCallbackWrapper::CallCallback
// Il2CppName: CallCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataCallbackWrapper::*)(::GlobalNamespace::BeatmapDataItem*)>(&GlobalNamespace::BeatmapDataCallbackWrapper::CallCallback)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataCallbackWrapper*), "CallCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
