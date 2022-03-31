// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ISimpleTestBuilder
  class ISimpleTestBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Interfaces::ISimpleTestBuilder);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Interfaces::ISimpleTestBuilder*, "NUnit.Framework.Interfaces", "ISimpleTestBuilder");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ISimpleTestBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class ISimpleTestBuilder {
    public:
    // public NUnit.Framework.Internal.TestMethod BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::NUnit::Framework::Internal::TestMethod* BuildFrom(::NUnit::Framework::Interfaces::IMethodInfo* method, ::NUnit::Framework::Internal::Test* suite);
  }; // NUnit.Framework.Interfaces.ISimpleTestBuilder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ISimpleTestBuilder::BuildFrom
// Il2CppName: BuildFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::TestMethod* (NUnit::Framework::Interfaces::ISimpleTestBuilder::*)(::NUnit::Framework::Interfaces::IMethodInfo*, ::NUnit::Framework::Internal::Test*)>(&NUnit::Framework::Interfaces::ISimpleTestBuilder::BuildFrom)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IMethodInfo")->byval_arg;
    static auto* suite = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ISimpleTestBuilder*), "BuildFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, suite});
  }
};
