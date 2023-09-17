#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData;
}
// Type: ::LevelProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4625))
// CS Name: OculusLevelProductsModelSO::LevelProductData
class CORDL_TYPE ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData(____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData(____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData& operator=(____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData& operator=(____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__levelId, put=__set__levelId))  _levelId;

constexpr void __set__levelId(::StringW value) ;

constexpr ::StringW __get__levelId() const;

 ::StringW __declspec(property(get=__get__sku, put=__set__sku))  _sku;

constexpr void __set__sku(::StringW value) ;

constexpr ::StringW __get__sku() const;


// Properties

 ::StringW __declspec(property(get=get_sku))  sku;

 ::StringW __declspec(property(get=get_levelId))  levelId;

 ::StringW __declspec(property(get=get_assetFile))  assetFile;


// Methods

/// @brief Method get_sku addr 0x2219574 size 0x8 virtual false final false
 ::StringW get_sku() ;

/// @brief Method get_levelId addr 0x221957c size 0x8 virtual false final false
 ::StringW get_levelId() ;

/// @brief Method get_assetFile addr 0x2217688 size 0x1c virtual false final false
 ::StringW get_assetFile() ;

// Ctor Parameters []
explicit ____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData() ;

/// @brief Method .ctor addr 0x2219584 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelPackProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4626))
// CS Name: OculusLevelProductsModelSO::LevelPackProductData
class CORDL_TYPE ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData(____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData(____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData& operator=(____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData& operator=(____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__sku, put=__set__sku))  _sku;

constexpr void __set__sku(::StringW value) ;

constexpr ::StringW __get__sku() const;

 ::StringW __declspec(property(get=__get__levelPackId, put=__set__levelPackId))  _levelPackId;

constexpr void __set__levelPackId(::StringW value) ;

constexpr ::StringW __get__levelPackId() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData> __declspec(property(get=__get__levelProductsData, put=__set__levelProductsData))  _levelProductsData;

constexpr void __set__levelProductsData(::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData> __get__levelProductsData() const;


// Properties

 ::StringW __declspec(property(get=get_sku))  sku;

 ::StringW __declspec(property(get=get_levelPackId))  levelPackId;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData> __declspec(property(get=get_levelProductsData))  levelProductsData;


// Methods

/// @brief Method get_sku addr 0x221958c size 0x8 virtual false final false
 ::StringW get_sku() ;

/// @brief Method get_levelPackId addr 0x2219594 size 0x8 virtual false final false
 ::StringW get_levelPackId() ;

/// @brief Method get_levelProductsData addr 0x221959c size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData> get_levelProductsData() ;

// Ctor Parameters []
explicit ____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData() ;

/// @brief Method .ctor addr 0x22195a4 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusLevelProductsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4627))
// CS Name: OculusLevelProductsModelSO
class CORDL_TYPE OculusLevelProductsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LevelPackProductData = ::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData;

using LevelProductData = ::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OculusLevelProductsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductsModelSO", modifiers: " const&", def_value: None }]
constexpr OculusLevelProductsModelSO(OculusLevelProductsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductsModelSO", modifiers: "&&", def_value: None }]
constexpr OculusLevelProductsModelSO(OculusLevelProductsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusLevelProductsModelSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr OculusLevelProductsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusLevelProductsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusLevelProductsModelSO& operator=(OculusLevelProductsModelSO&& o) noexcept = default;
  constexpr OculusLevelProductsModelSO& operator=(OculusLevelProductsModelSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData> __declspec(property(get=__get__levelPackProductsData, put=__set__levelPackProductsData))  _levelPackProductsData;

constexpr void __set__levelPackProductsData(::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData> __get__levelPackProductsData() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData> __declspec(property(get=__get__levelIdToProductData, put=__set__levelIdToProductData))  _levelIdToProductData;

constexpr void __set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData> __get__levelIdToProductData() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData> __declspec(property(get=__get__levelPackIdToProductData, put=__set__levelPackIdToProductData))  _levelPackIdToProductData;

constexpr void __set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData> __get__levelPackIdToProductData() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get__assetFileToSku, put=__set__assetFileToSku))  _assetFileToSku;

constexpr void __set__assetFileToSku(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get__assetFileToSku() const;


// Properties

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData> __declspec(property(get=get_levelPackProductsData))  levelPackProductsData;


// Methods

/// @brief Method get_levelPackProductsData addr 0x2219170 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData> get_levelPackProductsData() ;

/// @brief Method OnEnable addr 0x2219178 size 0x1dc virtual true final false
 void OnEnable() ;

/// @brief Method GetLevelProductData addr 0x2217610 size 0x78 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData GetLevelProductData(::StringW levelId) ;

/// @brief Method GetLevelPackProductData addr 0x2219354 size 0x78 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData GetLevelPackProductData(::StringW levelPackId) ;

/// @brief Method GetLevelSku addr 0x22193cc size 0x78 virtual false final false
 ::StringW GetLevelSku(::StringW assetFile) ;

// Ctor Parameters []
explicit OculusLevelProductsModelSO() ;

/// @brief Method .ctor addr 0x2219444 size 0x130 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductsModelSO, "", "OculusLevelProductsModelSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelPackProductData, "", "OculusLevelProductsModelSO/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusLevelProductsModelSO__LevelProductData, "", "OculusLevelProductsModelSO/LevelProductData");
