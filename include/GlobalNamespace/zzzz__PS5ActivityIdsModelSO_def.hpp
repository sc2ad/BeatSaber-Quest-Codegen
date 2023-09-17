#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace GlobalNamespace {
class ProgressActivitySO;
}
namespace GlobalNamespace {
class CompetetiveActivitySO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5ActivityIdsModelSO;
}
// Type: ::PS5ActivityIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4648))
// CS Name: PS5ActivityIdsModelSO
class CORDL_TYPE PS5ActivityIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PS5ActivityIdsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5ActivityIdsModelSO", modifiers: " const&", def_value: None }]
constexpr PS5ActivityIdsModelSO(PS5ActivityIdsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5ActivityIdsModelSO", modifiers: "&&", def_value: None }]
constexpr PS5ActivityIdsModelSO(PS5ActivityIdsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5ActivityIdsModelSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PS5ActivityIdsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5ActivityIdsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5ActivityIdsModelSO& operator=(PS5ActivityIdsModelSO&& o) noexcept = default;
  constexpr PS5ActivityIdsModelSO& operator=(PS5ActivityIdsModelSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::ProgressActivitySO> __declspec(property(get=__get__progressActivities, put=__set__progressActivities))  _progressActivities;

constexpr void __set__progressActivities(::ArrayW<::GlobalNamespace::ProgressActivitySO> value) ;

constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySO> __get__progressActivities() const;

 ::ArrayW<::GlobalNamespace::CompetetiveActivitySO> __declspec(property(get=__get__competetiveActivities, put=__set__competetiveActivities))  _competetiveActivities;

constexpr void __set__competetiveActivities(::ArrayW<::GlobalNamespace::CompetetiveActivitySO> value) ;

constexpr ::ArrayW<::GlobalNamespace::CompetetiveActivitySO> __get__competetiveActivities() const;


// Properties

 ::ArrayW<::GlobalNamespace::ProgressActivitySO> __declspec(property(get=get_progressActivities))  progressActivities;

 ::ArrayW<::GlobalNamespace::CompetetiveActivitySO> __declspec(property(get=get_competetiveActivities))  competetiveActivities;


// Methods

/// @brief Method get_progressActivities addr 0x221a7cc size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::ProgressActivitySO> get_progressActivities() ;

/// @brief Method get_competetiveActivities addr 0x221a7d4 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::CompetetiveActivitySO> get_competetiveActivities() ;

// Ctor Parameters []
explicit PS5ActivityIdsModelSO() ;

/// @brief Method .ctor addr 0x221a7dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PS5ActivityIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5ActivityIdsModelSO, "", "PS5ActivityIdsModelSO");
