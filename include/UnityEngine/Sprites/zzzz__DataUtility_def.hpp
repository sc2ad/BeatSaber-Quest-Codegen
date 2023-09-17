#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Sprites {
class DataUtility;
}
// Type: UnityEngine.Sprites::DataUtility
namespace UnityEngine::Sprites {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10229))
// CS Name: UnityEngine.Sprites.DataUtility
class CORDL_TYPE DataUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DataUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataUtility", modifiers: " const&", def_value: None }]
constexpr DataUtility(DataUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataUtility", modifiers: "&&", def_value: None }]
constexpr DataUtility(DataUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DataUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataUtility& operator=(DataUtility&& o) noexcept = default;
  constexpr DataUtility& operator=(DataUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GetInnerUV addr 0x2b6e604 size 0x10 virtual false final false
static ::UnityEngine::Vector4 GetInnerUV(::UnityEngine::Sprite sprite) ;

/// @brief Method GetOuterUV addr 0x2b6e614 size 0x10 virtual false final false
static ::UnityEngine::Vector4 GetOuterUV(::UnityEngine::Sprite sprite) ;

/// @brief Method GetPadding addr 0x2b6e624 size 0x10 virtual false final false
static ::UnityEngine::Vector4 GetPadding(::UnityEngine::Sprite sprite) ;

/// @brief Method GetMinSize addr 0x2b6e634 size 0x50 virtual false final false
static ::UnityEngine::Vector2 GetMinSize(::UnityEngine::Sprite sprite) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Sprites
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Sprites::DataUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Sprites::DataUtility, "UnityEngine.Sprites", "DataUtility");
