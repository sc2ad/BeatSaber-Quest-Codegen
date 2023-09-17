#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapLevelsPromoDataSO____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5910))
// CS Name: BeatmapLevelsPromoDataSO::<>c
class CORDL_TYPE ____GlobalNamespace__BeatmapLevelsPromoDataSO____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapLevelsPromoDataSO____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapLevelsPromoDataSO____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapLevelsPromoDataSO____c(____GlobalNamespace__BeatmapLevelsPromoDataSO____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapLevelsPromoDataSO____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapLevelsPromoDataSO____c(____GlobalNamespace__BeatmapLevelsPromoDataSO____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapLevelsPromoDataSO____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapLevelsPromoDataSO____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapLevelsPromoDataSO____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapLevelsPromoDataSO____c& operator=(____GlobalNamespace__BeatmapLevelsPromoDataSO____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapLevelsPromoDataSO____c& operator=(____GlobalNamespace__BeatmapLevelsPromoDataSO____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsPromoDataSO____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsPromoDataSO____c value) ;

static ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsPromoDataSO____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> value) ;

static ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> __get___9__8_0() ;

static ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> __declspec(property(get=__get___9__9_0, put=__set___9__9_0))  __9__9_0;

static void __set___9__9_0(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> value) ;

static ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO,::StringW> __get___9__9_0() ;

static ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO,::StringW> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO,::StringW> value) ;

static ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO,::StringW> __get___9__10_0() ;

static ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO,::StringW> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO,::StringW> value) ;

static ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelSO,::StringW> __get___9__11_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapLevelsPromoDataSO____c() ;

/// @brief Method .ctor addr 0x2191710 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <IsBeatmapLevelPackPromoted>b__8_0 addr 0x2191718 size 0x18 virtual false final false
 ::StringW _IsBeatmapLevelPackPromoted_b__8_0(::GlobalNamespace::PreviewBeatmapLevelPackSO pack) ;

/// @brief Method <IsBeatmapLevelPackUpdated>b__9_0 addr 0x2191730 size 0x18 virtual false final false
 ::StringW _IsBeatmapLevelPackUpdated_b__9_0(::GlobalNamespace::PreviewBeatmapLevelPackSO pack) ;

/// @brief Method <IsBeatmapLevelPromoted>b__10_0 addr 0x2191748 size 0x18 virtual false final false
 ::StringW _IsBeatmapLevelPromoted_b__10_0(::GlobalNamespace::PreviewBeatmapLevelSO level) ;

/// @brief Method <IsBeatmapLevelUpdated>b__11_0 addr 0x2191760 size 0x18 virtual false final false
 ::StringW _IsBeatmapLevelUpdated_b__11_0(::GlobalNamespace::PreviewBeatmapLevelSO level) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelsPromoDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5911))
// CS Name: BeatmapLevelsPromoDataSO
class CORDL_TYPE BeatmapLevelsPromoDataSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsPromoDataSO____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~BeatmapLevelsPromoDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelsPromoDataSO(BeatmapLevelsPromoDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelsPromoDataSO(BeatmapLevelsPromoDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelsPromoDataSO(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr BeatmapLevelsPromoDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelsPromoDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelsPromoDataSO& operator=(BeatmapLevelsPromoDataSO&& o) noexcept = default;
  constexpr BeatmapLevelsPromoDataSO& operator=(BeatmapLevelsPromoDataSO const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO> __declspec(property(get=__get__promotedBeatmapLevelPacks, put=__set__promotedBeatmapLevelPacks))  _promotedBeatmapLevelPacks;

constexpr void __set__promotedBeatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO> __get__promotedBeatmapLevelPacks() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO> __declspec(property(get=__get__updatedBeatmapLevelPacks, put=__set__updatedBeatmapLevelPacks))  _updatedBeatmapLevelPacks;

constexpr void __set__updatedBeatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO> __get__updatedBeatmapLevelPacks() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO> __declspec(property(get=__get__promotedBeatmapLevels, put=__set__promotedBeatmapLevels))  _promotedBeatmapLevels;

constexpr void __set__promotedBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO> __get__promotedBeatmapLevels() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO> __declspec(property(get=__get__updatedBeatmapLevels, put=__set__updatedBeatmapLevels))  _updatedBeatmapLevels;

constexpr void __set__updatedBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelSO> __get__updatedBeatmapLevels() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__promotedBeatmapLevelPacksSet, put=__set__promotedBeatmapLevelPacksSet))  _promotedBeatmapLevelPacksSet;

constexpr void __set__promotedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__promotedBeatmapLevelPacksSet() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__updatedBeatmapLevelPacksSet, put=__set__updatedBeatmapLevelPacksSet))  _updatedBeatmapLevelPacksSet;

constexpr void __set__updatedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__updatedBeatmapLevelPacksSet() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__promotedBeatmapLevelsSet, put=__set__promotedBeatmapLevelsSet))  _promotedBeatmapLevelsSet;

constexpr void __set__promotedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__promotedBeatmapLevelsSet() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__updatedBeatmapLevelsSet, put=__set__updatedBeatmapLevelsSet))  _updatedBeatmapLevelsSet;

constexpr void __set__updatedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__updatedBeatmapLevelsSet() const;


// Methods

/// @brief Method IsBeatmapLevelPackPromoted addr 0x21912b4 size 0x1f8 virtual false final false
 bool IsBeatmapLevelPackPromoted(::GlobalNamespace::IBeatmapLevelPack beatmapLevelPack) ;

/// @brief Method IsBeatmapLevelPackUpdated addr 0x21914ac size 0x1f8 virtual false final false
 bool IsBeatmapLevelPackUpdated(::GlobalNamespace::IBeatmapLevelPack beatmapLevelPack) ;

/// @brief Method IsBeatmapLevelPromoted addr 0x218ad54 size 0x1f8 virtual false final false
 bool IsBeatmapLevelPromoted(::GlobalNamespace::IPreviewBeatmapLevel beatmapLevel) ;

/// @brief Method IsBeatmapLevelUpdated addr 0x218af4c size 0x1f8 virtual false final false
 bool IsBeatmapLevelUpdated(::GlobalNamespace::IPreviewBeatmapLevel beatmapLevel) ;

// Ctor Parameters []
explicit BeatmapLevelsPromoDataSO() ;

/// @brief Method .ctor addr 0x21916a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsPromoDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsPromoDataSO, "", "BeatmapLevelsPromoDataSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsPromoDataSO____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapLevelsPromoDataSO____c, "", "BeatmapLevelsPromoDataSO/<>c");
