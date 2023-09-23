#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineUndo;
}
// Type: UnityEngine.Timeline::TimelineUndo
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14151))
// CS Name: UnityEngine.Timeline.TimelineUndo
class CORDL_TYPE TimelineUndo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimelineUndo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineUndo", modifiers: " const&", def_value: None }]
constexpr TimelineUndo(TimelineUndo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineUndo", modifiers: "&&", def_value: None }]
constexpr TimelineUndo(TimelineUndo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelineUndo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimelineUndo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelineUndo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelineUndo& operator=(TimelineUndo&& o) noexcept = default;
  constexpr TimelineUndo& operator=(TimelineUndo const& o) noexcept = default;
                


// Methods

/// @brief Method PushDestroyUndo addr 0x2ad9d40 size 0x88 virtual false final false
static void PushDestroyUndo(UnityEngine::Timeline::TimelineAsset timeline, UnityEngine::Object thingToDirty, UnityEngine::Object objectToDestroy) ;

/// @brief Method PushUndo addr 0x2ad9dc8 size 0x4 virtual false final false
static void PushUndo(::ArrayW<UnityEngine::Object> thingsToDirty, ::StringW operation) ;

/// @brief Method PushUndo addr 0x2ad9dcc size 0x4 virtual false final false
static void PushUndo(UnityEngine::Object thingToDirty, ::StringW operation) ;

/// @brief Method RegisterCreatedObjectUndo addr 0x2ad9dd0 size 0x4 virtual false final false
static void RegisterCreatedObjectUndo(UnityEngine::Object thingCreated, ::StringW operation) ;

/// @brief Method UndoName addr 0x2ad9dd4 size 0x4c virtual false final false
static ::StringW UndoName(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::TimelineUndo);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineUndo, "UnityEngine.Timeline", "TimelineUndo");
