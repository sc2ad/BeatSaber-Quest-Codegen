#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System {
class __Il2CppComObject;
}
// Type: System::__Il2CppComObject
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16106))
// CS Name: System.__Il2CppComObject
class CORDL_TYPE __Il2CppComObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~__Il2CppComObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "__Il2CppComObject", modifiers: " const&", def_value: None }]
constexpr __Il2CppComObject(__Il2CppComObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "__Il2CppComObject", modifiers: "&&", def_value: None }]
constexpr __Il2CppComObject(__Il2CppComObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit __Il2CppComObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr __Il2CppComObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr __Il2CppComObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr __Il2CppComObject& operator=(__Il2CppComObject&& o) noexcept = default;
  constexpr __Il2CppComObject& operator=(__Il2CppComObject const& o) noexcept = default;
                


// Methods

/// @brief Method Finalize addr 0x2db0170 size 0x3c virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::__Il2CppComObject);
DEFINE_IL2CPP_ARG_TYPE(System::__Il2CppComObject, "System", "__Il2CppComObject");
