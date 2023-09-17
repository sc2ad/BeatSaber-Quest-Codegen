#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
// Type: ::BeatmapCharacteristicCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4267))
// CS Name: BeatmapCharacteristicCollection
class CORDL_TYPE BeatmapCharacteristicCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapCharacteristicCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollection", modifiers: " const&", def_value: None }]
constexpr BeatmapCharacteristicCollection(BeatmapCharacteristicCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollection", modifiers: "&&", def_value: None }]
constexpr BeatmapCharacteristicCollection(BeatmapCharacteristicCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCharacteristicCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapCharacteristicCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCharacteristicCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCharacteristicCollection& operator=(BeatmapCharacteristicCollection&& o) noexcept = default;
  constexpr BeatmapCharacteristicCollection& operator=(BeatmapCharacteristicCollection const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get__beatmapCharacteristicsBySerializedName, put=__set__beatmapCharacteristicsBySerializedName))  _beatmapCharacteristicsBySerializedName;

constexpr void __set__beatmapCharacteristicsBySerializedName(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapCharacteristicSO> __get__beatmapCharacteristicsBySerializedName() const;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get_beatmapCharacteristics, put=__set_beatmapCharacteristics))  beatmapCharacteristics;

constexpr void __set_beatmapCharacteristics(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO> __get_beatmapCharacteristics() const;


// Methods

// Ctor Parameters [CppParam { name: "collection", ty: "::GlobalNamespace::BeatmapCharacteristicCollectionSO", modifiers: "", def_value: None }, CppParam { name: "appSettings", ty: "::GlobalNamespace::AppStaticSettingsSO", modifiers: "", def_value: None }]
explicit BeatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollectionSO collection, ::GlobalNamespace::AppStaticSettingsSO appSettings) ;

/// @brief Method .ctor addr 0x21c9274 size 0x464 virtual false final false
 void _ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO collection, ::GlobalNamespace::AppStaticSettingsSO appSettings) ;

/// @brief Method GetBeatmapCharacteristicBySerializedName addr 0x21bc51c size 0x90 virtual false final false
 ::GlobalNamespace::BeatmapCharacteristicSO GetBeatmapCharacteristicBySerializedName(::StringW serializedName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicCollection, "", "BeatmapCharacteristicCollection");
