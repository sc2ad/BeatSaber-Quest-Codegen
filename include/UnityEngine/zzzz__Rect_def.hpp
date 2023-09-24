#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace UnityEngine {
struct Rect;
}
// Type: UnityEngine::Rect
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10107))
// CS Name: UnityEngine.Rect
struct CORDL_TYPE Rect : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rect>
constexpr operator  System::IEquatable_1<UnityEngine::Rect>() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m_XMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "float_t", modifiers: "", def_value: None }]
constexpr Rect(float_t m_XMin, float_t m_YMin, float_t m_Width, float_t m_Height) noexcept;


                    constexpr Rect(Rect const&) = default;
                    constexpr Rect(Rect&&) = default;
                    constexpr Rect& operator=(Rect const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Rect& operator=(Rect&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Rect(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_XMin, put=__set_m_XMin))  m_XMin;

constexpr void __set_m_XMin(float_t value) ;

constexpr float_t __get_m_XMin() const;

 float_t __declspec(property(get=__get_m_YMin, put=__set_m_YMin))  m_YMin;

constexpr void __set_m_YMin(float_t value) ;

constexpr float_t __get_m_YMin() const;

 float_t __declspec(property(get=__get_m_Width, put=__set_m_Width))  m_Width;

constexpr void __set_m_Width(float_t value) ;

constexpr float_t __get_m_Width() const;

 float_t __declspec(property(get=__get_m_Height, put=__set_m_Height))  m_Height;

constexpr void __set_m_Height(float_t value) ;

constexpr float_t __get_m_Height() const;


// Properties

static UnityEngine::Rect __declspec(property(get=get_zero))  zero;

 float_t __declspec(property(get=get_x, put=set_x))  x;

 float_t __declspec(property(get=get_y, put=set_y))  y;

 UnityEngine::Vector2 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Vector2 __declspec(property(get=get_center))  center;

 UnityEngine::Vector2 __declspec(property(get=get_min, put=set_min))  min;

 UnityEngine::Vector2 __declspec(property(get=get_max, put=set_max))  max;

 float_t __declspec(property(get=get_width, put=set_width))  width;

 float_t __declspec(property(get=get_height, put=set_height))  height;

 UnityEngine::Vector2 __declspec(property(get=get_size, put=set_size))  size;

 float_t __declspec(property(get=get_xMin, put=set_xMin))  xMin;

 float_t __declspec(property(get=get_yMin, put=set_yMin))  yMin;

 float_t __declspec(property(get=get_xMax, put=set_xMax))  xMax;

 float_t __declspec(property(get=get_yMax, put=set_yMax))  yMax;


// Methods

/// @brief Method .ctor addr 0x2b533dc size 0xc virtual false final false
 void _ctor(float_t x, float_t y, float_t width, float_t height) ;

/// @brief Method .ctor addr 0x2b533e8 size 0xc virtual false final false
 void _ctor(UnityEngine::Vector2 position, UnityEngine::Vector2 size) ;

/// @brief Method get_zero addr 0x2b533f4 size 0x14 virtual false final false
static UnityEngine::Rect get_zero() ;

/// @brief Method MinMaxRect addr 0x2b53408 size 0xc virtual false final false
static UnityEngine::Rect MinMaxRect(float_t xmin, float_t ymin, float_t xmax, float_t ymax) ;

/// @brief Method get_x addr 0x2b53414 size 0x8 virtual false final false
 float_t get_x() ;

/// @brief Method set_x addr 0x2b5341c size 0x8 virtual false final false
 void set_x(float_t value) ;

/// @brief Method get_y addr 0x2b53424 size 0x8 virtual false final false
 float_t get_y() ;

/// @brief Method set_y addr 0x2b5342c size 0x8 virtual false final false
 void set_y(float_t value) ;

/// @brief Method get_position addr 0x2b53434 size 0x8 virtual false final false
 UnityEngine::Vector2 get_position() ;

/// @brief Method set_position addr 0x2b5343c size 0x8 virtual false final false
 void set_position(UnityEngine::Vector2 value) ;

/// @brief Method get_center addr 0x2b53444 size 0x18 virtual false final false
 UnityEngine::Vector2 get_center() ;

/// @brief Method get_min addr 0x2b5345c size 0x8 virtual false final false
 UnityEngine::Vector2 get_min() ;

/// @brief Method set_min addr 0x2b53474 size 0x1c virtual false final false
 void set_min(UnityEngine::Vector2 value) ;

/// @brief Method get_max addr 0x2b534c8 size 0x10 virtual false final false
 UnityEngine::Vector2 get_max() ;

/// @brief Method set_max addr 0x2b534f8 size 0x14 virtual false final false
 void set_max(UnityEngine::Vector2 value) ;

/// @brief Method get_width addr 0x2b5352c size 0x8 virtual false final false
 float_t get_width() ;

/// @brief Method set_width addr 0x2b53534 size 0x8 virtual false final false
 void set_width(float_t value) ;

/// @brief Method get_height addr 0x2b5353c size 0x8 virtual false final false
 float_t get_height() ;

/// @brief Method set_height addr 0x2b53544 size 0x8 virtual false final false
 void set_height(float_t value) ;

/// @brief Method get_size addr 0x2b5354c size 0x8 virtual false final false
 UnityEngine::Vector2 get_size() ;

/// @brief Method set_size addr 0x2b53554 size 0x8 virtual false final false
 void set_size(UnityEngine::Vector2 value) ;

/// @brief Method get_xMin addr 0x2b53464 size 0x8 virtual false final false
 float_t get_xMin() ;

/// @brief Method set_xMin addr 0x2b53490 size 0x1c virtual false final false
 void set_xMin(float_t value) ;

/// @brief Method get_yMin addr 0x2b5346c size 0x8 virtual false final false
 float_t get_yMin() ;

/// @brief Method set_yMin addr 0x2b534ac size 0x1c virtual false final false
 void set_yMin(float_t value) ;

/// @brief Method get_xMax addr 0x2b534d8 size 0x10 virtual false final false
 float_t get_xMax() ;

/// @brief Method set_xMax addr 0x2b5350c size 0x10 virtual false final false
 void set_xMax(float_t value) ;

/// @brief Method get_yMax addr 0x2b534e8 size 0x10 virtual false final false
 float_t get_yMax() ;

/// @brief Method set_yMax addr 0x2b5351c size 0x10 virtual false final false
 void set_yMax(float_t value) ;

/// @brief Method Contains addr 0x2b5355c size 0x44 virtual false final false
 bool Contains(UnityEngine::Vector2 point) ;

/// @brief Method Contains addr 0x2b535a0 size 0x44 virtual false final false
 bool Contains(UnityEngine::Vector3 point) ;

/// @brief Method OrderMinMax addr 0x2b535e4 size 0x2c virtual false final false
static UnityEngine::Rect OrderMinMax(UnityEngine::Rect rect) ;

/// @brief Method Overlaps addr 0x2b53610 size 0x4c virtual false final false
 bool Overlaps(UnityEngine::Rect other) ;

/// @brief Method Overlaps addr 0x2b5365c size 0x94 virtual false final false
 bool Overlaps(UnityEngine::Rect other, bool allowInverse) ;

/// @brief Method op_Inequality addr 0x2b536f0 size 0x34 virtual false final false
static bool op_Inequality(UnityEngine::Rect lhs, UnityEngine::Rect rhs) ;

/// @brief Method op_Equality addr 0x2b53724 size 0x34 virtual false final false
static bool op_Equality(UnityEngine::Rect lhs, UnityEngine::Rect rhs) ;

/// @brief Method GetHashCode addr 0x2b53758 size 0x88 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b537e0 size 0x7c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b5385c size 0xa0 virtual true final true
 bool Equals(UnityEngine::Rect other) ;

/// @brief Method ToString addr 0x2b538fc size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b53908 size 0x238 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rect, "UnityEngine", "Rect");
