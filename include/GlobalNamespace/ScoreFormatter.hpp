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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScoreFormatter
  class ScoreFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScoreFormatter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreFormatter*, "", "ScoreFormatter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ScoreFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreFormatter : public ::Il2CppObject {
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FA028
    // Get static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
    static ::System::Globalization::NumberFormatInfo* _get__numberFormatInfo();
    // Set static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
    static void _set__numberFormatInfo(::System::Globalization::NumberFormatInfo* value);
    // static private System.Void .cctor()
    // Offset: 0x13BD1D4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13BD334
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoreFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreFormatter*, creationType>()));
    }
    // static public System.String Format(System.Int32 score)
    // Offset: 0x13BD2B0
    static ::StringW Format(int score);
  }; // ScoreFormatter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreFormatter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ScoreFormatter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreFormatter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ScoreFormatter::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&GlobalNamespace::ScoreFormatter::Format)> {
  static const MethodInfo* get() {
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreFormatter*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{score});
  }
};
