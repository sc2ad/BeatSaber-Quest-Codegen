#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace System {
class TupleExtensions;
}
// Type: System::TupleExtensions
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2492))
// CS Name: System.TupleExtensions
class CORDL_TYPE TupleExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TupleExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions", modifiers: " const&", def_value: None }]
constexpr TupleExtensions(TupleExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions", modifiers: "&&", def_value: None }]
constexpr TupleExtensions(TupleExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TupleExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TupleExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TupleExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TupleExtensions& operator=(TupleExtensions&& o) noexcept = default;
  constexpr TupleExtensions& operator=(TupleExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Deconstruct addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2>
static void Deconstruct(System::Tuple_2<T1,T2> value, ByRef<T1> item1, ByRef<T2> item2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::TupleExtensions);
DEFINE_IL2CPP_ARG_TYPE(System::TupleExtensions, "System", "TupleExtensions");
