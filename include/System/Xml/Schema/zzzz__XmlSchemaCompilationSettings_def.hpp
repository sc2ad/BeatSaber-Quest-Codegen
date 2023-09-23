#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaCompilationSettings;
}
// Type: System.Xml.Schema::XmlSchemaCompilationSettings
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11661))
// CS Name: System.Xml.Schema.XmlSchemaCompilationSettings
class CORDL_TYPE XmlSchemaCompilationSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlSchemaCompilationSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCompilationSettings", modifiers: " const&", def_value: None }]
constexpr XmlSchemaCompilationSettings(XmlSchemaCompilationSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCompilationSettings", modifiers: "&&", def_value: None }]
constexpr XmlSchemaCompilationSettings(XmlSchemaCompilationSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaCompilationSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlSchemaCompilationSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaCompilationSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaCompilationSettings& operator=(XmlSchemaCompilationSettings&& o) noexcept = default;
  constexpr XmlSchemaCompilationSettings& operator=(XmlSchemaCompilationSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_enableUpaCheck, put=__set_enableUpaCheck))  enableUpaCheck;

constexpr void __set_enableUpaCheck(bool value) ;

constexpr bool __get_enableUpaCheck() const;


// Methods

// Ctor Parameters []
explicit XmlSchemaCompilationSettings() ;

/// @brief Method .ctor addr 0x2733978 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaCompilationSettings);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaCompilationSettings, "System.Xml.Schema", "XmlSchemaCompilationSettings");
