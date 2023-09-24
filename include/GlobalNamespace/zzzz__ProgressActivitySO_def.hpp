#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class ProgressActivitySubtaskSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressActivitySO;
}
// Type: ::ProgressActivitySO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4647))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4645))
// CS Name: ProgressActivitySO
class CORDL_TYPE ProgressActivitySO : public GlobalNamespace::PS5ActivityDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ProgressActivitySO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySO", modifiers: " const&", def_value: None }]
constexpr ProgressActivitySO(ProgressActivitySO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySO", modifiers: "&&", def_value: None }]
constexpr ProgressActivitySO(ProgressActivitySO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProgressActivitySO(void* ptr) noexcept : GlobalNamespace::PS5ActivityDataSO(ptr) {
}


  constexpr ProgressActivitySO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProgressActivitySO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProgressActivitySO& operator=(ProgressActivitySO&& o) noexcept = default;
  constexpr ProgressActivitySO& operator=(ProgressActivitySO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::ProgressActivitySubtaskSO> __declspec(property(get=__get_subtasks, put=__set_subtasks))  subtasks;

constexpr void __set_subtasks(::ArrayW<GlobalNamespace::ProgressActivitySubtaskSO> value) ;

constexpr ::ArrayW<GlobalNamespace::ProgressActivitySubtaskSO> __get_subtasks() const;


// Methods

static GlobalNamespace::ProgressActivitySO New_ctor() ;

/// @brief Method .ctor addr 0x221a7ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ProgressActivitySO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ProgressActivitySO, "", "ProgressActivitySO");
