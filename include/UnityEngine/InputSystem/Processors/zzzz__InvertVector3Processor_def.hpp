#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class InvertVector3Processor;
}
// Type: UnityEngine.InputSystem.Processors::InvertVector3Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10190)), TypeDefinitionIndex(TypeDefinitionIndex(6319)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 394 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6669))
// CS Name: UnityEngine.InputSystem.Processors.InvertVector3Processor
class CORDL_TYPE InvertVector3Processor : public UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InvertVector3Processor() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvertVector3Processor", modifiers: " const&", def_value: None }]
constexpr InvertVector3Processor(InvertVector3Processor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvertVector3Processor", modifiers: "&&", def_value: None }]
constexpr InvertVector3Processor(InvertVector3Processor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvertVector3Processor(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>(ptr) {
}


  constexpr InvertVector3Processor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvertVector3Processor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvertVector3Processor& operator=(InvertVector3Processor&& o) noexcept = default;
  constexpr InvertVector3Processor& operator=(InvertVector3Processor const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_invertX, put=__set_invertX))  invertX;

constexpr void __set_invertX(bool value) ;

constexpr bool __get_invertX() const;

 bool __declspec(property(get=__get_invertY, put=__set_invertY))  invertY;

constexpr void __set_invertY(bool value) ;

constexpr bool __get_invertY() const;

 bool __declspec(property(get=__get_invertZ, put=__set_invertZ))  invertZ;

constexpr void __set_invertZ(bool value) ;

constexpr bool __get_invertZ() const;


// Methods

/// @brief Method Process addr 0x2966b7c size 0x34 virtual true final false
 UnityEngine::Vector3 Process(UnityEngine::Vector3 value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToString addr 0x2966bb0 size 0xc4 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit InvertVector3Processor() ;

/// @brief Method .ctor addr 0x2966c74 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(UnityEngine::InputSystem::Processors::InvertVector3Processor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Processors::InvertVector3Processor, "UnityEngine.InputSystem.Processors", "InvertVector3Processor");
