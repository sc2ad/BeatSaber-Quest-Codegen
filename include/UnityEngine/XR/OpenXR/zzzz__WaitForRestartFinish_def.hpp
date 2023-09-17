#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class WaitForRestartFinish;
}
// Type: UnityEngine.XR.OpenXR::WaitForRestartFinish
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10183))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14175))
// CS Name: UnityEngine.XR.OpenXR.WaitForRestartFinish
class CORDL_TYPE WaitForRestartFinish : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~WaitForRestartFinish() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForRestartFinish", modifiers: " const&", def_value: None }]
constexpr WaitForRestartFinish(WaitForRestartFinish const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForRestartFinish", modifiers: "&&", def_value: None }]
constexpr WaitForRestartFinish(WaitForRestartFinish&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitForRestartFinish(void* ptr) noexcept : ::UnityEngine::CustomYieldInstruction(ptr) {
}


  constexpr WaitForRestartFinish& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitForRestartFinish& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitForRestartFinish& operator=(WaitForRestartFinish&& o) noexcept = default;
  constexpr WaitForRestartFinish& operator=(WaitForRestartFinish const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_Timeout, put=__set_m_Timeout))  m_Timeout;

constexpr void __set_m_Timeout(float_t value) ;

constexpr float_t __get_m_Timeout() const;


// Properties

 bool __declspec(property(get=get_keepWaiting))  keepWaiting;


// Methods

// Ctor Parameters [CppParam { name: "timeout", ty: "float_t", modifiers: "", def_value: None }]
explicit WaitForRestartFinish(float_t timeout) ;

/// @brief Method .ctor addr 0x2aeb974 size 0x34 virtual false final false
 void _ctor(float_t timeout) ;

/// @brief Method get_keepWaiting addr 0x2aed5f4 size 0xc8 virtual true final false
 bool get_keepWaiting() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::OpenXR::WaitForRestartFinish);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::WaitForRestartFinish, "UnityEngine.XR.OpenXR", "WaitForRestartFinish");
