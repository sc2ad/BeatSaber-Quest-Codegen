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
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
  // Skipping declaration: Use because it is already included!
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaDeclBase
  class SchemaDeclBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::SchemaDeclBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaDeclBase*, "System.Xml.Schema", "SchemaDeclBase");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SchemaDeclBase
  // [TokenAttribute] Offset: FFFFFFFF
  class SchemaDeclBase : public ::Il2CppObject {
    public:
    // Nested type: ::System::Xml::Schema::SchemaDeclBase::Use
    struct Use;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use
    // [TokenAttribute] Offset: FFFFFFFF
    struct Use/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Use
      constexpr Use(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Default
      static constexpr const int Default = 0;
      // Get static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Default
      static ::System::Xml::Schema::SchemaDeclBase::Use _get_Default();
      // Set static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Default
      static void _set_Default(::System::Xml::Schema::SchemaDeclBase::Use value);
      // static field const value: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Required
      static constexpr const int Required = 1;
      // Get static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Required
      static ::System::Xml::Schema::SchemaDeclBase::Use _get_Required();
      // Set static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Required
      static void _set_Required(::System::Xml::Schema::SchemaDeclBase::Use value);
      // static field const value: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Implied
      static constexpr const int Implied = 2;
      // Get static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Implied
      static ::System::Xml::Schema::SchemaDeclBase::Use _get_Implied();
      // Set static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Implied
      static void _set_Implied(::System::Xml::Schema::SchemaDeclBase::Use value);
      // static field const value: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Fixed
      static constexpr const int Fixed = 3;
      // Get static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Fixed
      static ::System::Xml::Schema::SchemaDeclBase::Use _get_Fixed();
      // Set static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use Fixed
      static void _set_Fixed(::System::Xml::Schema::SchemaDeclBase::Use value);
      // static field const value: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use RequiredFixed
      static constexpr const int RequiredFixed = 4;
      // Get static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use RequiredFixed
      static ::System::Xml::Schema::SchemaDeclBase::Use _get_RequiredFixed();
      // Set static field: static public System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use RequiredFixed
      static void _set_RequiredFixed(::System::Xml::Schema::SchemaDeclBase::Use value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use
    #pragma pack(pop)
    static check_size<sizeof(SchemaDeclBase::Use), 0 + sizeof(int)> __System_Xml_Schema_SchemaDeclBase_UseSizeCheck;
    static_assert(sizeof(SchemaDeclBase::Use) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // protected System.Xml.XmlQualifiedName name
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlQualifiedName* name;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // protected System.String prefix
    // Size: 0x8
    // Offset: 0x18
    ::StringW prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.Boolean isDeclaredInExternal
    // Size: 0x1
    // Offset: 0x20
    bool isDeclaredInExternal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDeclaredInExternal and: presence
    char __padding2[0x3] = {};
    // protected System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use presence
    // Size: 0x4
    // Offset: 0x24
    ::System::Xml::Schema::SchemaDeclBase::Use presence;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaDeclBase::Use) == 0x4);
    // protected System.Xml.Schema.XmlSchemaType schemaType
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::XmlSchemaType* schemaType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaType*) == 0x8);
    // protected System.Xml.Schema.XmlSchemaDatatype datatype
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Schema::XmlSchemaDatatype* datatype;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDatatype*) == 0x8);
    // protected System.String defaultValueRaw
    // Size: 0x8
    // Offset: 0x38
    ::StringW defaultValueRaw;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.Object defaultValueTyped
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* defaultValueTyped;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // protected System.Int64 maxLength
    // Size: 0x8
    // Offset: 0x48
    int64_t maxLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 minLength
    // Size: 0x8
    // Offset: 0x50
    int64_t minLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Collections.Generic.List`1<System.String> values
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::StringW>* values;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: protected System.Xml.XmlQualifiedName name
    ::System::Xml::XmlQualifiedName*& dyn_name();
    // Get instance field reference: protected System.String prefix
    ::StringW& dyn_prefix();
    // Get instance field reference: protected System.Boolean isDeclaredInExternal
    bool& dyn_isDeclaredInExternal();
    // Get instance field reference: protected System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use presence
    ::System::Xml::Schema::SchemaDeclBase::Use& dyn_presence();
    // Get instance field reference: protected System.Xml.Schema.XmlSchemaType schemaType
    ::System::Xml::Schema::XmlSchemaType*& dyn_schemaType();
    // Get instance field reference: protected System.Xml.Schema.XmlSchemaDatatype datatype
    ::System::Xml::Schema::XmlSchemaDatatype*& dyn_datatype();
    // Get instance field reference: protected System.String defaultValueRaw
    ::StringW& dyn_defaultValueRaw();
    // Get instance field reference: protected System.Object defaultValueTyped
    ::Il2CppObject*& dyn_defaultValueTyped();
    // Get instance field reference: protected System.Int64 maxLength
    int64_t& dyn_maxLength();
    // Get instance field reference: protected System.Int64 minLength
    int64_t& dyn_minLength();
    // Get instance field reference: protected System.Collections.Generic.List`1<System.String> values
    ::System::Collections::Generic::List_1<::StringW>*& dyn_values();
    // System.Xml.XmlQualifiedName get_Name()
    // Offset: 0x1C292A8
    ::System::Xml::XmlQualifiedName* get_Name();
    // System.String get_Prefix()
    // Offset: 0x1C28E38
    ::StringW get_Prefix();
    // System.Boolean get_IsDeclaredInExternal()
    // Offset: 0x1C292B0
    bool get_IsDeclaredInExternal();
    // System.Void set_IsDeclaredInExternal(System.Boolean value)
    // Offset: 0x1C292B8
    void set_IsDeclaredInExternal(bool value);
    // System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use get_Presence()
    // Offset: 0x1C292C4
    ::System::Xml::Schema::SchemaDeclBase::Use get_Presence();
    // System.Void set_Presence(System.Xml.Schema.SchemaDeclBase/System.Xml.Schema.Use value)
    // Offset: 0x1C292CC
    void set_Presence(::System::Xml::Schema::SchemaDeclBase::Use value);
    // System.Void set_SchemaType(System.Xml.Schema.XmlSchemaType value)
    // Offset: 0x1C292D4
    void set_SchemaType(::System::Xml::Schema::XmlSchemaType* value);
    // System.Xml.Schema.XmlSchemaDatatype get_Datatype()
    // Offset: 0x1C292DC
    ::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();
    // System.Void set_Datatype(System.Xml.Schema.XmlSchemaDatatype value)
    // Offset: 0x1C292E4
    void set_Datatype(::System::Xml::Schema::XmlSchemaDatatype* value);
    // System.Collections.Generic.List`1<System.String> get_Values()
    // Offset: 0x1C29384
    ::System::Collections::Generic::List_1<::StringW>* get_Values();
    // System.String get_DefaultValueRaw()
    // Offset: 0x1C2938C
    ::StringW get_DefaultValueRaw();
    // System.Object get_DefaultValueTyped()
    // Offset: 0x1C293E8
    ::Il2CppObject* get_DefaultValueTyped();
    // System.Void set_DefaultValueTyped(System.Object value)
    // Offset: 0x1C293F0
    void set_DefaultValueTyped(::Il2CppObject* value);
    // protected System.Void .ctor(System.Xml.XmlQualifiedName name, System.String prefix)
    // Offset: 0x1C28CC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaDeclBase* New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaDeclBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaDeclBase*, creationType>(name, prefix)));
    }
    // System.Void AddValue(System.String value)
    // Offset: 0x1C292EC
    void AddValue(::StringW value);
    // protected System.Void .ctor()
    // Offset: 0x1C28D64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaDeclBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaDeclBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaDeclBase*, creationType>()));
    }
  }; // System.Xml.Schema.SchemaDeclBase
  #pragma pack(pop)
  static check_size<sizeof(SchemaDeclBase), 88 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __System_Xml_Schema_SchemaDeclBaseSizeCheck;
  static_assert(sizeof(SchemaDeclBase) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaDeclBase::Use, "System.Xml.Schema", "SchemaDeclBase/Use");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::SchemaDeclBase::*)()>(&System::Xml::Schema::SchemaDeclBase::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaDeclBase::*)()>(&System::Xml::Schema::SchemaDeclBase::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal
// Il2CppName: get_IsDeclaredInExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SchemaDeclBase::*)()>(&System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "get_IsDeclaredInExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal
// Il2CppName: set_IsDeclaredInExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaDeclBase::*)(bool)>(&System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "set_IsDeclaredInExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::get_Presence
// Il2CppName: get_Presence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaDeclBase::Use (System::Xml::Schema::SchemaDeclBase::*)()>(&System::Xml::Schema::SchemaDeclBase::get_Presence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "get_Presence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::set_Presence
// Il2CppName: set_Presence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::SchemaDeclBase::Use)>(&System::Xml::Schema::SchemaDeclBase::set_Presence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaDeclBase/Use")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "set_Presence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::set_SchemaType
// Il2CppName: set_SchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::SchemaDeclBase::set_SchemaType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "set_SchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::get_Datatype
// Il2CppName: get_Datatype
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (System::Xml::Schema::SchemaDeclBase::*)()>(&System::Xml::Schema::SchemaDeclBase::get_Datatype)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "get_Datatype", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::set_Datatype
// Il2CppName: set_Datatype
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::SchemaDeclBase::set_Datatype)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "set_Datatype", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (System::Xml::Schema::SchemaDeclBase::*)()>(&System::Xml::Schema::SchemaDeclBase::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw
// Il2CppName: get_DefaultValueRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaDeclBase::*)()>(&System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "get_DefaultValueRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped
// Il2CppName: get_DefaultValueTyped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::SchemaDeclBase::*)()>(&System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "get_DefaultValueTyped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped
// Il2CppName: set_DefaultValueTyped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaDeclBase::*)(::Il2CppObject*)>(&System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "set_DefaultValueTyped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::AddValue
// Il2CppName: AddValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaDeclBase::*)(::StringW)>(&System::Xml::Schema::SchemaDeclBase::AddValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaDeclBase*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaDeclBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
