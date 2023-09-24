#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Xml::Linq {
class XDeclaration;
}
// Type: System.Xml.Linq::XDeclaration
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15413))
// CS Name: System.Xml.Linq.XDeclaration
class CORDL_TYPE XDeclaration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XDeclaration() = default;

// Ctor Parameters [CppParam { name: "", ty: "XDeclaration", modifiers: " const&", def_value: None }]
constexpr XDeclaration(XDeclaration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XDeclaration", modifiers: "&&", def_value: None }]
constexpr XDeclaration(XDeclaration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XDeclaration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XDeclaration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XDeclaration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XDeclaration& operator=(XDeclaration&& o) noexcept = default;
  constexpr XDeclaration& operator=(XDeclaration const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(::StringW value) ;

constexpr ::StringW __get__version() const;

 ::StringW __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(::StringW value) ;

constexpr ::StringW __get__encoding() const;

 ::StringW __declspec(property(get=__get__standalone, put=__set__standalone))  _standalone;

constexpr void __set__standalone(::StringW value) ;

constexpr ::StringW __get__standalone() const;


// Properties

 ::StringW __declspec(property(get=get_Encoding, put=set_Encoding))  Encoding;

 ::StringW __declspec(property(get=get_Standalone, put=set_Standalone))  Standalone;

 ::StringW __declspec(property(get=get_Version))  Version;


// Methods

static System::Xml::Linq::XDeclaration New_ctor(::StringW version, ::StringW encoding, ::StringW standalone) ;

/// @brief Method .ctor addr 0x26cb59c size 0x3c virtual false final false
 void _ctor(::StringW version, ::StringW encoding, ::StringW standalone) ;

static System::Xml::Linq::XDeclaration New_ctor(System::Xml::Linq::XDeclaration other) ;

/// @brief Method .ctor addr 0x26cb5d8 size 0x84 virtual false final false
 void _ctor(System::Xml::Linq::XDeclaration other) ;

/// @brief Method get_Encoding addr 0x26cb65c size 0x8 virtual false final false
 ::StringW get_Encoding() ;

/// @brief Method set_Encoding addr 0x26cb664 size 0x8 virtual false final false
 void set_Encoding(::StringW value) ;

/// @brief Method get_Standalone addr 0x26cb66c size 0x8 virtual false final false
 ::StringW get_Standalone() ;

/// @brief Method set_Standalone addr 0x26cb674 size 0x8 virtual false final false
 void set_Standalone(::StringW value) ;

/// @brief Method get_Version addr 0x26cb67c size 0x8 virtual false final false
 ::StringW get_Version() ;

/// @brief Method ToString addr 0x26cb684 size 0x16c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::XDeclaration);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XDeclaration, "System.Xml.Linq", "XDeclaration");
