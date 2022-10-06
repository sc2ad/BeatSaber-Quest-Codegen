// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Filters.ValueMatchFilter
#include "NUnit/Framework/Internal/Filters/ValueMatchFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Filters
namespace UnityEngine::TestRunner::NUnitExtensions::Filters {
  // Forward declaring type: AssemblyNameFilter
  class AssemblyNameFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter*, "UnityEngine.TestRunner.NUnitExtensions.Filters", "AssemblyNameFilter");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Filters
namespace UnityEngine::TestRunner::NUnitExtensions::Filters {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Filters.AssemblyNameFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class AssemblyNameFilter : public ::NUnit::Framework::Internal::Filters::ValueMatchFilter {
    public:
    // public System.Void .ctor(System.String assemblyName)
    // Offset: 0x194B688
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyNameFilter* New_ctor(::StringW assemblyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyNameFilter*, creationType>(assemblyName)));
    }
    // protected override System.String get_ElementName()
    // Offset: 0x194BB80
    // Implemented from: NUnit.Framework.Internal.Filters.ValueMatchFilter
    // Base method: System.String ValueMatchFilter::get_ElementName()
    ::StringW get_ElementName();
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x194B690
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(::NUnit::Framework::Interfaces::ITest* test);
  }; // UnityEngine.TestRunner.NUnitExtensions.Filters.AssemblyNameFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter::Match)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Filters::AssemblyNameFilter*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
