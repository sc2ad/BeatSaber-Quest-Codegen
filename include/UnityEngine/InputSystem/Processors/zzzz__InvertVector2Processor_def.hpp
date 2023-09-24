#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class InvertVector2Processor;
}
// Type: UnityEngine.InputSystem.Processors::InvertVector2Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(6319)), TypeDefinitionIndex(TypeDefinitionIndex(10184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6668))
// CS Name: UnityEngine.InputSystem.Processors.InvertVector2Processor
class CORDL_TYPE InvertVector2Processor : public UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InvertVector2Processor() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvertVector2Processor", modifiers: " const&", def_value: None }]
constexpr InvertVector2Processor(InvertVector2Processor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvertVector2Processor", modifiers: "&&", def_value: None }]
constexpr InvertVector2Processor(InvertVector2Processor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvertVector2Processor(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>(ptr) {
}


  constexpr InvertVector2Processor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvertVector2Processor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvertVector2Processor& operator=(InvertVector2Processor&& o) noexcept = default;
  constexpr InvertVector2Processor& operator=(InvertVector2Processor const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_invertX, put=__set_invertX))  invertX;

constexpr void __set_invertX(bool value) ;

constexpr bool __get_invertX() const;

 bool __declspec(property(get=__get_invertY, put=__set_invertY))  invertY;

constexpr void __set_invertY(bool value) ;

constexpr bool __get_invertY() const;


// Methods

/// @brief Method Process addr 0x2966a68 size 0x24 virtual true final false
 UnityEngine::Vector2 Process(UnityEngine::Vector2 value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x2966a8c size 0xa0 virtual true final false
 ::StringW ToString() ;

static UnityEngine::InputSystem::Processors::InvertVector2Processor New_ctor() ;

/// @brief Method .ctor addr 0x2966b2c size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(UnityEngine::InputSystem::Processors::InvertVector2Processor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Processors::InvertVector2Processor, "UnityEngine.InputSystem.Processors", "InvertVector2Processor");
