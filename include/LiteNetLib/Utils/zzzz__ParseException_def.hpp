#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace LiteNetLib::Utils {
class ParseException;
}
// Type: LiteNetLib.Utils::ParseException
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14489))
// CS Name: LiteNetLib.Utils.ParseException
class CORDL_TYPE ParseException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ParseException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParseException", modifiers: " const&", def_value: None }]
constexpr ParseException(ParseException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParseException", modifiers: "&&", def_value: None }]
constexpr ParseException(ParseException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParseException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr ParseException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParseException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParseException& operator=(ParseException&& o) noexcept = default;
  constexpr ParseException& operator=(ParseException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit ParseException(::StringW message) ;

/// @brief Method .ctor addr 0x2099178 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::Utils::ParseException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::ParseException, "LiteNetLib.Utils", "ParseException");
