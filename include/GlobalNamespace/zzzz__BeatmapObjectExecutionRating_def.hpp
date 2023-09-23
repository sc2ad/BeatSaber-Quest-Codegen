#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectExecutionRating;
}
// Type: ::BeatmapObjectExecutionRating
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4166))
// CS Name: BeatmapObjectExecutionRating
class CORDL_TYPE BeatmapObjectExecutionRating : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapObjectExecutionRating() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRating", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectExecutionRating(BeatmapObjectExecutionRating const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRating", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectExecutionRating(BeatmapObjectExecutionRating&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectExecutionRating(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapObjectExecutionRating& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectExecutionRating& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectExecutionRating& operator=(BeatmapObjectExecutionRating&& o) noexcept = default;
  constexpr BeatmapObjectExecutionRating& operator=(BeatmapObjectExecutionRating const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField))  _time_k__BackingField;

constexpr void __set__time_k__BackingField(float_t value) ;

constexpr float_t __get__time_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_time))  time;


// Methods

/// @brief Method get_time addr 0x21bb530 size 0x8 virtual false final false
 float_t get_time() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
explicit BeatmapObjectExecutionRating(float_t time) ;

/// @brief Method .ctor addr 0x21bb538 size 0x28 virtual false final false
 void _ctor(float_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapObjectExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRating, "", "BeatmapObjectExecutionRating");
