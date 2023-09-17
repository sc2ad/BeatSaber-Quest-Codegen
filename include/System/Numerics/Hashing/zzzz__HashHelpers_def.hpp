#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Numerics::Hashing {
class HashHelpers;
}
// Type: System.Numerics.Hashing::HashHelpers
namespace System::Numerics::Hashing {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3547))
// CS Name: System.Numerics.Hashing.HashHelpers
class CORDL_TYPE HashHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: " const&", def_value: None }]
constexpr HashHelpers(HashHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "&&", def_value: None }]
constexpr HashHelpers(HashHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashHelpers& operator=(HashHelpers&& o) noexcept = default;
  constexpr HashHelpers& operator=(HashHelpers const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_RandomSeed, put=__set_RandomSeed))  RandomSeed;

static void __set_RandomSeed(int32_t value) ;

static int32_t __get_RandomSeed() ;


// Methods

/// @brief Method Combine addr 0x238ec34 size 0x10 virtual false final false
static int32_t Combine(int32_t h1, int32_t h2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Numerics::Hashing
} // end anonymous namespace
NEED_NO_BOX(::System::Numerics::Hashing::HashHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::Hashing::HashHelpers, "System.Numerics.Hashing", "HashHelpers");
