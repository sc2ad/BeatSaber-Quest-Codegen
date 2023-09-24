#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class ScoreObjectiveValueFormatterSO;
}
// Type: ::ScoreObjectiveValueFormatterSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4475))
// CS Name: ScoreObjectiveValueFormatterSO
class CORDL_TYPE ScoreObjectiveValueFormatterSO : public GlobalNamespace::ObjectiveValueFormatterSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ScoreObjectiveValueFormatterSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreObjectiveValueFormatterSO", modifiers: " const&", def_value: None }]
constexpr ScoreObjectiveValueFormatterSO(ScoreObjectiveValueFormatterSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreObjectiveValueFormatterSO", modifiers: "&&", def_value: None }]
constexpr ScoreObjectiveValueFormatterSO(ScoreObjectiveValueFormatterSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoreObjectiveValueFormatterSO(void* ptr) noexcept : GlobalNamespace::ObjectiveValueFormatterSO(ptr) {
}


  constexpr ScoreObjectiveValueFormatterSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoreObjectiveValueFormatterSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoreObjectiveValueFormatterSO& operator=(ScoreObjectiveValueFormatterSO&& o) noexcept = default;
  constexpr ScoreObjectiveValueFormatterSO& operator=(ScoreObjectiveValueFormatterSO const& o) noexcept = default;
                


// Methods

/// @brief Method FormatValue addr 0x21f12c0 size 0x58 virtual true final false
 ::StringW FormatValue(int32_t value) ;

static GlobalNamespace::ScoreObjectiveValueFormatterSO New_ctor() ;

/// @brief Method .ctor addr 0x21f1318 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ScoreObjectiveValueFormatterSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreObjectiveValueFormatterSO, "", "ScoreObjectiveValueFormatterSO");
