#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputRuntime;
}
// Type: UnityEngine.InputSystem.LowLevel::InputRuntime
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6633))
// CS Name: UnityEngine.InputSystem.LowLevel.InputRuntime
class CORDL_TYPE InputRuntime : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputRuntime() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputRuntime", modifiers: " const&", def_value: None }]
constexpr InputRuntime(InputRuntime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputRuntime", modifiers: "&&", def_value: None }]
constexpr InputRuntime(InputRuntime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputRuntime(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputRuntime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputRuntime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputRuntime& operator=(InputRuntime&& o) noexcept = default;
  constexpr InputRuntime& operator=(InputRuntime const& o) noexcept = default;
                


// Fields

static UnityEngine::InputSystem::LowLevel::IInputRuntime __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::InputSystem::LowLevel::IInputRuntime value) ;

static UnityEngine::InputSystem::LowLevel::IInputRuntime __get_s_Instance() ;

static double_t __declspec(property(get=__get_s_CurrentTimeOffsetToRealtimeSinceStartup, put=__set_s_CurrentTimeOffsetToRealtimeSinceStartup))  s_CurrentTimeOffsetToRealtimeSinceStartup;

static void __set_s_CurrentTimeOffsetToRealtimeSinceStartup(double_t value) ;

static double_t __get_s_CurrentTimeOffsetToRealtimeSinceStartup() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::InputRuntime);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputRuntime, "UnityEngine.InputSystem.LowLevel", "InputRuntime");
