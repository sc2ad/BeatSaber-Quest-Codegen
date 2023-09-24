#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct GlobalNamespace__SongPackMaskModelSO__SongPackDataType;
}
namespace GlobalNamespace {
class GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Polyglot {
struct Language;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SongPackMaskModelSO__SongPackDataType;
}
namespace GlobalNamespace {
class GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem;
}
namespace GlobalNamespace {
class GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c;
}
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
// Type: ::SongPackDataType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4526))
// CS Name: SongPackMaskModelSO::SongPackDataType
struct CORDL_TYPE GlobalNamespace__SongPackMaskModelSO__SongPackDataType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SongPackMaskModelSO__SongPackDataType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SongPackMaskModelSO__SongPackDataType(GlobalNamespace__SongPackMaskModelSO__SongPackDataType const&) = default;
                    constexpr GlobalNamespace__SongPackMaskModelSO__SongPackDataType(GlobalNamespace__SongPackMaskModelSO__SongPackDataType&&) = default;
                    constexpr GlobalNamespace__SongPackMaskModelSO__SongPackDataType& operator=(GlobalNamespace__SongPackMaskModelSO__SongPackDataType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SongPackMaskModelSO__SongPackDataType& operator=(GlobalNamespace__SongPackMaskModelSO__SongPackDataType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SongPackMaskModelSO__SongPackDataType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SongPackMaskModelSO__SongPackDataType_Unwrapped : int32_t {
__SingleBeatmapLevelPack = 0,
__MultipleBeatmapLevelPacks = 1,
__SinglePreviewBeatmapLevelPack = 2,
__MultiplePreviewBeatmapLevelPacks = 3,
__SingleBeatmapLevelPackCollection = 4,
__MultipleBeatmapLevelPackCollections = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SongPackMaskModelSO__SongPackDataType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SongPackMaskModelSO__SongPackDataType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SingleBeatmapLevelPack offset 0
static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType const SingleBeatmapLevelPack;

/// @brief Field MultipleBeatmapLevelPacks offset 0
static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType const MultipleBeatmapLevelPacks;

/// @brief Field SinglePreviewBeatmapLevelPack offset 0
static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType const SinglePreviewBeatmapLevelPack;

/// @brief Field MultiplePreviewBeatmapLevelPacks offset 0
static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType const MultiplePreviewBeatmapLevelPacks;

/// @brief Field SingleBeatmapLevelPackCollection offset 0
static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType const SingleBeatmapLevelPackCollection;

/// @brief Field MultipleBeatmapLevelPackCollections offset 0
static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType const MultipleBeatmapLevelPackCollections;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4527))
// CS Name: SongPackMaskModelSO::SongPackMaskItem::<>c
class CORDL_TYPE GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c(GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c(GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c& operator=(GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c&& o) noexcept = default;
  constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c& operator=(GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c value) ;

static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c __get___9() ;

static System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> value) ;

static System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> __get___9__11_0() ;

static System::Func_2<GlobalNamespace::BeatmapLevelPackSO,::StringW> __declspec(property(get=__get___9__11_1, put=__set___9__11_1))  __9__11_1;

static void __set___9__11_1(System::Func_2<GlobalNamespace::BeatmapLevelPackSO,::StringW> value) ;

static System::Func_2<GlobalNamespace::BeatmapLevelPackSO,::StringW> __get___9__11_1() ;

static System::Func_2<GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> __declspec(property(get=__get___9__11_2, put=__set___9__11_2))  __9__11_2;

static void __set___9__11_2(System::Func_2<GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> value) ;

static System::Func_2<GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> __get___9__11_2() ;

static System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> __declspec(property(get=__get___9__11_4, put=__set___9__11_4))  __9__11_4;

static void __set___9__11_4(System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> value) ;

static System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> __get___9__11_4() ;

static System::Func_2<GlobalNamespace::BeatmapLevelPackCollectionSO,System::Collections::Generic::IEnumerable_1<::StringW>> __declspec(property(get=__get___9__11_3, put=__set___9__11_3))  __9__11_3;

static void __set___9__11_3(System::Func_2<GlobalNamespace::BeatmapLevelPackCollectionSO,System::Collections::Generic::IEnumerable_1<::StringW>> value) ;

static System::Func_2<GlobalNamespace::BeatmapLevelPackCollectionSO,System::Collections::Generic::IEnumerable_1<::StringW>> __get___9__11_3() ;


// Methods

static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c New_ctor() ;

/// @brief Method .ctor addr 0x2201574 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_songPackMask>b__11_0 addr 0x220157c size 0x9c virtual false final false
 ::StringW _get_songPackMask_b__11_0(GlobalNamespace::IBeatmapLevelPack pack) ;

/// @brief Method <get_songPackMask>b__11_1 addr 0x2201618 size 0x18 virtual false final false
 ::StringW _get_songPackMask_b__11_1(GlobalNamespace::BeatmapLevelPackSO pack) ;

/// @brief Method <get_songPackMask>b__11_2 addr 0x2201630 size 0x18 virtual false final false
 ::StringW _get_songPackMask_b__11_2(GlobalNamespace::PreviewBeatmapLevelPackSO pack) ;

/// @brief Method <get_songPackMask>b__11_3 addr 0x2201648 size 0x114 virtual false final false
 System::Collections::Generic::IEnumerable_1<::StringW> _get_songPackMask_b__11_3(GlobalNamespace::BeatmapLevelPackCollectionSO collection) ;

/// @brief Method <get_songPackMask>b__11_4 addr 0x220175c size 0x9c virtual false final false
 ::StringW _get_songPackMask_b__11_4(GlobalNamespace::IBeatmapLevelPack pack) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SongPackMaskItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4528))
// CS Name: SongPackMaskModelSO::SongPackMaskItem
class CORDL_TYPE GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem(GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem(GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem& operator=(GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem&& o) noexcept = default;
  constexpr GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem& operator=(GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType value) ;

constexpr GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType __get__type() const;

 GlobalNamespace::BeatmapLevelPackSO __declspec(property(get=__get__beatmapLevelPack, put=__set__beatmapLevelPack))  _beatmapLevelPack;

constexpr void __set__beatmapLevelPack(GlobalNamespace::BeatmapLevelPackSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackSO __get__beatmapLevelPack() const;

 GlobalNamespace::PreviewBeatmapLevelPackSO __declspec(property(get=__get__previewBeatmapLevelPack, put=__set__previewBeatmapLevelPack))  _previewBeatmapLevelPack;

constexpr void __set__previewBeatmapLevelPack(GlobalNamespace::PreviewBeatmapLevelPackSO value) ;

constexpr GlobalNamespace::PreviewBeatmapLevelPackSO __get__previewBeatmapLevelPack() const;

 ::StringW __declspec(property(get=__get__serializedName, put=__set__serializedName))  _serializedName;

constexpr void __set__serializedName(::StringW value) ;

constexpr ::StringW __get__serializedName() const;

 GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=__get__levelPackCollection, put=__set__levelPackCollection))  _levelPackCollection;

constexpr void __set__levelPackCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackCollectionSO __get__levelPackCollection() const;

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO> __declspec(property(get=__get__beatmapLevelPacks, put=__set__beatmapLevelPacks))  _beatmapLevelPacks;

constexpr void __set__beatmapLevelPacks(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO> __get__beatmapLevelPacks() const;

 System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO> __declspec(property(get=__get__previewBeatmapLevelPacks, put=__set__previewBeatmapLevelPacks))  _previewBeatmapLevelPacks;

constexpr void __set__previewBeatmapLevelPacks(System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO> __get__previewBeatmapLevelPacks() const;

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO> __declspec(property(get=__get__levelPackCollections, put=__set__levelPackCollections))  _levelPackCollections;

constexpr void __set__levelPackCollections(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO> __get__levelPackCollections() const;


// Properties

 ::StringW __declspec(property(get=get_serializedName))  serializedName;

 GlobalNamespace::SongPackMask __declspec(property(get=get_songPackMask))  songPackMask;

 bool __declspec(property(get=get_containsMultiplePacks))  containsMultiplePacks;


// Methods

/// @brief Method get_serializedName addr 0x2201104 size 0x40 virtual false final false
 ::StringW get_serializedName() ;

/// @brief Method get_songPackMask addr 0x2201144 size 0x3a0 virtual false final false
 GlobalNamespace::SongPackMask get_songPackMask() ;

/// @brief Method get_containsMultiplePacks addr 0x22014e4 size 0x1c virtual false final false
 bool get_containsMultiplePacks() ;

static GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem New_ctor() ;

/// @brief Method .ctor addr 0x2201508 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SongPackMaskModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4529))
// CS Name: SongPackMaskModelSO
class CORDL_TYPE SongPackMaskModelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using SongPackMaskItem = GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem;

using SongPackDataType = GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SongPackMaskModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMaskModelSO", modifiers: " const&", def_value: None }]
constexpr SongPackMaskModelSO(SongPackMaskModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMaskModelSO", modifiers: "&&", def_value: None }]
constexpr SongPackMaskModelSO(SongPackMaskModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongPackMaskModelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SongPackMaskModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongPackMaskModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongPackMaskModelSO& operator=(SongPackMaskModelSO&& o) noexcept = default;
  constexpr SongPackMaskModelSO& operator=(SongPackMaskModelSO const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__defaultSongPackMaskItems, put=__set__defaultSongPackMaskItems))  _defaultSongPackMaskItems;

constexpr void __set__defaultSongPackMaskItems(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__defaultSongPackMaskItems() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem> __declspec(property(get=__get__customSongPackMaskItems, put=__set__customSongPackMaskItems))  _customSongPackMaskItems;

constexpr void __set__customSongPackMaskItems(::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem> __get__customSongPackMaskItems() const;

 GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=__get__ostAndExtrasCollection, put=__set__ostAndExtrasCollection))  _ostAndExtrasCollection;

constexpr void __set__ostAndExtrasCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackCollectionSO __get__ostAndExtrasCollection() const;

 GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=__get__dlcCollection, put=__set__dlcCollection))  _dlcCollection;

constexpr void __set__dlcCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackCollectionSO __get__dlcCollection() const;

 Polyglot::Language __declspec(property(get=__get__currentLocalizedLanguage, put=__set__currentLocalizedLanguage))  _currentLocalizedLanguage;

constexpr void __set__currentLocalizedLanguage(Polyglot::Language value) ;

constexpr Polyglot::Language __get__currentLocalizedLanguage() const;

 System::Collections::Generic::Dictionary_2<::StringW,System::ValueTuple_2<::StringW,bool>> __declspec(property(get=__get__songPackSerializedNameToLocalizedNameDict, put=__set__songPackSerializedNameToLocalizedNameDict))  _songPackSerializedNameToLocalizedNameDict;

constexpr void __set__songPackSerializedNameToLocalizedNameDict(System::Collections::Generic::Dictionary_2<::StringW,System::ValueTuple_2<::StringW,bool>> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,System::ValueTuple_2<::StringW,bool>> __get__songPackSerializedNameToLocalizedNameDict() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask> __declspec(property(get=__get__songPackSerializedNameToMaskDict, put=__set__songPackSerializedNameToMaskDict))  _songPackSerializedNameToMaskDict;

constexpr void __set__songPackSerializedNameToMaskDict(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask> __get__songPackSerializedNameToMaskDict() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::SongPackMask,::StringW> __declspec(property(get=__get__songPackMaskToSerializedNameDict, put=__set__songPackMaskToSerializedNameDict))  _songPackMaskToSerializedNameDict;

constexpr void __set__songPackMaskToSerializedNameDict(System::Collections::Generic::Dictionary_2<GlobalNamespace::SongPackMask,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::SongPackMask,::StringW> __get__songPackMaskToSerializedNameDict() const;


// Properties

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_defaultSongPackMaskItems))  defaultSongPackMaskItems;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem> __declspec(property(get=get_customSongPackMaskItems))  customSongPackMaskItems;

 GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=get_ostAndExtrasCollection))  ostAndExtrasCollection;

 GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=get_dlcCollection))  dlcCollection;


// Methods

/// @brief Method get_defaultSongPackMaskItems addr 0x2200790 size 0x8 virtual false final false
 System::Collections::Generic::List_1<::StringW> get_defaultSongPackMaskItems() ;

/// @brief Method get_customSongPackMaskItems addr 0x2200798 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem> get_customSongPackMaskItems() ;

/// @brief Method get_ostAndExtrasCollection addr 0x22007a0 size 0x8 virtual false final false
 GlobalNamespace::BeatmapLevelPackCollectionSO get_ostAndExtrasCollection() ;

/// @brief Method get_dlcCollection addr 0x22007a8 size 0x8 virtual false final false
 GlobalNamespace::BeatmapLevelPackCollectionSO get_dlcCollection() ;

/// @brief Method ToLocalizedName addr 0x22007b0 size 0x18 virtual false final false
 ::StringW ToLocalizedName(::StringW serializedName) ;

/// @brief Method ToLocalizedName addr 0x22007c8 size 0xbc virtual false final false
 ::StringW ToLocalizedName(::StringW serializedName, ByRef<bool> plural) ;

/// @brief Method ToSongPackMask addr 0x2200f68 size 0x70 virtual false final false
 bool ToSongPackMask(::StringW serializedName, ByRef<GlobalNamespace::SongPackMask> songPackMask) ;

/// @brief Method ToSongPackMask addr 0x2200fd8 size 0x34 virtual false final false
 GlobalNamespace::SongPackMask ToSongPackMask(::StringW serializedName) ;

/// @brief Method ToSerializedName addr 0x220100c size 0x78 virtual false final false
 bool ToSerializedName(GlobalNamespace::SongPackMask songPackMask, ByRef<::StringW> serializedName) ;

/// @brief Method ToSerializedName addr 0x2201084 size 0x80 virtual false final false
 ::StringW ToSerializedName(GlobalNamespace::SongPackMask songPackMask) ;

/// @brief Method LazyInit addr 0x2200884 size 0x6e4 virtual false final false
 void LazyInit() ;

static GlobalNamespace::SongPackMaskModelSO New_ctor() ;

/// @brief Method .ctor addr 0x2201500 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackDataType, "", "SongPackMaskModelSO/SongPackDataType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem, "", "SongPackMaskModelSO/SongPackMaskItem");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SongPackMaskModelSO__SongPackMaskItem____c, "", "SongPackMaskModelSO/SongPackMaskItem/<>c");
NEED_NO_BOX(GlobalNamespace::SongPackMaskModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPackMaskModelSO, "", "SongPackMaskModelSO");
