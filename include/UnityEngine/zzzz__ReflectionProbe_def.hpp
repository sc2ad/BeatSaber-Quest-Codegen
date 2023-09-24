#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct UnityEngine__ReflectionProbe__ReflectionProbeEvent;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class Texture;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine {
struct UnityEngine__ReflectionProbe__ReflectionProbeEvent;
}
namespace UnityEngine {
class ReflectionProbe;
}
// Type: ::ReflectionProbeEvent
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10091))
// CS Name: UnityEngine.ReflectionProbe::ReflectionProbeEvent
struct CORDL_TYPE UnityEngine__ReflectionProbe__ReflectionProbeEvent : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ReflectionProbe__ReflectionProbeEvent(int32_t value__) noexcept;


                    constexpr UnityEngine__ReflectionProbe__ReflectionProbeEvent(UnityEngine__ReflectionProbe__ReflectionProbeEvent const&) = default;
                    constexpr UnityEngine__ReflectionProbe__ReflectionProbeEvent(UnityEngine__ReflectionProbe__ReflectionProbeEvent&&) = default;
                    constexpr UnityEngine__ReflectionProbe__ReflectionProbeEvent& operator=(UnityEngine__ReflectionProbe__ReflectionProbeEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ReflectionProbe__ReflectionProbeEvent& operator=(UnityEngine__ReflectionProbe__ReflectionProbeEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ReflectionProbe__ReflectionProbeEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ReflectionProbe__ReflectionProbeEvent_Unwrapped : int32_t {
__ReflectionProbeAdded = 0,
__ReflectionProbeRemoved = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ReflectionProbe__ReflectionProbeEvent_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ReflectionProbe__ReflectionProbeEvent_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ReflectionProbeAdded offset 0
static UnityEngine::UnityEngine__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeAdded;

/// @brief Field ReflectionProbeRemoved offset 0
static UnityEngine::UnityEngine__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeRemoved;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::ReflectionProbe
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10092))
// CS Name: UnityEngine.ReflectionProbe
class CORDL_TYPE ReflectionProbe : public UnityEngine::Behaviour {
public:
// Declarations
using ReflectionProbeEvent = UnityEngine::UnityEngine__ReflectionProbe__ReflectionProbeEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ReflectionProbe() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: " const&", def_value: None }]
constexpr ReflectionProbe(ReflectionProbe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "&&", def_value: None }]
constexpr ReflectionProbe(ReflectionProbe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionProbe(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr ReflectionProbe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionProbe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionProbe& operator=(ReflectionProbe&& o) noexcept = default;
  constexpr ReflectionProbe& operator=(ReflectionProbe const& o) noexcept = default;
                


// Fields

static System::Action_2<UnityEngine::ReflectionProbe,UnityEngine::UnityEngine__ReflectionProbe__ReflectionProbeEvent> __declspec(property(get=__get_reflectionProbeChanged, put=__set_reflectionProbeChanged))  reflectionProbeChanged;

static void __set_reflectionProbeChanged(System::Action_2<UnityEngine::ReflectionProbe,UnityEngine::UnityEngine__ReflectionProbe__ReflectionProbeEvent> value) ;

static System::Action_2<UnityEngine::ReflectionProbe,UnityEngine::UnityEngine__ReflectionProbe__ReflectionProbeEvent> __get_reflectionProbeChanged() ;

static System::Action_1<UnityEngine::Texture> __declspec(property(get=__get_defaultReflectionTexture, put=__set_defaultReflectionTexture))  defaultReflectionTexture;

static void __set_defaultReflectionTexture(System::Action_1<UnityEngine::Texture> value) ;

static System::Action_1<UnityEngine::Texture> __get_defaultReflectionTexture() ;


// Methods

/// @brief Method CallReflectionProbeEvent addr 0x2b4f6a0 size 0x80 virtual false final false
static void CallReflectionProbeEvent(UnityEngine::ReflectionProbe probe, UnityEngine::UnityEngine__ReflectionProbe__ReflectionProbeEvent probeEvent) ;

/// @brief Method CallSetDefaultReflection addr 0x2b4f720 size 0x6c virtual false final false
static void CallSetDefaultReflection(UnityEngine::Texture defaultReflectionCubemap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ReflectionProbe__ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
NEED_NO_BOX(UnityEngine::ReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ReflectionProbe, "UnityEngine", "ReflectionProbe");
