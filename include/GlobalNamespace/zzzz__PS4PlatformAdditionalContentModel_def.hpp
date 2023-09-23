#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
namespace GlobalNamespace {
class PS4LevelProductsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4PlatformAdditionalContentModel;
}
// Type: ::PS4PlatformAdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4638)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4688), inst: 4826 }), TypeDefinitionIndex(TypeDefinitionIndex(4688))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4640))
// CS Name: PS4PlatformAdditionalContentModel
class CORDL_TYPE PS4PlatformAdditionalContentModel : public GlobalNamespace::SonyPlatformAdditionalContentModel_1<GlobalNamespace::PS4LevelProductsModelSO> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PS4PlatformAdditionalContentModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4PlatformAdditionalContentModel", modifiers: " const&", def_value: None }]
constexpr PS4PlatformAdditionalContentModel(PS4PlatformAdditionalContentModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4PlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
constexpr PS4PlatformAdditionalContentModel(PS4PlatformAdditionalContentModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4PlatformAdditionalContentModel(void* ptr) noexcept : GlobalNamespace::SonyPlatformAdditionalContentModel_1<GlobalNamespace::PS4LevelProductsModelSO>(ptr) {
}


  constexpr PS4PlatformAdditionalContentModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4PlatformAdditionalContentModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4PlatformAdditionalContentModel& operator=(PS4PlatformAdditionalContentModel&& o) noexcept = default;
  constexpr PS4PlatformAdditionalContentModel& operator=(PS4PlatformAdditionalContentModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PS4LevelProductsModelSO __declspec(property(get=__get__ps4LevelProductsModel, put=__set__ps4LevelProductsModel))  _ps4LevelProductsModel;

constexpr void __set__ps4LevelProductsModel(GlobalNamespace::PS4LevelProductsModelSO value) ;

constexpr GlobalNamespace::PS4LevelProductsModelSO __get__ps4LevelProductsModel() const;


// Methods

/// @brief Method GetLevelProductsModel addr 0x221a6f4 size 0x8 virtual true final false
 GlobalNamespace::PS4LevelProductsModelSO GetLevelProductsModel() ;

// Ctor Parameters []
explicit PS4PlatformAdditionalContentModel() ;

/// @brief Method .ctor addr 0x221a6fc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS4PlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4PlatformAdditionalContentModel, "", "PS4PlatformAdditionalContentModel");
