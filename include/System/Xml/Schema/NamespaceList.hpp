// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ICollection
  class ICollection;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Skipping declaration: ListType because it is already included!
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: NamespaceList
  class NamespaceList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::NamespaceList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::NamespaceList*, "System.Xml.Schema", "NamespaceList");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.NamespaceList
  // [TokenAttribute] Offset: FFFFFFFF
  class NamespaceList : public ::Il2CppObject {
    public:
    // Nested type: ::System::Xml::Schema::NamespaceList::ListType
    struct ListType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ListType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ListType
      constexpr ListType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType Any
      static constexpr const int Any = 0;
      // Get static field: static public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType Any
      static ::System::Xml::Schema::NamespaceList::ListType _get_Any();
      // Set static field: static public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType Any
      static void _set_Any(::System::Xml::Schema::NamespaceList::ListType value);
      // static field const value: static public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType Other
      static constexpr const int Other = 1;
      // Get static field: static public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType Other
      static ::System::Xml::Schema::NamespaceList::ListType _get_Other();
      // Set static field: static public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType Other
      static void _set_Other(::System::Xml::Schema::NamespaceList::ListType value);
      // static field const value: static public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType Set
      static constexpr const int Set = 2;
      // Get static field: static public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType Set
      static ::System::Xml::Schema::NamespaceList::ListType _get_Set();
      // Set static field: static public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType Set
      static void _set_Set(::System::Xml::Schema::NamespaceList::ListType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType
    #pragma pack(pop)
    static check_size<sizeof(NamespaceList::ListType), 0 + sizeof(int)> __System_Xml_Schema_NamespaceList_ListTypeSizeCheck;
    static_assert(sizeof(NamespaceList::ListType) == 0x4);
    public:
    // private System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType type
    // Size: 0x4
    // Offset: 0x10
    ::System::Xml::Schema::NamespaceList::ListType type;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::NamespaceList::ListType) == 0x4);
    // Padding between fields: type and: set
    char __padding0[0x4] = {};
    // private System.Collections.Hashtable set
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Hashtable* set;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.String targetNamespace
    // Size: 0x8
    // Offset: 0x20
    ::StringW targetNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType type
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::NamespaceList::ListType& dyn_type();
    // Get instance field reference: private System.Collections.Hashtable set
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_set();
    // Get instance field reference: private System.String targetNamespace
    [[deprecated("Use field access instead!")]] ::StringW& dyn_targetNamespace();
    // public System.Xml.Schema.NamespaceList/System.Xml.Schema.ListType get_Type()
    // Offset: 0x1C8A8A4
    ::System::Xml::Schema::NamespaceList::ListType get_Type();
    // public System.String get_Excluded()
    // Offset: 0x1C8A8AC
    ::StringW get_Excluded();
    // public System.Collections.ICollection get_Enumerate()
    // Offset: 0x1C8A8B4
    ::System::Collections::ICollection* get_Enumerate();
    // public System.Void .ctor()
    // Offset: 0x1C8A628
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamespaceList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::NamespaceList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamespaceList*, creationType>()));
    }
    // public System.Void .ctor(System.String namespaces, System.String targetNamespace)
    // Offset: 0x1C8A630
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamespaceList* New_ctor(::StringW namespaces, ::StringW targetNamespace) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::NamespaceList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamespaceList*, creationType>(namespaces, targetNamespace)));
    }
    // public System.Boolean Allows(System.String ns)
    // Offset: 0x1C8A948
    bool Allows(::StringW ns);
    // public System.Boolean Allows(System.Xml.XmlQualifiedName qname)
    // Offset: 0x1C8A9D8
    bool Allows(::System::Xml::XmlQualifiedName* qname);
    // public override System.String ToString()
    // Offset: 0x1C8A9F8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Xml.Schema.NamespaceList
  #pragma pack(pop)
  static check_size<sizeof(NamespaceList), 32 + sizeof(::StringW)> __System_Xml_Schema_NamespaceListSizeCheck;
  static_assert(sizeof(NamespaceList) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::NamespaceList::ListType, "System.Xml.Schema", "NamespaceList/ListType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::NamespaceList::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList::ListType (System::Xml::Schema::NamespaceList::*)()>(&System::Xml::Schema::NamespaceList::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::NamespaceList*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::NamespaceList::get_Excluded
// Il2CppName: get_Excluded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::NamespaceList::*)()>(&System::Xml::Schema::NamespaceList::get_Excluded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::NamespaceList*), "get_Excluded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::NamespaceList::get_Enumerate
// Il2CppName: get_Enumerate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Xml::Schema::NamespaceList::*)()>(&System::Xml::Schema::NamespaceList::get_Enumerate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::NamespaceList*), "get_Enumerate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::NamespaceList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::NamespaceList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::NamespaceList::Allows
// Il2CppName: Allows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::NamespaceList::*)(::StringW)>(&System::Xml::Schema::NamespaceList::Allows)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::NamespaceList*), "Allows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::NamespaceList::Allows
// Il2CppName: Allows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::NamespaceList::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::NamespaceList::Allows)> {
  static const MethodInfo* get() {
    static auto* qname = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::NamespaceList*), "Allows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qname});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::NamespaceList::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::NamespaceList::*)()>(&System::Xml::Schema::NamespaceList::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::NamespaceList*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
