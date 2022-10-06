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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CreditsData
  class CreditsData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CreditsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData*, "", "CreditsData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: CreditsData
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::CreditsData::TextStyle
    struct TextStyle;
    // Nested type: ::GlobalNamespace::CreditsData::Text
    class Text;
    // Nested type: ::GlobalNamespace::CreditsData::RootCreditsItem
    class RootCreditsItem;
    // Nested type: ::GlobalNamespace::CreditsData::ChildCreditsItem
    class ChildCreditsItem;
    public:
    // public CreditsData/RootCreditsItem[] creditsItems
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::CreditsData::RootCreditsItem*> creditsItems;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CreditsData::RootCreditsItem*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::GlobalNamespace::CreditsData::RootCreditsItem*>
    constexpr operator ::ArrayW<::GlobalNamespace::CreditsData::RootCreditsItem*>() const noexcept {
      return creditsItems;
    }
    // Get instance field reference: public CreditsData/RootCreditsItem[] creditsItems
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CreditsData::RootCreditsItem*>& dyn_creditsItems();
    // public System.Void .ctor()
    // Offset: 0x14780F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CreditsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsData*, creationType>()));
    }
    // static public CreditsData Deserialize(System.String text)
    // Offset: 0x1477FE4
    static ::GlobalNamespace::CreditsData* Deserialize(::StringW text);
  }; // CreditsData
  #pragma pack(pop)
  static check_size<sizeof(CreditsData), 16 + sizeof(::ArrayW<::GlobalNamespace::CreditsData::RootCreditsItem*>)> __GlobalNamespace_CreditsDataSizeCheck;
  static_assert(sizeof(CreditsData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::CreditsData* (*)(::StringW)>(&GlobalNamespace::CreditsData::Deserialize)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsData*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
