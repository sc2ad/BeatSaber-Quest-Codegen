#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;
}
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;
}
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;
}
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride;
}
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;
}
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;
}
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
// Type: ::LocalizedCustomPackName
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4485))
// CS Name: QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName
class CORDL_TYPE GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName& operator=(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName&& o) noexcept = default;
  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName& operator=(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_language, put=__set_language))  language;

constexpr void __set_language(::StringW value) ;

constexpr ::StringW __get_language() const;

 ::StringW __declspec(property(get=__get_packName, put=__set_packName))  packName;

constexpr void __set_packName(::StringW value) ;

constexpr ::StringW __get_packName() const;


// Methods

static GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName New_ctor() ;

/// @brief Method .ctor addr 0x21f1ff8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalizedCustomPack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4486))
// CS Name: QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack
class CORDL_TYPE GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack& operator=(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack&& o) noexcept = default;
  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack& operator=(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_serializedName, put=__set_serializedName))  serializedName;

constexpr void __set_serializedName(::StringW value) ;

constexpr ::StringW __get_serializedName() const;

 int32_t __declspec(property(get=__get_order, put=__set_order))  order;

constexpr void __set_order(int32_t value) ;

constexpr int32_t __get_order() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName> __declspec(property(get=__get_localizedNames, put=__set_localizedNames))  localizedNames;

constexpr void __set_localizedNames(::ArrayW<GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName> __get_localizedNames() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_packIds, put=__set_packIds))  packIds;

constexpr void __set_packIds(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_packIds() const;


// Methods

static GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack New_ctor() ;

/// @brief Method .ctor addr 0x21f2000 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PredefinedPack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4487))
// CS Name: QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack
class CORDL_TYPE GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack& operator=(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack&& o) noexcept = default;
  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack& operator=(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_order, put=__set_order))  order;

constexpr void __set_order(int32_t value) ;

constexpr int32_t __get_order() const;

 ::StringW __declspec(property(get=__get_packId, put=__set_packId))  packId;

constexpr void __set_packId(::StringW value) ;

constexpr ::StringW __get_packId() const;


// Methods

static GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack New_ctor() ;

/// @brief Method .ctor addr 0x21f2080 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::QuickPlaySongPacksOverride
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4488))
// CS Name: QuickPlaySetupData::QuickPlaySongPacksOverride
class CORDL_TYPE GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PredefinedPack = GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;

using LocalizedCustomPack = GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;

using LocalizedCustomPackName = GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride& operator=(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride&& o) noexcept = default;
  constexpr GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride& operator=(GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack> __declspec(property(get=__get_predefinedPackIds, put=__set_predefinedPackIds))  predefinedPackIds;

constexpr void __set_predefinedPackIds(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack> __get_predefinedPackIds() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack> __declspec(property(get=__get_localizedCustomPacks, put=__set_localizedCustomPacks))  localizedCustomPacks;

constexpr void __set_localizedCustomPacks(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack> __get_localizedCustomPacks() const;


// Methods

static GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride New_ctor() ;

/// @brief Method .ctor addr 0x21f1f38 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::QuickPlaySetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4489))
// CS Name: QuickPlaySetupData
class CORDL_TYPE QuickPlaySetupData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using QuickPlaySongPacksOverride = GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~QuickPlaySetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupData", modifiers: " const&", def_value: None }]
constexpr QuickPlaySetupData(QuickPlaySetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupData", modifiers: "&&", def_value: None }]
constexpr QuickPlaySetupData(QuickPlaySetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuickPlaySetupData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QuickPlaySetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuickPlaySetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuickPlaySetupData& operator=(QuickPlaySetupData&& o) noexcept = default;
  constexpr QuickPlaySetupData& operator=(QuickPlaySetupData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride __declspec(property(get=__get_quickPlayAvailablePacksOverride, put=__set_quickPlayAvailablePacksOverride))  quickPlayAvailablePacksOverride;

constexpr void __set_quickPlayAvailablePacksOverride(GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride value) ;

constexpr GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride __get_quickPlayAvailablePacksOverride() const;


// Properties

 bool __declspec(property(get=get_hasOverride))  hasOverride;


// Methods

/// @brief Method get_hasOverride addr 0x21f1ea8 size 0x88 virtual false final false
 bool get_hasOverride() ;

static GlobalNamespace::QuickPlaySetupData New_ctor() ;

/// @brief Method .ctor addr 0x21f1f30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride, "", "QuickPlaySetupData/QuickPlaySongPacksOverride");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack");
NEED_NO_BOX(GlobalNamespace::QuickPlaySetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySetupData, "", "QuickPlaySetupData");
