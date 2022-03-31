// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.FacetsChecker
#include "System/Xml/Schema/FacetsChecker.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlValueConverter
  class XmlValueConverter;
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Numeric10FacetsChecker
  class Numeric10FacetsChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Numeric10FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Numeric10FacetsChecker*, "System.Xml.Schema", "Numeric10FacetsChecker");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Numeric10FacetsChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class Numeric10FacetsChecker : public ::System::Xml::Schema::FacetsChecker {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Decimal maxValue
    // Size: 0x10
    // Offset: 0x10
    ::System::Decimal maxValue;
    // Field size check
    static_assert(sizeof(::System::Decimal) == 0x10);
    // private System.Decimal minValue
    // Size: 0x10
    // Offset: 0x20
    ::System::Decimal minValue;
    // Field size check
    static_assert(sizeof(::System::Decimal) == 0x10);
    public:
    // Get static field: static private readonly System.Char[] signs
    static ::ArrayW<::Il2CppChar> _get_signs();
    // Set static field: static private readonly System.Char[] signs
    static void _set_signs(::ArrayW<::Il2CppChar> value);
    // Get instance field reference: private System.Decimal maxValue
    ::System::Decimal& dyn_maxValue();
    // Get instance field reference: private System.Decimal minValue
    ::System::Decimal& dyn_minValue();
    // System.Void .ctor(System.Decimal minVal, System.Decimal maxVal)
    // Offset: 0x1C1BB90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Numeric10FacetsChecker* New_ctor(::System::Decimal minVal, ::System::Decimal maxVal) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Numeric10FacetsChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Numeric10FacetsChecker*, creationType>(minVal, maxVal)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C25D88
    static void _cctor();
    // System.Boolean MatchEnumeration(System.Decimal value, System.Collections.ArrayList enumeration, System.Xml.Schema.XmlValueConverter valueConverter)
    // Offset: 0x1C259FC
    bool MatchEnumeration(::System::Decimal value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlValueConverter* valueConverter);
    // System.Exception CheckTotalAndFractionDigits(System.Decimal value, System.Int32 totalDigits, System.Int32 fractionDigits, System.Boolean checkTotal, System.Boolean checkFraction)
    // Offset: 0x1C1DE84
    ::System::Exception* CheckTotalAndFractionDigits(::System::Decimal value, int totalDigits, int fractionDigits, bool checkTotal, bool checkFraction);
    // override System.Exception CheckValueFacets(System.Object value, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x1C2544C
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Exception FacetsChecker::CheckValueFacets(System.Object value, System.Xml.Schema.XmlSchemaDatatype datatype)
    ::System::Exception* CheckValueFacets(::Il2CppObject* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // override System.Exception CheckValueFacets(System.Decimal value, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x1C254C8
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Exception FacetsChecker::CheckValueFacets(System.Decimal value, System.Xml.Schema.XmlSchemaDatatype datatype)
    ::System::Exception* CheckValueFacets(::System::Decimal value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // override System.Exception CheckValueFacets(System.Int64 value, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x1C25B2C
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Exception FacetsChecker::CheckValueFacets(System.Int64 value, System.Xml.Schema.XmlSchemaDatatype datatype)
    ::System::Exception* CheckValueFacets(int64_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // override System.Exception CheckValueFacets(System.Int32 value, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x1C25BC8
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Exception FacetsChecker::CheckValueFacets(System.Int32 value, System.Xml.Schema.XmlSchemaDatatype datatype)
    ::System::Exception* CheckValueFacets(int value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // override System.Exception CheckValueFacets(System.Int16 value, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x1C25C64
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Exception FacetsChecker::CheckValueFacets(System.Int16 value, System.Xml.Schema.XmlSchemaDatatype datatype)
    ::System::Exception* CheckValueFacets(int16_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // override System.Boolean MatchEnumeration(System.Object value, System.Collections.ArrayList enumeration, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x1C25D00
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Boolean FacetsChecker::MatchEnumeration(System.Object value, System.Collections.ArrayList enumeration, System.Xml.Schema.XmlSchemaDatatype datatype)
    bool MatchEnumeration(::Il2CppObject* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
  }; // System.Xml.Schema.Numeric10FacetsChecker
  #pragma pack(pop)
  static check_size<sizeof(Numeric10FacetsChecker), 32 + sizeof(::System::Decimal)> __System_Xml_Schema_Numeric10FacetsCheckerSizeCheck;
  static_assert(sizeof(Numeric10FacetsChecker) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::Numeric10FacetsChecker::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Numeric10FacetsChecker*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::MatchEnumeration
// Il2CppName: MatchEnumeration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::Numeric10FacetsChecker::*)(::System::Decimal, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlValueConverter*)>(&System::Xml::Schema::Numeric10FacetsChecker::MatchEnumeration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* enumeration = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* valueConverter = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlValueConverter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Numeric10FacetsChecker*), "MatchEnumeration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, enumeration, valueConverter});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::CheckTotalAndFractionDigits
// Il2CppName: CheckTotalAndFractionDigits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Numeric10FacetsChecker::*)(::System::Decimal, int, int, bool, bool)>(&System::Xml::Schema::Numeric10FacetsChecker::CheckTotalAndFractionDigits)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* totalDigits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fractionDigits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* checkTotal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* checkFraction = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Numeric10FacetsChecker*), "CheckTotalAndFractionDigits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, totalDigits, fractionDigits, checkTotal, checkFraction});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets
// Il2CppName: CheckValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Numeric10FacetsChecker::*)(::Il2CppObject*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Numeric10FacetsChecker*), "CheckValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets
// Il2CppName: CheckValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Numeric10FacetsChecker::*)(::System::Decimal, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Numeric10FacetsChecker*), "CheckValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets
// Il2CppName: CheckValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Numeric10FacetsChecker::*)(int64_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Numeric10FacetsChecker*), "CheckValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets
// Il2CppName: CheckValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Numeric10FacetsChecker::*)(int, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Numeric10FacetsChecker*), "CheckValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets
// Il2CppName: CheckValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Numeric10FacetsChecker::*)(int16_t, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::Numeric10FacetsChecker::CheckValueFacets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Numeric10FacetsChecker*), "CheckValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Numeric10FacetsChecker::MatchEnumeration
// Il2CppName: MatchEnumeration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::Numeric10FacetsChecker::*)(::Il2CppObject*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::Numeric10FacetsChecker::MatchEnumeration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* enumeration = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Numeric10FacetsChecker*), "MatchEnumeration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, enumeration, datatype});
  }
};
