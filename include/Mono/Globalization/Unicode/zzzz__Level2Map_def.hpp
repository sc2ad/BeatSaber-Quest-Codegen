#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Mono::Globalization::Unicode {
class Level2Map;
}
// Type: Mono.Globalization.Unicode::Level2Map
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2262))
// CS Name: Mono.Globalization.Unicode.Level2Map
class CORDL_TYPE Level2Map : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Level2Map() = default;

// Ctor Parameters [CppParam { name: "", ty: "Level2Map", modifiers: " const&", def_value: None }]
constexpr Level2Map(Level2Map const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Level2Map", modifiers: "&&", def_value: None }]
constexpr Level2Map(Level2Map&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Level2Map(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Level2Map& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Level2Map& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Level2Map& operator=(Level2Map&& o) noexcept = default;
  constexpr Level2Map& operator=(Level2Map const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_Source, put=__set_Source))  Source;

constexpr void __set_Source(uint8_t value) ;

constexpr uint8_t __get_Source() const;

 uint8_t __declspec(property(get=__get_Replace, put=__set_Replace))  Replace;

constexpr void __set_Replace(uint8_t value) ;

constexpr uint8_t __get_Replace() const;


// Methods

static Mono::Globalization::Unicode::Level2Map New_ctor(uint8_t source, uint8_t replace) ;

/// @brief Method .ctor addr 0x22a809c size 0x30 virtual false final false
 void _ctor(uint8_t source, uint8_t replace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(Mono::Globalization::Unicode::Level2Map);
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::Level2Map, "Mono.Globalization.Unicode", "Level2Map");
