// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.UIItemsList`1
#include "HMUI/UIItemsList_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageWithHint
  class ImageWithHint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ImageWithHintItemsList
  class ImageWithHintItemsList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ImageWithHintItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImageWithHintItemsList*, "", "ImageWithHintItemsList");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ImageWithHintItemsList
  // [TokenAttribute] Offset: FFFFFFFF
  class ImageWithHintItemsList : public ::HMUI::UIItemsList_1<::HMUI::ImageWithHint*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x13B3C08
    // Implemented from: HMUI.UIItemsList`1
    // Base method: System.Void UIItemsList_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageWithHintItemsList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ImageWithHintItemsList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageWithHintItemsList*, creationType>()));
    }
  }; // ImageWithHintItemsList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ImageWithHintItemsList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
