// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelData
  class BeatmapLevelData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelData*, "", "BeatmapLevelData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelData : public ::Il2CppObject/*, public ::GlobalNamespace::IBeatmapLevelData*/ {
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
    // private readonly UnityEngine.AudioClip _audioClip
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private readonly System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmapSet> _difficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBeatmapLevelData
    operator ::GlobalNamespace::IBeatmapLevelData() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBeatmapLevelData*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.AudioClip _audioClip
    ::UnityEngine::AudioClip*& dyn__audioClip();
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmapSet> _difficultyBeatmapSets
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*& dyn__difficultyBeatmapSets();
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x14CABD8
    ::UnityEngine::AudioClip* get_audioClip();
    // public System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmapSet> get_difficultyBeatmapSets()
    // Offset: 0x14CABE0
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor(UnityEngine.AudioClip audioClip, System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmapSet> difficultyBeatmapSets)
    // Offset: 0x14CABE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelData* New_ctor(::UnityEngine::AudioClip* audioClip, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapLevelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelData*, creationType>(audioClip, difficultyBeatmapSets)));
    }
  }; // BeatmapLevelData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelData), 24 + sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*)> __GlobalNamespace_BeatmapLevelDataSizeCheck;
  static_assert(sizeof(BeatmapLevelData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelData::get_audioClip
// Il2CppName: get_audioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (GlobalNamespace::BeatmapLevelData::*)()>(&GlobalNamespace::BeatmapLevelData::get_audioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelData*), "get_audioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelData::get_difficultyBeatmapSets
// Il2CppName: get_difficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* (GlobalNamespace::BeatmapLevelData::*)()>(&GlobalNamespace::BeatmapLevelData::get_difficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelData*), "get_difficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
