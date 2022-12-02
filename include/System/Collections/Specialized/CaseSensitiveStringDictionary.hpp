// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Specialized.StringDictionary
#include "System/Collections/Specialized/StringDictionary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: CaseSensitiveStringDictionary
  class CaseSensitiveStringDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::CaseSensitiveStringDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::CaseSensitiveStringDictionary*, "System.Collections.Specialized", "CaseSensitiveStringDictionary");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.CaseSensitiveStringDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 107C31C
  class CaseSensitiveStringDictionary : public ::System::Collections::Specialized::StringDictionary {
    public:
    // public System.Void .ctor()
    // Offset: 0x1E14978
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaseSensitiveStringDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::CaseSensitiveStringDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaseSensitiveStringDictionary*, creationType>()));
    }
    // public override System.Void Add(System.String key, System.String value)
    // Offset: 0x1E149E4
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::Add(System.String key, System.String value)
    void Add(::StringW key, ::StringW value);
  }; // System.Collections.Specialized.CaseSensitiveStringDictionary
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::CaseSensitiveStringDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::CaseSensitiveStringDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::CaseSensitiveStringDictionary::*)(::StringW, ::StringW)>(&System::Collections::Specialized::CaseSensitiveStringDictionary::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::CaseSensitiveStringDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
