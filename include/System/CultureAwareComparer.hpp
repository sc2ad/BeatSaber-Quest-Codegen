// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.StringComparer
#include "System/StringComparer.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: CultureAwareComparer
  class CultureAwareComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::CultureAwareComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::CultureAwareComparer*, "System", "CultureAwareComparer");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.CultureAwareComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class CultureAwareComparer : public ::System::StringComparer {
    public:
    public:
    // private System.Globalization.CompareInfo _compareInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Globalization::CompareInfo* compareInfo;
    // Field size check
    static_assert(sizeof(::System::Globalization::CompareInfo*) == 0x8);
    // private System.Boolean _ignoreCase
    // Size: 0x1
    // Offset: 0x18
    bool ignoreCase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignoreCase and: options
    char __padding1[0x3] = {};
    // [OptionalFieldAttribute] Offset: 0x1073974
    // private System.Globalization.CompareOptions _options
    // Size: 0x4
    // Offset: 0x1C
    ::System::Globalization::CompareOptions options;
    // Field size check
    static_assert(sizeof(::System::Globalization::CompareOptions) == 0x4);
    public:
    // Get instance field reference: private System.Globalization.CompareInfo _compareInfo
    [[deprecated("Use field access instead!")]] ::System::Globalization::CompareInfo*& dyn__compareInfo();
    // Get instance field reference: private System.Boolean _ignoreCase
    [[deprecated("Use field access instead!")]] bool& dyn__ignoreCase();
    // Get instance field reference: private System.Globalization.CompareOptions _options
    [[deprecated("Use field access instead!")]] ::System::Globalization::CompareOptions& dyn__options();
    // System.Void .ctor(System.Globalization.CultureInfo culture, System.Boolean ignoreCase)
    // Offset: 0x1DAF414
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CultureAwareComparer* New_ctor(::System::Globalization::CultureInfo* culture, bool ignoreCase) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::CultureAwareComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CultureAwareComparer*, creationType>(culture, ignoreCase)));
    }
    // public override System.Int32 Compare(System.String x, System.String y)
    // Offset: 0x1DAF4BC
    // Implemented from: System.StringComparer
    // Base method: System.Int32 StringComparer::Compare(System.String x, System.String y)
    int Compare(::StringW x, ::StringW y);
    // public override System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x1DAF50C
    // Implemented from: System.StringComparer
    // Base method: System.Boolean StringComparer::Equals(System.String x, System.String y)
    bool Equals(::StringW x, ::StringW y);
    // public override System.Int32 GetHashCode(System.String obj)
    // Offset: 0x1DAF560
    // Implemented from: System.StringComparer
    // Base method: System.Int32 StringComparer::GetHashCode(System.String obj)
    int GetHashCode(::StringW obj);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1DAF604
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1DAF6CC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.CultureAwareComparer
  #pragma pack(pop)
  static check_size<sizeof(CultureAwareComparer), 28 + sizeof(::System::Globalization::CompareOptions)> __System_CultureAwareComparerSizeCheck;
  static_assert(sizeof(CultureAwareComparer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::CultureAwareComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::CultureAwareComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::CultureAwareComparer::*)(::StringW, ::StringW)>(&System::CultureAwareComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::CultureAwareComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::CultureAwareComparer::*)(::StringW, ::StringW)>(&System::CultureAwareComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::CultureAwareComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::CultureAwareComparer::*)(::StringW)>(&System::CultureAwareComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::CultureAwareComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::CultureAwareComparer::*)(::Il2CppObject*)>(&System::CultureAwareComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::CultureAwareComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::CultureAwareComparer::*)()>(&System::CultureAwareComparer::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CultureAwareComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
