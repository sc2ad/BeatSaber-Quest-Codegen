// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: CustomDifficultyBeatmap
  class CustomDifficultyBeatmap;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CustomDifficultyBeatmapSet
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomDifficultyBeatmapSet : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmapSet*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private CustomDifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<GlobalNamespace::CustomDifficultyBeatmap*> difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::CustomDifficultyBeatmap*>) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmapSet
    operator GlobalNamespace::IDifficultyBeatmapSet() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmapSet*>(this);
    }
    // Get instance field reference: private BeatmapCharacteristicSO _beatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO*& dyn__beatmapCharacteristic();
    // Get instance field reference: private CustomDifficultyBeatmap[] _difficultyBeatmaps
    ::ArrayW<GlobalNamespace::CustomDifficultyBeatmap*>& dyn__difficultyBeatmaps();
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x11A1998
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x11A19A0
    ::ArrayW<GlobalNamespace::IDifficultyBeatmap*> get_difficultyBeatmaps();
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x11A19A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomDifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomDifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomDifficultyBeatmapSet*, creationType>(beatmapCharacteristic)));
    }
    // public System.Void SetCustomDifficultyBeatmaps(CustomDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x11A19D4
    void SetCustomDifficultyBeatmaps(::ArrayW<GlobalNamespace::CustomDifficultyBeatmap*> difficultyBeatmaps);
  }; // CustomDifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(CustomDifficultyBeatmapSet), 24 + sizeof(::ArrayW<GlobalNamespace::CustomDifficultyBeatmap*>)> __GlobalNamespace_CustomDifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(CustomDifficultyBeatmapSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomDifficultyBeatmapSet*, "", "CustomDifficultyBeatmapSet");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmapSet::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::CustomDifficultyBeatmapSet::*)()>(&GlobalNamespace::CustomDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmapSet*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmapSet::get_difficultyBeatmaps
// Il2CppName: get_difficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::IDifficultyBeatmap*> (GlobalNamespace::CustomDifficultyBeatmapSet::*)()>(&GlobalNamespace::CustomDifficultyBeatmapSet::get_difficultyBeatmaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmapSet*), "get_difficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmapSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmapSet::SetCustomDifficultyBeatmaps
// Il2CppName: SetCustomDifficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomDifficultyBeatmapSet::*)(::ArrayW<GlobalNamespace::CustomDifficultyBeatmap*>)>(&GlobalNamespace::CustomDifficultyBeatmapSet::SetCustomDifficultyBeatmaps)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmaps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "CustomDifficultyBeatmap"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmapSet*), "SetCustomDifficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmaps});
  }
};
