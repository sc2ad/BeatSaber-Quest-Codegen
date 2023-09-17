#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace LiteNetLib {
class InvalidPacketException;
}
// Type: LiteNetLib::InvalidPacketException
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14441))
// CS Name: LiteNetLib.InvalidPacketException
class CORDL_TYPE InvalidPacketException : public ::System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~InvalidPacketException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidPacketException", modifiers: " const&", def_value: None }]
constexpr InvalidPacketException(InvalidPacketException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidPacketException", modifiers: "&&", def_value: None }]
constexpr InvalidPacketException(InvalidPacketException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidPacketException(void* ptr) noexcept : ::System::ArgumentException(ptr) {
}


  constexpr InvalidPacketException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidPacketException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidPacketException& operator=(InvalidPacketException&& o) noexcept = default;
  constexpr InvalidPacketException& operator=(InvalidPacketException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InvalidPacketException() ;

/// @brief Method .ctor addr 0x2088b94 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit InvalidPacketException(::StringW message) ;

/// @brief Method .ctor addr 0x2088b9c size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit InvalidPacketException(::StringW message, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x2088ba4 size 0x8 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::InvalidPacketException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::InvalidPacketException, "LiteNetLib", "InvalidPacketException");
