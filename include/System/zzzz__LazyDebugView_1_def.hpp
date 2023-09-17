#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System {
template<typename T>
class LazyDebugView_1;
}
// Type: System::LazyDebugView`1
namespace System {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2432))
// CS Name: System.LazyDebugView`1
class CORDL_TYPE LazyDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LazyDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyDebugView_1", modifiers: " const&", def_value: None }]
constexpr LazyDebugView_1(LazyDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyDebugView_1", modifiers: "&&", def_value: None }]
constexpr LazyDebugView_1(LazyDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LazyDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyDebugView_1& operator=(LazyDebugView_1&& o) noexcept = default;
  constexpr LazyDebugView_1& operator=(LazyDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::LazyDebugView_1, "System", "LazyDebugView`1");
