#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct AchievementType;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementDefinition;
}
// Type: Oculus.Platform.Models::AchievementDefinition
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13380))
// CS Name: Oculus.Platform.Models.AchievementDefinition
class CORDL_TYPE AchievementDefinition : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AchievementDefinition() = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementDefinition", modifiers: " const&", def_value: None }]
constexpr AchievementDefinition(AchievementDefinition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementDefinition", modifiers: "&&", def_value: None }]
constexpr AchievementDefinition(AchievementDefinition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AchievementDefinition(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AchievementDefinition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AchievementDefinition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AchievementDefinition& operator=(AchievementDefinition&& o) noexcept = default;
  constexpr AchievementDefinition& operator=(AchievementDefinition const& o) noexcept = default;
                


// Fields

 Oculus::Platform::AchievementType __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(Oculus::Platform::AchievementType value) ;

constexpr Oculus::Platform::AchievementType __get_Type() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 uint32_t __declspec(property(get=__get_BitfieldLength, put=__set_BitfieldLength))  BitfieldLength;

constexpr void __set_BitfieldLength(uint32_t value) ;

constexpr uint32_t __get_BitfieldLength() const;

 uint64_t __declspec(property(get=__get_Target, put=__set_Target))  Target;

constexpr void __set_Target(uint64_t value) ;

constexpr uint64_t __get_Target() const;


// Methods

static Oculus::Platform::Models::AchievementDefinition New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259bc78 size 0xa8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AchievementDefinition);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementDefinition, "Oculus.Platform.Models", "AchievementDefinition");
