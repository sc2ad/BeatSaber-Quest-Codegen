#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class NormalizeProcessor;
}
// Type: UnityEngine.InputSystem.Processors::NormalizeProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6319)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6319), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6670))
// CS Name: UnityEngine.InputSystem.Processors.NormalizeProcessor
class CORDL_TYPE NormalizeProcessor : public UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NormalizeProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeProcessor", modifiers: " const&", def_value: None }]
constexpr NormalizeProcessor(NormalizeProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeProcessor", modifiers: "&&", def_value: None }]
constexpr NormalizeProcessor(NormalizeProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NormalizeProcessor(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor_1<float_t>(ptr) {
}


  constexpr NormalizeProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NormalizeProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NormalizeProcessor& operator=(NormalizeProcessor&& o) noexcept = default;
  constexpr NormalizeProcessor& operator=(NormalizeProcessor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(float_t value) ;

constexpr float_t __get_min() const;

 float_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(float_t value) ;

constexpr float_t __get_max() const;

 float_t __declspec(property(get=__get_zero, put=__set_zero))  zero;

constexpr void __set_zero(float_t value) ;

constexpr float_t __get_zero() const;


// Methods

/// @brief Method Process addr 0x2966ccc size 0xc virtual true final false
 float_t Process(float_t value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Normalize addr 0x2966cd8 size 0xd0 virtual false final false
static float_t Normalize(float_t value, float_t min, float_t max, float_t zero) ;

/// @brief Method Denormalize addr 0x2966da8 size 0x48 virtual false final false
static float_t Denormalize(float_t value, float_t min, float_t max, float_t zero) ;

/// @brief Method ToString addr 0x2966df0 size 0xc4 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit NormalizeProcessor() ;

/// @brief Method .ctor addr 0x2966eb4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(UnityEngine::InputSystem::Processors::NormalizeProcessor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Processors::NormalizeProcessor, "UnityEngine.InputSystem.Processors", "NormalizeProcessor");
