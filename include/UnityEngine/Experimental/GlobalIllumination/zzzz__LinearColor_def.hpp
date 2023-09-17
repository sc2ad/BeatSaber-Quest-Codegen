#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
// Type: UnityEngine.Experimental.GlobalIllumination::LinearColor
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10326))
// CS Name: UnityEngine.Experimental.GlobalIllumination.LinearColor
struct CORDL_TYPE LinearColor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_red", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_green", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_blue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_intensity", ty: "float_t", modifiers: "", def_value: None }]
constexpr LinearColor(float_t m_red, float_t m_green, float_t m_blue, float_t m_intensity) noexcept;


                    constexpr LinearColor(LinearColor const&) = default;
                    constexpr LinearColor(LinearColor&&) = default;
                    constexpr LinearColor& operator=(LinearColor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LinearColor& operator=(LinearColor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LinearColor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_red, put=__set_m_red))  m_red;

constexpr void __set_m_red(float_t value) ;

constexpr float_t __get_m_red() const;

 float_t __declspec(property(get=__get_m_green, put=__set_m_green))  m_green;

constexpr void __set_m_green(float_t value) ;

constexpr float_t __get_m_green() const;

 float_t __declspec(property(get=__get_m_blue, put=__set_m_blue))  m_blue;

constexpr void __set_m_blue(float_t value) ;

constexpr float_t __get_m_blue() const;

 float_t __declspec(property(get=__get_m_intensity, put=__set_m_intensity))  m_intensity;

constexpr void __set_m_intensity(float_t value) ;

constexpr float_t __get_m_intensity() const;


// Properties

 float_t __declspec(property(get=get_red, put=set_red))  red;

 float_t __declspec(property(get=get_green, put=set_green))  green;

 float_t __declspec(property(get=get_blue, put=set_blue))  blue;


// Methods

/// @brief Method get_red addr 0x2b78cd4 size 0x8 virtual false final false
 float_t get_red() ;

/// @brief Method set_red addr 0x2b78cdc size 0xb4 virtual false final false
 void set_red(float_t value) ;

/// @brief Method get_green addr 0x2b78d90 size 0x8 virtual false final false
 float_t get_green() ;

/// @brief Method set_green addr 0x2b78d98 size 0xb4 virtual false final false
 void set_green(float_t value) ;

/// @brief Method get_blue addr 0x2b78e4c size 0x8 virtual false final false
 float_t get_blue() ;

/// @brief Method set_blue addr 0x2b78e54 size 0xb4 virtual false final false
 void set_blue(float_t value) ;

/// @brief Method Convert addr 0x2b78f08 size 0x3d4 virtual false final false
static ::UnityEngine::Experimental::GlobalIllumination::LinearColor Convert(::UnityEngine::Color color, float_t intensity) ;

/// @brief Method Black addr 0x2b792dc size 0x14 virtual false final false
static ::UnityEngine::Experimental::GlobalIllumination::LinearColor Black() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LinearColor, "UnityEngine.Experimental.GlobalIllumination", "LinearColor");
