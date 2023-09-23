#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__Comparer_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class NullableComparer_1;
}
// Type: System.Collections.Generic::NullableComparer`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 999 }), TypeDefinitionIndex(TypeDefinitionIndex(2447)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2579 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3852))
// CS Name: System.Collections.Generic.NullableComparer`1
class CORDL_TYPE NullableComparer_1 : public System::Collections::Generic::Comparer_1<System::Nullable_1<T>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NullableComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullableComparer_1", modifiers: " const&", def_value: None }]
constexpr NullableComparer_1(NullableComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullableComparer_1", modifiers: "&&", def_value: None }]
constexpr NullableComparer_1(NullableComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullableComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::Nullable_1<T>>(ptr) {
}


  constexpr NullableComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullableComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullableComparer_1& operator=(NullableComparer_1&& o) noexcept = default;
  constexpr NullableComparer_1& operator=(NullableComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::Nullable_1<T> x, System::Nullable_1<T> y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit NullableComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::NullableComparer_1, "System.Collections.Generic", "NullableComparer`1");
