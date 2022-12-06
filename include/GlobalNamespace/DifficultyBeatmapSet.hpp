// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DifficultyBeatmapSet
  class DifficultyBeatmapSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyBeatmapSet*, "", "DifficultyBeatmapSet");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DifficultyBeatmapSet
  // [TokenAttribute] Offset: FFFFFFFF
  class DifficultyBeatmapSet : public ::Il2CppObject/*, public ::GlobalNamespace::IDifficultyBeatmapSet*/ {
    public:
    public:
    // private readonly BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private readonly System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmap> <difficultyBeatmaps>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IDifficultyBeatmapSet
    operator ::GlobalNamespace::IDifficultyBeatmapSet() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IDifficultyBeatmapSet*>(this);
    }
    // Creating interface conversion operator: i_IDifficultyBeatmapSet
    inline ::GlobalNamespace::IDifficultyBeatmapSet* i_IDifficultyBeatmapSet() noexcept {
      return reinterpret_cast<::GlobalNamespace::IDifficultyBeatmapSet*>(this);
    }
    // Get instance field reference: private readonly BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicSO*& dyn_$beatmapCharacteristic$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmap> <difficultyBeatmaps>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*& dyn_$difficultyBeatmaps$k__BackingField();
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x143BDF8
    ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmap> get_difficultyBeatmaps()
    // Offset: 0x143BE00
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic, System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmap> difficultyBeatmaps)
    // Offset: 0x143BE08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DifficultyBeatmapSet* New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DifficultyBeatmapSet*, creationType>(beatmapCharacteristic, difficultyBeatmaps)));
    }
  }; // DifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(DifficultyBeatmapSet), 24 + sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*)> __GlobalNamespace_DifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(DifficultyBeatmapSet) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSet::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::DifficultyBeatmapSet::*)()>(&GlobalNamespace::DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyBeatmapSet*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSet::get_difficultyBeatmaps
// Il2CppName: get_difficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* (GlobalNamespace::DifficultyBeatmapSet::*)()>(&GlobalNamespace::DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyBeatmapSet*), "get_difficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
