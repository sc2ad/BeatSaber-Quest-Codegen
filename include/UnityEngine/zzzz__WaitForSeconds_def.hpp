#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine {
class WaitForSeconds;
}
// Type: UnityEngine::WaitForSeconds
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10133))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10134))
// CS Name: UnityEngine.WaitForSeconds
class CORDL_TYPE WaitForSeconds : public UnityEngine::YieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~WaitForSeconds() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForSeconds", modifiers: " const&", def_value: None }]
constexpr WaitForSeconds(WaitForSeconds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForSeconds", modifiers: "&&", def_value: None }]
constexpr WaitForSeconds(WaitForSeconds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitForSeconds(void* ptr) noexcept : UnityEngine::YieldInstruction(ptr) {
}


  constexpr WaitForSeconds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitForSeconds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitForSeconds& operator=(WaitForSeconds&& o) noexcept = default;
  constexpr WaitForSeconds& operator=(WaitForSeconds const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_Seconds, put=__set_m_Seconds))  m_Seconds;

constexpr void __set_m_Seconds(float_t value) ;

constexpr float_t __get_m_Seconds() const;


// Methods

// Ctor Parameters [CppParam { name: "seconds", ty: "float_t", modifiers: "", def_value: None }]
explicit WaitForSeconds(float_t seconds) ;

/// @brief Method .ctor addr 0x2b55fd4 size 0x28 virtual false final false
 void _ctor(float_t seconds) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::WaitForSeconds);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitForSeconds, "UnityEngine", "WaitForSeconds");
