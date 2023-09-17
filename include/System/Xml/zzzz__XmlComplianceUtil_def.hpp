#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Xml {
class XmlComplianceUtil;
}
// Type: System.Xml::XmlComplianceUtil
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11487))
// CS Name: System.Xml.XmlComplianceUtil
class CORDL_TYPE XmlComplianceUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlComplianceUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlComplianceUtil", modifiers: " const&", def_value: None }]
constexpr XmlComplianceUtil(XmlComplianceUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlComplianceUtil", modifiers: "&&", def_value: None }]
constexpr XmlComplianceUtil(XmlComplianceUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlComplianceUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlComplianceUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlComplianceUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlComplianceUtil& operator=(XmlComplianceUtil&& o) noexcept = default;
  constexpr XmlComplianceUtil& operator=(XmlComplianceUtil const& o) noexcept = default;
                


// Methods

/// @brief Method NonCDataNormalize addr 0x270a600 size 0x270 virtual false final false
static ::StringW NonCDataNormalize(::StringW value) ;

/// @brief Method CDataNormalize addr 0x270a878 size 0x1e4 virtual false final false
static ::StringW CDataNormalize(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlComplianceUtil);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlComplianceUtil, "System.Xml", "XmlComplianceUtil");
