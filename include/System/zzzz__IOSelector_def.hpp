#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class IOSelectorJob;
}
// Forward declare root types
namespace System {
class IOSelector;
}
// Type: System::IOSelector
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7748))
// CS Name: System.IOSelector
class CORDL_TYPE IOSelector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IOSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "IOSelector", modifiers: " const&", def_value: None }]
constexpr IOSelector(IOSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IOSelector", modifiers: "&&", def_value: None }]
constexpr IOSelector(IOSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IOSelector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IOSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IOSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IOSelector& operator=(IOSelector&& o) noexcept = default;
  constexpr IOSelector& operator=(IOSelector const& o) noexcept = default;
                


// Methods

/// @brief Method Add addr 0x27bbe94 size 0x4 virtual false final false
static void Add(::cordl_internals::intptr_t handle, ::System::IOSelectorJob job) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::IOSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::IOSelector, "System", "IOSelector");
