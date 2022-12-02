// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: TrueConstraint
  class TrueConstraint;
  // Forward declaring type: FalseConstraint
  class FalseConstraint;
  // Forward declaring type: EqualConstraint
  class EqualConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Forward declaring type: Is
  class Is;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Is);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Is*, "NUnit.Framework", "Is");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Is
  // [TokenAttribute] Offset: FFFFFFFF
  class Is : public ::Il2CppObject {
    public:
    // static public NUnit.Framework.Constraints.TrueConstraint get_True()
    // Offset: 0x2A7BAE8
    static ::NUnit::Framework::Constraints::TrueConstraint* get_True();
    // static public NUnit.Framework.Constraints.FalseConstraint get_False()
    // Offset: 0x2A7BB44
    static ::NUnit::Framework::Constraints::FalseConstraint* get_False();
    // static public NUnit.Framework.Constraints.EqualConstraint EqualTo(System.Object expected)
    // Offset: 0x2A7BBA0
    static ::NUnit::Framework::Constraints::EqualConstraint* EqualTo(::Il2CppObject* expected);
  }; // NUnit.Framework.Is
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Is::get_True
// Il2CppName: get_True
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Constraints::TrueConstraint* (*)()>(&NUnit::Framework::Is::get_True)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Is*), "get_True", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Is::get_False
// Il2CppName: get_False
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Constraints::FalseConstraint* (*)()>(&NUnit::Framework::Is::get_False)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Is*), "get_False", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Is::EqualTo
// Il2CppName: EqualTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Constraints::EqualConstraint* (*)(::Il2CppObject*)>(&NUnit::Framework::Is::EqualTo)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Is*), "EqualTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected});
  }
};
