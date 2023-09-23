#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Forward declare root types
namespace UnityEngine {
class Motion;
}
// Type: UnityEngine::Motion
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15039))
// CS Name: UnityEngine.Motion
class CORDL_TYPE Motion : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Motion() = default;

// Ctor Parameters [CppParam { name: "", ty: "Motion", modifiers: " const&", def_value: None }]
constexpr Motion(Motion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Motion", modifiers: "&&", def_value: None }]
constexpr Motion(Motion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Motion(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Motion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Motion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Motion& operator=(Motion&& o) noexcept = default;
  constexpr Motion& operator=(Motion const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isAnimatorMotion_k__BackingField, put=__set__isAnimatorMotion_k__BackingField))  _isAnimatorMotion_k__BackingField;

constexpr void __set__isAnimatorMotion_k__BackingField(bool value) ;

constexpr bool __get__isAnimatorMotion_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isLooping))  isLooping;


// Methods

// Ctor Parameters []
explicit Motion() ;

/// @brief Method .ctor addr 0x2b1aafc size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method get_isLooping addr 0x2b1ab54 size 0x3c virtual false final false
 bool get_isLooping() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Motion);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Motion, "UnityEngine", "Motion");
