#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct AvatarMaskBodyPart;
}
// Forward declare root types
namespace UnityEngine {
class AvatarMask;
}
// Type: UnityEngine::AvatarMask
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15030))
// CS Name: UnityEngine.AvatarMask
class CORDL_TYPE AvatarMask : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AvatarMask() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: " const&", def_value: None }]
constexpr AvatarMask(AvatarMask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: "&&", def_value: None }]
constexpr AvatarMask(AvatarMask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarMask(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr AvatarMask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarMask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarMask& operator=(AvatarMask&& o) noexcept = default;
  constexpr AvatarMask& operator=(AvatarMask const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_transformCount))  transformCount;


// Methods

/// @brief Method GetHumanoidBodyPartActive addr 0x2b1a124 size 0x44 virtual false final false
 bool GetHumanoidBodyPartActive(UnityEngine::AvatarMaskBodyPart index) ;

/// @brief Method get_transformCount addr 0x2b1a168 size 0x3c virtual false final false
 int32_t get_transformCount() ;

/// @brief Method GetTransformPath addr 0x2b1a1a4 size 0x44 virtual false final false
 ::StringW GetTransformPath(int32_t index) ;

/// @brief Method GetTransformWeight addr 0x2b1a1e8 size 0x44 virtual false final false
 float_t GetTransformWeight(int32_t index) ;

/// @brief Method GetTransformActive addr 0x2b1a22c size 0x54 virtual false final false
 bool GetTransformActive(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AvatarMask);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AvatarMask, "UnityEngine", "AvatarMask");
