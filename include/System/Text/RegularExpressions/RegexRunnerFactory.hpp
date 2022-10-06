// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexRunner
  class RegexRunner;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexRunnerFactory
  class RegexRunnerFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::RegexRunnerFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexRunnerFactory*, "System.Text.RegularExpressions", "RegexRunnerFactory");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexRunnerFactory
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: 10641D0
  class RegexRunnerFactory : public ::Il2CppObject {
    public:
    // protected internal System.Text.RegularExpressions.RegexRunner CreateInstance()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Text::RegularExpressions::RegexRunner* CreateInstance();
  }; // System.Text.RegularExpressions.RegexRunnerFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunnerFactory::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexRunner* (System::Text::RegularExpressions::RegexRunnerFactory::*)()>(&System::Text::RegularExpressions::RegexRunnerFactory::CreateInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexRunnerFactory*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
