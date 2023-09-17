#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono::Xml {
class SmallXmlParserException;
}
// Type: Mono.Xml::SmallXmlParserException
namespace Mono::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2255))
// CS Name: Mono.Xml.SmallXmlParserException
class CORDL_TYPE SmallXmlParserException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~SmallXmlParserException() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmallXmlParserException", modifiers: " const&", def_value: None }]
constexpr SmallXmlParserException(SmallXmlParserException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmallXmlParserException", modifiers: "&&", def_value: None }]
constexpr SmallXmlParserException(SmallXmlParserException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmallXmlParserException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr SmallXmlParserException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmallXmlParserException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmallXmlParserException& operator=(SmallXmlParserException&& o) noexcept = default;
  constexpr SmallXmlParserException& operator=(SmallXmlParserException const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_line, put=__set_line))  line;

constexpr void __set_line(int32_t value) ;

constexpr int32_t __get_line() const;

 int32_t __declspec(property(get=__get_column, put=__set_column))  column;

constexpr void __set_column(int32_t value) ;

constexpr int32_t __get_column() const;


// Methods

// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "line", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "column", ty: "int32_t", modifiers: "", def_value: None }]
explicit SmallXmlParserException(::StringW msg, int32_t line, int32_t column) ;

/// @brief Method .ctor addr 0x22a6208 size 0xcc virtual false final false
 void _ctor(::StringW msg, int32_t line, int32_t column) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Xml
} // end anonymous namespace
NEED_NO_BOX(::Mono::Xml::SmallXmlParserException);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParserException, "Mono.Xml", "SmallXmlParserException");
