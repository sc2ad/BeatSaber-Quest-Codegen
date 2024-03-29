// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
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
  // Forward declaring type: DifficultyBeatmapSetExtensions
  class DifficultyBeatmapSetExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DifficultyBeatmapSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyBeatmapSetExtensions*, "", "DifficultyBeatmapSetExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DifficultyBeatmapSetExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class DifficultyBeatmapSetExtensions : public ::Il2CppObject {
    public:
    // static public System.Collections.Generic.IReadOnlyList`1<T> GetDifficultyBeatmapSetsWithout360Movement(System.Collections.Generic.IReadOnlyList`1<T> difficultyBeatmapSets)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IReadOnlyList_1<T>* GetDifficultyBeatmapSetsWithout360Movement(::System::Collections::Generic::IReadOnlyList_1<T>* difficultyBeatmapSets) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IDifficultyBeatmapSet>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DifficultyBeatmapSetExtensions::GetDifficultyBeatmapSetsWithout360Movement");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "DifficultyBeatmapSetExtensions", "GetDifficultyBeatmapSetsWithout360Movement", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(difficultyBeatmapSets)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, difficultyBeatmapSets);
    }
    // static public System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> GetPreviewDifficultyBeatmapSets(System.Collections.Generic.IReadOnlyList`1<T> difficultyBeatmapSets)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* GetPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<T>* difficultyBeatmapSets) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IDifficultyBeatmapSet>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSets");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "DifficultyBeatmapSetExtensions", "GetPreviewDifficultyBeatmapSets", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(difficultyBeatmapSets)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, difficultyBeatmapSets);
    }
  }; // DifficultyBeatmapSetExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSetExtensions::GetDifficultyBeatmapSetsWithout360Movement
// Il2CppName: GetDifficultyBeatmapSetsWithout360Movement
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSets
// Il2CppName: GetPreviewDifficultyBeatmapSets
// Cannot write MetadataGetter for generic methods!
