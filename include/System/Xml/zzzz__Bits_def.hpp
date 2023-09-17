#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class Bits;
}
// Type: System.Xml::Bits
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11351))
// CS Name: System.Xml.Bits
class CORDL_TYPE Bits : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Bits() = default;

// Ctor Parameters [CppParam { name: "", ty: "Bits", modifiers: " const&", def_value: None }]
constexpr Bits(Bits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Bits", modifiers: "&&", def_value: None }]
constexpr Bits(Bits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Bits(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Bits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Bits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Bits& operator=(Bits&& o) noexcept = default;
  constexpr Bits& operator=(Bits const& o) noexcept = default;
                


// Fields

static uint32_t __declspec(property(get=__get_MASK_0101010101010101, put=__set_MASK_0101010101010101))  MASK_0101010101010101;

static void __set_MASK_0101010101010101(uint32_t value) ;

static uint32_t __get_MASK_0101010101010101() ;

static uint32_t __declspec(property(get=__get_MASK_0011001100110011, put=__set_MASK_0011001100110011))  MASK_0011001100110011;

static void __set_MASK_0011001100110011(uint32_t value) ;

static uint32_t __get_MASK_0011001100110011() ;

static uint32_t __declspec(property(get=__get_MASK_0000111100001111, put=__set_MASK_0000111100001111))  MASK_0000111100001111;

static void __set_MASK_0000111100001111(uint32_t value) ;

static uint32_t __get_MASK_0000111100001111() ;

static uint32_t __declspec(property(get=__get_MASK_0000000011111111, put=__set_MASK_0000000011111111))  MASK_0000000011111111;

static void __set_MASK_0000000011111111(uint32_t value) ;

static uint32_t __get_MASK_0000000011111111() ;

static uint32_t __declspec(property(get=__get_MASK_1111111111111111, put=__set_MASK_1111111111111111))  MASK_1111111111111111;

static void __set_MASK_1111111111111111(uint32_t value) ;

static uint32_t __get_MASK_1111111111111111() ;


// Methods

/// @brief Method Count addr 0x26bbd74 size 0x9c virtual false final false
static int32_t Count(uint32_t num) ;

/// @brief Method LeastPosition addr 0x26bbe10 size 0x6c virtual false final false
static int32_t LeastPosition(uint32_t num) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Bits);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Bits, "System.Xml", "Bits");
