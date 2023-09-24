#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TrailElement;
}
// Type: ::TrailElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4992))
// CS Name: TrailElement
class CORDL_TYPE TrailElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TrailElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrailElement", modifiers: " const&", def_value: None }]
constexpr TrailElement(TrailElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrailElement", modifiers: "&&", def_value: None }]
constexpr TrailElement(TrailElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrailElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TrailElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrailElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrailElement& operator=(TrailElement&& o) noexcept = default;
  constexpr TrailElement& operator=(TrailElement const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_normal, put=__set_normal))  normal;

constexpr void __set_normal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_normal() const;

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 float_t __declspec(property(get=__get_localDistance, put=__set_localDistance))  localDistance;

constexpr void __set_localDistance(float_t value) ;

constexpr float_t __get_localDistance() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;


// Methods

/// @brief Method SetData addr 0x2257684 size 0x40 virtual false final false
 void SetData(UnityEngine::Vector3 start, UnityEngine::Vector3 end, float_t time) ;

/// @brief Method CopyFrom addr 0x22576c4 size 0x40 virtual false final false
 void CopyFrom(GlobalNamespace::TrailElement other) ;

/// @brief Method SetDistance addr 0x2257704 size 0x8 virtual false final false
 void SetDistance(float_t value) ;

/// @brief Method UpdateLocalDistance addr 0x225770c size 0xa8 virtual false final false
 void UpdateLocalDistance(GlobalNamespace::TrailElement prev) ;

static GlobalNamespace::TrailElement New_ctor() ;

/// @brief Method .ctor addr 0x22577b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TrailElement);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailElement, "", "TrailElement");
