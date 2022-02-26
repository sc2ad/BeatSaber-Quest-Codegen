// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.IXmlNodeBuilder
#include "NUnit/Framework/Interfaces/IXmlNodeBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Interfaces::ITestFilter);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Interfaces::ITestFilter*, "NUnit.Framework.Interfaces", "ITestFilter");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ITestFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class ITestFilter/*, public ::NUnit::Framework::Interfaces::IXmlNodeBuilder*/ {
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::IXmlNodeBuilder
    operator ::NUnit::Framework::Interfaces::IXmlNodeBuilder() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::IXmlNodeBuilder*>(this);
    }
    // public System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    bool Pass(::NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    bool IsExplicitMatch(::NUnit::Framework::Interfaces::ITest* test);
  }; // NUnit.Framework.Interfaces.ITestFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestFilter::Pass
// Il2CppName: Pass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITestFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Interfaces::ITestFilter::Pass)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestFilter*), "Pass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestFilter::IsExplicitMatch
// Il2CppName: IsExplicitMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITestFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Interfaces::ITestFilter::IsExplicitMatch)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestFilter*), "IsExplicitMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
