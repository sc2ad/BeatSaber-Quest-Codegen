// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker
#include "TMPro/SpriteAssetUtilities/TexturePacker.hpp"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteData
#include "TMPro/SpriteAssetUtilities/TexturePacker_SpriteData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::SpriteAssetUtilities::TexturePacker::SpriteDataObject);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker::SpriteDataObject*, "TMPro.SpriteAssetUtilities", "TexturePacker/SpriteDataObject");
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteDataObject
  // [TokenAttribute] Offset: FFFFFFFF
  class TexturePacker::SpriteDataObject : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteData> frames
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>* frames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>*
    constexpr operator ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>*() const noexcept {
      return frames;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteData> frames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>*& dyn_frames();
    // public System.Void .ctor()
    // Offset: 0x1444EAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TexturePacker::SpriteDataObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::SpriteAssetUtilities::TexturePacker::SpriteDataObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TexturePacker::SpriteDataObject*, creationType>()));
    }
  }; // TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteDataObject
  #pragma pack(pop)
  static check_size<sizeof(TexturePacker::SpriteDataObject), 16 + sizeof(::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>*)> __TMPro_SpriteAssetUtilities_TexturePacker_SpriteDataObjectSizeCheck;
  static_assert(sizeof(TexturePacker::SpriteDataObject) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::SpriteAssetUtilities::TexturePacker::SpriteDataObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
