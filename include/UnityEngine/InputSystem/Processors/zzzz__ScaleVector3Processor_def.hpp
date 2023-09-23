#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class ScaleVector3Processor;
}
// Type: UnityEngine.InputSystem.Processors::ScaleVector3Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10190)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 394 }), TypeDefinitionIndex(TypeDefinitionIndex(6319))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6675))
// CS Name: UnityEngine.InputSystem.Processors.ScaleVector3Processor
class CORDL_TYPE ScaleVector3Processor : public UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScaleVector3Processor() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleVector3Processor", modifiers: " const&", def_value: None }]
constexpr ScaleVector3Processor(ScaleVector3Processor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleVector3Processor", modifiers: "&&", def_value: None }]
constexpr ScaleVector3Processor(ScaleVector3Processor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScaleVector3Processor(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>(ptr) {
}


  constexpr ScaleVector3Processor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScaleVector3Processor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScaleVector3Processor& operator=(ScaleVector3Processor&& o) noexcept = default;
  constexpr ScaleVector3Processor& operator=(ScaleVector3Processor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 float_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(float_t value) ;

constexpr float_t __get_z() const;


// Methods

/// @brief Method Process addr 0x2967370 size 0x18 virtual true final false
 UnityEngine::Vector3 Process(UnityEngine::Vector3 value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x2967388 size 0xc4 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit ScaleVector3Processor() ;

/// @brief Method .ctor addr 0x296744c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(UnityEngine::InputSystem::Processors::ScaleVector3Processor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Processors::ScaleVector3Processor, "UnityEngine.InputSystem.Processors", "ScaleVector3Processor");
