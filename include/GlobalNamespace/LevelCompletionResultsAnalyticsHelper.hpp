// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResultsAnalyticsHelper
  class LevelCompletionResultsAnalyticsHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*, "", "LevelCompletionResultsAnalyticsHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LevelCompletionResultsAnalyticsHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelCompletionResultsAnalyticsHelper : public ::Il2CppObject {
    public:
    // static public System.Void FillEventData(LevelCompletionResults levelCompletionResults, System.Collections.Generic.Dictionary`2<System.String,System.String> eventData)
    // Offset: 0x13BE20C
    static void FillEventData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);
  }; // LevelCompletionResultsAnalyticsHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResultsAnalyticsHelper::FillEventData
// Il2CppName: FillEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::LevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::LevelCompletionResultsAnalyticsHelper::FillEventData)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* eventData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResultsAnalyticsHelper*), "FillEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, eventData});
  }
};
