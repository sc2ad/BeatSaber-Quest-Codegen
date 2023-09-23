#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz____Il2CppComObject_def.hpp"
// Forward declare root types
namespace System {
class __Il2CppComDelegate;
}
// Type: System::__Il2CppComDelegate
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16106))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16107))
// CS Name: System.__Il2CppComDelegate
class CORDL_TYPE __Il2CppComDelegate : public System::__Il2CppComObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~__Il2CppComDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "__Il2CppComDelegate", modifiers: " const&", def_value: None }]
constexpr __Il2CppComDelegate(__Il2CppComDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "__Il2CppComDelegate", modifiers: "&&", def_value: None }]
constexpr __Il2CppComDelegate(__Il2CppComDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit __Il2CppComDelegate(void* ptr) noexcept : System::__Il2CppComObject(ptr) {
}


  constexpr __Il2CppComDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr __Il2CppComDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr __Il2CppComDelegate& operator=(__Il2CppComDelegate&& o) noexcept = default;
  constexpr __Il2CppComDelegate& operator=(__Il2CppComDelegate const& o) noexcept = default;
                


// Methods

/// @brief Method Finalize addr 0x2db01ac size 0xffffffffffffffff virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::__Il2CppComDelegate);
DEFINE_IL2CPP_ARG_TYPE(System::__Il2CppComDelegate, "System", "__Il2CppComDelegate");
