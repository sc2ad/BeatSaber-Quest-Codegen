#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color32;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TMPro {
class TMPro_ExtensionMethods;
}
// Type: TMPro::TMPro_ExtensionMethods
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12256))
// CS Name: TMPro.TMPro_ExtensionMethods
class CORDL_TYPE TMPro_ExtensionMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMPro_ExtensionMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro_ExtensionMethods", modifiers: " const&", def_value: None }]
constexpr TMPro_ExtensionMethods(TMPro_ExtensionMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro_ExtensionMethods", modifiers: "&&", def_value: None }]
constexpr TMPro_ExtensionMethods(TMPro_ExtensionMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro_ExtensionMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro_ExtensionMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro_ExtensionMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro_ExtensionMethods& operator=(TMPro_ExtensionMethods&& o) noexcept = default;
  constexpr TMPro_ExtensionMethods& operator=(TMPro_ExtensionMethods const& o) noexcept = default;
                


// Methods

/// @brief Method ToIntArray addr 0x2a67adc size 0xb4 virtual false final false
static ::ArrayW<int32_t> ToIntArray(::StringW text) ;

/// @brief Method ArrayToString addr 0x2a67b90 size 0xac virtual false final false
static ::StringW ArrayToString(::ArrayW<char16_t> chars) ;

/// @brief Method IntToString addr 0x2a67c3c size 0xb0 virtual false final false
static ::StringW IntToString(::ArrayW<int32_t> unicodes) ;

/// @brief Method UintToString addr 0x2a67cec size 0xd8 virtual false final false
static ::StringW UintToString(System::Collections::Generic::List_1<uint32_t> unicodes) ;

/// @brief Method IntToString addr 0x2a67dc4 size 0x118 virtual false final false
static ::StringW IntToString(::ArrayW<int32_t> unicodes, int32_t start, int32_t length) ;

/// @brief Method FindInstanceID addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t FindInstanceID(System::Collections::Generic::List_1<T> list, T target) ;

/// @brief Method Compare addr 0x2a67edc size 0x10 virtual false final false
static bool Compare(UnityEngine::Color32 a, UnityEngine::Color32 b) ;

/// @brief Method CompareRGB addr 0x2a67eec size 0x10 virtual false final false
static bool CompareRGB(UnityEngine::Color32 a, UnityEngine::Color32 b) ;

/// @brief Method Compare addr 0x2a67efc size 0x30 virtual false final false
static bool Compare(UnityEngine::Color a, UnityEngine::Color b) ;

/// @brief Method CompareRGB addr 0x2a67f2c size 0x28 virtual false final false
static bool CompareRGB(UnityEngine::Color a, UnityEngine::Color b) ;

/// @brief Method Multiply addr 0x2a67f54 size 0xc0 virtual false final false
static UnityEngine::Color32 Multiply(UnityEngine::Color32 c1, UnityEngine::Color32 c2) ;

/// @brief Method Tint addr 0x2a68014 size 0xc0 virtual false final false
static UnityEngine::Color32 Tint(UnityEngine::Color32 c1, UnityEngine::Color32 c2) ;

/// @brief Method Tint addr 0x2a680d4 size 0xdc virtual false final false
static UnityEngine::Color32 Tint(UnityEngine::Color32 c1, float_t tint) ;

/// @brief Method MinAlpha addr 0x2a681b0 size 0xc virtual false final false
static UnityEngine::Color MinAlpha(UnityEngine::Color c1, UnityEngine::Color c2) ;

/// @brief Method Compare addr 0x2a681bc size 0x94 virtual false final false
static bool Compare(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2, int32_t accuracy) ;

/// @brief Method Compare addr 0x2a68250 size 0x10c0 virtual false final false
static bool Compare(UnityEngine::Quaternion q1, UnityEngine::Quaternion q2, int32_t accuracy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMPro_ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro_ExtensionMethods, "TMPro", "TMPro_ExtensionMethods");
