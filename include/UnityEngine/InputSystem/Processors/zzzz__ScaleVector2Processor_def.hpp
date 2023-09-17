#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class ScaleVector2Processor;
}
// Type: UnityEngine.InputSystem.Processors::ScaleVector2Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(10184)), TypeDefinitionIndex(TypeDefinitionIndex(6319))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6674))
// CS Name: UnityEngine.InputSystem.Processors.ScaleVector2Processor
class CORDL_TYPE ScaleVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ScaleVector2Processor() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleVector2Processor", modifiers: " const&", def_value: None }]
constexpr ScaleVector2Processor(ScaleVector2Processor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleVector2Processor", modifiers: "&&", def_value: None }]
constexpr ScaleVector2Processor(ScaleVector2Processor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScaleVector2Processor(void* ptr) noexcept : ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>(ptr) {
}


  constexpr ScaleVector2Processor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScaleVector2Processor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScaleVector2Processor& operator=(ScaleVector2Processor&& o) noexcept = default;
  constexpr ScaleVector2Processor& operator=(ScaleVector2Processor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;


// Methods

/// @brief Method Process addr 0x2967270 size 0x10 virtual true final false
 ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x2967280 size 0xa0 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit ScaleVector2Processor() ;

/// @brief Method .ctor addr 0x2967320 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::ScaleVector2Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::ScaleVector2Processor, "UnityEngine.InputSystem.Processors", "ScaleVector2Processor");
