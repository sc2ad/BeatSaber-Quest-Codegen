// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
#include "NUnit/Framework/Internal/TestNameGenerator_NameFragment.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::TestNameGenerator::ClassFullNameFragment);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::TestNameGenerator::ClassFullNameFragment*, "NUnit.Framework.Internal", "TestNameGenerator/ClassFullNameFragment");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.ClassFullNameFragment
  // [TokenAttribute] Offset: FFFFFFFF
  class TestNameGenerator::ClassFullNameFragment : public ::NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A6B488
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
    // Base method: System.Void NameFragment::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestNameGenerator::ClassFullNameFragment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TestNameGenerator::ClassFullNameFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestNameGenerator::ClassFullNameFragment*, creationType>()));
    }
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0x2A6C0DC
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] args)
    ::StringW GetText(::System::Reflection::MethodInfo* method, ::ArrayW<::Il2CppObject*> args);
  }; // NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.ClassFullNameFragment
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::ClassFullNameFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::ClassFullNameFragment::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::TestNameGenerator::ClassFullNameFragment::*)(::System::Reflection::MethodInfo*, ::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::TestNameGenerator::ClassFullNameFragment::GetText)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::ClassFullNameFragment*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, args});
  }
};
