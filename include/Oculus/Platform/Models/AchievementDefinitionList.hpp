// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementDefinition
  class AchievementDefinition;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementDefinitionList
  class AchievementDefinitionList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::AchievementDefinitionList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementDefinitionList*, "Oculus.Platform.Models", "AchievementDefinitionList");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.AchievementDefinitionList
  // [TokenAttribute] Offset: FFFFFFFF
  class AchievementDefinitionList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::AchievementDefinition*> {
    public:
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0x19F3A3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementDefinitionList* New_ctor(::System::IntPtr a) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::AchievementDefinitionList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementDefinitionList*, creationType>(a)));
    }
  }; // Oculus.Platform.Models.AchievementDefinitionList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::AchievementDefinitionList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
