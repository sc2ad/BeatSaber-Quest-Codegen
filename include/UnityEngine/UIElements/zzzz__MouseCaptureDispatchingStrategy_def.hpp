#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior;
}
namespace UnityEngine::UIElements {
class MouseCaptureDispatchingStrategy;
}
// Type: ::EventBehavior
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7274))
// CS Name: UnityEngine.UIElements.MouseCaptureDispatchingStrategy::EventBehavior
struct CORDL_TYPE UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior(UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior const&) = default;
                    constexpr UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior(UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior&&) = default;
                    constexpr UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior& operator=(UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior& operator=(UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior_Unwrapped : int32_t {
__None = 0,
__IsCapturable = 1,
__IsSentExclusivelyToCapturingElement = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior const None;

/// @brief Field IsCapturable offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior const IsCapturable;

/// @brief Field IsSentExclusivelyToCapturingElement offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior const IsSentExclusivelyToCapturingElement;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseCaptureDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7275))
// CS Name: UnityEngine.UIElements.MouseCaptureDispatchingStrategy
class CORDL_TYPE MouseCaptureDispatchingStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EventBehavior = UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior;

/// @brief Convert operator to UnityEngine::UIElements::IEventDispatchingStrategy
constexpr operator  UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MouseCaptureDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureDispatchingStrategy", modifiers: " const&", def_value: None }]
constexpr MouseCaptureDispatchingStrategy(MouseCaptureDispatchingStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureDispatchingStrategy", modifiers: "&&", def_value: None }]
constexpr MouseCaptureDispatchingStrategy(MouseCaptureDispatchingStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseCaptureDispatchingStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MouseCaptureDispatchingStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseCaptureDispatchingStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseCaptureDispatchingStrategy& operator=(MouseCaptureDispatchingStrategy&& o) noexcept = default;
  constexpr MouseCaptureDispatchingStrategy& operator=(MouseCaptureDispatchingStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method CanDispatchEvent addr 0x2cd5e30 size 0x7c virtual true final true
 bool CanDispatchEvent(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x2cd5ec4 size 0x688 virtual true final true
 void DispatchEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel) ;

static UnityEngine::UIElements::MouseCaptureDispatchingStrategy New_ctor() ;

/// @brief Method .ctor addr 0x2cd65b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__MouseCaptureDispatchingStrategy__EventBehavior, "UnityEngine.UIElements", "MouseCaptureDispatchingStrategy/EventBehavior");
NEED_NO_BOX(UnityEngine::UIElements::MouseCaptureDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseCaptureDispatchingStrategy, "UnityEngine.UIElements", "MouseCaptureDispatchingStrategy");
