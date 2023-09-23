#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System {
class __ComObject;
}
// Type: System::__ComObject
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2649))
// CS Name: System.__ComObject
class CORDL_TYPE __ComObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~__ComObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "__ComObject", modifiers: " const&", def_value: None }]
constexpr __ComObject(__ComObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "__ComObject", modifiers: "&&", def_value: None }]
constexpr __ComObject(__ComObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit __ComObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr __ComObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr __ComObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr __ComObject& operator=(__ComObject&& o) noexcept = default;
  constexpr __ComObject& operator=(__ComObject const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit __ComObject() ;

/// @brief Method .ctor addr 0x249c4dc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::__ComObject);
DEFINE_IL2CPP_ARG_TYPE(System::__ComObject, "System", "__ComObject");
