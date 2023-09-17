#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
namespace {
namespace GlobalNamespace {
class PS5LevelProductsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5PlatformAdditionalContentModel;
}
// Type: ::PS5PlatformAdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4688)), TypeDefinitionIndex(TypeDefinitionIndex(4650)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4688), inst: 4827 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4652))
// CS Name: PS5PlatformAdditionalContentModel
class CORDL_TYPE PS5PlatformAdditionalContentModel : public ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<::GlobalNamespace::PS5LevelProductsModelSO> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PS5PlatformAdditionalContentModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5PlatformAdditionalContentModel", modifiers: " const&", def_value: None }]
constexpr PS5PlatformAdditionalContentModel(PS5PlatformAdditionalContentModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5PlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
constexpr PS5PlatformAdditionalContentModel(PS5PlatformAdditionalContentModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5PlatformAdditionalContentModel(void* ptr) noexcept : ::GlobalNamespace::SonyPlatformAdditionalContentModel_1<::GlobalNamespace::PS5LevelProductsModelSO>(ptr) {
}


  constexpr PS5PlatformAdditionalContentModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5PlatformAdditionalContentModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5PlatformAdditionalContentModel& operator=(PS5PlatformAdditionalContentModel&& o) noexcept = default;
  constexpr PS5PlatformAdditionalContentModel& operator=(PS5PlatformAdditionalContentModel const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::PS5LevelProductsModelSO __declspec(property(get=__get__ps5LevelProductsModel, put=__set__ps5LevelProductsModel))  _ps5LevelProductsModel;

constexpr void __set__ps5LevelProductsModel(::GlobalNamespace::PS5LevelProductsModelSO value) ;

constexpr ::GlobalNamespace::PS5LevelProductsModelSO __get__ps5LevelProductsModel() const;


// Methods

/// @brief Method GetLevelProductsModel addr 0x221a804 size 0x8 virtual true final false
 ::GlobalNamespace::PS5LevelProductsModelSO GetLevelProductsModel() ;

// Ctor Parameters []
explicit PS5PlatformAdditionalContentModel() ;

/// @brief Method .ctor addr 0x221a80c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PS5PlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5PlatformAdditionalContentModel, "", "PS5PlatformAdditionalContentModel");
