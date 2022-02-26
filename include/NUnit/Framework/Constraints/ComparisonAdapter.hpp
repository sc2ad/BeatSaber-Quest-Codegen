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
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ComparisonAdapter
  class ComparisonAdapter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Constraints::ComparisonAdapter);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Constraints::ComparisonAdapter*, "NUnit.Framework.Constraints", "ComparisonAdapter");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ComparisonAdapter
  // [TokenAttribute] Offset: FFFFFFFF
  class ComparisonAdapter : public ::Il2CppObject {
    public:
    // Nested type: ::NUnit::Framework::Constraints::ComparisonAdapter::DefaultComparisonAdapter
    class DefaultComparisonAdapter;
    // Nested type: ::NUnit::Framework::Constraints::ComparisonAdapter::ComparerAdapter
    class ComparerAdapter;
    // static public NUnit.Framework.Constraints.ComparisonAdapter get_Default()
    // Offset: 0x1B4E50C
    static ::NUnit::Framework::Constraints::ComparisonAdapter* get_Default();
    // public System.Int32 Compare(System.Object expected, System.Object actual)
    // Offset: 0xFFFFFFFF
    int Compare(::Il2CppObject* expected, ::Il2CppObject* actual);
    // protected System.Void .ctor()
    // Offset: 0x1B4E5AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComparisonAdapter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Constraints::ComparisonAdapter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComparisonAdapter*, creationType>()));
    }
  }; // NUnit.Framework.Constraints.ComparisonAdapter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ComparisonAdapter::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Constraints::ComparisonAdapter* (*)()>(&NUnit::Framework::Constraints::ComparisonAdapter::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ComparisonAdapter*), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ComparisonAdapter::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Constraints::ComparisonAdapter::*)(::Il2CppObject*, ::Il2CppObject*)>(&NUnit::Framework::Constraints::ComparisonAdapter::Compare)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ComparisonAdapter*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ComparisonAdapter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
