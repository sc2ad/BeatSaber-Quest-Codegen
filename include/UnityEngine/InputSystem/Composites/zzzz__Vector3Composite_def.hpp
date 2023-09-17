#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct ____UnityEngine__InputSystem__Composites__Vector3Composite__Mode;
}
namespace UnityEngine::InputSystem::Composites {
class Vector3Composite;
}
// Type: ::Mode
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6804))
// CS Name: UnityEngine.InputSystem.Composites.Vector3Composite::Mode
struct CORDL_TYPE ____UnityEngine__InputSystem__Composites__Vector3Composite__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Composites__Vector3Composite__Mode(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__Composites__Vector3Composite__Mode(____UnityEngine__InputSystem__Composites__Vector3Composite__Mode const&) = default;
                    constexpr ____UnityEngine__InputSystem__Composites__Vector3Composite__Mode(____UnityEngine__InputSystem__Composites__Vector3Composite__Mode&&) = default;
                    constexpr ____UnityEngine__InputSystem__Composites__Vector3Composite__Mode& operator=(____UnityEngine__InputSystem__Composites__Vector3Composite__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Composites__Vector3Composite__Mode& operator=(____UnityEngine__InputSystem__Composites__Vector3Composite__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Composites__Vector3Composite__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__Composites__Vector3Composite__Mode_Unwrapped : int32_t {
__Analog = 0,
__DigitalNormalized = 1,
__Digital = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__Composites__Vector3Composite__Mode_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__Composites__Vector3Composite__Mode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Analog offset 0
static ::UnityEngine::InputSystem::Composites::____UnityEngine__InputSystem__Composites__Vector3Composite__Mode const Analog;

/// @brief Field DigitalNormalized offset 0
static ::UnityEngine::InputSystem::Composites::____UnityEngine__InputSystem__Composites__Vector3Composite__Mode const DigitalNormalized;

/// @brief Field Digital offset 0
static ::UnityEngine::InputSystem::Composites::____UnityEngine__InputSystem__Composites__Vector3Composite__Mode const Digital;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
// Type: UnityEngine.InputSystem.Composites::Vector3Composite
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10190)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6273), inst: 394 }), TypeDefinitionIndex(TypeDefinitionIndex(6273))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6805))
// CS Name: UnityEngine.InputSystem.Composites.Vector3Composite
class CORDL_TYPE Vector3Composite : public ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector3> {
public:
// Declarations
using Mode = ::UnityEngine::InputSystem::Composites::____UnityEngine__InputSystem__Composites__Vector3Composite__Mode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Vector3Composite() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Composite", modifiers: " const&", def_value: None }]
constexpr Vector3Composite(Vector3Composite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Composite", modifiers: "&&", def_value: None }]
constexpr Vector3Composite(Vector3Composite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector3Composite(void* ptr) noexcept : ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector3>(ptr) {
}


  constexpr Vector3Composite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector3Composite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector3Composite& operator=(Vector3Composite&& o) noexcept = default;
  constexpr Vector3Composite& operator=(Vector3Composite const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_up, put=__set_up))  up;

constexpr void __set_up(int32_t value) ;

constexpr int32_t __get_up() const;

 int32_t __declspec(property(get=__get_down, put=__set_down))  down;

constexpr void __set_down(int32_t value) ;

constexpr int32_t __get_down() const;

 int32_t __declspec(property(get=__get_left, put=__set_left))  left;

constexpr void __set_left(int32_t value) ;

constexpr int32_t __get_left() const;

 int32_t __declspec(property(get=__get_right, put=__set_right))  right;

constexpr void __set_right(int32_t value) ;

constexpr int32_t __get_right() const;

 int32_t __declspec(property(get=__get_forward, put=__set_forward))  forward;

constexpr void __set_forward(int32_t value) ;

constexpr int32_t __get_forward() const;

 int32_t __declspec(property(get=__get_backward, put=__set_backward))  backward;

constexpr void __set_backward(int32_t value) ;

constexpr int32_t __get_backward() const;

 ::UnityEngine::InputSystem::Composites::____UnityEngine__InputSystem__Composites__Vector3Composite__Mode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(::UnityEngine::InputSystem::Composites::____UnityEngine__InputSystem__Composites__Vector3Composite__Mode value) ;

constexpr ::UnityEngine::InputSystem::Composites::____UnityEngine__InputSystem__Composites__Vector3Composite__Mode __get_mode() const;


// Methods

/// @brief Method ReadValue addr 0x28c92bc size 0x254 virtual true final false
 ::UnityEngine::Vector3 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

// Ctor Parameters []
explicit Vector3Composite() ;

/// @brief Method .ctor addr 0x28c9510 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::____UnityEngine__InputSystem__Composites__Vector3Composite__Mode, "UnityEngine.InputSystem.Composites", "Vector3Composite/Mode");
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::Vector3Composite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::Vector3Composite, "UnityEngine.InputSystem.Composites", "Vector3Composite");
