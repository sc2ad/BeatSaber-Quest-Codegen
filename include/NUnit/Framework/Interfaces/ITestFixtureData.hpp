// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.ITestData
#include "NUnit/Framework/Interfaces/ITestData.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFixtureData
  class ITestFixtureData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Interfaces::ITestFixtureData);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Interfaces::ITestFixtureData*, "NUnit.Framework.Interfaces", "ITestFixtureData");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ITestFixtureData
  // [TokenAttribute] Offset: FFFFFFFF
  class ITestFixtureData/*, public ::NUnit::Framework::Interfaces::ITestData*/ {
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::ITestData
    operator ::NUnit::Framework::Interfaces::ITestData() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::ITestData*>(this);
    }
    // Creating interface conversion operator: i_ITestData
    inline ::NUnit::Framework::Interfaces::ITestData* i_ITestData() noexcept {
      return reinterpret_cast<::NUnit::Framework::Interfaces::ITestData*>(this);
    }
    // public System.Type[] get_TypeArgs()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::System::Type*> get_TypeArgs();
  }; // NUnit.Framework.Interfaces.ITestFixtureData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestFixtureData::get_TypeArgs
// Il2CppName: get_TypeArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (NUnit::Framework::Interfaces::ITestFixtureData::*)()>(&NUnit::Framework::Interfaces::ITestFixtureData::get_TypeArgs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestFixtureData*), "get_TypeArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
