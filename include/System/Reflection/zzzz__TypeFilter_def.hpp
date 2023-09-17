#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class TypeFilter;
}
// Type: System.Reflection::TypeFilter
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3493))
// CS Name: System.Reflection.TypeFilter
class CORDL_TYPE TypeFilter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TypeFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeFilter", modifiers: " const&", def_value: None }]
constexpr TypeFilter(TypeFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeFilter", modifiers: "&&", def_value: None }]
constexpr TypeFilter(TypeFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeFilter(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr TypeFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeFilter& operator=(TypeFilter&& o) noexcept = default;
  constexpr TypeFilter& operator=(TypeFilter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TypeFilter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x237be94 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x237f608 size 0x14 virtual true final false
 bool Invoke(::System::Type m, ::bs_hook::Il2CppWrapperType filterCriteria) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::TypeFilter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeFilter, "System.Reflection", "TypeFilter");
