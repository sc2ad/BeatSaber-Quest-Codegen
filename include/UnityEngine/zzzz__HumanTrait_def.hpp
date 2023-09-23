#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class HumanTrait;
}
// Type: UnityEngine::HumanTrait
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15040))
// CS Name: UnityEngine.HumanTrait
class CORDL_TYPE HumanTrait : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HumanTrait() = default;

// Ctor Parameters [CppParam { name: "", ty: "HumanTrait", modifiers: " const&", def_value: None }]
constexpr HumanTrait(HumanTrait const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HumanTrait", modifiers: "&&", def_value: None }]
constexpr HumanTrait(HumanTrait&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HumanTrait(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HumanTrait& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HumanTrait& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HumanTrait& operator=(HumanTrait&& o) noexcept = default;
  constexpr HumanTrait& operator=(HumanTrait const& o) noexcept = default;
                


// Properties

static int32_t __declspec(property(get=get_MuscleCount))  MuscleCount;

static ::ArrayW<::StringW> __declspec(property(get=get_MuscleName))  MuscleName;


// Methods

/// @brief Method get_MuscleCount addr 0x2b1ab90 size 0x28 virtual false final false
static int32_t get_MuscleCount() ;

/// @brief Method GetBoneIndexFromMono addr 0x2b19ad4 size 0x3c virtual false final false
static int32_t GetBoneIndexFromMono(int32_t humanId) ;

/// @brief Method get_MuscleName addr 0x2b1abb8 size 0x28 virtual false final false
static ::ArrayW<::StringW> get_MuscleName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::HumanTrait);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanTrait, "UnityEngine", "HumanTrait");
