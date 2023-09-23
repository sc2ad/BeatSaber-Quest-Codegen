#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
// Type: UnityEngine.TextCore::GlyphMetrics
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15505))
// CS Name: UnityEngine.TextCore.GlyphMetrics
struct CORDL_TYPE GlyphMetrics : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::TextCore::GlyphMetrics>
constexpr operator  System::IEquatable_1<UnityEngine::TextCore::GlyphMetrics>() const;

// Ctor Parameters [CppParam { name: "m_Width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_HorizontalBearingX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_HorizontalBearingY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_HorizontalAdvance", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlyphMetrics(float_t m_Width, float_t m_Height, float_t m_HorizontalBearingX, float_t m_HorizontalBearingY, float_t m_HorizontalAdvance) noexcept;


                    constexpr GlyphMetrics(GlyphMetrics const&) = default;
                    constexpr GlyphMetrics(GlyphMetrics&&) = default;
                    constexpr GlyphMetrics& operator=(GlyphMetrics const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphMetrics& operator=(GlyphMetrics&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphMetrics(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_Width, put=__set_m_Width))  m_Width;

constexpr void __set_m_Width(float_t value) ;

constexpr float_t __get_m_Width() const;

 float_t __declspec(property(get=__get_m_Height, put=__set_m_Height))  m_Height;

constexpr void __set_m_Height(float_t value) ;

constexpr float_t __get_m_Height() const;

 float_t __declspec(property(get=__get_m_HorizontalBearingX, put=__set_m_HorizontalBearingX))  m_HorizontalBearingX;

constexpr void __set_m_HorizontalBearingX(float_t value) ;

constexpr float_t __get_m_HorizontalBearingX() const;

 float_t __declspec(property(get=__get_m_HorizontalBearingY, put=__set_m_HorizontalBearingY))  m_HorizontalBearingY;

constexpr void __set_m_HorizontalBearingY(float_t value) ;

constexpr float_t __get_m_HorizontalBearingY() const;

 float_t __declspec(property(get=__get_m_HorizontalAdvance, put=__set_m_HorizontalAdvance))  m_HorizontalAdvance;

constexpr void __set_m_HorizontalAdvance(float_t value) ;

constexpr float_t __get_m_HorizontalAdvance() const;


// Properties

 float_t __declspec(property(get=get_width))  width;

 float_t __declspec(property(get=get_height))  height;

 float_t __declspec(property(get=get_horizontalBearingX))  horizontalBearingX;

 float_t __declspec(property(get=get_horizontalBearingY))  horizontalBearingY;

 float_t __declspec(property(get=get_horizontalAdvance))  horizontalAdvance;


// Methods

/// @brief Method get_width addr 0x2baa634 size 0x8 virtual false final false
 float_t get_width() ;

/// @brief Method get_height addr 0x2baa63c size 0x8 virtual false final false
 float_t get_height() ;

/// @brief Method get_horizontalBearingX addr 0x2baa644 size 0x8 virtual false final false
 float_t get_horizontalBearingX() ;

/// @brief Method get_horizontalBearingY addr 0x2baa64c size 0x8 virtual false final false
 float_t get_horizontalBearingY() ;

/// @brief Method get_horizontalAdvance addr 0x2baa654 size 0x8 virtual false final false
 float_t get_horizontalAdvance() ;

/// @brief Method .ctor addr 0x2baa65c size 0x10 virtual false final false
 void _ctor(float_t width, float_t height, float_t bearingX, float_t bearingY, float_t advance) ;

/// @brief Method GetHashCode addr 0x2baa66c size 0x6c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2baa6d8 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2baa758 size 0xa4 virtual true final true
 bool Equals(UnityEngine::TextCore::GlyphMetrics other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::GlyphMetrics, "UnityEngine.TextCore", "GlyphMetrics");
