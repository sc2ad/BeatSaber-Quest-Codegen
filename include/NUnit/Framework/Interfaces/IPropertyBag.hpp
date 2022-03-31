// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.IXmlNodeBuilder
#include "NUnit/Framework/Interfaces/IXmlNodeBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Interfaces::IPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Interfaces::IPropertyBag*, "NUnit.Framework.Interfaces", "IPropertyBag");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.IPropertyBag
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 12446A4
  class IPropertyBag/*, public ::NUnit::Framework::Interfaces::IXmlNodeBuilder*/ {
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::IXmlNodeBuilder
    operator ::NUnit::Framework::Interfaces::IXmlNodeBuilder() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::IXmlNodeBuilder*>(this);
    }
    // public System.Collections.IList get_Item(System.String key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IList* get_Item(::StringW key);
    // public System.Collections.Generic.ICollection`1<System.String> get_Keys()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys();
    // public System.Void Add(System.String key, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(::StringW key, ::Il2CppObject* value);
    // public System.Void Set(System.String key, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Set(::StringW key, ::Il2CppObject* value);
    // public System.Object Get(System.String key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* Get(::StringW key);
    // public System.Boolean ContainsKey(System.String key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ContainsKey(::StringW key);
  }; // NUnit.Framework.Interfaces.IPropertyBag
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IPropertyBag::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (NUnit::Framework::Interfaces::IPropertyBag::*)(::StringW)>(&NUnit::Framework::Interfaces::IPropertyBag::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IPropertyBag*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IPropertyBag::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (NUnit::Framework::Interfaces::IPropertyBag::*)()>(&NUnit::Framework::Interfaces::IPropertyBag::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IPropertyBag*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IPropertyBag::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::IPropertyBag::*)(::StringW, ::Il2CppObject*)>(&NUnit::Framework::Interfaces::IPropertyBag::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IPropertyBag*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IPropertyBag::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::IPropertyBag::*)(::StringW, ::Il2CppObject*)>(&NUnit::Framework::Interfaces::IPropertyBag::Set)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IPropertyBag*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IPropertyBag::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Interfaces::IPropertyBag::*)(::StringW)>(&NUnit::Framework::Interfaces::IPropertyBag::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IPropertyBag*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IPropertyBag::ContainsKey
// Il2CppName: ContainsKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::IPropertyBag::*)(::StringW)>(&NUnit::Framework::Interfaces::IPropertyBag::ContainsKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IPropertyBag*), "ContainsKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
