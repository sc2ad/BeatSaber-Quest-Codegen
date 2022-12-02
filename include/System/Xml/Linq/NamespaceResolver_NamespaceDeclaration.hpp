// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.NamespaceResolver
#include "System/Xml/Linq/NamespaceResolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XNamespace
  class XNamespace;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::NamespaceResolver::NamespaceDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::NamespaceResolver::NamespaceDeclaration*, "System.Xml.Linq", "NamespaceResolver/NamespaceDeclaration");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.NamespaceResolver/System.Xml.Linq.NamespaceDeclaration
  // [TokenAttribute] Offset: FFFFFFFF
  class NamespaceResolver::NamespaceDeclaration : public ::Il2CppObject {
    public:
    public:
    // public System.String prefix
    // Size: 0x8
    // Offset: 0x10
    ::StringW prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Xml.Linq.XNamespace ns
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Linq::XNamespace* ns;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XNamespace*) == 0x8);
    // public System.Int32 scope
    // Size: 0x4
    // Offset: 0x20
    int scope;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: scope and: prev
    char __padding2[0x4] = {};
    // public System.Xml.Linq.NamespaceResolver/System.Xml.Linq.NamespaceDeclaration prev
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Linq::NamespaceResolver::NamespaceDeclaration* prev;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::NamespaceResolver::NamespaceDeclaration*) == 0x8);
    public:
    // Get instance field reference: public System.String prefix
    [[deprecated("Use field access instead!")]] ::StringW& dyn_prefix();
    // Get instance field reference: public System.Xml.Linq.XNamespace ns
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XNamespace*& dyn_ns();
    // Get instance field reference: public System.Int32 scope
    [[deprecated("Use field access instead!")]] int& dyn_scope();
    // Get instance field reference: public System.Xml.Linq.NamespaceResolver/System.Xml.Linq.NamespaceDeclaration prev
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::NamespaceResolver::NamespaceDeclaration*& dyn_prev();
    // public System.Void .ctor()
    // Offset: 0x2B2864C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamespaceResolver::NamespaceDeclaration* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::NamespaceResolver::NamespaceDeclaration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamespaceResolver::NamespaceDeclaration*, creationType>()));
    }
  }; // System.Xml.Linq.NamespaceResolver/System.Xml.Linq.NamespaceDeclaration
  #pragma pack(pop)
  static check_size<sizeof(NamespaceResolver::NamespaceDeclaration), 40 + sizeof(::System::Xml::Linq::NamespaceResolver::NamespaceDeclaration*)> __System_Xml_Linq_NamespaceResolver_NamespaceDeclarationSizeCheck;
  static_assert(sizeof(NamespaceResolver::NamespaceDeclaration) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::NamespaceResolver::NamespaceDeclaration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
