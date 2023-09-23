#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData;
}
namespace GlobalNamespace {
class GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData;
}
namespace GlobalNamespace {
class GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair;
}
namespace GlobalNamespace {
class SonyLevelPacksSKUModel;
}
// Type: ::PricePerBundlePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4673))
// CS Name: SonyLevelPacksSKUModel::PricePerBundlePair
class CORDL_TYPE GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair(GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair(GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair& operator=(GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair&& o) noexcept = default;
  constexpr GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair& operator=(GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__pricePerBundle, put=__set__pricePerBundle))  _pricePerBundle;

constexpr void __set__pricePerBundle(float_t value) ;

constexpr float_t __get__pricePerBundle() const;

 int32_t __declspec(property(get=__get__levelsCount, put=__set__levelsCount))  _levelsCount;

constexpr void __set__levelsCount(int32_t value) ;

constexpr int32_t __get__levelsCount() const;


// Properties

 float_t __declspec(property(get=get_pricePerBundle))  pricePerBundle;

 int32_t __declspec(property(get=get_levelsCount))  levelsCount;


// Methods

/// @brief Method get_pricePerBundle addr 0x221bdbc size 0x8 virtual false final false
 float_t get_pricePerBundle() ;

/// @brief Method get_levelsCount addr 0x221bdc4 size 0x8 virtual false final false
 int32_t get_levelsCount() ;

// Ctor Parameters []
explicit GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair() ;

/// @brief Method .ctor addr 0x221bdcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4674))
// CS Name: SonyLevelPacksSKUModel::LevelProductData
class CORDL_TYPE GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData(GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData(GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData& operator=(GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData&& o) noexcept = default;
  constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData& operator=(GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__levelIndex, put=__set__levelIndex))  _levelIndex;

constexpr void __set__levelIndex(int32_t value) ;

constexpr int32_t __get__levelIndex() const;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get__level, put=__set__level))  _level;

constexpr void __set__level(GlobalNamespace::BeatmapLevelSO value) ;

constexpr GlobalNamespace::BeatmapLevelSO __get__level() const;


// Properties

 int32_t __declspec(property(get=get_levelIndex))  levelIndex;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=get_level))  level;


// Methods

/// @brief Method get_levelIndex addr 0x221bdd4 size 0x8 virtual false final false
 int32_t get_levelIndex() ;

/// @brief Method get_level addr 0x221bddc size 0x8 virtual false final false
 GlobalNamespace::BeatmapLevelSO get_level() ;

// Ctor Parameters []
explicit GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData() ;

/// @brief Method .ctor addr 0x221bde4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelPackProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4675))
// CS Name: SonyLevelPacksSKUModel::LevelPackProductData
class CORDL_TYPE GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData(GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData(GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData& operator=(GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData&& o) noexcept = default;
  constexpr GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData& operator=(GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__packIndex, put=__set__packIndex))  _packIndex;

constexpr void __set__packIndex(int32_t value) ;

constexpr int32_t __get__packIndex() const;

 GlobalNamespace::BeatmapLevelPackSO __declspec(property(get=__get__levelPack, put=__set__levelPack))  _levelPack;

constexpr void __set__levelPack(GlobalNamespace::BeatmapLevelPackSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackSO __get__levelPack() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData> __declspec(property(get=__get__levelProductsData, put=__set__levelProductsData))  _levelProductsData;

constexpr void __set__levelProductsData(::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData> __get__levelProductsData() const;


// Properties

 int32_t __declspec(property(get=get_packIndex))  packIndex;

 GlobalNamespace::BeatmapLevelPackSO __declspec(property(get=get_levelPack))  levelPack;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData> __declspec(property(get=get_levelProductsData))  levelProductsData;


// Methods

/// @brief Method get_packIndex addr 0x221bdec size 0x8 virtual false final false
 int32_t get_packIndex() ;

/// @brief Method get_levelPack addr 0x221bdf4 size 0x8 virtual false final false
 GlobalNamespace::BeatmapLevelPackSO get_levelPack() ;

/// @brief Method get_levelProductsData addr 0x221bdfc size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData> get_levelProductsData() ;

// Ctor Parameters []
explicit GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData() ;

/// @brief Method .ctor addr 0x221be04 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SonyLevelPacksSKUModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4676))
// CS Name: SonyLevelPacksSKUModel
class CORDL_TYPE SonyLevelPacksSKUModel : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LevelPackProductData = GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData;

using LevelProductData = GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData;

using PricePerBundlePair = GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SonyLevelPacksSKUModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyLevelPacksSKUModel", modifiers: " const&", def_value: None }]
constexpr SonyLevelPacksSKUModel(SonyLevelPacksSKUModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyLevelPacksSKUModel", modifiers: "&&", def_value: None }]
constexpr SonyLevelPacksSKUModel(SonyLevelPacksSKUModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyLevelPacksSKUModel(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SonyLevelPacksSKUModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyLevelPacksSKUModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyLevelPacksSKUModel& operator=(SonyLevelPacksSKUModel&& o) noexcept = default;
  constexpr SonyLevelPacksSKUModel& operator=(SonyLevelPacksSKUModel const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__pricePerLevel, put=__set__pricePerLevel))  _pricePerLevel;

constexpr void __set__pricePerLevel(float_t value) ;

constexpr float_t __get__pricePerLevel() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair> __declspec(property(get=__get__pricePairBundlePairs, put=__set__pricePairBundlePairs))  _pricePairBundlePairs;

constexpr void __set__pricePairBundlePairs(::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair> __get__pricePairBundlePairs() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData> __declspec(property(get=__get__levelPackProductsData, put=__set__levelPackProductsData))  _levelPackProductsData;

constexpr void __set__levelPackProductsData(::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData> __get__levelPackProductsData() const;


// Properties

 float_t __declspec(property(get=get_pricePerLevel))  pricePerLevel;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair> __declspec(property(get=get_pricePairBundlePairs))  pricePairBundlePairs;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData> __declspec(property(get=get_levelPackProductsData))  levelPackProductsData;


// Methods

/// @brief Method get_pricePerLevel addr 0x221bc3c size 0x8 virtual false final false
 float_t get_pricePerLevel() ;

/// @brief Method get_pricePairBundlePairs addr 0x221bc44 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair> get_pricePairBundlePairs() ;

/// @brief Method get_levelPackProductsData addr 0x221bc4c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData> get_levelPackProductsData() ;

/// @brief Method GetLevelPackProductData addr 0x221bc54 size 0x88 virtual false final false
 GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData GetLevelPackProductData(::StringW levelPackID) ;

/// @brief Method GetPricePerBundlePair addr 0x221bcdc size 0x50 virtual false final false
 GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair GetPricePerBundlePair(int32_t levelsCount) ;

// Ctor Parameters []
explicit SonyLevelPacksSKUModel() ;

/// @brief Method .ctor addr 0x221bd2c size 0x90 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelPackProductData, "", "SonyLevelPacksSKUModel/LevelPackProductData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__LevelProductData, "", "SonyLevelPacksSKUModel/LevelProductData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SonyLevelPacksSKUModel__PricePerBundlePair, "", "SonyLevelPacksSKUModel/PricePerBundlePair");
NEED_NO_BOX(GlobalNamespace::SonyLevelPacksSKUModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyLevelPacksSKUModel, "", "SonyLevelPacksSKUModel");
