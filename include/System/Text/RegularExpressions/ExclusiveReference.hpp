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
  // Forward declaring type: ExclusiveReference
  class ExclusiveReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::ExclusiveReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::ExclusiveReference*, "System.Text.RegularExpressions", "ExclusiveReference");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.ExclusiveReference
  // [TokenAttribute] Offset: FFFFFFFF
  class ExclusiveReference : public ::Il2CppObject {
    public:
    public:
    // private System.Text.RegularExpressions.RegexRunner _ref
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::RegexRunner* ref;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexRunner*) == 0x8);
    // private System.Object _obj
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* obj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 _locked
    // Size: 0x4
    // Offset: 0x20
    int locked;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Text.RegularExpressions.RegexRunner _ref
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::RegexRunner*& dyn__ref();
    // Get instance field reference: private System.Object _obj
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__obj();
    // Get instance field reference: private System.Int32 _locked
    [[deprecated("Use field access instead!")]] int& dyn__locked();
    // public System.Void .ctor()
    // Offset: 0x1C9D704
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExclusiveReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::ExclusiveReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExclusiveReference*, creationType>()));
    }
    // System.Object Get()
    // Offset: 0x1C9D5A8
    ::Il2CppObject* Get();
    // System.Void Release(System.Object obj)
    // Offset: 0x1C9D5F8
    void Release(::Il2CppObject* obj);
  }; // System.Text.RegularExpressions.ExclusiveReference
  #pragma pack(pop)
  static check_size<sizeof(ExclusiveReference), 32 + sizeof(int)> __System_Text_RegularExpressions_ExclusiveReferenceSizeCheck;
  static_assert(sizeof(ExclusiveReference) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::ExclusiveReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::ExclusiveReference::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Text::RegularExpressions::ExclusiveReference::*)()>(&System::Text::RegularExpressions::ExclusiveReference::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::ExclusiveReference*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::ExclusiveReference::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::ExclusiveReference::*)(::Il2CppObject*)>(&System::Text::RegularExpressions::ExclusiveReference::Release)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::ExclusiveReference*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
