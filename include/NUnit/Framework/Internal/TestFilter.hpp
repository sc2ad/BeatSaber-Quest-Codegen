// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.ITestFilter
#include "NUnit/Framework/Interfaces/ITestFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestFilter
  class TestFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::TestFilter);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::TestFilter*, "NUnit.Framework.Internal", "TestFilter");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class TestFilter : public ::Il2CppObject/*, public ::NUnit::Framework::Interfaces::ITestFilter*/ {
    public:
    // Nested type: ::NUnit::Framework::Internal::TestFilter::EmptyFilter
    class EmptyFilter;
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::ITestFilter
    operator ::NUnit::Framework::Interfaces::ITestFilter() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::ITestFilter*>(this);
    }
    // Creating interface conversion operator: i_ITestFilter
    inline ::NUnit::Framework::Interfaces::ITestFilter* i_ITestFilter() noexcept {
      return reinterpret_cast<::NUnit::Framework::Interfaces::ITestFilter*>(this);
    }
    // Get static field: static public readonly NUnit.Framework.Internal.TestFilter Empty
    static ::NUnit::Framework::Internal::TestFilter* _get_Empty();
    // Set static field: static public readonly NUnit.Framework.Internal.TestFilter Empty
    static void _set_Empty(::NUnit::Framework::Internal::TestFilter* value);
    // protected System.Void .ctor()
    // Offset: 0x2A73C10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TestFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestFilter*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2A73C18
    static void _cctor();
    // public System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x2A73554
    bool Pass(::NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x2A73774
    bool IsExplicitMatch(::NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Match(::NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean MatchParent(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x2A735B4
    bool MatchParent(::NUnit::Framework::Interfaces::ITest* test);
    // protected System.Boolean MatchDescendant(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x2A737C4
    bool MatchDescendant(::NUnit::Framework::Interfaces::ITest* test);
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x2A73B88
    ::NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::NUnit::Framework::Interfaces::TNode* AddToXml(::NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.TestFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::TestFilter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::Pass
// Il2CppName: Pass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestFilter::Pass)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter*), "Pass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::IsExplicitMatch
// Il2CppName: IsExplicitMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestFilter::IsExplicitMatch)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter*), "IsExplicitMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestFilter::Match)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::MatchParent
// Il2CppName: MatchParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestFilter::MatchParent)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter*), "MatchParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::MatchDescendant
// Il2CppName: MatchDescendant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestFilter::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestFilter::MatchDescendant)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter*), "MatchDescendant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestFilter::*)(bool)>(&NUnit::Framework::Internal::TestFilter::ToXml)> {
  static const MethodInfo* get() {
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recursive});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestFilter::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestFilter::*)(::NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::TestFilter::AddToXml)> {
  static const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestFilter*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
