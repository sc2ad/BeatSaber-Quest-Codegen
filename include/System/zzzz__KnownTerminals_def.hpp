#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
class KnownTerminals;
}
// Type: System::KnownTerminals
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2603))
// CS Name: System.KnownTerminals
class CORDL_TYPE KnownTerminals : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~KnownTerminals() = default;

// Ctor Parameters [CppParam { name: "", ty: "KnownTerminals", modifiers: " const&", def_value: None }]
constexpr KnownTerminals(KnownTerminals const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KnownTerminals", modifiers: "&&", def_value: None }]
constexpr KnownTerminals(KnownTerminals&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KnownTerminals(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KnownTerminals& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KnownTerminals& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KnownTerminals& operator=(KnownTerminals&& o) noexcept = default;
  constexpr KnownTerminals& operator=(KnownTerminals const& o) noexcept = default;
                


// Properties

static ::ArrayW<uint8_t> __declspec(property(get=get_linux))  linux;

static ::ArrayW<uint8_t> __declspec(property(get=get_xterm))  xterm;

static ::ArrayW<uint8_t> __declspec(property(get=get_ansi))  ansi;


// Methods

/// @brief Method get_linux addr 0x248bea4 size 0x70 virtual false final false
static ::ArrayW<uint8_t> get_linux() ;

/// @brief Method get_xterm addr 0x248bf14 size 0x70 virtual false final false
static ::ArrayW<uint8_t> get_xterm() ;

/// @brief Method get_ansi addr 0x248bf84 size 0x70 virtual false final false
static ::ArrayW<uint8_t> get_ansi() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::KnownTerminals);
DEFINE_IL2CPP_ARG_TYPE(System::KnownTerminals, "System", "KnownTerminals");
