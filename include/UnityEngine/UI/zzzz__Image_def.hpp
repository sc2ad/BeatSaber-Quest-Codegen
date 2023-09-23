#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class ICanvasRaycastFilter;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::U2D {
class SpriteAtlas;
}
// Forward declare root types
namespace UnityEngine::UI {
struct UnityEngine__UI__Image__FillMethod;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Image__Origin180;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Image__Origin360;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Image__Origin90;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Image__OriginHorizontal;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Image__OriginVertical;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Image__Type;
}
namespace UnityEngine::UI {
class Image;
}
// Type: ::Type
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12987))
// CS Name: UnityEngine.UI.Image::Type
struct CORDL_TYPE UnityEngine__UI__Image__Type : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Image__Type(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Image__Type(UnityEngine__UI__Image__Type const&) = default;
                    constexpr UnityEngine__UI__Image__Type(UnityEngine__UI__Image__Type&&) = default;
                    constexpr UnityEngine__UI__Image__Type& operator=(UnityEngine__UI__Image__Type const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Image__Type& operator=(UnityEngine__UI__Image__Type&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Image__Type(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Image__Type_Unwrapped : int32_t {
__Simple = 0,
__Sliced = 1,
__Tiled = 2,
__Filled = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Image__Type_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Image__Type_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Simple offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Type const Simple;

/// @brief Field Sliced offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Type const Sliced;

/// @brief Field Tiled offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Type const Tiled;

/// @brief Field Filled offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Type const Filled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::FillMethod
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12988))
// CS Name: UnityEngine.UI.Image::FillMethod
struct CORDL_TYPE UnityEngine__UI__Image__FillMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Image__FillMethod(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Image__FillMethod(UnityEngine__UI__Image__FillMethod const&) = default;
                    constexpr UnityEngine__UI__Image__FillMethod(UnityEngine__UI__Image__FillMethod&&) = default;
                    constexpr UnityEngine__UI__Image__FillMethod& operator=(UnityEngine__UI__Image__FillMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Image__FillMethod& operator=(UnityEngine__UI__Image__FillMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Image__FillMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Image__FillMethod_Unwrapped : int32_t {
__Horizontal = 0,
__Vertical = 1,
__Radial90 = 2,
__Radial180 = 3,
__Radial360 = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Image__FillMethod_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Image__FillMethod_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Horizontal offset 0
static UnityEngine::UI::UnityEngine__UI__Image__FillMethod const Horizontal;

/// @brief Field Vertical offset 0
static UnityEngine::UI::UnityEngine__UI__Image__FillMethod const Vertical;

/// @brief Field Radial90 offset 0
static UnityEngine::UI::UnityEngine__UI__Image__FillMethod const Radial90;

/// @brief Field Radial180 offset 0
static UnityEngine::UI::UnityEngine__UI__Image__FillMethod const Radial180;

/// @brief Field Radial360 offset 0
static UnityEngine::UI::UnityEngine__UI__Image__FillMethod const Radial360;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::OriginHorizontal
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12989))
// CS Name: UnityEngine.UI.Image::OriginHorizontal
struct CORDL_TYPE UnityEngine__UI__Image__OriginHorizontal : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Image__OriginHorizontal(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Image__OriginHorizontal(UnityEngine__UI__Image__OriginHorizontal const&) = default;
                    constexpr UnityEngine__UI__Image__OriginHorizontal(UnityEngine__UI__Image__OriginHorizontal&&) = default;
                    constexpr UnityEngine__UI__Image__OriginHorizontal& operator=(UnityEngine__UI__Image__OriginHorizontal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Image__OriginHorizontal& operator=(UnityEngine__UI__Image__OriginHorizontal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Image__OriginHorizontal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Image__OriginHorizontal_Unwrapped : int32_t {
__Left = 0,
__Right = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Image__OriginHorizontal_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Image__OriginHorizontal_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static UnityEngine::UI::UnityEngine__UI__Image__OriginHorizontal const Left;

/// @brief Field Right offset 0
static UnityEngine::UI::UnityEngine__UI__Image__OriginHorizontal const Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::OriginVertical
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12990))
// CS Name: UnityEngine.UI.Image::OriginVertical
struct CORDL_TYPE UnityEngine__UI__Image__OriginVertical : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Image__OriginVertical(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Image__OriginVertical(UnityEngine__UI__Image__OriginVertical const&) = default;
                    constexpr UnityEngine__UI__Image__OriginVertical(UnityEngine__UI__Image__OriginVertical&&) = default;
                    constexpr UnityEngine__UI__Image__OriginVertical& operator=(UnityEngine__UI__Image__OriginVertical const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Image__OriginVertical& operator=(UnityEngine__UI__Image__OriginVertical&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Image__OriginVertical(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Image__OriginVertical_Unwrapped : int32_t {
__Bottom = 0,
__Top = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Image__OriginVertical_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Image__OriginVertical_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Bottom offset 0
static UnityEngine::UI::UnityEngine__UI__Image__OriginVertical const Bottom;

/// @brief Field Top offset 0
static UnityEngine::UI::UnityEngine__UI__Image__OriginVertical const Top;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Origin90
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12991))
// CS Name: UnityEngine.UI.Image::Origin90
struct CORDL_TYPE UnityEngine__UI__Image__Origin90 : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Image__Origin90(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Image__Origin90(UnityEngine__UI__Image__Origin90 const&) = default;
                    constexpr UnityEngine__UI__Image__Origin90(UnityEngine__UI__Image__Origin90&&) = default;
                    constexpr UnityEngine__UI__Image__Origin90& operator=(UnityEngine__UI__Image__Origin90 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Image__Origin90& operator=(UnityEngine__UI__Image__Origin90&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Image__Origin90(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Image__Origin90_Unwrapped : int32_t {
__BottomLeft = 0,
__TopLeft = 1,
__TopRight = 2,
__BottomRight = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Image__Origin90_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Image__Origin90_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BottomLeft offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin90 const BottomLeft;

/// @brief Field TopLeft offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin90 const TopLeft;

/// @brief Field TopRight offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin90 const TopRight;

/// @brief Field BottomRight offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin90 const BottomRight;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Origin180
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12992))
// CS Name: UnityEngine.UI.Image::Origin180
struct CORDL_TYPE UnityEngine__UI__Image__Origin180 : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Image__Origin180(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Image__Origin180(UnityEngine__UI__Image__Origin180 const&) = default;
                    constexpr UnityEngine__UI__Image__Origin180(UnityEngine__UI__Image__Origin180&&) = default;
                    constexpr UnityEngine__UI__Image__Origin180& operator=(UnityEngine__UI__Image__Origin180 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Image__Origin180& operator=(UnityEngine__UI__Image__Origin180&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Image__Origin180(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Image__Origin180_Unwrapped : int32_t {
__Bottom = 0,
__Left = 1,
__Top = 2,
__Right = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Image__Origin180_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Image__Origin180_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Bottom offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin180 const Bottom;

/// @brief Field Left offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin180 const Left;

/// @brief Field Top offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin180 const Top;

/// @brief Field Right offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin180 const Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Origin360
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12993))
// CS Name: UnityEngine.UI.Image::Origin360
struct CORDL_TYPE UnityEngine__UI__Image__Origin360 : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Image__Origin360(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Image__Origin360(UnityEngine__UI__Image__Origin360 const&) = default;
                    constexpr UnityEngine__UI__Image__Origin360(UnityEngine__UI__Image__Origin360&&) = default;
                    constexpr UnityEngine__UI__Image__Origin360& operator=(UnityEngine__UI__Image__Origin360 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Image__Origin360& operator=(UnityEngine__UI__Image__Origin360&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Image__Origin360(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Image__Origin360_Unwrapped : int32_t {
__Bottom = 0,
__Right = 1,
__Top = 2,
__Left = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Image__Origin360_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Image__Origin360_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Bottom offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin360 const Bottom;

/// @brief Field Right offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin360 const Right;

/// @brief Field Top offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin360 const Top;

/// @brief Field Left offset 0
static UnityEngine::UI::UnityEngine__UI__Image__Origin360 const Left;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Image
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12994))
// CS Name: UnityEngine.UI.Image
class CORDL_TYPE Image : public UnityEngine::UI::MaskableGraphic {
public:
// Declarations
using Origin360 = UnityEngine::UI::UnityEngine__UI__Image__Origin360;

using Origin180 = UnityEngine::UI::UnityEngine__UI__Image__Origin180;

using Origin90 = UnityEngine::UI::UnityEngine__UI__Image__Origin90;

using OriginVertical = UnityEngine::UI::UnityEngine__UI__Image__OriginVertical;

using OriginHorizontal = UnityEngine::UI::UnityEngine__UI__Image__OriginHorizontal;

using FillMethod = UnityEngine::UI::UnityEngine__UI__Image__FillMethod;

using Type = UnityEngine::UI::UnityEngine__UI__Image__Type;

/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ILayoutElement
constexpr operator  UnityEngine::UI::ILayoutElement() const noexcept;

/// @brief Convert operator to UnityEngine::ICanvasRaycastFilter
constexpr operator  UnityEngine::ICanvasRaycastFilter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x108};

virtual ~Image() = default;

// Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: " const&", def_value: None }]
constexpr Image(Image const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "&&", def_value: None }]
constexpr Image(Image&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Image(void* ptr) noexcept : UnityEngine::UI::MaskableGraphic(ptr) {
}


  constexpr Image& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Image& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Image& operator=(Image&& o) noexcept = default;
  constexpr Image& operator=(Image const& o) noexcept = default;
                


// Fields

static UnityEngine::Material __declspec(property(get=__get_s_ETC1DefaultUI, put=__set_s_ETC1DefaultUI))  s_ETC1DefaultUI;

static void __set_s_ETC1DefaultUI(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_ETC1DefaultUI() ;

 UnityEngine::Sprite __declspec(property(get=__get_m_Sprite, put=__set_m_Sprite))  m_Sprite;

constexpr void __set_m_Sprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_m_Sprite() const;

 UnityEngine::Sprite __declspec(property(get=__get_m_OverrideSprite, put=__set_m_OverrideSprite))  m_OverrideSprite;

constexpr void __set_m_OverrideSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_m_OverrideSprite() const;

 UnityEngine::UI::UnityEngine__UI__Image__Type __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(UnityEngine::UI::UnityEngine__UI__Image__Type value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Image__Type __get_m_Type() const;

 bool __declspec(property(get=__get_m_PreserveAspect, put=__set_m_PreserveAspect))  m_PreserveAspect;

constexpr void __set_m_PreserveAspect(bool value) ;

constexpr bool __get_m_PreserveAspect() const;

 bool __declspec(property(get=__get_m_FillCenter, put=__set_m_FillCenter))  m_FillCenter;

constexpr void __set_m_FillCenter(bool value) ;

constexpr bool __get_m_FillCenter() const;

 UnityEngine::UI::UnityEngine__UI__Image__FillMethod __declspec(property(get=__get_m_FillMethod, put=__set_m_FillMethod))  m_FillMethod;

constexpr void __set_m_FillMethod(UnityEngine::UI::UnityEngine__UI__Image__FillMethod value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Image__FillMethod __get_m_FillMethod() const;

 float_t __declspec(property(get=__get_m_FillAmount, put=__set_m_FillAmount))  m_FillAmount;

constexpr void __set_m_FillAmount(float_t value) ;

constexpr float_t __get_m_FillAmount() const;

 bool __declspec(property(get=__get_m_FillClockwise, put=__set_m_FillClockwise))  m_FillClockwise;

constexpr void __set_m_FillClockwise(bool value) ;

constexpr bool __get_m_FillClockwise() const;

 int32_t __declspec(property(get=__get_m_FillOrigin, put=__set_m_FillOrigin))  m_FillOrigin;

constexpr void __set_m_FillOrigin(int32_t value) ;

constexpr int32_t __get_m_FillOrigin() const;

 float_t __declspec(property(get=__get_m_AlphaHitTestMinimumThreshold, put=__set_m_AlphaHitTestMinimumThreshold))  m_AlphaHitTestMinimumThreshold;

constexpr void __set_m_AlphaHitTestMinimumThreshold(float_t value) ;

constexpr float_t __get_m_AlphaHitTestMinimumThreshold() const;

 bool __declspec(property(get=__get_m_Tracked, put=__set_m_Tracked))  m_Tracked;

constexpr void __set_m_Tracked(bool value) ;

constexpr bool __get_m_Tracked() const;

 bool __declspec(property(get=__get_m_UseSpriteMesh, put=__set_m_UseSpriteMesh))  m_UseSpriteMesh;

constexpr void __set_m_UseSpriteMesh(bool value) ;

constexpr bool __get_m_UseSpriteMesh() const;

 float_t __declspec(property(get=__get_m_PixelsPerUnitMultiplier, put=__set_m_PixelsPerUnitMultiplier))  m_PixelsPerUnitMultiplier;

constexpr void __set_m_PixelsPerUnitMultiplier(float_t value) ;

constexpr float_t __get_m_PixelsPerUnitMultiplier() const;

 float_t __declspec(property(get=__get_m_CachedReferencePixelsPerUnit, put=__set_m_CachedReferencePixelsPerUnit))  m_CachedReferencePixelsPerUnit;

constexpr void __set_m_CachedReferencePixelsPerUnit(float_t value) ;

constexpr float_t __get_m_CachedReferencePixelsPerUnit() const;

static ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_s_VertScratch, put=__set_s_VertScratch))  s_VertScratch;

static void __set_s_VertScratch(::ArrayW<UnityEngine::Vector2> value) ;

static ::ArrayW<UnityEngine::Vector2> __get_s_VertScratch() ;

static ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_s_UVScratch, put=__set_s_UVScratch))  s_UVScratch;

static void __set_s_UVScratch(::ArrayW<UnityEngine::Vector2> value) ;

static ::ArrayW<UnityEngine::Vector2> __get_s_UVScratch() ;

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_s_Xy, put=__set_s_Xy))  s_Xy;

static void __set_s_Xy(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_s_Xy() ;

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_s_Uv, put=__set_s_Uv))  s_Uv;

static void __set_s_Uv(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_s_Uv() ;

static System::Collections::Generic::List_1<UnityEngine::UI::Image> __declspec(property(get=__get_m_TrackedTexturelessImages, put=__set_m_TrackedTexturelessImages))  m_TrackedTexturelessImages;

static void __set_m_TrackedTexturelessImages(System::Collections::Generic::List_1<UnityEngine::UI::Image> value) ;

static System::Collections::Generic::List_1<UnityEngine::UI::Image> __get_m_TrackedTexturelessImages() ;

static bool __declspec(property(get=__get_s_Initialized, put=__set_s_Initialized))  s_Initialized;

static void __set_s_Initialized(bool value) ;

static bool __get_s_Initialized() ;


// Properties

 UnityEngine::Sprite __declspec(property(get=get_sprite, put=set_sprite))  sprite;

 UnityEngine::Sprite __declspec(property(get=get_overrideSprite, put=set_overrideSprite))  overrideSprite;

 UnityEngine::Sprite __declspec(property(get=get_activeSprite))  activeSprite;

 UnityEngine::UI::UnityEngine__UI__Image__Type __declspec(property(get=get_type, put=set_type))  type;

 bool __declspec(property(get=get_preserveAspect, put=set_preserveAspect))  preserveAspect;

 bool __declspec(property(get=get_fillCenter, put=set_fillCenter))  fillCenter;

 UnityEngine::UI::UnityEngine__UI__Image__FillMethod __declspec(property(get=get_fillMethod, put=set_fillMethod))  fillMethod;

 float_t __declspec(property(get=get_fillAmount, put=set_fillAmount))  fillAmount;

 bool __declspec(property(get=get_fillClockwise, put=set_fillClockwise))  fillClockwise;

 int32_t __declspec(property(get=get_fillOrigin, put=set_fillOrigin))  fillOrigin;

 float_t __declspec(property(get=get_eventAlphaThreshold, put=set_eventAlphaThreshold))  eventAlphaThreshold;

 float_t __declspec(property(get=get_alphaHitTestMinimumThreshold, put=set_alphaHitTestMinimumThreshold))  alphaHitTestMinimumThreshold;

 bool __declspec(property(get=get_useSpriteMesh, put=set_useSpriteMesh))  useSpriteMesh;

static UnityEngine::Material __declspec(property(get=get_defaultETC1GraphicMaterial))  defaultETC1GraphicMaterial;

 UnityEngine::Texture __declspec(property(get=get_mainTexture))  mainTexture;

 bool __declspec(property(get=get_hasBorder))  hasBorder;

 float_t __declspec(property(get=get_pixelsPerUnitMultiplier, put=set_pixelsPerUnitMultiplier))  pixelsPerUnitMultiplier;

 float_t __declspec(property(get=get_pixelsPerUnit))  pixelsPerUnit;

 float_t __declspec(property(get=get_multipliedPixelsPerUnit))  multipliedPixelsPerUnit;

 UnityEngine::Material __declspec(property(get=get_material, put=set_material))  material;

 float_t __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_preferredWidth))  preferredWidth;

 float_t __declspec(property(get=get_flexibleWidth))  flexibleWidth;

 float_t __declspec(property(get=get_minHeight))  minHeight;

 float_t __declspec(property(get=get_preferredHeight))  preferredHeight;

 float_t __declspec(property(get=get_flexibleHeight))  flexibleHeight;

 int32_t __declspec(property(get=get_layoutPriority))  layoutPriority;


// Methods

/// @brief Method get_sprite addr 0x2be7ce4 size 0x8 virtual false final false
 UnityEngine::Sprite get_sprite() ;

/// @brief Method set_sprite addr 0x2bdae3c size 0x2e8 virtual false final false
 void set_sprite(UnityEngine::Sprite value) ;

/// @brief Method DisableSpriteOptimizations addr 0x2be7dd8 size 0x8 virtual false final false
 void DisableSpriteOptimizations() ;

/// @brief Method get_overrideSprite addr 0x2be7de0 size 0x4 virtual false final false
 UnityEngine::Sprite get_overrideSprite() ;

/// @brief Method set_overrideSprite addr 0x2be7e5c size 0x88 virtual false final false
 void set_overrideSprite(UnityEngine::Sprite value) ;

/// @brief Method get_activeSprite addr 0x2be7de4 size 0x78 virtual false final false
 UnityEngine::Sprite get_activeSprite() ;

/// @brief Method get_type addr 0x2be7ee4 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Image__Type get_type() ;

/// @brief Method set_type addr 0x2bdb124 size 0x80 virtual false final false
 void set_type(UnityEngine::UI::UnityEngine__UI__Image__Type value) ;

/// @brief Method get_preserveAspect addr 0x2be7eec size 0x8 virtual false final false
 bool get_preserveAspect() ;

/// @brief Method set_preserveAspect addr 0x2be7ef4 size 0x80 virtual false final false
 void set_preserveAspect(bool value) ;

/// @brief Method get_fillCenter addr 0x2be7f74 size 0x8 virtual false final false
 bool get_fillCenter() ;

/// @brief Method set_fillCenter addr 0x2be7f7c size 0x80 virtual false final false
 void set_fillCenter(bool value) ;

/// @brief Method get_fillMethod addr 0x2be7ffc size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Image__FillMethod get_fillMethod() ;

/// @brief Method set_fillMethod addr 0x2be8004 size 0x78 virtual false final false
 void set_fillMethod(UnityEngine::UI::UnityEngine__UI__Image__FillMethod value) ;

/// @brief Method get_fillAmount addr 0x2be807c size 0x8 virtual false final false
 float_t get_fillAmount() ;

/// @brief Method set_fillAmount addr 0x2be8084 size 0x90 virtual false final false
 void set_fillAmount(float_t value) ;

/// @brief Method get_fillClockwise addr 0x2be8114 size 0x8 virtual false final false
 bool get_fillClockwise() ;

/// @brief Method set_fillClockwise addr 0x2be811c size 0x80 virtual false final false
 void set_fillClockwise(bool value) ;

/// @brief Method get_fillOrigin addr 0x2be819c size 0x8 virtual false final false
 int32_t get_fillOrigin() ;

/// @brief Method set_fillOrigin addr 0x2be81a4 size 0x80 virtual false final false
 void set_fillOrigin(int32_t value) ;

/// @brief Method get_eventAlphaThreshold addr 0x2be8224 size 0x10 virtual false final false
 float_t get_eventAlphaThreshold() ;

/// @brief Method set_eventAlphaThreshold addr 0x2be8234 size 0x10 virtual false final false
 void set_eventAlphaThreshold(float_t value) ;

/// @brief Method get_alphaHitTestMinimumThreshold addr 0x2be8244 size 0x8 virtual false final false
 float_t get_alphaHitTestMinimumThreshold() ;

/// @brief Method set_alphaHitTestMinimumThreshold addr 0x2be824c size 0x8 virtual false final false
 void set_alphaHitTestMinimumThreshold(float_t value) ;

/// @brief Method get_useSpriteMesh addr 0x2be8254 size 0x8 virtual false final false
 bool get_useSpriteMesh() ;

/// @brief Method set_useSpriteMesh addr 0x2be825c size 0x80 virtual false final false
 void set_useSpriteMesh(bool value) ;

// Ctor Parameters []
explicit Image() ;

/// @brief Method .ctor addr 0x2be82dc size 0x40 virtual false final false
 void _ctor() ;

/// @brief Method get_defaultETC1GraphicMaterial addr 0x2be831c size 0xdc virtual false final false
static UnityEngine::Material get_defaultETC1GraphicMaterial() ;

/// @brief Method get_mainTexture addr 0x2be83f8 size 0x178 virtual true final false
 UnityEngine::Texture get_mainTexture() ;

/// @brief Method get_hasBorder addr 0x2be8570 size 0xb8 virtual false final false
 bool get_hasBorder() ;

/// @brief Method get_pixelsPerUnitMultiplier addr 0x2be8628 size 0x8 virtual false final false
 float_t get_pixelsPerUnitMultiplier() ;

/// @brief Method set_pixelsPerUnitMultiplier addr 0x2be8630 size 0x20 virtual false final false
 void set_pixelsPerUnitMultiplier(float_t value) ;

/// @brief Method get_pixelsPerUnit addr 0x2be8650 size 0xf4 virtual false final false
 float_t get_pixelsPerUnit() ;

/// @brief Method get_multipliedPixelsPerUnit addr 0x2be8744 size 0x1c virtual false final false
 float_t get_multipliedPixelsPerUnit() ;

/// @brief Method get_material addr 0x2be8760 size 0x12c virtual true final false
 UnityEngine::Material get_material() ;

/// @brief Method set_material addr 0x2be888c size 0x4 virtual true final false
 void set_material(UnityEngine::Material value) ;

/// @brief Method OnBeforeSerialize addr 0x2be8890 size 0x4 virtual true final false
 void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x2be8894 size 0x50 virtual true final false
 void OnAfterDeserialize() ;

/// @brief Method PreserveSpriteAspectRatio addr 0x2be88e4 size 0x158 virtual false final false
 void PreserveSpriteAspectRatio(ByRef<UnityEngine::Rect> rect, UnityEngine::Vector2 spriteSize) ;

/// @brief Method GetDrawingDimensions addr 0x2be8a3c size 0x484 virtual false final false
 UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect) ;

/// @brief Method SetNativeSize addr 0x2be8ec0 size 0x164 virtual true final false
 void SetNativeSize() ;

/// @brief Method OnPopulateMesh addr 0x2be9024 size 0x144 virtual true final false
 void OnPopulateMesh(UnityEngine::UI::VertexHelper toFill) ;

/// @brief Method TrackSprite addr 0x2be7cec size 0xec virtual false final false
 void TrackSprite() ;

/// @brief Method OnEnable addr 0x2beea2c size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2beea48 size 0x74 virtual true final false
 void OnDisable() ;

/// @brief Method UpdateMaterial addr 0x2beeb3c size 0xf4 virtual true final false
 void UpdateMaterial() ;

/// @brief Method OnCanvasHierarchyChanged addr 0x2beec30 size 0x108 virtual true final false
 void OnCanvasHierarchyChanged() ;

/// @brief Method GenerateSimpleSprite addr 0x2be9168 size 0xb24 virtual false final false
 void GenerateSimpleSprite(UnityEngine::UI::VertexHelper vh, bool lPreserveAspect) ;

/// @brief Method GenerateSprite addr 0x2be9c8c size 0x5f0 virtual false final false
 void GenerateSprite(UnityEngine::UI::VertexHelper vh, bool lPreserveAspect) ;

/// @brief Method GenerateSlicedSprite addr 0x2bea27c size 0x850 virtual false final false
 void GenerateSlicedSprite(UnityEngine::UI::VertexHelper toFill) ;

/// @brief Method GenerateTiledSprite addr 0x2beaacc size 0x29d8 virtual false final false
 void GenerateTiledSprite(UnityEngine::UI::VertexHelper toFill) ;

/// @brief Method AddQuad addr 0x2beefec size 0xe4 virtual false final false
static void AddQuad(UnityEngine::UI::VertexHelper vertexHelper, ::ArrayW<UnityEngine::Vector3> quadPositions, UnityEngine::Color32 color, ::ArrayW<UnityEngine::Vector3> quadUVs) ;

/// @brief Method AddQuad addr 0x2beee98 size 0x154 virtual false final false
static void AddQuad(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax) ;

/// @brief Method GetAdjustedBorders addr 0x2beed38 size 0x160 virtual false final false
 UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect adjustedRect) ;

/// @brief Method GenerateFilledSprite addr 0x2bed4a4 size 0x1428 virtual false final false
 void GenerateFilledSprite(UnityEngine::UI::VertexHelper toFill, bool preserveAspect) ;

/// @brief Method RadialCut addr 0x2bef0d0 size 0x120 virtual false final false
static bool RadialCut(::ArrayW<UnityEngine::Vector3> xy, ::ArrayW<UnityEngine::Vector3> uv, float_t fill, bool invert, int32_t corner) ;

/// @brief Method RadialCut addr 0x2bef1f0 size 0x3ec virtual false final false
static void RadialCut(::ArrayW<UnityEngine::Vector3> xy, float_t cos, float_t sin, bool invert, int32_t corner) ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2bef5dc size 0x4 virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2bef5e0 size 0x4 virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method get_minWidth addr 0x2bef5e4 size 0x8 virtual true final false
 float_t get_minWidth() ;

/// @brief Method get_preferredWidth addr 0x2bef5ec size 0xe4 virtual true final false
 float_t get_preferredWidth() ;

/// @brief Method get_flexibleWidth addr 0x2bef6d0 size 0x8 virtual true final false
 float_t get_flexibleWidth() ;

/// @brief Method get_minHeight addr 0x2bef6d8 size 0x8 virtual true final false
 float_t get_minHeight() ;

/// @brief Method get_preferredHeight addr 0x2bef6e0 size 0xe4 virtual true final false
 float_t get_preferredHeight() ;

/// @brief Method get_flexibleHeight addr 0x2bef7c4 size 0x8 virtual true final false
 float_t get_flexibleHeight() ;

/// @brief Method get_layoutPriority addr 0x2bef7cc size 0x8 virtual true final false
 int32_t get_layoutPriority() ;

/// @brief Method IsRaycastLocationValid addr 0x2bef7d4 size 0x38c virtual true final false
 bool IsRaycastLocationValid(UnityEngine::Vector2 screenPoint, UnityEngine::Camera eventCamera) ;

/// @brief Method MapCoordinate addr 0x2befb60 size 0x340 virtual false final false
 UnityEngine::Vector2 MapCoordinate(UnityEngine::Vector2 local, UnityEngine::Rect rect) ;

/// @brief Method RebuildImage addr 0x2befea0 size 0x1a8 virtual false final false
static void RebuildImage(UnityEngine::U2D::SpriteAtlas spriteAtlas) ;

/// @brief Method TrackImage addr 0x2bee8cc size 0x160 virtual false final false
static void TrackImage(UnityEngine::UI::Image g) ;

/// @brief Method UnTrackImage addr 0x2beeabc size 0x80 virtual false final false
static void UnTrackImage(UnityEngine::UI::Image g) ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2bf0048 size 0x38 virtual true final false
 void OnDidApplyAnimationProperties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Image__FillMethod, "UnityEngine.UI", "Image/FillMethod");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Image__Origin180, "UnityEngine.UI", "Image/Origin180");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Image__Origin360, "UnityEngine.UI", "Image/Origin360");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Image__Origin90, "UnityEngine.UI", "Image/Origin90");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Image__OriginHorizontal, "UnityEngine.UI", "Image/OriginHorizontal");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Image__OriginVertical, "UnityEngine.UI", "Image/OriginVertical");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Image__Type, "UnityEngine.UI", "Image/Type");
NEED_NO_BOX(UnityEngine::UI::Image);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Image, "UnityEngine.UI", "Image");
