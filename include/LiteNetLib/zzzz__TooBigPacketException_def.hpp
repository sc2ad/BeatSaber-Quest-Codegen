#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "LiteNetLib/zzzz__InvalidPacketException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace LiteNetLib {
class TooBigPacketException;
}
// Type: LiteNetLib::TooBigPacketException
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14442))
// CS Name: LiteNetLib.TooBigPacketException
class CORDL_TYPE TooBigPacketException : public LiteNetLib::InvalidPacketException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~TooBigPacketException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TooBigPacketException", modifiers: " const&", def_value: None }]
constexpr TooBigPacketException(TooBigPacketException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TooBigPacketException", modifiers: "&&", def_value: None }]
constexpr TooBigPacketException(TooBigPacketException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TooBigPacketException(void* ptr) noexcept : LiteNetLib::InvalidPacketException(ptr) {
}


  constexpr TooBigPacketException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TooBigPacketException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TooBigPacketException& operator=(TooBigPacketException&& o) noexcept = default;
  constexpr TooBigPacketException& operator=(TooBigPacketException const& o) noexcept = default;
                


// Methods

static LiteNetLib::TooBigPacketException New_ctor() ;

/// @brief Method .ctor addr 0x2088bac size 0x8 virtual false final false
 void _ctor() ;

static LiteNetLib::TooBigPacketException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2088bb4 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

static LiteNetLib::TooBigPacketException New_ctor(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x2088bbc size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::TooBigPacketException);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::TooBigPacketException, "LiteNetLib", "TooBigPacketException");
