#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class NotImplemented;
}
// Type: System::NotImplemented
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2513))
// CS Name: System.NotImplemented
class CORDL_TYPE NotImplemented : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NotImplemented() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotImplemented", modifiers: " const&", def_value: None }]
constexpr NotImplemented(NotImplemented const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotImplemented", modifiers: "&&", def_value: None }]
constexpr NotImplemented(NotImplemented&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotImplemented(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NotImplemented& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotImplemented& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotImplemented& operator=(NotImplemented&& o) noexcept = default;
  constexpr NotImplemented& operator=(NotImplemented const& o) noexcept = default;
                


// Properties

static System::Exception __declspec(property(get=get_ByDesign))  ByDesign;


// Methods

/// @brief Method get_ByDesign addr 0x245b018 size 0x5c virtual false final false
static System::Exception get_ByDesign() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::NotImplemented);
DEFINE_IL2CPP_ARG_TYPE(System::NotImplemented, "System", "NotImplemented");
