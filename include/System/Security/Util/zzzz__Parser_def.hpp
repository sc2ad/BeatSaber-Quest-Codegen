#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Util {
class Tokenizer;
}
namespace System::Security {
class SecurityElement;
}
namespace System::Security {
class SecurityDocument;
}
namespace System::Security::Util {
class TokenizerStream;
}
// Forward declare root types
namespace System::Security::Util {
class Parser;
}
// Type: System.Security.Util::Parser
namespace System::Security::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2887))
// CS Name: System.Security.Util.Parser
class CORDL_TYPE Parser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Parser() = default;

// Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: " const&", def_value: None }]
constexpr Parser(Parser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "&&", def_value: None }]
constexpr Parser(Parser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Parser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Parser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Parser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Parser& operator=(Parser&& o) noexcept = default;
  constexpr Parser& operator=(Parser const& o) noexcept = default;
                


// Fields

 System::Security::SecurityDocument __declspec(property(get=__get__doc, put=__set__doc))  _doc;

constexpr void __set__doc(System::Security::SecurityDocument value) ;

constexpr System::Security::SecurityDocument __get__doc() const;

 System::Security::Util::Tokenizer __declspec(property(get=__get__t, put=__set__t))  _t;

constexpr void __set__t(System::Security::Util::Tokenizer value) ;

constexpr System::Security::Util::Tokenizer __get__t() const;


// Methods

/// @brief Method GetTopElement addr 0x22e8670 size 0x28 virtual false final false
 System::Security::SecurityElement GetTopElement() ;

/// @brief Method GetRequiredSizes addr 0x22e8698 size 0x460 virtual false final false
 void GetRequiredSizes(System::Security::Util::TokenizerStream stream, ByRef<int32_t> index) ;

/// @brief Method DetermineFormat addr 0x22e8bf0 size 0x1b0 virtual false final false
 int32_t DetermineFormat(System::Security::Util::TokenizerStream stream) ;

/// @brief Method ParseContents addr 0x22e9804 size 0x308 virtual false final false
 void ParseContents() ;

// Ctor Parameters [CppParam { name: "t", ty: "System::Security::Util::Tokenizer", modifiers: "", def_value: None }]
explicit Parser(System::Security::Util::Tokenizer t) ;

/// @brief Method .ctor addr 0x22e9c40 size 0xa4 virtual false final false
 void _ctor(System::Security::Util::Tokenizer t) ;

// Ctor Parameters [CppParam { name: "input", ty: "::StringW", modifiers: "", def_value: None }]
explicit Parser(::StringW input) ;

/// @brief Method .ctor addr 0x22e9ce4 size 0x70 virtual false final false
 void _ctor(::StringW input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Util
NEED_NO_BOX(System::Security::Util::Parser);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::Parser, "System.Security.Util", "Parser");
