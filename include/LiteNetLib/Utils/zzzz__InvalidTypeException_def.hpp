#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace LiteNetLib::Utils {
class InvalidTypeException;
}
// Type: LiteNetLib.Utils::InvalidTypeException
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14488))
// CS Name: LiteNetLib.Utils.InvalidTypeException
class CORDL_TYPE InvalidTypeException : public System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~InvalidTypeException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidTypeException", modifiers: " const&", def_value: None }]
constexpr InvalidTypeException(InvalidTypeException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidTypeException", modifiers: "&&", def_value: None }]
constexpr InvalidTypeException(InvalidTypeException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidTypeException(void* ptr) noexcept : System::ArgumentException(ptr) {
}


  constexpr InvalidTypeException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidTypeException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidTypeException& operator=(InvalidTypeException&& o) noexcept = default;
  constexpr InvalidTypeException& operator=(InvalidTypeException const& o) noexcept = default;
                


// Methods

static LiteNetLib::Utils::InvalidTypeException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2099444 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(LiteNetLib::Utils::InvalidTypeException);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::InvalidTypeException, "LiteNetLib.Utils", "InvalidTypeException");
