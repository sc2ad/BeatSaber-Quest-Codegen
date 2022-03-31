// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: NUnit
namespace NUnit {
  // Forward declaring type: Env
  class Env;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Env);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Env*, "NUnit", "Env");
// Type namespace: NUnit
namespace NUnit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Env
  // [TokenAttribute] Offset: FFFFFFFF
  class Env : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.String NewLine
    static ::StringW _get_NewLine();
    // Set static field: static public readonly System.String NewLine
    static void _set_NewLine(::StringW value);
    // Get static field: static public System.String DocumentFolder
    static ::StringW _get_DocumentFolder();
    // Set static field: static public System.String DocumentFolder
    static void _set_DocumentFolder(::StringW value);
    // Get static field: static public readonly System.String DefaultWorkDirectory
    static ::StringW _get_DefaultWorkDirectory();
    // Set static field: static public readonly System.String DefaultWorkDirectory
    static void _set_DefaultWorkDirectory(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x1C38074
    static void _cctor();
  }; // NUnit.Env
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Env::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Env::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Env*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
