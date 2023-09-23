#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class GlobalNamespace__SonyLevelProductsModelSO__LevelProductData;
}
namespace GlobalNamespace {
class SonyLevelProductsModelSO;
}
// Type: ::LevelProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4677))
// CS Name: SonyLevelProductsModelSO::LevelProductData
class CORDL_TYPE GlobalNamespace__SonyLevelProductsModelSO__LevelProductData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__SonyLevelProductsModelSO__LevelProductData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelProductsModelSO__LevelProductData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelProductData(GlobalNamespace__SonyLevelProductsModelSO__LevelProductData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelProductsModelSO__LevelProductData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelProductData(GlobalNamespace__SonyLevelProductsModelSO__LevelProductData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SonyLevelProductsModelSO__LevelProductData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelProductData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelProductData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelProductData& operator=(GlobalNamespace__SonyLevelProductsModelSO__LevelProductData&& o) noexcept = default;
  constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelProductData& operator=(GlobalNamespace__SonyLevelProductsModelSO__LevelProductData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__entitlementLabel, put=__set__entitlementLabel))  _entitlementLabel;

constexpr void __set__entitlementLabel(::StringW value) ;

constexpr ::StringW __get__entitlementLabel() const;

 ::StringW __declspec(property(get=__get__productLabel, put=__set__productLabel))  _productLabel;

constexpr void __set__productLabel(::StringW value) ;

constexpr ::StringW __get__productLabel() const;

 ::StringW __declspec(property(get=__get__levelId, put=__set__levelId))  _levelId;

constexpr void __set__levelId(::StringW value) ;

constexpr ::StringW __get__levelId() const;


// Properties

 ::StringW __declspec(property(get=get_entitlementLabel))  entitlementLabel;

 ::StringW __declspec(property(get=get_productLabel))  productLabel;

 ::StringW __declspec(property(get=get_levelId))  levelId;


// Methods

/// @brief Method get_entitlementLabel addr 0x221c0c0 size 0x8 virtual false final false
 ::StringW get_entitlementLabel() ;

/// @brief Method get_productLabel addr 0x221c0c8 size 0x8 virtual false final false
 ::StringW get_productLabel() ;

/// @brief Method get_levelId addr 0x221c0d0 size 0x8 virtual false final false
 ::StringW get_levelId() ;

// Ctor Parameters [CppParam { name: "entitlementLabel", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "productLabel", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }]
explicit GlobalNamespace__SonyLevelProductsModelSO__LevelProductData(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId) ;

/// @brief Method .ctor addr 0x221c0d8 size 0x3c virtual false final false
 void _ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelPackProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4678))
// CS Name: SonyLevelProductsModelSO::LevelPackProductData
class CORDL_TYPE GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IComparable_1<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData>
constexpr operator  System::IComparable_1<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData(GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData(GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData& operator=(GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData&& o) noexcept = default;
  constexpr GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData& operator=(GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__productLabel, put=__set__productLabel))  _productLabel;

constexpr void __set__productLabel(::StringW value) ;

constexpr ::StringW __get__productLabel() const;

 ::StringW __declspec(property(get=__get__packId, put=__set__packId))  _packId;

constexpr void __set__packId(::StringW value) ;

constexpr ::StringW __get__packId() const;

 float_t __declspec(property(get=__get__packLevelPriceDiscountMul, put=__set__packLevelPriceDiscountMul))  _packLevelPriceDiscountMul;

constexpr void __set__packLevelPriceDiscountMul(float_t value) ;

constexpr float_t __get__packLevelPriceDiscountMul() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> __declspec(property(get=__get__levelProductsData, put=__set__levelProductsData))  _levelProductsData;

constexpr void __set__levelProductsData(::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> __get__levelProductsData() const;

 int32_t __declspec(property(get=__get__packIndex, put=__set__packIndex))  _packIndex;

constexpr void __set__packIndex(int32_t value) ;

constexpr int32_t __get__packIndex() const;


// Properties

 ::StringW __declspec(property(get=get_productLabel))  productLabel;

 ::StringW __declspec(property(get=get_levelPackId))  levelPackId;

 float_t __declspec(property(get=get_packLevelPriceDiscountMul))  packLevelPriceDiscountMul;

 int32_t __declspec(property(get=get_packIndex))  packIndex;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> __declspec(property(get=get_levelProductsData))  levelProductsData;


// Methods

/// @brief Method get_productLabel addr 0x221c114 size 0x8 virtual false final false
 ::StringW get_productLabel() ;

/// @brief Method get_levelPackId addr 0x221c11c size 0x8 virtual false final false
 ::StringW get_levelPackId() ;

/// @brief Method get_packLevelPriceDiscountMul addr 0x221c124 size 0x8 virtual false final false
 float_t get_packLevelPriceDiscountMul() ;

/// @brief Method get_packIndex addr 0x221c12c size 0x8 virtual false final false
 int32_t get_packIndex() ;

/// @brief Method get_levelProductsData addr 0x221c134 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> get_levelProductsData() ;

// Ctor Parameters [CppParam { name: "productLabel", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "packLevelPriceDiscountMul", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "levelProductsData", ty: "::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData>", modifiers: "", def_value: None }, CppParam { name: "packIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul, ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> levelProductsData, int32_t packIndex) ;

/// @brief Method .ctor addr 0x221c13c size 0x98 virtual false final false
 void _ctor(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul, ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> levelProductsData, int32_t packIndex) ;

/// @brief Method CompareTo addr 0x221c1d4 size 0x20 virtual true final true
 int32_t CompareTo(GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SonyLevelProductsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4679))
// CS Name: SonyLevelProductsModelSO
class CORDL_TYPE SonyLevelProductsModelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LevelPackProductData = GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData;

using LevelProductData = GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SonyLevelProductsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductsModelSO", modifiers: " const&", def_value: None }]
constexpr SonyLevelProductsModelSO(SonyLevelProductsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductsModelSO", modifiers: "&&", def_value: None }]
constexpr SonyLevelProductsModelSO(SonyLevelProductsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyLevelProductsModelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SonyLevelProductsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyLevelProductsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyLevelProductsModelSO& operator=(SonyLevelProductsModelSO&& o) noexcept = default;
  constexpr SonyLevelProductsModelSO& operator=(SonyLevelProductsModelSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData> __declspec(property(get=__get__levelPackProductsData, put=__set__levelPackProductsData))  _levelPackProductsData;

constexpr void __set__levelPackProductsData(::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData> __get__levelPackProductsData() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> __declspec(property(get=__get__levelIdToProductData, put=__set__levelIdToProductData))  _levelIdToProductData;

constexpr void __set__levelIdToProductData(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData> __get__levelIdToProductData() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData> __declspec(property(get=__get__levelPackIdToProductData, put=__set__levelPackIdToProductData))  _levelPackIdToProductData;

constexpr void __set__levelPackIdToProductData(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData> __get__levelPackIdToProductData() const;


// Properties

 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData> __declspec(property(get=get_levelPackProductsData))  levelPackProductsData;


// Methods

/// @brief Method get_levelPackProductsData addr 0x221be5c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData> get_levelPackProductsData() ;

/// @brief Method OnEnable addr 0x221be64 size 0x164 virtual true final false
 void OnEnable() ;

/// @brief Method SetLevelPackProductsData addr 0x221bfc8 size 0x8 virtual false final false
 void SetLevelPackProductsData(::ArrayW<GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData> levelPackProductsData) ;

/// @brief Method GetLevelProductData addr 0x221bfd0 size 0x78 virtual false final false
 GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData GetLevelProductData(::StringW levelId) ;

/// @brief Method GetLevelPackProductData addr 0x221c048 size 0x78 virtual false final false
 GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData GetLevelPackProductData(::StringW levelPackId) ;

// Ctor Parameters []
explicit SonyLevelProductsModelSO() ;

/// @brief Method .ctor addr 0x221a4dc size 0xec virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelPackProductData, "", "SonyLevelProductsModelSO/LevelPackProductData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SonyLevelProductsModelSO__LevelProductData, "", "SonyLevelProductsModelSO/LevelProductData");
NEED_NO_BOX(GlobalNamespace::SonyLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyLevelProductsModelSO, "", "SonyLevelProductsModelSO");
