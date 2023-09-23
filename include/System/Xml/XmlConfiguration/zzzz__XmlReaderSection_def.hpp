#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Xml::XmlConfiguration {
class XmlReaderSection;
}
// Type: System.Xml.XmlConfiguration::XmlReaderSection
namespace System::Xml::XmlConfiguration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11533))
// CS Name: System.Xml.XmlConfiguration.XmlReaderSection
class CORDL_TYPE XmlReaderSection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlReaderSection() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlReaderSection", modifiers: " const&", def_value: None }]
constexpr XmlReaderSection(XmlReaderSection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlReaderSection", modifiers: "&&", def_value: None }]
constexpr XmlReaderSection(XmlReaderSection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlReaderSection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlReaderSection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlReaderSection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlReaderSection& operator=(XmlReaderSection&& o) noexcept = default;
  constexpr XmlReaderSection& operator=(XmlReaderSection const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_ProhibitDefaultUrlResolver))  ProhibitDefaultUrlResolver;

static bool __declspec(property(get=get_CollapseWhiteSpaceIntoEmptyString))  CollapseWhiteSpaceIntoEmptyString;


// Methods

/// @brief Method get_ProhibitDefaultUrlResolver addr 0x2718624 size 0x8 virtual false final false
static bool get_ProhibitDefaultUrlResolver() ;

/// @brief Method get_CollapseWhiteSpaceIntoEmptyString addr 0x270a870 size 0x8 virtual false final false
static bool get_CollapseWhiteSpaceIntoEmptyString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::XmlConfiguration
NEED_NO_BOX(System::Xml::XmlConfiguration::XmlReaderSection);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlConfiguration::XmlReaderSection, "System.Xml.XmlConfiguration", "XmlReaderSection");
