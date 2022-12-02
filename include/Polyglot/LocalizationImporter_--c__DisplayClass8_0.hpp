// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Polyglot.LocalizationImporter
#include "Polyglot/LocalizationImporter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: Localization
  class Localization;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::LocalizationImporter::$$c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizationImporter::$$c__DisplayClass8_0*, "Polyglot", "LocalizationImporter/<>c__DisplayClass8_0");
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LocalizationImporter/Polyglot.<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LocalizationImporter::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    public:
    // public Polyglot.Localization settings
    // Size: 0x8
    // Offset: 0x10
    ::Polyglot::Localization* settings;
    // Field size check
    static_assert(sizeof(::Polyglot::Localization*) == 0x8);
    public:
    // Creating conversion operator: operator ::Polyglot::Localization*
    constexpr operator ::Polyglot::Localization*() const noexcept {
      return settings;
    }
    // Get instance field reference: public Polyglot.Localization settings
    [[deprecated("Use field access instead!")]] ::Polyglot::Localization*& dyn_settings();
    // public System.Void .ctor()
    // Offset: 0x2ACD0BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationImporter::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizationImporter::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationImporter::$$c__DisplayClass8_0*, creationType>()));
    }
    // System.Void <DownloadCustomSheet>b__0(System.String s)
    // Offset: 0x2ACDA88
    void $DownloadCustomSheet$b__0(::StringW s);
  }; // Polyglot.LocalizationImporter/Polyglot.<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(LocalizationImporter::$$c__DisplayClass8_0), 16 + sizeof(::Polyglot::Localization*)> __Polyglot_LocalizationImporter_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(LocalizationImporter::$$c__DisplayClass8_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::$$c__DisplayClass8_0::$DownloadCustomSheet$b__0
// Il2CppName: <DownloadCustomSheet>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizationImporter::$$c__DisplayClass8_0::*)(::StringW)>(&Polyglot::LocalizationImporter::$$c__DisplayClass8_0::$DownloadCustomSheet$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationImporter::$$c__DisplayClass8_0*), "<DownloadCustomSheet>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
