#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections::Generic {
class ByteEqualityComparer;
}
// Type: System.Collections.Generic::ByteEqualityComparer
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 717 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3858))
// CS Name: System.Collections.Generic.ByteEqualityComparer
class CORDL_TYPE ByteEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<uint8_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ByteEqualityComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteEqualityComparer", modifiers: " const&", def_value: None }]
constexpr ByteEqualityComparer(ByteEqualityComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteEqualityComparer", modifiers: "&&", def_value: None }]
constexpr ByteEqualityComparer(ByteEqualityComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ByteEqualityComparer(void* ptr) noexcept : ::System::Collections::Generic::EqualityComparer_1<uint8_t>(ptr) {
}


  constexpr ByteEqualityComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ByteEqualityComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ByteEqualityComparer& operator=(ByteEqualityComparer&& o) noexcept = default;
  constexpr ByteEqualityComparer& operator=(ByteEqualityComparer const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x241e030 size 0x10 virtual true final false
 bool Equals(uint8_t x, uint8_t y) ;

/// @brief Method GetHashCode addr 0x241e040 size 0x1c virtual true final false
 int32_t GetHashCode(uint8_t b) ;

/// @brief Method IndexOf addr 0x241e05c size 0x194 virtual true final false
 int32_t IndexOf(::ArrayW<uint8_t> array, uint8_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x241e1f0 size 0x58 virtual true final false
 int32_t LastIndexOf(::ArrayW<uint8_t> array, uint8_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x241e248 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x241e2c0 size 0x34 virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit ByteEqualityComparer() ;

/// @brief Method .ctor addr 0x241e2f4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::Generic::ByteEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::ByteEqualityComparer, "System.Collections.Generic", "ByteEqualityComparer");
