#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class DistanceObjectiveValueFormatterSO;
}
// Type: ::DistanceObjectiveValueFormatterSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4465))
// CS Name: DistanceObjectiveValueFormatterSO
class CORDL_TYPE DistanceObjectiveValueFormatterSO : public GlobalNamespace::ObjectiveValueFormatterSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DistanceObjectiveValueFormatterSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "DistanceObjectiveValueFormatterSO", modifiers: " const&", def_value: None }]
constexpr DistanceObjectiveValueFormatterSO(DistanceObjectiveValueFormatterSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DistanceObjectiveValueFormatterSO", modifiers: "&&", def_value: None }]
constexpr DistanceObjectiveValueFormatterSO(DistanceObjectiveValueFormatterSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DistanceObjectiveValueFormatterSO(void* ptr) noexcept : GlobalNamespace::ObjectiveValueFormatterSO(ptr) {
}


  constexpr DistanceObjectiveValueFormatterSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DistanceObjectiveValueFormatterSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DistanceObjectiveValueFormatterSO& operator=(DistanceObjectiveValueFormatterSO&& o) noexcept = default;
  constexpr DistanceObjectiveValueFormatterSO& operator=(DistanceObjectiveValueFormatterSO const& o) noexcept = default;
                


// Methods

/// @brief Method FormatValue addr 0x21f0d70 size 0x80 virtual true final false
 ::StringW FormatValue(int32_t value) ;

// Ctor Parameters []
explicit DistanceObjectiveValueFormatterSO() ;

/// @brief Method .ctor addr 0x21f0df0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DistanceObjectiveValueFormatterSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DistanceObjectiveValueFormatterSO, "", "DistanceObjectiveValueFormatterSO");
