#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamLevelProductsModelSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData;
}
// Type: ::LevelProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4632))
// CS Name: SteamLevelProductsModelSO::LevelProductData
class CORDL_TYPE ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData(____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData(____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData& operator=(____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData&& o) noexcept = default;
  constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData& operator=(____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__appId, put=__set__appId))  _appId;

constexpr void __set__appId(uint32_t value) ;

constexpr uint32_t __get__appId() const;

 ::StringW __declspec(property(get=__get__levelId, put=__set__levelId))  _levelId;

constexpr void __set__levelId(::StringW value) ;

constexpr ::StringW __get__levelId() const;


// Properties

 uint32_t __declspec(property(get=get_appId))  appId;

 ::StringW __declspec(property(get=get_levelId))  levelId;


// Methods

/// @brief Method get_appId addr 0x221a0dc size 0x8 virtual false final false
 uint32_t get_appId() ;

/// @brief Method get_levelId addr 0x221a0e4 size 0x8 virtual false final false
 ::StringW get_levelId() ;

// Ctor Parameters []
explicit ____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData() ;

/// @brief Method .ctor addr 0x221a0ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelPackProductData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4633))
// CS Name: SteamLevelProductsModelSO::LevelPackProductData
class CORDL_TYPE ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData(____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData(____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData& operator=(____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData&& o) noexcept = default;
  constexpr ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData& operator=(____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__bundleId, put=__set__bundleId))  _bundleId;

constexpr void __set__bundleId(uint32_t value) ;

constexpr uint32_t __get__bundleId() const;

 ::StringW __declspec(property(get=__get__levelPackId, put=__set__levelPackId))  _levelPackId;

constexpr void __set__levelPackId(::StringW value) ;

constexpr ::StringW __get__levelPackId() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData> __declspec(property(get=__get__levelProductsData, put=__set__levelProductsData))  _levelProductsData;

constexpr void __set__levelProductsData(::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData> __get__levelProductsData() const;


// Properties

 uint32_t __declspec(property(get=get_bundleId))  bundleId;

 ::StringW __declspec(property(get=get_levelPackId))  levelPackId;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData> __declspec(property(get=get_levelProductsData))  levelProductsData;


// Methods

/// @brief Method get_bundleId addr 0x221a0f4 size 0x8 virtual false final false
 uint32_t get_bundleId() ;

/// @brief Method get_levelPackId addr 0x221a0fc size 0x8 virtual false final false
 ::StringW get_levelPackId() ;

/// @brief Method get_levelProductsData addr 0x221a104 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData> get_levelProductsData() ;

// Ctor Parameters []
explicit ____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData() ;

/// @brief Method .ctor addr 0x221a10c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SteamLevelProductsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4634))
// CS Name: SteamLevelProductsModelSO
class CORDL_TYPE SteamLevelProductsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LevelPackProductData = ::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData;

using LevelProductData = ::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SteamLevelProductsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductsModelSO", modifiers: " const&", def_value: None }]
constexpr SteamLevelProductsModelSO(SteamLevelProductsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductsModelSO", modifiers: "&&", def_value: None }]
constexpr SteamLevelProductsModelSO(SteamLevelProductsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SteamLevelProductsModelSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SteamLevelProductsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SteamLevelProductsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SteamLevelProductsModelSO& operator=(SteamLevelProductsModelSO&& o) noexcept = default;
  constexpr SteamLevelProductsModelSO& operator=(SteamLevelProductsModelSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData> __declspec(property(get=__get__levelPackProductsData, put=__set__levelPackProductsData))  _levelPackProductsData;

constexpr void __set__levelPackProductsData(::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData> __get__levelPackProductsData() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData> __declspec(property(get=__get__levelIdToProductData, put=__set__levelIdToProductData))  _levelIdToProductData;

constexpr void __set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData> __get__levelIdToProductData() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData> __declspec(property(get=__get__levelPackIdToProductData, put=__set__levelPackIdToProductData))  _levelPackIdToProductData;

constexpr void __set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData> __get__levelPackIdToProductData() const;


// Properties

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData> __declspec(property(get=get_levelPackProductsData))  levelPackProductsData;


// Methods

/// @brief Method get_levelPackProductsData addr 0x2219d94 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData> get_levelPackProductsData() ;

/// @brief Method OnEnable addr 0x2219d9c size 0x164 virtual true final false
 void OnEnable() ;

/// @brief Method GetLevelProductData addr 0x2219f00 size 0x78 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData GetLevelProductData(::StringW levelId) ;

/// @brief Method GetLevelPackProductData addr 0x2219f78 size 0x78 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData GetLevelPackProductData(::StringW levelPackId) ;

// Ctor Parameters []
explicit SteamLevelProductsModelSO() ;

/// @brief Method .ctor addr 0x2219ff0 size 0xec virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductsModelSO, "", "SteamLevelProductsModelSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelPackProductData, "", "SteamLevelProductsModelSO/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SteamLevelProductsModelSO__LevelProductData, "", "SteamLevelProductsModelSO/LevelProductData");
