#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class NullableEqualityComparer_1;
}
// Type: System.Collections.Generic::NullableEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3123 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1621 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3856))
// CS Name: System.Collections.Generic.NullableEqualityComparer`1
class CORDL_TYPE NullableEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<T>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NullableEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullableEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr NullableEqualityComparer_1(NullableEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullableEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr NullableEqualityComparer_1(NullableEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullableEqualityComparer_1(void* ptr) noexcept : ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<T>>(ptr) {
}


  constexpr NullableEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullableEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullableEqualityComparer_1& operator=(NullableEqualityComparer_1&& o) noexcept = default;
  constexpr NullableEqualityComparer_1& operator=(NullableEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::System::Nullable_1<T> x, ::System::Nullable_1<T> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(::System::Nullable_1<T> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<::System::Nullable_1<T>> array, ::System::Nullable_1<T> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<::System::Nullable_1<T>> array, ::System::Nullable_1<T> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit NullableEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::NullableEqualityComparer_1, "System.Collections.Generic", "NullableEqualityComparer`1");
