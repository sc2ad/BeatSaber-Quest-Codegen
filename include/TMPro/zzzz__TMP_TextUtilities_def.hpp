#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
struct CaretPosition;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace TMPro {
class TMP_TextUtilities;
}
namespace TMPro {
struct TMPro__TMP_TextUtilities__LineSegment;
}
// Type: ::LineSegment
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12398))
// CS Name: TMPro.TMP_TextUtilities::LineSegment
struct CORDL_TYPE TMPro__TMP_TextUtilities__LineSegment : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Point1", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "Point2", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr TMPro__TMP_TextUtilities__LineSegment(UnityEngine::Vector3 Point1, UnityEngine::Vector3 Point2) noexcept;


                    constexpr TMPro__TMP_TextUtilities__LineSegment(TMPro__TMP_TextUtilities__LineSegment const&) = default;
                    constexpr TMPro__TMP_TextUtilities__LineSegment(TMPro__TMP_TextUtilities__LineSegment&&) = default;
                    constexpr TMPro__TMP_TextUtilities__LineSegment& operator=(TMPro__TMP_TextUtilities__LineSegment const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_TextUtilities__LineSegment& operator=(TMPro__TMP_TextUtilities__LineSegment&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_TextUtilities__LineSegment(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_Point1, put=__set_Point1))  Point1;

constexpr void __set_Point1(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_Point1() const;

 UnityEngine::Vector3 __declspec(property(get=__get_Point2, put=__set_Point2))  Point2;

constexpr void __set_Point2(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_Point2() const;


// Methods

/// @brief Method .ctor addr 0x2ab4494 size 0x10 virtual false final false
 void _ctor(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextUtilities
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12399))
// CS Name: TMPro.TMP_TextUtilities
class CORDL_TYPE TMP_TextUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LineSegment = TMPro::TMPro__TMP_TextUtilities__LineSegment;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_TextUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextUtilities", modifiers: " const&", def_value: None }]
constexpr TMP_TextUtilities(TMP_TextUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextUtilities", modifiers: "&&", def_value: None }]
constexpr TMP_TextUtilities(TMP_TextUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_TextUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_TextUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_TextUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_TextUtilities& operator=(TMP_TextUtilities&& o) noexcept = default;
  constexpr TMP_TextUtilities& operator=(TMP_TextUtilities const& o) noexcept = default;
                


// Fields

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_rectWorldCorners, put=__set_m_rectWorldCorners))  m_rectWorldCorners;

static void __set_m_rectWorldCorners(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_m_rectWorldCorners() ;

/// @brief Field k_lookupStringL offset 0
static constexpr ::ConstString  k_lookupStringL{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-"};

/// @brief Field k_lookupStringU offset 0
static constexpr ::ConstString  k_lookupStringU{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-"};


// Methods

/// @brief Method GetCursorIndexFromPosition addr 0x2ab170c size 0x164 virtual false final false
static int32_t GetCursorIndexFromPosition(TMPro::TMP_Text textComponent, UnityEngine::Vector3 position, UnityEngine::Camera camera) ;

/// @brief Method GetCursorIndexFromPosition addr 0x2ab1da8 size 0x1e0 virtual false final false
static int32_t GetCursorIndexFromPosition(TMPro::TMP_Text textComponent, UnityEngine::Vector3 position, UnityEngine::Camera camera, ByRef<TMPro::CaretPosition> cursor) ;

/// @brief Method FindNearestLine addr 0x2ab1f88 size 0x180 virtual false final false
static int32_t FindNearestLine(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera) ;

/// @brief Method FindNearestCharacterOnLine addr 0x2ab2108 size 0x378 virtual false final false
static int32_t FindNearestCharacterOnLine(TMPro::TMP_Text text, UnityEngine::Vector3 position, int32_t line, UnityEngine::Camera camera, bool visibleOnly) ;

/// @brief Method IsIntersectingRectTransform addr 0x2ab2608 size 0x11c virtual false final false
static bool IsIntersectingRectTransform(UnityEngine::RectTransform rectTransform, UnityEngine::Vector3 position, UnityEngine::Camera camera) ;

/// @brief Method FindIntersectingCharacter addr 0x2ab2724 size 0x20c virtual false final false
static int32_t FindIntersectingCharacter(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera, bool visibleOnly) ;

/// @brief Method FindNearestCharacter addr 0x2ab1870 size 0x33c virtual false final false
static int32_t FindNearestCharacter(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera, bool visibleOnly) ;

/// @brief Method FindIntersectingWord addr 0x2ab2930 size 0x414 virtual false final false
static int32_t FindIntersectingWord(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera) ;

/// @brief Method FindNearestWord addr 0x2ab2d44 size 0x5c8 virtual false final false
static int32_t FindNearestWord(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera) ;

/// @brief Method FindIntersectingLine addr 0x2ab330c size 0x158 virtual false final false
static int32_t FindIntersectingLine(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera) ;

/// @brief Method FindIntersectingLink addr 0x2ab3464 size 0x33c virtual false final false
static int32_t FindIntersectingLink(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera) ;

/// @brief Method FindNearestLink addr 0x2ab37a0 size 0x71c virtual false final false
static int32_t FindNearestLink(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera) ;

/// @brief Method PointIntersectRectangle addr 0x2ab2480 size 0xc0 virtual false final false
static bool PointIntersectRectangle(UnityEngine::Vector3 m, UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 c, UnityEngine::Vector3 d) ;

/// @brief Method ScreenPointToWorldPointInRectangle addr 0x2ab1bac size 0x1fc virtual false final false
static bool ScreenPointToWorldPointInRectangle(UnityEngine::Transform transform, UnityEngine::Vector2 screenPoint, UnityEngine::Camera cam, ByRef<UnityEngine::Vector3> worldPoint) ;

/// @brief Method IntersectLinePlane addr 0x2ab3ebc size 0x16c virtual false final false
static bool IntersectLinePlane(TMPro::TMPro__TMP_TextUtilities__LineSegment line, UnityEngine::Vector3 point, UnityEngine::Vector3 normal, ByRef<UnityEngine::Vector3> intersectingPoint) ;

/// @brief Method DistanceToLine addr 0x2ab2540 size 0xc8 virtual false final false
static float_t DistanceToLine(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 point) ;

/// @brief Method ToLowerFast addr 0x2ab4028 size 0x74 virtual false final false
static char16_t ToLowerFast(char16_t c) ;

/// @brief Method ToUpperFast addr 0x2ab409c size 0x74 virtual false final false
static char16_t ToUpperFast(char16_t c) ;

/// @brief Method ToUpperASCIIFast addr 0x2ab4110 size 0x74 virtual false final false
static uint32_t ToUpperASCIIFast(uint32_t c) ;

/// @brief Method GetHashCode addr 0x2ab4184 size 0xbc virtual false final false
static int32_t GetHashCode(::StringW s) ;

/// @brief Method GetSimpleHashCode addr 0x2aabfe0 size 0x6c virtual false final false
static int32_t GetSimpleHashCode(::StringW s) ;

/// @brief Method GetSimpleHashCodeLowercase addr 0x2ab4240 size 0xbc virtual false final false
static uint32_t GetSimpleHashCodeLowercase(::StringW s) ;

/// @brief Method HexToInt addr 0x2ab42fc size 0x2c virtual false final false
static int32_t HexToInt(char16_t hex) ;

/// @brief Method StringHexToInt addr 0x2ab4328 size 0x104 virtual false final false
static int32_t StringHexToInt(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextUtilities, "TMPro", "TMP_TextUtilities");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_TextUtilities__LineSegment, "TMPro", "TMP_TextUtilities/LineSegment");
