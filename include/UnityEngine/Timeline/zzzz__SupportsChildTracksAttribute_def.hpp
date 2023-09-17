#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SupportsChildTracksAttribute;
}
// Type: UnityEngine.Timeline::SupportsChildTracksAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14130))
// CS Name: UnityEngine.Timeline.SupportsChildTracksAttribute
class CORDL_TYPE SupportsChildTracksAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SupportsChildTracksAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SupportsChildTracksAttribute", modifiers: " const&", def_value: None }]
constexpr SupportsChildTracksAttribute(SupportsChildTracksAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SupportsChildTracksAttribute", modifiers: "&&", def_value: None }]
constexpr SupportsChildTracksAttribute(SupportsChildTracksAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SupportsChildTracksAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr SupportsChildTracksAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SupportsChildTracksAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SupportsChildTracksAttribute& operator=(SupportsChildTracksAttribute&& o) noexcept = default;
  constexpr SupportsChildTracksAttribute& operator=(SupportsChildTracksAttribute const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get_childType, put=__set_childType))  childType;

constexpr void __set_childType(::System::Type value) ;

constexpr ::System::Type __get_childType() const;

 int32_t __declspec(property(get=__get_levels, put=__set_levels))  levels;

constexpr void __set_levels(int32_t value) ;

constexpr int32_t __get_levels() const;


// Methods

// Ctor Parameters [CppParam { name: "childType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "levels", ty: "int32_t", modifiers: "", def_value: None }]
explicit SupportsChildTracksAttribute(::System::Type childType, int32_t levels) ;

/// @brief Method .ctor addr 0x2ad5dac size 0x30 virtual false final false
 void _ctor(::System::Type childType, int32_t levels) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::SupportsChildTracksAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SupportsChildTracksAttribute, "UnityEngine.Timeline", "SupportsChildTracksAttribute");
