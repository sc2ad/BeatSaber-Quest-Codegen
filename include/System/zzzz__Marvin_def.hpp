#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class Marvin;
}
// Type: System::Marvin
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2433))
// CS Name: System.Marvin
class CORDL_TYPE Marvin : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Marvin() = default;

// Ctor Parameters [CppParam { name: "", ty: "Marvin", modifiers: " const&", def_value: None }]
constexpr Marvin(Marvin const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Marvin", modifiers: "&&", def_value: None }]
constexpr Marvin(Marvin&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Marvin(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Marvin& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Marvin& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Marvin& operator=(Marvin&& o) noexcept = default;
  constexpr Marvin& operator=(Marvin const& o) noexcept = default;
                


// Fields

static uint64_t __declspec(property(get=__get__DefaultSeed_k__BackingField, put=__set__DefaultSeed_k__BackingField))  _DefaultSeed_k__BackingField;

static void __set__DefaultSeed_k__BackingField(uint64_t value) ;

static uint64_t __get__DefaultSeed_k__BackingField() ;


// Properties

static uint64_t __declspec(property(get=get_DefaultSeed))  DefaultSeed;


// Methods

/// @brief Method ComputeHash32 addr 0x2440d2c size 0xac virtual false final false
static int32_t ComputeHash32(::System::ReadOnlySpan_1<uint8_t> data, uint64_t seed) ;

/// @brief Method ComputeHash32 addr 0x2440dd8 size 0x3d0 virtual false final false
static int32_t ComputeHash32(ByRef<uint8_t> data, int32_t count, uint64_t seed) ;

/// @brief Method Block addr 0x24411a8 size 0x88 virtual false final false
static void Block(ByRef<uint32_t> rp0, ByRef<uint32_t> rp1) ;

/// @brief Method _rotl addr 0x2441230 size 0xc virtual false final false
static uint32_t _rotl(uint32_t value, int32_t shift) ;

/// @brief Method get_DefaultSeed addr 0x244123c size 0x58 virtual false final false
static uint64_t get_DefaultSeed() ;

/// @brief Method GenerateSeed addr 0x2441294 size 0xc virtual false final false
static uint64_t GenerateSeed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::Marvin);
DEFINE_IL2CPP_ARG_TYPE(::System::Marvin, "System", "Marvin");
