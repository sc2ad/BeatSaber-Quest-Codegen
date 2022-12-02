// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Forward declaring type: AddressablesRuntimeProperties
  class AddressablesRuntimeProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*, "UnityEngine.AddressableAssets.Initialization", "AddressablesRuntimeProperties");
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.AddressablesRuntimeProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class AddressablesRuntimeProperties : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.Stack`1<System.String> s_TokenStack
    static ::System::Collections::Generic::Stack_1<::StringW>* _get_s_TokenStack();
    // Set static field: static private System.Collections.Generic.Stack`1<System.String> s_TokenStack
    static void _set_s_TokenStack(::System::Collections::Generic::Stack_1<::StringW>* value);
    // Get static field: static private System.Collections.Generic.Stack`1<System.Int32> s_TokenStartStack
    static ::System::Collections::Generic::Stack_1<int>* _get_s_TokenStartStack();
    // Set static field: static private System.Collections.Generic.Stack`1<System.Int32> s_TokenStartStack
    static void _set_s_TokenStartStack(::System::Collections::Generic::Stack_1<int>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_CachedValues
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _get_s_CachedValues();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_CachedValues
    static void _set_s_CachedValues(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x18DCE3C
    static void _cctor();
    // static private System.Reflection.Assembly[] GetAssemblies()
    // Offset: 0x18DC35C
    static ::ArrayW<::System::Reflection::Assembly*> GetAssemblies();
    // static System.Int32 GetCachedValueCount()
    // Offset: 0x18DC380
    static int GetCachedValueCount();
    // static public System.Void SetPropertyValue(System.String name, System.String val)
    // Offset: 0x18DC3FC
    static void SetPropertyValue(::StringW name, ::StringW val);
    // static public System.Void ClearCachedPropertyValues()
    // Offset: 0x18DC490
    static void ClearCachedPropertyValues();
    // static public System.String EvaluateProperty(System.String name)
    // Offset: 0x18DC50C
    static ::StringW EvaluateProperty(::StringW name);
    // static public System.String EvaluateString(System.String input)
    // Offset: 0x18D32E8
    static ::StringW EvaluateString(::StringW input);
    // static public System.String EvaluateString(System.String inputString, System.Char startDelimiter, System.Char endDelimiter, System.Func`2<System.String,System.String> varFunc)
    // Offset: 0x18DC948
    static ::StringW EvaluateString(::StringW inputString, ::Il2CppChar startDelimiter, ::Il2CppChar endDelimiter, ::System::Func_2<::StringW, ::StringW>* varFunc);
  }; // UnityEngine.AddressableAssets.Initialization.AddressablesRuntimeProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::GetAssemblies
// Il2CppName: GetAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::Assembly*> (*)()>(&UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::GetAssemblies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*), "GetAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::GetCachedValueCount
// Il2CppName: GetCachedValueCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::GetCachedValueCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*), "GetCachedValueCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::SetPropertyValue
// Il2CppName: SetPropertyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::SetPropertyValue)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*), "SetPropertyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, val});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::ClearCachedPropertyValues
// Il2CppName: ClearCachedPropertyValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::ClearCachedPropertyValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*), "ClearCachedPropertyValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateProperty
// Il2CppName: EvaluateProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateProperty)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*), "EvaluateProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateString
// Il2CppName: EvaluateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateString)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*), "EvaluateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateString
// Il2CppName: EvaluateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Il2CppChar, ::Il2CppChar, ::System::Func_2<::StringW, ::StringW>*)>(&UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateString)> {
  static const MethodInfo* get() {
    static auto* inputString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startDelimiter = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* endDelimiter = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* varFunc = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*), "EvaluateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputString, startDelimiter, endDelimiter, varFunc});
  }
};
