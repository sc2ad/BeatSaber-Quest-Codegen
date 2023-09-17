#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
class Coroutine;
}
// Type: UnityEngine::Coroutine
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10133))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10174))
// CS Name: UnityEngine.Coroutine
class CORDL_TYPE Coroutine : public ::UnityEngine::YieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Coroutine() = default;

// Ctor Parameters [CppParam { name: "", ty: "Coroutine", modifiers: " const&", def_value: None }]
constexpr Coroutine(Coroutine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Coroutine", modifiers: "&&", def_value: None }]
constexpr Coroutine(Coroutine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Coroutine(void* ptr) noexcept : ::UnityEngine::YieldInstruction(ptr) {
}


  constexpr Coroutine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Coroutine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Coroutine& operator=(Coroutine&& o) noexcept = default;
  constexpr Coroutine& operator=(Coroutine const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

// Ctor Parameters []
explicit Coroutine() ;

/// @brief Method .ctor addr 0x2b5c0e8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2b5c0f0 size 0xbc virtual true final false
 void Finalize() ;

/// @brief Method ReleaseCoroutine addr 0x2b5c1ac size 0x3c virtual false final false
static void ReleaseCoroutine(::cordl_internals::intptr_t ptr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Coroutine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Coroutine, "UnityEngine", "Coroutine");
