// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Compatibility
namespace NUnit::Compatibility {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: NUnit.Compatibility
namespace NUnit::Compatibility {
  // Forward declaring type: AdditionalTypeExtensions
  class AdditionalTypeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Compatibility::AdditionalTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Compatibility::AdditionalTypeExtensions*, "NUnit.Compatibility", "AdditionalTypeExtensions");
// Type namespace: NUnit.Compatibility
namespace NUnit::Compatibility {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Compatibility.AdditionalTypeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AdditionalTypeExtensions : public ::Il2CppObject {
    public:
    // Nested type: ::NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Type>> convertibleValueTypes
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*>* _get_convertibleValueTypes();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Type>> convertibleValueTypes
    static void _set_convertibleValueTypes(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1D43364
    static void _cctor();
    // static public System.Boolean ParametersMatch(System.Reflection.ParameterInfo[] pinfos, System.Type[] ptypes)
    // Offset: 0x1D43004
    static bool ParametersMatch(::ArrayW<::System::Reflection::ParameterInfo*> pinfos, ::ArrayW<::System::Type*> ptypes);
    // static public System.Boolean IsCastableFrom(System.Type to, System.Type from)
    // Offset: 0x1D43118
    static bool IsCastableFrom(::System::Type* to, ::System::Type* from);
  }; // NUnit.Compatibility.AdditionalTypeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Compatibility::AdditionalTypeExtensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Compatibility::AdditionalTypeExtensions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Compatibility::AdditionalTypeExtensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Compatibility::AdditionalTypeExtensions::ParametersMatch
// Il2CppName: ParametersMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::System::Reflection::ParameterInfo*>, ::ArrayW<::System::Type*>)>(&NUnit::Compatibility::AdditionalTypeExtensions::ParametersMatch)> {
  static const MethodInfo* get() {
    static auto* pinfos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo"), 1)->byval_arg;
    static auto* ptypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Compatibility::AdditionalTypeExtensions*), "ParametersMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pinfos, ptypes});
  }
};
// Writing MetadataGetter for method: NUnit::Compatibility::AdditionalTypeExtensions::IsCastableFrom
// Il2CppName: IsCastableFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&NUnit::Compatibility::AdditionalTypeExtensions::IsCastableFrom)> {
  static const MethodInfo* get() {
    static auto* to = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* from = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Compatibility::AdditionalTypeExtensions*), "IsCastableFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{to, from});
  }
};
