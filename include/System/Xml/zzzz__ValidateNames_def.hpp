#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Exception;
}
namespace System::Xml {
struct XmlCharType;
}
// Forward declare root types
namespace System::Xml {
class ValidateNames;
}
// Type: System.Xml::ValidateNames
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11485))
// CS Name: System.Xml.ValidateNames
class CORDL_TYPE ValidateNames : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ValidateNames() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidateNames", modifiers: " const&", def_value: None }]
constexpr ValidateNames(ValidateNames const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidateNames", modifiers: "&&", def_value: None }]
constexpr ValidateNames(ValidateNames&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidateNames(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValidateNames& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidateNames& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidateNames& operator=(ValidateNames&& o) noexcept = default;
  constexpr ValidateNames& operator=(ValidateNames const& o) noexcept = default;
                


// Fields

static ::System::Xml::XmlCharType __declspec(property(get=__get_xmlCharType, put=__set_xmlCharType))  xmlCharType;

static void __set_xmlCharType(::System::Xml::XmlCharType value) ;

static ::System::Xml::XmlCharType __get_xmlCharType() ;


// Methods

/// @brief Method ParseNmtoken addr 0x2709114 size 0xc8 virtual false final false
static int32_t ParseNmtoken(::StringW s, int32_t offset) ;

/// @brief Method ParseNmtokenNoNamespaces addr 0x27091dc size 0xe4 virtual false final false
static int32_t ParseNmtokenNoNamespaces(::StringW s, int32_t offset) ;

/// @brief Method ParseNameNoNamespaces addr 0x27092c0 size 0x158 virtual false final false
static int32_t ParseNameNoNamespaces(::StringW s, int32_t offset) ;

/// @brief Method ParseNCName addr 0x2709418 size 0x11c virtual false final false
static int32_t ParseNCName(::StringW s, int32_t offset) ;

/// @brief Method ParseNCName addr 0x2709534 size 0x58 virtual false final false
static int32_t ParseNCName(::StringW s) ;

/// @brief Method ParseQName addr 0x270958c size 0xdc virtual false final false
static int32_t ParseQName(::StringW s, int32_t offset, ByRef<int32_t> colonOffset) ;

/// @brief Method ParseQNameThrow addr 0x2709668 size 0x10c virtual false final false
static void ParseQNameThrow(::StringW s, ByRef<::StringW> prefix, ByRef<::StringW> localName) ;

/// @brief Method ThrowInvalidName addr 0x2709774 size 0x178 virtual false final false
static void ThrowInvalidName(::StringW s, int32_t offsetStartChar, int32_t offsetBadChar) ;

/// @brief Method GetInvalidNameException addr 0x2709b4c size 0x1c0 virtual false final false
static ::System::Exception GetInvalidNameException(::StringW s, int32_t offsetStartChar, int32_t offsetBadChar) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::ValidateNames);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ValidateNames, "System.Xml", "ValidateNames");
