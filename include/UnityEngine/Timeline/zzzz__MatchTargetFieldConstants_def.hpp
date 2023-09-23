#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class MatchTargetFieldConstants;
}
// Type: UnityEngine.Timeline::MatchTargetFieldConstants
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14051))
// CS Name: UnityEngine.Timeline.MatchTargetFieldConstants
class CORDL_TYPE MatchTargetFieldConstants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MatchTargetFieldConstants() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchTargetFieldConstants", modifiers: " const&", def_value: None }]
constexpr MatchTargetFieldConstants(MatchTargetFieldConstants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchTargetFieldConstants", modifiers: "&&", def_value: None }]
constexpr MatchTargetFieldConstants(MatchTargetFieldConstants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchTargetFieldConstants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchTargetFieldConstants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchTargetFieldConstants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchTargetFieldConstants& operator=(MatchTargetFieldConstants&& o) noexcept = default;
  constexpr MatchTargetFieldConstants& operator=(MatchTargetFieldConstants const& o) noexcept = default;
                


// Fields

static UnityEngine::Timeline::MatchTargetFields __declspec(property(get=__get_All, put=__set_All))  All;

static void __set_All(UnityEngine::Timeline::MatchTargetFields value) ;

static UnityEngine::Timeline::MatchTargetFields __get_All() ;

static UnityEngine::Timeline::MatchTargetFields __declspec(property(get=__get_None, put=__set_None))  None;

static void __set_None(UnityEngine::Timeline::MatchTargetFields value) ;

static UnityEngine::Timeline::MatchTargetFields __get_None() ;

static UnityEngine::Timeline::MatchTargetFields __declspec(property(get=__get_Position, put=__set_Position))  Position;

static void __set_Position(UnityEngine::Timeline::MatchTargetFields value) ;

static UnityEngine::Timeline::MatchTargetFields __get_Position() ;

static UnityEngine::Timeline::MatchTargetFields __declspec(property(get=__get_Rotation, put=__set_Rotation))  Rotation;

static void __set_Rotation(UnityEngine::Timeline::MatchTargetFields value) ;

static UnityEngine::Timeline::MatchTargetFields __get_Rotation() ;


// Methods

/// @brief Method HasAny addr 0x2ab835c size 0x74 virtual false final false
static bool HasAny(UnityEngine::Timeline::MatchTargetFields me, UnityEngine::Timeline::MatchTargetFields fields) ;

/// @brief Method Toggle addr 0x2ab83d0 size 0x8 virtual false final false
static UnityEngine::Timeline::MatchTargetFields Toggle(UnityEngine::Timeline::MatchTargetFields me, UnityEngine::Timeline::MatchTargetFields flag) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::MatchTargetFieldConstants);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::MatchTargetFieldConstants, "UnityEngine.Timeline", "MatchTargetFieldConstants");
