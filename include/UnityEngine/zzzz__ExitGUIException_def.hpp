#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
// Forward declare root types
namespace UnityEngine {
class ExitGUIException;
}
// Type: UnityEngine::ExitGUIException
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14786))
// CS Name: UnityEngine.ExitGUIException
class CORDL_TYPE ExitGUIException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ExitGUIException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExitGUIException", modifiers: " const&", def_value: None }]
constexpr ExitGUIException(ExitGUIException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExitGUIException", modifiers: "&&", def_value: None }]
constexpr ExitGUIException(ExitGUIException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExitGUIException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr ExitGUIException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExitGUIException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExitGUIException& operator=(ExitGUIException&& o) noexcept = default;
  constexpr ExitGUIException& operator=(ExitGUIException const& o) noexcept = default;
                


// Methods

static UnityEngine::ExitGUIException New_ctor() ;

/// @brief Method .ctor addr 0x2b95e70 size 0x94 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ExitGUIException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ExitGUIException, "UnityEngine", "ExitGUIException");
