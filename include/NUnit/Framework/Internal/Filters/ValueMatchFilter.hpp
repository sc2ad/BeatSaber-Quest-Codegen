// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestFilter
#include "NUnit/Framework/Internal/TestFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Forward declaring type: ValueMatchFilter
  class ValueMatchFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::Filters::ValueMatchFilter);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::Filters::ValueMatchFilter*, "NUnit.Framework.Internal.Filters", "ValueMatchFilter");
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Filters.ValueMatchFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class ValueMatchFilter : public ::NUnit::Framework::Internal::TestFilter {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x10F3100
    // private System.String <ExpectedValue>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW ExpectedValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x10F313C
    // private System.Boolean <IsRegex>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsRegex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <ExpectedValue>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ExpectedValue$k__BackingField();
    // Get instance field reference: private System.Boolean <IsRegex>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsRegex$k__BackingField();
    // public System.String get_ExpectedValue()
    // Offset: 0x1CF67CC
    ::StringW get_ExpectedValue();
    // private System.Void set_ExpectedValue(System.String value)
    // Offset: 0x1CF67D4
    void set_ExpectedValue(::StringW value);
    // public System.Boolean get_IsRegex()
    // Offset: 0x1CF67DC
    bool get_IsRegex();
    // public System.Void set_IsRegex(System.Boolean value)
    // Offset: 0x1CF67E4
    void set_IsRegex(bool value);
    // protected System.String get_ElementName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ElementName();
    // public System.Void .ctor(System.String expectedValue)
    // Offset: 0x1CF52D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueMatchFilter* New_ctor(::StringW expectedValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::Filters::ValueMatchFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueMatchFilter*, creationType>(expectedValue)));
    }
    // protected System.Boolean Match(System.String input)
    // Offset: 0x1CF5734
    bool Match(::StringW input);
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x1CF67F0
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: NUnit.Framework.Interfaces.TNode TestFilter::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    ::NUnit::Framework::Interfaces::TNode* AddToXml(::NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.Filters.ValueMatchFilter
  #pragma pack(pop)
  static check_size<sizeof(ValueMatchFilter), 24 + sizeof(bool)> __NUnit_Framework_Internal_Filters_ValueMatchFilterSizeCheck;
  static_assert(sizeof(ValueMatchFilter) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::get_ExpectedValue
// Il2CppName: get_ExpectedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)()>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::get_ExpectedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "get_ExpectedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::set_ExpectedValue
// Il2CppName: set_ExpectedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)(::StringW)>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::set_ExpectedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "set_ExpectedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::get_IsRegex
// Il2CppName: get_IsRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)()>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::get_IsRegex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "get_IsRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::set_IsRegex
// Il2CppName: set_IsRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)(bool)>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::set_IsRegex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "set_IsRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)()>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)(::StringW)>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::Match)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)(::NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::AddToXml)> {
  static const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
