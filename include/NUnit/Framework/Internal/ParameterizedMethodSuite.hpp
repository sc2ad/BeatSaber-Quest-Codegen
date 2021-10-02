// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x8A
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.ParameterizedMethodSuite
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterizedMethodSuite : public NUnit::Framework::Internal::TestSuite {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Boolean _isTheory
    // Size: 0x1
    // Offset: 0x89
    bool isTheory;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return isTheory;
    }
    // Get instance field reference: private System.Boolean _isTheory
    bool& dyn__isTheory();
    // public override System.String get_TestType()
    // Offset: 0x249E3EC
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_TestType()
    ::Il2CppString* get_TestType();
    // public System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method)
    // Offset: 0x249E1A4
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.IMethodInfo method)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterizedMethodSuite* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::ParameterizedMethodSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterizedMethodSuite*, creationType>(method)));
    }
  }; // NUnit.Framework.Internal.ParameterizedMethodSuite
  #pragma pack(pop)
  static check_size<sizeof(ParameterizedMethodSuite), 137 + sizeof(bool)> __NUnit_Framework_Internal_ParameterizedMethodSuiteSizeCheck;
  static_assert(sizeof(ParameterizedMethodSuite) == 0x8A);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ParameterizedMethodSuite*, "NUnit.Framework.Internal", "ParameterizedMethodSuite");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterizedMethodSuite::get_TestType
// Il2CppName: get_TestType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::ParameterizedMethodSuite::*)()>(&NUnit::Framework::Internal::ParameterizedMethodSuite::get_TestType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ParameterizedMethodSuite*), "get_TestType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterizedMethodSuite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
