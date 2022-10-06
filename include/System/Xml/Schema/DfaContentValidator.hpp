// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.ContentValidator
#include "System/Xml/Schema/ContentValidator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SymbolsDictionary
  class SymbolsDictionary;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: DfaContentValidator
  class DfaContentValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::DfaContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DfaContentValidator*, "System.Xml.Schema", "DfaContentValidator");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.DfaContentValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class DfaContentValidator : public ::System::Xml::Schema::ContentValidator {
    public:
    // Writing base type padding for base size: 0x16 to desired offset: 0x18
    char ___base_padding[0x2] = {};
    public:
    // private System.Int32[][] transitionTable
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::ArrayW<int>> transitionTable;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<int>>) == 0x8);
    // private System.Xml.Schema.SymbolsDictionary symbols
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::SymbolsDictionary* symbols;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SymbolsDictionary*) == 0x8);
    public:
    // Get instance field reference: private System.Int32[][] transitionTable
    [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<int>>& dyn_transitionTable();
    // Get instance field reference: private System.Xml.Schema.SymbolsDictionary symbols
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SymbolsDictionary*& dyn_symbols();
    // System.Void .ctor(System.Int32[][] transitionTable, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.XmlSchemaContentType contentType, System.Boolean isOpen, System.Boolean isEmptiable)
    // Offset: 0x1C890F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DfaContentValidator* New_ctor(::ArrayW<::ArrayW<int>> transitionTable, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::DfaContentValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DfaContentValidator*, creationType>(transitionTable, symbols, contentType, isOpen, isEmptiable)));
    }
  }; // System.Xml.Schema.DfaContentValidator
  #pragma pack(pop)
  static check_size<sizeof(DfaContentValidator), 32 + sizeof(::System::Xml::Schema::SymbolsDictionary*)> __System_Xml_Schema_DfaContentValidatorSizeCheck;
  static_assert(sizeof(DfaContentValidator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::DfaContentValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
